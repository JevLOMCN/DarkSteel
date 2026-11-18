// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 2

// GetSubsystem<UMassTestLocalPlayerSubsystem> @ 1470e3560

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UMassTestLocalPlayerSubsystem * __thiscall
ULocalPlayer::GetSubsystem<UMassTestLocalPlayerSubsystem>(ULocalPlayer *this)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  USubsystem *pUVar5;
  
  pUVar3 = UMassTestLocalPlayerSubsystem::StaticClass();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar3 != (UClass *)0x0) goto LAB_1470e3592;
  }
  else if (pUVar3 != (UClass *)0x0) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
LAB_1470e3592:
    pUVar4 = UMassTestLocalPlayerSubsystem::StaticClass();
    if (pUVar4 != (UClass *)0x0) {
      iVar1 = (int)pUVar4->_padding_;
      if (((int)pUVar3->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) goto LAB_1470e35c2;
    }
  }
  pUVar3 = (UClass *)0x0;
LAB_1470e35c2:
  pUVar5 = FSubsystemCollectionBase::GetSubsystemInternal
                     ((FSubsystemCollectionBase *)&this->SubsystemCollection,pUVar3);
  return (UMassTestLocalPlayerSubsystem *)pUVar5;
}

// StaticClass @ 1471aba00

UClass * __cdecl ULocalPlayer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_ULocalPlayer.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LocalPlayer",
               &Z_Registration_Info_UClass_ULocalPlayer.InnerSingleton,
               StaticRegisterNativesULocalPlayer,0x2e0,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ULocalPlayer>,InternalVTableHelperCtorCaller<ULocalPlayer>,
               aFStackX_8,UPlayer::StaticClass,UEngine::StaticClass);
  }
  return Z_Registration_Info_UClass_ULocalPlayer.InnerSingleton;
}

