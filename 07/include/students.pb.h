// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: students.proto

#ifndef PROTOBUF_INCLUDED_students_2eproto
#define PROTOBUF_INCLUDED_students_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_students_2eproto 

namespace protobuf_students_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[3];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_students_2eproto
namespace serialization {
class FullName;
class FullNameDefaultTypeInternal;
extern FullNameDefaultTypeInternal _FullName_default_instance_;
class Student;
class StudentDefaultTypeInternal;
extern StudentDefaultTypeInternal _Student_default_instance_;
class StudentsGroup;
class StudentsGroupDefaultTypeInternal;
extern StudentsGroupDefaultTypeInternal _StudentsGroup_default_instance_;
}  // namespace serialization
namespace google {
namespace protobuf {
template<> ::serialization::FullName* Arena::CreateMaybeMessage<::serialization::FullName>(Arena*);
template<> ::serialization::Student* Arena::CreateMaybeMessage<::serialization::Student>(Arena*);
template<> ::serialization::StudentsGroup* Arena::CreateMaybeMessage<::serialization::StudentsGroup>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace serialization {

// ===================================================================

class FullName : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:serialization.FullName) */ {
 public:
  FullName();
  virtual ~FullName();

  FullName(const FullName& from);

  inline FullName& operator=(const FullName& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  FullName(FullName&& from) noexcept
    : FullName() {
    *this = ::std::move(from);
  }

  inline FullName& operator=(FullName&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const FullName& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const FullName* internal_default_instance() {
    return reinterpret_cast<const FullName*>(
               &_FullName_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(FullName* other);
  friend void swap(FullName& a, FullName& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline FullName* New() const final {
    return CreateMaybeMessage<FullName>(NULL);
  }

  FullName* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<FullName>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const FullName& from);
  void MergeFrom(const FullName& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(FullName* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string surname = 1;
  void clear_surname();
  static const int kSurnameFieldNumber = 1;
  const ::std::string& surname() const;
  void set_surname(const ::std::string& value);
  #if LANG_CXX11
  void set_surname(::std::string&& value);
  #endif
  void set_surname(const char* value);
  void set_surname(const char* value, size_t size);
  ::std::string* mutable_surname();
  ::std::string* release_surname();
  void set_allocated_surname(::std::string* surname);

  // string name = 2;
  void clear_name();
  static const int kNameFieldNumber = 2;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  #if LANG_CXX11
  void set_name(::std::string&& value);
  #endif
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // string patronymic = 3;
  void clear_patronymic();
  static const int kPatronymicFieldNumber = 3;
  const ::std::string& patronymic() const;
  void set_patronymic(const ::std::string& value);
  #if LANG_CXX11
  void set_patronymic(::std::string&& value);
  #endif
  void set_patronymic(const char* value);
  void set_patronymic(const char* value, size_t size);
  ::std::string* mutable_patronymic();
  ::std::string* release_patronymic();
  void set_allocated_patronymic(::std::string* patronymic);

  // @@protoc_insertion_point(class_scope:serialization.FullName)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr surname_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::internal::ArenaStringPtr patronymic_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_students_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class Student : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:serialization.Student) */ {
 public:
  Student();
  virtual ~Student();

  Student(const Student& from);

  inline Student& operator=(const Student& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Student(Student&& from) noexcept
    : Student() {
    *this = ::std::move(from);
  }

  inline Student& operator=(Student&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Student& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Student* internal_default_instance() {
    return reinterpret_cast<const Student*>(
               &_Student_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(Student* other);
  friend void swap(Student& a, Student& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Student* New() const final {
    return CreateMaybeMessage<Student>(NULL);
  }

  Student* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Student>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Student& from);
  void MergeFrom(const Student& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Student* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated int32 grades = 2;
  int grades_size() const;
  void clear_grades();
  static const int kGradesFieldNumber = 2;
  ::google::protobuf::int32 grades(int index) const;
  void set_grades(int index, ::google::protobuf::int32 value);
  void add_grades(::google::protobuf::int32 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      grades() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_grades();

  // .serialization.FullName fullName = 1;
  bool has_fullname() const;
  void clear_fullname();
  static const int kFullNameFieldNumber = 1;
  private:
  const ::serialization::FullName& _internal_fullname() const;
  public:
  const ::serialization::FullName& fullname() const;
  ::serialization::FullName* release_fullname();
  ::serialization::FullName* mutable_fullname();
  void set_allocated_fullname(::serialization::FullName* fullname);

  // int32 averageGrade = 3;
  void clear_averagegrade();
  static const int kAverageGradeFieldNumber = 3;
  ::google::protobuf::int32 averagegrade() const;
  void set_averagegrade(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:serialization.Student)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > grades_;
  mutable int _grades_cached_byte_size_;
  ::serialization::FullName* fullname_;
  ::google::protobuf::int32 averagegrade_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_students_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class StudentsGroup : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:serialization.StudentsGroup) */ {
 public:
  StudentsGroup();
  virtual ~StudentsGroup();

  StudentsGroup(const StudentsGroup& from);

  inline StudentsGroup& operator=(const StudentsGroup& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  StudentsGroup(StudentsGroup&& from) noexcept
    : StudentsGroup() {
    *this = ::std::move(from);
  }

  inline StudentsGroup& operator=(StudentsGroup&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const StudentsGroup& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const StudentsGroup* internal_default_instance() {
    return reinterpret_cast<const StudentsGroup*>(
               &_StudentsGroup_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  void Swap(StudentsGroup* other);
  friend void swap(StudentsGroup& a, StudentsGroup& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline StudentsGroup* New() const final {
    return CreateMaybeMessage<StudentsGroup>(NULL);
  }

  StudentsGroup* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<StudentsGroup>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const StudentsGroup& from);
  void MergeFrom(const StudentsGroup& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(StudentsGroup* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .serialization.Student students = 1;
  int students_size() const;
  void clear_students();
  static const int kStudentsFieldNumber = 1;
  ::serialization::Student* mutable_students(int index);
  ::google::protobuf::RepeatedPtrField< ::serialization::Student >*
      mutable_students();
  const ::serialization::Student& students(int index) const;
  ::serialization::Student* add_students();
  const ::google::protobuf::RepeatedPtrField< ::serialization::Student >&
      students() const;

  // @@protoc_insertion_point(class_scope:serialization.StudentsGroup)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::serialization::Student > students_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_students_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// FullName

// string surname = 1;
inline void FullName::clear_surname() {
  surname_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& FullName::surname() const {
  // @@protoc_insertion_point(field_get:serialization.FullName.surname)
  return surname_.GetNoArena();
}
inline void FullName::set_surname(const ::std::string& value) {
  
  surname_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:serialization.FullName.surname)
}
#if LANG_CXX11
inline void FullName::set_surname(::std::string&& value) {
  
  surname_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:serialization.FullName.surname)
}
#endif
inline void FullName::set_surname(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  surname_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:serialization.FullName.surname)
}
inline void FullName::set_surname(const char* value, size_t size) {
  
  surname_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:serialization.FullName.surname)
}
inline ::std::string* FullName::mutable_surname() {
  
  // @@protoc_insertion_point(field_mutable:serialization.FullName.surname)
  return surname_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* FullName::release_surname() {
  // @@protoc_insertion_point(field_release:serialization.FullName.surname)
  
  return surname_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void FullName::set_allocated_surname(::std::string* surname) {
  if (surname != NULL) {
    
  } else {
    
  }
  surname_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), surname);
  // @@protoc_insertion_point(field_set_allocated:serialization.FullName.surname)
}

// string name = 2;
inline void FullName::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& FullName::name() const {
  // @@protoc_insertion_point(field_get:serialization.FullName.name)
  return name_.GetNoArena();
}
inline void FullName::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:serialization.FullName.name)
}
#if LANG_CXX11
inline void FullName::set_name(::std::string&& value) {
  
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:serialization.FullName.name)
}
#endif
inline void FullName::set_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:serialization.FullName.name)
}
inline void FullName::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:serialization.FullName.name)
}
inline ::std::string* FullName::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:serialization.FullName.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* FullName::release_name() {
  // @@protoc_insertion_point(field_release:serialization.FullName.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void FullName::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:serialization.FullName.name)
}

// string patronymic = 3;
inline void FullName::clear_patronymic() {
  patronymic_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& FullName::patronymic() const {
  // @@protoc_insertion_point(field_get:serialization.FullName.patronymic)
  return patronymic_.GetNoArena();
}
inline void FullName::set_patronymic(const ::std::string& value) {
  
  patronymic_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:serialization.FullName.patronymic)
}
#if LANG_CXX11
inline void FullName::set_patronymic(::std::string&& value) {
  
  patronymic_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:serialization.FullName.patronymic)
}
#endif
inline void FullName::set_patronymic(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  patronymic_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:serialization.FullName.patronymic)
}
inline void FullName::set_patronymic(const char* value, size_t size) {
  
  patronymic_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:serialization.FullName.patronymic)
}
inline ::std::string* FullName::mutable_patronymic() {
  
  // @@protoc_insertion_point(field_mutable:serialization.FullName.patronymic)
  return patronymic_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* FullName::release_patronymic() {
  // @@protoc_insertion_point(field_release:serialization.FullName.patronymic)
  
  return patronymic_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void FullName::set_allocated_patronymic(::std::string* patronymic) {
  if (patronymic != NULL) {
    
  } else {
    
  }
  patronymic_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), patronymic);
  // @@protoc_insertion_point(field_set_allocated:serialization.FullName.patronymic)
}

// -------------------------------------------------------------------

// Student

// .serialization.FullName fullName = 1;
inline bool Student::has_fullname() const {
  return this != internal_default_instance() && fullname_ != NULL;
}
inline void Student::clear_fullname() {
  if (GetArenaNoVirtual() == NULL && fullname_ != NULL) {
    delete fullname_;
  }
  fullname_ = NULL;
}
inline const ::serialization::FullName& Student::_internal_fullname() const {
  return *fullname_;
}
inline const ::serialization::FullName& Student::fullname() const {
  const ::serialization::FullName* p = fullname_;
  // @@protoc_insertion_point(field_get:serialization.Student.fullName)
  return p != NULL ? *p : *reinterpret_cast<const ::serialization::FullName*>(
      &::serialization::_FullName_default_instance_);
}
inline ::serialization::FullName* Student::release_fullname() {
  // @@protoc_insertion_point(field_release:serialization.Student.fullName)
  
  ::serialization::FullName* temp = fullname_;
  fullname_ = NULL;
  return temp;
}
inline ::serialization::FullName* Student::mutable_fullname() {
  
  if (fullname_ == NULL) {
    auto* p = CreateMaybeMessage<::serialization::FullName>(GetArenaNoVirtual());
    fullname_ = p;
  }
  // @@protoc_insertion_point(field_mutable:serialization.Student.fullName)
  return fullname_;
}
inline void Student::set_allocated_fullname(::serialization::FullName* fullname) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete fullname_;
  }
  if (fullname) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      fullname = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, fullname, submessage_arena);
    }
    
  } else {
    
  }
  fullname_ = fullname;
  // @@protoc_insertion_point(field_set_allocated:serialization.Student.fullName)
}

// repeated int32 grades = 2;
inline int Student::grades_size() const {
  return grades_.size();
}
inline void Student::clear_grades() {
  grades_.Clear();
}
inline ::google::protobuf::int32 Student::grades(int index) const {
  // @@protoc_insertion_point(field_get:serialization.Student.grades)
  return grades_.Get(index);
}
inline void Student::set_grades(int index, ::google::protobuf::int32 value) {
  grades_.Set(index, value);
  // @@protoc_insertion_point(field_set:serialization.Student.grades)
}
inline void Student::add_grades(::google::protobuf::int32 value) {
  grades_.Add(value);
  // @@protoc_insertion_point(field_add:serialization.Student.grades)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
Student::grades() const {
  // @@protoc_insertion_point(field_list:serialization.Student.grades)
  return grades_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
Student::mutable_grades() {
  // @@protoc_insertion_point(field_mutable_list:serialization.Student.grades)
  return &grades_;
}

// int32 averageGrade = 3;
inline void Student::clear_averagegrade() {
  averagegrade_ = 0;
}
inline ::google::protobuf::int32 Student::averagegrade() const {
  // @@protoc_insertion_point(field_get:serialization.Student.averageGrade)
  return averagegrade_;
}
inline void Student::set_averagegrade(::google::protobuf::int32 value) {
  
  averagegrade_ = value;
  // @@protoc_insertion_point(field_set:serialization.Student.averageGrade)
}

// -------------------------------------------------------------------

// StudentsGroup

// repeated .serialization.Student students = 1;
inline int StudentsGroup::students_size() const {
  return students_.size();
}
inline void StudentsGroup::clear_students() {
  students_.Clear();
}
inline ::serialization::Student* StudentsGroup::mutable_students(int index) {
  // @@protoc_insertion_point(field_mutable:serialization.StudentsGroup.students)
  return students_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::serialization::Student >*
StudentsGroup::mutable_students() {
  // @@protoc_insertion_point(field_mutable_list:serialization.StudentsGroup.students)
  return &students_;
}
inline const ::serialization::Student& StudentsGroup::students(int index) const {
  // @@protoc_insertion_point(field_get:serialization.StudentsGroup.students)
  return students_.Get(index);
}
inline ::serialization::Student* StudentsGroup::add_students() {
  // @@protoc_insertion_point(field_add:serialization.StudentsGroup.students)
  return students_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::serialization::Student >&
StudentsGroup::students() const {
  // @@protoc_insertion_point(field_list:serialization.StudentsGroup.students)
  return students_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace serialization

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_students_2eproto
