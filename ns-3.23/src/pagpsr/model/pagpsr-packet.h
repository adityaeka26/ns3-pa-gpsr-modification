/* -*- Mode:C++; c-file-style:"gnu"; indent-tabs-mode:nil; -*- */

#ifndef PAGPSRPACKET_H
#define PAGPSRPACKET_H

#include <iostream>
#include "ns3/header.h"
#include "ns3/enum.h"
#include "ns3/ipv4-address.h"
#include <map>
#include "ns3/nstime.h"
#include "ns3/vector.h"

namespace ns3 {
namespace pagpsr {



enum MessageType
{
  PAGPSRTYPE_HELLO  = 1,         //!< PAGPSRTYPE_HELLO
  PAGPSRTYPE_POS = 2,            //!< PAGPSRTYPE_POS
};

/**
 * \ingroup pagpsr
 * \brief PAGPSR types
 */
class TypeHeader : public Header
{
public:
  /// c-tor
  TypeHeader (MessageType t);

  ///\name Header serialization/deserialization
  //\{
  static TypeId GetTypeId ();
  TypeId GetInstanceTypeId () const;
  uint32_t GetSerializedSize () const;
  void Serialize (Buffer::Iterator start) const;
  uint32_t Deserialize (Buffer::Iterator start);
  void Print (std::ostream &os) const;
  //\}

  /// Return type
  MessageType Get () const
  {
    return m_type;
  }
  /// Check that type if valid
  bool IsValid () const
  {
    return m_valid; //FIXME that way it wont work
  }
  bool operator== (TypeHeader const & o) const;
private:
  MessageType m_type;
  bool m_valid;
};

std::ostream & operator<< (std::ostream & os, TypeHeader const & h);

class HelloHeader : public Header
{
public:
  /// c-tor
  // MODIFICATION: add last position and average geometric speed
  HelloHeader (uint64_t originPosx = 0, uint64_t originPosy = 0, uint64_t lastPosx = 0, uint64_t lastPosy = 0, double avgSpeed = 0.0);

  ///\name Header serialization/deserialization
  //\{
  static TypeId GetTypeId ();
  TypeId GetInstanceTypeId () const;
  uint32_t GetSerializedSize () const;
  void Serialize (Buffer::Iterator start) const;
  uint32_t Deserialize (Buffer::Iterator start);
  void Print (std::ostream &os) const;
  //\}

  ///\name Fields
  //\{
  void SetOriginPosx (uint64_t posx)
  {
    m_originPosx = posx;
  }
  uint64_t GetOriginPosx () const
  {
    return m_originPosx;
  }
  void SetOriginPosy (uint64_t posy)
  {
    m_originPosy = posy;
  }
  uint64_t GetOriginPosy () const
  {
    return m_originPosy;
  }

  // MODIFICATION: add methods for last position and average geometric speed
  void SetLastPosx (uint64_t posx)
  {
    m_lastPosx = posx;
  }
  uint64_t GetLastPosx () const
  {
    return m_lastPosx;
  }
  void SetLastPosy (uint64_t posy)
  {
    m_lastPosy = posy;
  }
  uint64_t GetLastPosy () const
  {
    return m_lastPosy;
  }
  void SetAvgSpeed (double speed)
  {
    m_avgSpeed = speed;
  }
  double GetAvgSpeed () const
  {
    return m_avgSpeed;
  }

  //\}

  // MODIFICATION: add last position and average geometric speed
  bool operator== (HelloHeader const & o) const;
private:
  uint64_t m_originPosx;          ///< Originator Position x
  uint64_t m_originPosy;          ///< Originator Position y
  uint64_t m_lastPosx;            ///< Last Position x
  uint64_t m_lastPosy;            ///< Last Position y
  double m_avgSpeed;              ///< Average Geometric Speed
};

std::ostream & operator<< (std::ostream & os, HelloHeader const &);

class PositionHeader : public Header
{
public:
  /// c-tor
  PositionHeader (uint64_t dstPosx = 0, uint64_t dstPosy = 0, uint32_t updated = 0, uint64_t recPosx = 0, uint64_t recPosy = 0, uint8_t inRec  = 0, uint64_t lastPosx = 0, uint64_t lastPosy = 0, uint8_t forward = 0);

  ///\name Header serialization/deserialization
  //\{
  static TypeId GetTypeId ();
  TypeId GetInstanceTypeId () const;
  uint32_t GetSerializedSize () const;
  void Serialize (Buffer::Iterator start) const;
  uint32_t Deserialize (Buffer::Iterator start);
  void Print (std::ostream &os) const;
  //\}

  ///\name Fields
  //\{
  void SetDstPosx (uint64_t posx)
  {
    m_dstPosx = posx;
  }
  uint64_t GetDstPosx () const
  {
    return m_dstPosx;
  }
  void SetDstPosy (uint64_t posy)
  {
    m_dstPosy = posy;
  }
  uint64_t GetDstPosy () const
  {
    return m_dstPosy;
  }
  void SetUpdated (uint32_t updated)
  {
    m_updated = updated;
  }
  uint32_t GetUpdated () const
  {
    return m_updated;
  }
  void SetRecPosx (uint64_t posx)
  {
    m_recPosx = posx;
  }
  uint64_t GetRecPosx () const
  {
    return m_recPosx;
  }
  void SetRecPosy (uint64_t posy)
  {
    m_recPosy = posy;
  }
  uint64_t GetRecPosy () const
  {
    return m_recPosy;
  }
  void SetInRec (uint8_t rec)
  {
    m_inRec = rec;
  }
  uint8_t GetInRec () const
  {
    return m_inRec;
  }
  void SetLastPosx (uint64_t posx)
  {
    m_lastPosx = posx;
  }
  uint64_t GetLastPosx () const
  {
    return m_lastPosx;
  }
  void SetLastPosy (uint64_t posy)
  {
    m_lastPosy = posy;
  }
  uint64_t GetLastPosy () const
  {
    return m_lastPosy;
  }

 void SetForward (uint8_t str)
  {
    m_forward = str;
  }
  uint8_t GetForward () const
  {
    return m_forward;
  }


  bool operator== (PositionHeader const & o) const;
private:
  uint64_t         m_dstPosx;          ///< Destination Position x
  uint64_t         m_dstPosy;          ///< Destination Position x
  uint32_t         m_updated;          ///< Time of last update
  uint64_t         m_recPosx;          ///< x of position that entered Recovery-mode
  uint64_t         m_recPosy;          ///< y of position that entered Recovery-mode
  uint8_t          m_inRec;          ///< 1 if in Recovery-mode, 0 otherwise
  uint64_t         m_lastPosx;          ///< x of position of previous hop
  uint64_t         m_lastPosy;          ///< y of position of previous hop
  uint8_t          m_forward;          ///< forward strategy used to send

};

std::ostream & operator<< (std::ostream & os, PositionHeader const &);

}
}
#endif /* PAGPSRPACKET_H */
