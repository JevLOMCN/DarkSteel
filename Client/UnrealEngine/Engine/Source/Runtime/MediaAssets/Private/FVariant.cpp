// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaAssets
// Functions: 1

// GetValue<__int64> @ 146c19870

long64 __thiscall FVariant::GetValue<__int64>(FVariant *this)

{
  code *pcVar1;
  ulong64 uVar2;
  bool bVar3;
  long64 lVar4;
  char *in_RDX;
  undefined7 uVar5;
  ulong64 local_res8;
  FMemoryReader local_b8;
  
  if (this->Type != Int64) {
    in_RDX = "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Variant.h";
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Type == TVariantTraits<T>::GetType()) || ((TVariantTraits<T>::GetType() == EVariantTypes::UInt8) && (Type == EVariantTypes::Enum))"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Variant.h"
                       ,0x164,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      lVar4 = (*pcVar1)();
      return lVar4;
    }
  }
  local_b8._padding_ = 0;
  local_b8._padding_ = 0;
  local_b8._padding_ = 0;
  local_b8._padding_ = 0;
  local_b8._padding_ = 0;
  local_b8._padding_ = 0;
  local_b8._padding_ = 0;
  local_b8._padding_ = 0;
  local_b8._padding_ = 0;
  local_b8._padding_ = 0;
  local_b8._padding_ = 0;
  local_b8._padding_ = 0;
  local_b8._padding_ = 0;
  local_b8._padding_ = 0;
  local_b8._padding_ = 0;
  local_b8._padding_ = 0;
  local_b8._padding_ = 0;
  local_b8._padding_ = 0;
  FArchiveState::FArchiveState((FArchiveState *)&local_b8);
  local_b8._padding_ = 0;
  local_b8._padding_ = (longlong)&___7FMemoryReader__6B_;
  local_b8.Bytes = &this->Value;
  uVar5 = (undefined7)((ulonglong)in_RDX >> 8);
  local_b8.LimitSize = 0x7fffffffffffffff;
  FArchiveState::SetIsLoading((FArchiveState *)&local_b8,true);
  (**(code **)(local_b8._padding_ + 0x108))(&local_b8,CONCAT71(uVar5,1));
  if (*(ulong64 **)(local_b8._padding_ + 8) < *(ulong64 **)local_b8._padding_ + 1) {
    if ((local_b8._padding_ & 0x10000U) == 0) {
      if (*(code **)(local_b8._padding_ + 0x188) == FMemoryReader::Serialize) {
        FMemoryReader::Serialize(&local_b8,&local_res8,8);
      }
      else {
        (**(code **)(local_b8._padding_ + 0x188))();
      }
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)&local_b8,&local_res8);
    }
  }
  else {
    local_res8 = **(ulong64 **)local_b8._padding_;
    *(longlong *)local_b8._padding_ = *(longlong *)local_b8._padding_ + 8;
  }
  uVar2 = local_res8;
  FArchive::~FArchive((FArchive *)&local_b8);
  return uVar2;
}

