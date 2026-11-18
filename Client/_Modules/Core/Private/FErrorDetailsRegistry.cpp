// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// RegisterDetails @ 1415daf70

uint __thiscall
UE::UnifiedError::FErrorDetailsRegistry::RegisterDetails
          (FErrorDetailsRegistry *this,TStringView<char> *param_1,
          TFunction<UE::UnifiedError::IErrorDetails_*___cdecl(void)> *param_2)

{
  char cVar1;
  uint uVar2;
  longlong *plVar3;
  char *pcVar4;
  uint local_28;
  undefined1 local_24 [4];
  uint *local_20;
  TFunction<UE::UnifiedError::IErrorDetails_*___cdecl(void)> *local_18;
  
  pcVar4 = param_1->DataPtr;
  local_28 = 0xffffffff;
  cVar1 = *pcVar4;
  while (cVar1 != '\0') {
    pcVar4 = pcVar4 + 1;
    local_28 = (int)cVar1 ^ local_28;
    local_28 = FCrc::CRCTablesSB8[1][(ulonglong)(local_28 >> 0x10) & 0xff] ^
               FCrc::CRCTablesSB8[2][(ulonglong)(local_28 >> 8) & 0xff] ^
               FCrc::CRCTablesSB8[0][local_28 >> 0x18] ^
               FCrc::CRCTablesSB8[3][(ulonglong)local_28 & 0xff];
    cVar1 = *pcVar4;
  }
  local_28 = ~local_28;
  local_20 = &local_28;
  local_18 = param_2;
  TSet<TTuple<unsigned_int,TFunction<UE::UnifiedError::IErrorDetails_*___cdecl(void)>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TFunction<UE::UnifiedError::IErrorDetails_*___cdecl(void)>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<unsigned_int_const_&,TFunction<UE::UnifiedError::IErrorDetails_*___cdecl(void)>_const_&>_>
            ((TSet<TTuple<unsigned_int,TFunction<UE::UnifiedError::IErrorDetails_*___cdecl(void)>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TFunction<UE::UnifiedError::IErrorDetails_*___cdecl(void)>,0>,FDefaultSetAllocator>
              *)this,(TPairInitializer<unsigned_int_const_&,TFunction<UE::UnifiedError::IErrorDetails_*___cdecl(void)>_const_&>
                      *)local_24,(bool *)(local_24 + 4));
  uVar2 = local_28;
  if (*(longlong *)param_2 != 0) {
    plVar3 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar3 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return uVar2;
}

