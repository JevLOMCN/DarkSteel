// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 7

// ~FRefCountedErrorDetails @ 14158a0e0

void __thiscall
UE::UnifiedError::FRefCountedErrorDetails::~FRefCountedErrorDetails(FRefCountedErrorDetails *this)

{
  *(undefined ***)&this->field_0x8 = &_vftable__for__FRefCountBase__;
  *(undefined ***)this = &___7IRefCountedObject__6B_;
  return;
}

// AddRef @ 1415a8820

FReturnedRefCountValue __thiscall
UE::UnifiedError::FRefCountedErrorDetails::AddRef(FRefCountedErrorDetails *this)

{
  undefined1 *puVar1;
  int iVar2;
  int *in_RDX;
  
  LOCK();
  puVar1 = &this->field_0x10;
  iVar2 = *(int *)puVar1;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  UNLOCK();
  *in_RDX = iVar2 + 1;
  return (FReturnedRefCountValue)(uint)in_RDX;
}

// GetErrorDetailsTypeId @ 1415c6250

ulong64 __thiscall
UE::UnifiedError::FRefCountedErrorDetails::GetErrorDetailsTypeId(FRefCountedErrorDetails *this)

{
  ulong64 uVar1;
  char cVar2;
  char *pcVar3;
  
  uVar1 = 0x1505;
  pcVar3 = "UnifiedError::FRefCountedErrorDetails";
  cVar2 = 'U';
  do {
    pcVar3 = pcVar3 + 1;
    uVar1 = uVar1 * 0x21 + (longlong)cVar2;
    cVar2 = *pcVar3;
  } while (cVar2 != '\0');
  return uVar1;
}

// GetErrorDetailsTypeName @ 1415c6350

TStringView<char> * __thiscall
UE::UnifiedError::FRefCountedErrorDetails::GetErrorDetailsTypeName
          (FRefCountedErrorDetails *this,TStringView<char> *__return_storage_ptr__)

{
  __return_storage_ptr__->Size = 0x25;
  __return_storage_ptr__->DataPtr = "UnifiedError::FRefCountedErrorDetails";
  return __return_storage_ptr__;
}

// GetErrorDetailsTypeNameForLog @ 1415c6460

TStringView<char> * __thiscall
UE::UnifiedError::FRefCountedErrorDetails::GetErrorDetailsTypeNameForLog
          (FRefCountedErrorDetails *this,TStringView<char> *__return_storage_ptr__)

{
  size_t sVar1;
  
  __return_storage_ptr__->DataPtr =
       `public:_static_class_TStringView<char>___cdecl_UE::UnifiedError::FRefCountedErrorDetails::StaticGetErrorDetailsTypeNameForLog(void)'
       ::__l2::Replaced;
  sVar1 = strlen(`public:_static_class_TStringView<char>___cdecl_UE::UnifiedError::FRefCountedErrorDetails::StaticGetErrorDetailsTypeNameForLog(void)'
                 ::__l2::Replaced);
  __return_storage_ptr__->Size = (int)sVar1;
  return __return_storage_ptr__;
}

// GetRefCount @ 1415c7c70

uint __thiscall
UE::UnifiedError::FRefCountedErrorDetails::GetRefCount(FRefCountedErrorDetails *this)

{
  return *(uint *)&this->field_0x10;
}

// Release @ 1415e0d10

uint __thiscall UE::UnifiedError::FRefCountedErrorDetails::Release(FRefCountedErrorDetails *this)

{
  undefined1 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  
  puVar1 = &this->field_0x10;
  LOCK();
  iVar2 = *(int *)puVar1;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  UNLOCK();
  if (iVar2 == 1) {
    puVar3 = (undefined8 *)&this->field_0x8;
    if (puVar1 == (undefined1 *)0x0) {
      puVar3 = (undefined8 *)0x0;
    }
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  return iVar2 - 1;
}

