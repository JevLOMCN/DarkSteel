// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_SKMReact
// Functions: 2

// StaticStruct @ 14acd3b40

UScriptStruct * __cdecl FWN_SKMReact_AnimNotifySetting::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FWN_SKMReact_AnimNotifySetting.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_WN_SKMReact();
    Z_Registration_Info_UScriptStruct_FWN_SKMReact_AnimNotifySetting.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FWN_SKMReact_AnimNotifySetting,(UObject *)pUVar1,
                         L"WN_SKMReact_AnimNotifySetting");
  }
  return Z_Registration_Info_UScriptStruct_FWN_SKMReact_AnimNotifySetting.OuterSingleton;
}

// operator= @ 14acd6280

FWN_SKMReact_AnimNotifySetting * __thiscall
FWN_SKMReact_AnimNotifySetting::operator=
          (FWN_SKMReact_AnimNotifySetting *this,FWN_SKMReact_AnimNotifySetting *param_1)

{
  TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> *this_00;
  undefined1 *puVar1;
  undefined1 *this_01;
  int iVar2;
  
  this->SoundSelection = param_1->SoundSelection;
  this_00 = &this->FloatParameter;
  this->SpawnParticle = param_1->SpawnParticle;
  this->SpawnSound = param_1->SpawnSound;
  if (this_00 != &param_1->FloatParameter) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->FloatParameter).field_0x38,
               (int *)&(this->FloatParameter).field_0x48,
               (ForElementType<FSetElementId> *)&(param_1->FloatParameter).field_0x38,
               *(int *)&(param_1->FloatParameter).field_0x48);
    iVar2 = *(int *)&(param_1->FloatParameter).field_0x8;
    TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty((TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this_00,iVar2);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,iVar2,(ForAnyElementType *)this_00,(int *)&(this->FloatParameter).field_0x8,
               (int *)&(this->FloatParameter).field_0xc);
    puVar1 = &(param_1->FloatParameter).field_0x10;
    this_01 = &(this->FloatParameter).field_0x10;
    *(undefined4 *)&(this->FloatParameter).field_0x30 =
         *(undefined4 *)&(param_1->FloatParameter).field_0x30;
    *(undefined4 *)&(this->FloatParameter).field_0x34 =
         *(undefined4 *)&(param_1->FloatParameter).field_0x34;
    if (this_01 != puVar1) {
      TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                ((TBitArray<FDefaultBitArrayAllocator> *)this_01,
                 (TBitArray<FDefaultBitArrayAllocator> *)puVar1);
    }
    if (iVar2 != 0) {
      memcpy(*(void **)this_00,*(void **)&param_1->FloatParameter,(longlong)iVar2 * 0x14);
    }
  }
  this->VolumeMultiplier = param_1->VolumeMultiplier;
  this->PitchMultiplier = param_1->PitchMultiplier;
  return this;
}

