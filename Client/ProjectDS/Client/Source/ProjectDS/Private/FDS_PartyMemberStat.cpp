// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 4

// StaticStruct @ 14b5558f0

UScriptStruct * __cdecl FDS_PartyMemberStat::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_PartyMemberStat.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_PartyMemberStat.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_PartyMemberStat,(UObject *)pUVar1,
                         L"DS_PartyMemberStat");
  }
  return Z_Registration_Info_UScriptStruct_FDS_PartyMemberStat.OuterSingleton;
}

// GetStatRatio @ 14b8c8ad0

float __thiscall FDS_PartyMemberStat::GetStatRatio(FDS_PartyMemberStat *this)

{
  float fVar1;
  
  fVar1 = this->MaxValue;
  if (this->MaxValue <= 0.0) {
    fVar1 = __real_3f800000;
  }
  fVar1 = this->Value / fVar1;
  if (__real_3f800000 <= fVar1) {
    fVar1 = __real_3f800000;
  }
  return fVar1;
}

// ListUpCollectStatusTypes @ 14b8d0b50

void __cdecl FDS_PartyMemberStat::ListUpCollectStatusTypes(void)

{
  int iVar1;
  
  if (CollectStatusTypes.ArrayNum == 0) {
    iVar1 = 0;
    if (CollectStatusTypes.ArrayMax == 0) {
      iVar1 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&CollectStatusTypes.AllocatorInstance,&CollectStatusTypes.ArrayMax);
    }
    CollectStatusTypes.ArrayNum = iVar1 + 1;
    *(undefined4 *)(CollectStatusTypes.AllocatorInstance.Data + (longlong)iVar1 * 4) = 1;
  }
  return;
}

// UpdateStatValue @ 14b8f5390

void __thiscall
FDS_PartyMemberStat::UpdateStatValue(FDS_PartyMemberStat *this,float param_1,float param_2)

{
  this->Value = param_1;
  this->MaxValue = param_2;
  return;
}

