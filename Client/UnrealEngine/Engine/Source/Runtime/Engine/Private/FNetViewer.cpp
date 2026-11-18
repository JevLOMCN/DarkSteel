// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// FNetViewer @ 148014430

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FNetViewer * __thiscall FNetViewer::FNetViewer(FNetViewer *this,AController *param_1)

{
  USceneComponent *pUVar1;
  double dVar2;
  AActor *pAVar3;
  TVector<double> *pTVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  TRotator<double> local_38;
  TVector<double> local_20;
  
  (this->InViewer).field0_0x0.DebugPtr = (AActor *)param_1;
  (this->Connection).field0_0x0.DebugPtr = (UNetConnection *)0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (AController *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->ViewTarget).field0_0x0.DebugPtr = (AActor *)0x0;
  (this->ViewLocation).field0_0x0._s_0.X = 0.0;
  (this->ViewLocation).field0_0x0._s_0.Y = 0.0;
  (this->ViewLocation).field0_0x0._s_0.Z = 0.0;
  (this->ViewDir).field0_0x0._s_0.X = 0.0;
  (this->ViewDir).field0_0x0._s_0.Y = 0.0;
  (this->ViewDir).field0_0x0._s_0.Z = 0.0;
  if (param_1 == (AController *)0x0) {
    return this;
  }
  pAVar3 = (AActor *)(**(code **)(param_1->_padding_ + 0x7e0))(param_1);
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pAVar3 == (AActor *)0x0)) {
    (this->ViewTarget).field0_0x0.DebugPtr = pAVar3;
    if (pAVar3 == (AActor *)0x0) goto LAB_1480144f8;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pAVar3);
    (this->ViewTarget).field0_0x0.DebugPtr = pAVar3;
  }
  pUVar1 = (pAVar3->RootComponent).field0_0x0.DebugPtr;
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
  uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
  uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
  uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if (pUVar1 != (USceneComponent *)0x0) {
    uVar5 = *(undefined4 *)(pUVar1->ComponentToWorld).Translation.XY.m128d_f64;
    uVar6 = *(undefined4 *)((longlong)&(pUVar1->ComponentToWorld).Translation.XY + 4);
    uVar7 = *(undefined4 *)((longlong)&(pUVar1->ComponentToWorld).Translation.XY + 8);
    uVar8 = *(undefined4 *)((longlong)&(pUVar1->ComponentToWorld).Translation.XY + 0xc);
    uVar9 = (pUVar1->ComponentToWorld).Translation.ZW.m128d_f64[0];
  }
  *(undefined4 *)&(this->ViewLocation).field0_0x0 = uVar5;
  *(undefined4 *)((longlong)&(this->ViewLocation).field0_0x0 + 4) = uVar6;
  *(undefined4 *)((longlong)&(this->ViewLocation).field0_0x0 + 8) = uVar7;
  *(undefined4 *)((longlong)&(this->ViewLocation).field0_0x0 + 0xc) = uVar8;
  (this->ViewLocation).field0_0x0._s_0.Z = (double)uVar9;
LAB_1480144f8:
  (**(code **)(param_1->_padding_ + 0x7a8))(param_1,&local_38);
  (**(code **)(param_1->_padding_ + 0x840))(param_1,&this->ViewLocation,&local_38);
  pTVar4 = UE::Math::TRotator<double>::Vector(&local_38,&local_20);
  dVar2 = (pTVar4->field0_0x0)._s_0.Y;
  (this->ViewDir).field0_0x0._s_0.X = (pTVar4->field0_0x0)._s_0.X;
  (this->ViewDir).field0_0x0._s_0.Y = dVar2;
  (this->ViewDir).field0_0x0._s_0.Z = (pTVar4->field0_0x0)._s_0.Z;
  return this;
}

// FNetViewer @ 148014560

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FNetViewer * __thiscall
FNetViewer::FNetViewer(FNetViewer *this,UNetConnection *param_1,float param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  double dVar4;
  FNetViewer *pFVar5;
  TVector<double> *pTVar6;
  AActor *pAVar7;
  bool bVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  TRotator<double> local_38;
  TVector<double> local_20;
  
  (this->Connection).field0_0x0.DebugPtr = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UNetConnection *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pAVar7 = (AActor *)param_1->_padding_;
  if (pAVar7 == (AActor *)0x0) {
    pAVar7 = (param_1->OwningActor).field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_1480145bc;
    bVar8 = pAVar7 == (AActor *)0x0;
  }
  else {
    bVar8 = UE::GC::GIsIncrementalReachabilityPending == false;
  }
  if (!bVar8) {
    UE::GC::MarkAsReachable((UObject *)pAVar7);
  }
LAB_1480145bc:
  (this->InViewer).field0_0x0.DebugPtr = pAVar7;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar7 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pAVar7);
  }
  pAVar7 = (param_1->ViewTarget).field0_0x0.DebugPtr;
  (this->ViewTarget).field0_0x0.DebugPtr = pAVar7;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar7 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pAVar7);
  }
  (this->ViewLocation).field0_0x0._s_0.X = 0.0;
  (this->ViewLocation).field0_0x0._s_0.Y = 0.0;
  (this->ViewLocation).field0_0x0._s_0.Z = 0.0;
  (this->ViewDir).field0_0x0._s_0.X = 0.0;
  (this->ViewDir).field0_0x0._s_0.Y = 0.0;
  (this->ViewDir).field0_0x0._s_0.Z = 0.0;
  if (((param_1->OwningActor).field0_0x0.DebugPtr == (AActor *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InConnection->OwningActor",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetDriver.cpp"
                         ,0x133b,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FNetViewer *)(*pcVar3)();
    return pFVar5;
  }
  if ((((AActor *)param_1->_padding_ != (AActor *)0x0) &&
      ((AActor *)param_1->_padding_ != (param_1->OwningActor).field0_0x0.DebugPtr)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InConnection->PlayerController || (InConnection->PlayerController == InConnection->OwningActor)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\NetDriver.cpp"
                         ,0x133c,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FNetViewer *)(*pcVar3)();
    return pFVar5;
  }
  plVar1 = (longlong *)param_1->_padding_;
  lVar2 = *(longlong *)((longlong)(this->ViewTarget).field0_0x0 + 0x1b8);
  uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
  uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
  uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
  uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if (lVar2 != 0) {
    uVar9 = *(undefined4 *)(lVar2 + 0x210);
    uVar10 = *(undefined4 *)(lVar2 + 0x214);
    uVar11 = *(undefined4 *)(lVar2 + 0x218);
    uVar12 = *(undefined4 *)(lVar2 + 0x21c);
    uVar13 = *(double *)(lVar2 + 0x220);
  }
  *(undefined4 *)&(this->ViewLocation).field0_0x0 = uVar9;
  *(undefined4 *)((longlong)&(this->ViewLocation).field0_0x0 + 4) = uVar10;
  *(undefined4 *)((longlong)&(this->ViewLocation).field0_0x0 + 8) = uVar11;
  *(undefined4 *)((longlong)&(this->ViewLocation).field0_0x0 + 0xc) = uVar12;
  (this->ViewLocation).field0_0x0._s_0.Z = (double)uVar13;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x7a8))(plVar1,&local_38);
    (**(code **)(*plVar1 + 0x840))(plVar1,&this->ViewLocation,&local_38);
    pTVar6 = UE::Math::TRotator<double>::Vector(&local_38,&local_20);
    dVar4 = (pTVar6->field0_0x0)._s_0.Y;
    (this->ViewDir).field0_0x0._s_0.X = (pTVar6->field0_0x0)._s_0.X;
    (this->ViewDir).field0_0x0._s_0.Y = dVar4;
    (this->ViewDir).field0_0x0._s_0.Z = (pTVar6->field0_0x0)._s_0.Z;
  }
  return this;
}

// StaticStruct @ 148ae3c70

UScriptStruct * __cdecl FNetViewer::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNetViewer.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FNetViewer.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNetViewer,(UObject *)pUVar1,L"NetViewer");
  }
  return Z_Registration_Info_UScriptStruct_FNetViewer.OuterSingleton;
}

