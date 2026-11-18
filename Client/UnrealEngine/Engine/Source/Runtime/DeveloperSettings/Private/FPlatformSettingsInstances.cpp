// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DeveloperSettings
// Functions: 2

// StaticStruct @ 14241abf0

UScriptStruct * __cdecl FPlatformSettingsInstances::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPlatformSettingsInstances.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DeveloperSettings();
    Z_Registration_Info_UScriptStruct_FPlatformSettingsInstances.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPlatformSettingsInstances,(UObject *)pUVar1,
                         L"PlatformSettingsInstances");
  }
  return Z_Registration_Info_UScriptStruct_FPlatformSettingsInstances.OuterSingleton;
}

// FPlatformSettingsInstances @ 14241bbd0

FPlatformSettingsInstances * __thiscall
FPlatformSettingsInstances::FPlatformSettingsInstances
          (FPlatformSettingsInstances *this,FPlatformSettingsInstances *param_1)

{
  TMap<FName,TObjectPtr<UPlatformSettings>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UPlatformSettings>,0>_>
  *pTVar1;
  undefined1 *_Dst;
  undefined1 *_Src;
  UPlatformSettings *pUVar2;
  void *pvVar3;
  TMap<FName,TObjectPtr<UPlatformSettings>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UPlatformSettings>,0>_>
  *pTVar4;
  
  pUVar2 = (param_1->PlatformInstance).field0_0x0.DebugPtr;
  (this->PlatformInstance).field0_0x0.DebugPtr = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UPlatformSettings *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  pTVar1 = &this->OtherPlatforms;
  *(undefined8 *)pTVar1 = 0;
  pTVar4 = &param_1->OtherPlatforms;
  *(undefined8 *)&(this->OtherPlatforms).field_0x8 = 0;
  *(undefined8 *)&(this->OtherPlatforms).field_0x20 = 0;
  *(undefined4 *)&(this->OtherPlatforms).field_0x28 = 0;
  *(undefined4 *)&(this->OtherPlatforms).field_0x2c = 0x80;
  *(undefined4 *)&(this->OtherPlatforms).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OtherPlatforms).field_0x34 = 0;
  *(undefined8 *)&(this->OtherPlatforms).field_0x40 = 0;
  *(undefined4 *)&(this->OtherPlatforms).field_0x48 = 0;
  if (pTVar1 != pTVar4) {
    *(undefined8 *)pTVar1 = *(undefined8 *)pTVar4;
    *(undefined8 *)pTVar4 = 0;
    _Dst = &(this->OtherPlatforms).field_0x10;
    *(undefined4 *)&(this->OtherPlatforms).field_0x8 =
         *(undefined4 *)&(param_1->OtherPlatforms).field_0x8;
    _Src = &(param_1->OtherPlatforms).field_0x10;
    *(undefined4 *)&(this->OtherPlatforms).field_0xc =
         *(undefined4 *)&(param_1->OtherPlatforms).field_0xc;
    *(undefined8 *)&(param_1->OtherPlatforms).field_0x8 = 0;
    if (_Dst != _Src) {
      if (*(longlong *)&(param_1->OtherPlatforms).field_0x20 == 0) {
        memmove(_Dst,_Src,0x10);
      }
      pvVar3 = *(void **)&(this->OtherPlatforms).field_0x20;
      if (pvVar3 != (void *)0x0) {
        FMemory::Free(pvVar3);
      }
      *(undefined8 *)&(this->OtherPlatforms).field_0x20 =
           *(undefined8 *)&(param_1->OtherPlatforms).field_0x20;
      *(undefined8 *)&(param_1->OtherPlatforms).field_0x20 = 0;
      *(undefined4 *)&(this->OtherPlatforms).field_0x28 =
           *(undefined4 *)&(param_1->OtherPlatforms).field_0x28;
      *(undefined4 *)&(this->OtherPlatforms).field_0x2c =
           *(undefined4 *)&(param_1->OtherPlatforms).field_0x2c;
      *(undefined8 *)&(param_1->OtherPlatforms).field_0x28 = 0;
    }
    *(undefined4 *)&(this->OtherPlatforms).field_0x30 =
         *(undefined4 *)&(param_1->OtherPlatforms).field_0x30;
    *(undefined4 *)&(this->OtherPlatforms).field_0x34 =
         *(undefined4 *)&(param_1->OtherPlatforms).field_0x34;
    *(undefined4 *)&(param_1->OtherPlatforms).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->OtherPlatforms).field_0x34 = 0;
  }
  if (*(longlong *)&(param_1->OtherPlatforms).field_0x40 == 0) {
    *(undefined4 *)&(this->OtherPlatforms).field_0x38 =
         *(undefined4 *)&(param_1->OtherPlatforms).field_0x38;
  }
  pvVar3 = *(void **)&(this->OtherPlatforms).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  *(undefined8 *)&(this->OtherPlatforms).field_0x40 =
       *(undefined8 *)&(param_1->OtherPlatforms).field_0x40;
  *(undefined8 *)&(param_1->OtherPlatforms).field_0x40 = 0;
  *(undefined4 *)&(this->OtherPlatforms).field_0x48 =
       *(undefined4 *)&(param_1->OtherPlatforms).field_0x48;
  *(undefined4 *)&(param_1->OtherPlatforms).field_0x48 = 0;
  return this;
}

