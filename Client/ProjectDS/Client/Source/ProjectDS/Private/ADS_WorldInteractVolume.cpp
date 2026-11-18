// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 26

// StaticClass @ 14b7689b0

UClass * __cdecl ADS_WorldInteractVolume::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_WorldInteractVolume.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_WorldInteractVolume",
               &Z_Registration_Info_UClass_ADS_WorldInteractVolume.InnerSingleton,
               StaticRegisterNativesADS_WorldInteractVolume,0x340,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ADS_WorldInteractVolume>,
               InternalVTableHelperCtorCaller<ADS_WorldInteractVolume>,local_res8,
               APhysicsVolume::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_WorldInteractVolume.InnerSingleton;
}

// ADS_WorldInteractVolume @ 14b76c8f0

ADS_WorldInteractVolume * __thiscall
ADS_WorldInteractVolume::ADS_WorldInteractVolume
          (ADS_WorldInteractVolume *this,FVTableHelper *param_1)

{
  APhysicsVolume::APhysicsVolume((APhysicsVolume *)this,param_1);
  this->_padding_ = (longlong)&___7ADS_WorldInteractVolume__6B_;
  (this->OverlappingBrushes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OverlappingBrushes).ArrayNum = 0;
  (this->OverlappingBrushes).ArrayMax = 0;
  (this->ManualAddingBrushes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ManualAddingBrushes).ArrayNum = 0;
  (this->ManualAddingBrushes).ArrayMax = 0;
  (this->BindingDrawingBoards).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BindingDrawingBoards).ArrayNum = 0;
  (this->BindingDrawingBoards).ArrayMax = 0;
  this->bVolumeActive = false;
  return this;
}

// ~ADS_WorldInteractVolume @ 14b770920

void __thiscall ADS_WorldInteractVolume::~ADS_WorldInteractVolume(ADS_WorldInteractVolume *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7ADS_WorldInteractVolume__6B_;
  pFVar1 = (this->BindingDrawingBoards).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ManualAddingBrushes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OverlappingBrushes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  APhysicsVolume::~APhysicsVolume((APhysicsVolume *)this);
  return;
}

// GetPrivateStaticClass @ 14b775220

UClass * __cdecl ADS_WorldInteractVolume::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_WorldInteractVolume.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_WorldInteractVolume",
               &Z_Registration_Info_UClass_ADS_WorldInteractVolume.InnerSingleton,
               StaticRegisterNativesADS_WorldInteractVolume,0x340,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ADS_WorldInteractVolume>,
               InternalVTableHelperCtorCaller<ADS_WorldInteractVolume>,local_res8,
               APhysicsVolume::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_WorldInteractVolume.InnerSingleton;
}

// StaticRegisterNativesADS_WorldInteractVolume @ 14b777b20

void __cdecl ADS_WorldInteractVolume::StaticRegisterNativesADS_WorldInteractVolume(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 5;
  local_18.DataPtr = Z_Construct_UClass_ADS_WorldInteractVolume_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetDrawingBoards @ 14b77a620

void __cdecl
ADS_WorldInteractVolume::execGetDrawingBoards(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  void *_Src;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = *(int *)&param_1[0x14].field_0x10;
  _Src = *(void **)&param_1[0x14].field_0x8;
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = CONCAT44(local_10._4_4_,iVar1);
  if (iVar1 == 0) {
    local_10 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,0,&local_18,iVar1,(int *)((longlong)&local_10 + 4));
    memcpy(local_18.Data,_Src,(longlong)iVar1 << 3);
  }
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.Data;
    *(undefined4 *)((longlong)param_3 + 8) = (undefined4)local_10;
    local_18.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_10._4_4_;
    local_10 = 0;
  }
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

// execManualInteractBrushEnterArea @ 14b77a900

void __cdecl
ADS_WorldInteractVolume::execManualInteractBrushEnterArea
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDS_InteractBrush *local_res10;
  
  local_res10 = (UDS_InteractBrush *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ManualInteractBrushEnterArea((ADS_WorldInteractVolume *)param_1,local_res10);
  return;
}

// execManualInteractBrushLeaveArea @ 14b77a990

void __cdecl
ADS_WorldInteractVolume::execManualInteractBrushLeaveArea
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDS_InteractBrush *local_res10;
  
  local_res10 = (UDS_InteractBrush *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ManualInteractBrushLeaveArea((ADS_WorldInteractVolume *)param_1,local_res10);
  return;
}

// execOnActorEnteredArea @ 14b77aa20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
ADS_WorldInteractVolume::execOnActorEnteredArea(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FHitResult *pFVar2;
  bool bVar3;
  int local_res10 [2];
  int local_res20 [2];
  UPrimitiveComponent *local_158;
  AActor *local_150;
  UPrimitiveComponent *local_148 [3];
  undefined8 local_130;
  undefined4 uStack_128;
  undefined1 uStack_124;
  undefined2 uStack_123;
  undefined1 uStack_121;
  FHitResult local_118;
  
  local_148[0] = (UPrimitiveComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_148,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_148);
  }
  local_150 = (AActor *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_150,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_150);
  }
  local_158 = (UPrimitiveComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_158,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_158);
  }
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar3 = local_res10[0] != 0;
  memset(&local_118,0,0x100);
  uStack_123 = 0;
  uStack_121 = 0;
  local_118.HitObjectHandle.ReferenceObject.WeakPtr.ObjectIndex = 0;
  local_118.HitObjectHandle.ReferenceObject.WeakPtr.ObjectSerialNumber = 0;
  local_118.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectIndex = 0;
  local_118.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectSerialNumber = 0;
  local_130 = 0;
  uStack_128 = 0xffffffff;
  uStack_124 = 0;
  local_118.HitObjectHandle.InstanceIndex = -1;
  local_118.HitObjectHandle.ResolutionStatus = Invalid;
  local_118.HitObjectHandle._29_3_ = 0;
  local_118.Time = 1.0;
  local_118.MyItem = -1;
  local_118.HitObjectHandle.ManagerInterface.InterfaceInstance =
       (IActorInstanceManagerInterface *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_118,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_118);
  }
  pFVar2 = &local_118;
  if ((FHitResult *)param_2->MostRecentPropertyAddress != (FHitResult *)0x0) {
    pFVar2 = (FHitResult *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnActorEnteredArea((ADS_WorldInteractVolume *)param_1,local_148[0],local_150,local_158,
                     local_res20[0],bVar3,pFVar2);
  return;
}

// execOnActorLeavedArea @ 14b77ac90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
ADS_WorldInteractVolume::execOnActorLeavedArea(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  UPrimitiveComponent *local_res20;
  AActor *local_18;
  UPrimitiveComponent *local_10;
  
  local_10 = (UPrimitiveComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_10);
  }
  local_18 = (AActor *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  local_res20 = (UPrimitiveComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnActorLeavedArea((ADS_WorldInteractVolume *)param_1,local_10,local_18,local_res20,local_res10[0])
  ;
  return;
}

// ADS_WorldInteractVolume @ 14b999590

ADS_WorldInteractVolume * __thiscall
ADS_WorldInteractVolume::ADS_WorldInteractVolume(ADS_WorldInteractVolume *this)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  APhysicsVolume::APhysicsVolume((APhysicsVolume *)this,pFVar1);
  this->_padding_ = (longlong)&___7ADS_WorldInteractVolume__6B_;
  (this->OverlappingBrushes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OverlappingBrushes).ArrayNum = 0;
  (this->OverlappingBrushes).ArrayMax = 0;
  (this->ManualAddingBrushes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ManualAddingBrushes).ArrayNum = 0;
  (this->ManualAddingBrushes).ArrayMax = 0;
  (this->BindingDrawingBoards).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BindingDrawingBoards).ArrayNum = 0;
  (this->BindingDrawingBoards).ArrayMax = 0;
  this->bVolumeActive = false;
  return this;
}

// BeginPlay @ 14b99b980

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADS_WorldInteractVolume::BeginPlay(ADS_WorldInteractVolume *this)

{
  int iVar1;
  ADS_WorldDrawingBoard *pAVar2;
  FScriptContainerElement *_Src;
  code *pcVar3;
  char *pcVar4;
  char *pcVar5;
  FName FVar6;
  int iVar7;
  bool bVar8;
  char *pcVar9;
  UWorld *pUVar10;
  UClass *pUVar11;
  ADS_WorldDrawingBoard *pAVar12;
  longlong *plVar13;
  FTimerManager *this_00;
  longlong lVar14;
  FName FVar15;
  char *pcVar16;
  undefined4 local_res8 [2];
  FName local_res10;
  FName local_res18;
  UClass *local_res20;
  ADS_WorldDrawingBoard *local_78;
  undefined1 local_70 [32];
  longlong local_50;
  
  pcVar16 = (char *)0x0;
  local_res8[0] = 0;
  AActor::BeginPlay((AActor *)this);
  lVar14 = this->_padding_;
  pcVar9 = strstr("&ADS_WorldInteractVolume::OnActorEnteredArea","::");
  pcVar5 = pcVar16;
  while (pcVar4 = pcVar9, pcVar4 != (char *)0x0) {
    pcVar9 = strstr(pcVar4 + 1,"::");
    pcVar5 = pcVar4;
  }
  if (((pcVar5 == (char *)0x0) || (pcVar5[2] == '0')) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result && Result[2] != \'0\'",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                         ,0x1da,L"\'%hs\' does not look like a member function"), bVar8)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  ::FName::FName(&local_res10,pcVar5 + 2);
  TSparseDynamicDelegate<FComponentBeginOverlapSignature_MCSignature,UPrimitiveComponent,FComponentBeginOverlapSignatureInfoGetter>
  ::__Internal_AddDynamic<ADS_WorldInteractVolume>
            ((TSparseDynamicDelegate<FComponentBeginOverlapSignature_MCSignature,UPrimitiveComponent,FComponentBeginOverlapSignatureInfoGetter>
              *)(lVar14 + 0x521),this,(pmf_78966c31)0x14b9bbde0,local_res10);
  lVar14 = this->_padding_;
  pcVar9 = strstr("&ADS_WorldInteractVolume::OnActorLeavedArea","::");
  pcVar5 = pcVar16;
  while (pcVar4 = pcVar9, pcVar4 != (char *)0x0) {
    pcVar9 = strstr(pcVar4 + 1,"::");
    pcVar5 = pcVar4;
  }
  if (((pcVar5 == (char *)0x0) || (pcVar5[2] == '0')) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result && Result[2] != \'0\'",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                         ,0x1da,L"\'%hs\' does not look like a member function"), bVar8)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  ::FName::FName(&local_res18,pcVar5 + 2);
  TSparseDynamicDelegate<FComponentEndOverlapSignature_MCSignature,UPrimitiveComponent,FComponentEndOverlapSignatureInfoGetter>
  ::__Internal_AddDynamic<ADS_WorldInteractVolume>
            ((TSparseDynamicDelegate<FComponentEndOverlapSignature_MCSignature,UPrimitiveComponent,FComponentEndOverlapSignatureInfoGetter>
              *)(lVar14 + 0x522),this,(pmf_c3247bbd)0x14b9bbf50,local_res18);
  local_70._24_4_ = 0;
  local_70._28_4_ = 0;
  local_50 = 0;
  local_res20 = Z_Construct_UClass_ADS_WorldDrawingBoard_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res20);
  }
  pUVar10 = AActor::GetWorld((AActor *)this);
  UGameplayStatics::GetAllActorsOfClass
            ((UObject *)pUVar10,(TSubclassOf<AActor>)&local_res20,
             (TArray<AActor_*,TSizedDefaultAllocator<32>_> *)(local_70 + 0x18));
  iVar7 = (int)local_50;
  local_res10 = (FName)(local_70._24_8_ + (longlong)(int)local_50 * 8);
  FVar15 = (FName)local_70._24_8_;
  do {
    FVar6 = local_res10;
    if ((int)local_50 != iVar7) {
      `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (FVar15 == FVar6) {
      this_00 = AActor::GetWorldTimerManager((AActor *)this);
      FTimerManager::SetTimerForNextTick<ADS_WorldInteractVolume>
                (this_00,(ADS_WorldInteractVolume *)local_70,(pmf_b2c442c5)this);
      if ((FName)local_70._24_8_ != (FName)0x0) {
        FMemory::Free((void *)local_70._24_8_);
      }
      return;
    }
    pAVar2 = *(ADS_WorldDrawingBoard **)FVar15;
    if (pAVar2 == (ADS_WorldDrawingBoard *)0x0) {
LAB_14b99bb7c:
      pAVar12 = (ADS_WorldDrawingBoard *)0x0;
    }
    else {
      pUVar11 = Z_Construct_UClass_ADS_WorldDrawingBoard_NoRegister();
      iVar1 = (int)pUVar11->_padding_;
      if ((*(int *)(pAVar2->_padding_ + 0x38) < iVar1) ||
         (pAVar12 = pAVar2,
         (longlong *)*(undefined1 **)(*(longlong *)(pAVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
         != &pUVar11->_padding_)) goto LAB_14b99bb7c;
    }
    if (pAVar12->bUseInteractVolume != false) {
      if (pAVar2 == (ADS_WorldDrawingBoard *)0x0) {
LAB_14b99bbb7:
        pAVar12 = (ADS_WorldDrawingBoard *)0x0;
      }
      else {
        pUVar11 = Z_Construct_UClass_ADS_WorldDrawingBoard_NoRegister();
        iVar1 = (int)pUVar11->_padding_;
        if ((*(int *)(pAVar2->_padding_ + 0x38) < iVar1) ||
           (pAVar12 = pAVar2,
           (longlong *)
           *(undefined1 **)(*(longlong *)(pAVar2->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
           &pUVar11->_padding_)) goto LAB_14b99bbb7;
      }
      local_70._16_4_ = (pAVar12->InteractVolumes).ArrayNum;
      lVar14 = (longlong)(int)local_70._16_4_;
      pcVar16 = &DAT_00000001;
      local_70._8_8_ = (longlong *)0x0;
      _Src = (pAVar12->InteractVolumes).AllocatorInstance.Data;
      if (local_70._16_4_ == 0) {
        local_70._20_4_ = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,local_70._16_4_,0,(ForAnyElementType *)(local_70 + 8),local_70._16_4_,
                   (int *)(local_70 + 0x14));
        memcpy((void *)local_70._8_8_,_Src,lVar14 << 3);
      }
      for (plVar13 = (longlong *)local_70._8_8_;
          plVar13 != (longlong *)(local_70._8_8_ + (longlong)(int)local_70._16_4_ * 8);
          plVar13 = plVar13 + 1) {
        if ((ADS_WorldInteractVolume *)*plVar13 == this) {
          if ((int)((longlong)plVar13 - local_70._8_8_ >> 3) != -1) {
            bVar8 = true;
            goto LAB_14b99bc42;
          }
          break;
        }
      }
    }
    bVar8 = false;
LAB_14b99bc42:
    if ((pcVar16 != (char *)0x0) &&
       (pcVar16 = (char *)0x0, (longlong *)local_70._8_8_ != (longlong *)0x0)) {
      FMemory::Free((void *)local_70._8_8_);
    }
    if (bVar8) {
      if (pAVar2 == (ADS_WorldDrawingBoard *)0x0) {
LAB_14b99bc87:
        local_78 = (ADS_WorldDrawingBoard *)0x0;
      }
      else {
        pUVar11 = Z_Construct_UClass_ADS_WorldDrawingBoard_NoRegister();
        iVar1 = (int)pUVar11->_padding_;
        if ((*(int *)(pAVar2->_padding_ + 0x38) < iVar1) ||
           (local_78 = pAVar2,
           (longlong *)
           *(undefined1 **)(*(longlong *)(pAVar2->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
           &pUVar11->_padding_)) goto LAB_14b99bc87;
      }
      TArray<ADS_WorldDrawingBoard_*,TSizedDefaultAllocator<32>_>::
      AddUniqueImpl<ADS_WorldDrawingBoard_*>(&this->BindingDrawingBoards,&local_78);
    }
    FVar15 = (FName)((longlong)FVar15 + 8);
  } while( true );
}

// BindDrawingBoard @ 14b99bf90

void __thiscall
ADS_WorldInteractVolume::BindDrawingBoard
          (ADS_WorldInteractVolume *this,ADS_WorldDrawingBoard *param_1)

{
  ADS_WorldDrawingBoard *local_res10 [3];
  
  local_res10[0] = param_1;
  TArray<ADS_WorldDrawingBoard_*,TSizedDefaultAllocator<32>_>::
  AddUniqueImpl<ADS_WorldDrawingBoard_*_const_&>(&this->BindingDrawingBoards,local_res10);
  ResetActiveState(this);
  return;
}

// ClearInvalidDrawingBoards @ 14b99cb90

void __thiscall ADS_WorldInteractVolume::ClearInvalidDrawingBoards(ADS_WorldInteractVolume *this)

{
  int *piVar1;
  TArray<ADS_WorldDrawingBoard_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  ForAnyElementType _Src;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  ADS_WorldDrawingBoard *local_res8;
  TArray<ADS_WorldDrawingBoard_*,TSizedDefaultAllocator<32>_> local_28;
  
  pTVar2 = &this->BindingDrawingBoards;
  pFVar5 = (pTVar2->AllocatorInstance).Data;
  iVar4 = (this->BindingDrawingBoards).ArrayNum;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  pFVar3 = pFVar5 + (longlong)iVar4 * 8;
  while( true ) {
    if ((this->BindingDrawingBoards).ArrayNum != iVar4) {
      `TCheckedPointerIterator<ADS_WorldDrawingBoard_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res8);
    }
    _Src.Data = local_28.AllocatorInstance.Data;
    if (pFVar5 == pFVar3) break;
    local_res8 = *(ADS_WorldDrawingBoard **)pFVar5;
    if (local_res8 != (ADS_WorldDrawingBoard *)0x0) {
      TArray<ADS_WorldDrawingBoard_*,TSizedDefaultAllocator<32>_>::
      AddUniqueImpl<ADS_WorldDrawingBoard_*_const_&>(&local_28,&local_res8);
    }
    pFVar5 = pFVar5 + 8;
  }
  if (pTVar2 != &local_28) {
    iVar4 = local_28.ArrayNum;
    lVar6 = (longlong)local_28.ArrayNum;
    piVar1 = &(this->BindingDrawingBoards).ArrayMax;
    (this->BindingDrawingBoards).ArrayNum = local_28.ArrayNum;
    if ((local_28.ArrayNum == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,local_28.ArrayNum,*piVar1,&pTVar2->AllocatorInstance,local_28.ArrayNum,piVar1);
      if (iVar4 != 0) {
        memcpy((pTVar2->AllocatorInstance).Data,_Src.Data,lVar6 << 3);
      }
    }
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// GetInteractBrushes @ 14b9af770

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __cdecl
ADS_WorldInteractVolume::GetInteractBrushes
          (AActor *param_1,TArray<UDS_InteractBrush_*,TSizedDefaultAllocator<32>_> *param_2)

{
  AActor::GetComponents<UDS_InteractBrush,TSizedDefaultAllocator<32>_>(param_1,param_2,false);
  return 0 < param_2->ArrayNum;
}

// GetInteractBrushes @ 14b9af7a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __cdecl
ADS_WorldInteractVolume::GetInteractBrushes
          (TArray<AActor_*,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UDS_InteractBrush_*,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  int iVar2;
  AActor *this;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  UClass *pUVar8;
  UClass *pUVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  UClass *pUVar12;
  undefined1 local_res8 [8];
  UClass *local_res10;
  UClass *local_res18;
  FScriptContainerElement *local_res20;
  TArray<UDS_InteractBrush_*,TSizedDefaultAllocator<32>_> local_58;
  
  piVar1 = &param_2->ArrayNum;
  *piVar1 = 0;
  if (param_2->ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
  }
  pFVar11 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  local_res20 = pFVar11 + (longlong)iVar2 * 8;
  do {
    pFVar4 = local_res20;
    pUVar12 = (UClass *)0x0;
    if (param_1->ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<AActor_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar11 == pFVar4) {
      iVar2 = *piVar1;
      if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.AllocatorInstance.Data);
      }
      pFVar11 = (param_1->AllocatorInstance).Data;
      if (pFVar11 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar11);
      }
      return 0 < iVar2;
    }
    this = *(AActor **)pFVar11;
    local_58.ArrayNum = 0;
    if ((local_58.ArrayMax < 0) && (local_58.ArrayMax != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&local_58.AllocatorInstance,0,&local_58.ArrayMax);
    }
    pUVar8 = Z_Construct_UClass_UDS_InteractBrush_NoRegister();
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar8 != (UClass *)0x0) goto LAB_14b9af89c;
    }
    else if (pUVar8 != (UClass *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
LAB_14b9af89c:
      pUVar9 = Z_Construct_UClass_UActorComponent_NoRegister();
      if (pUVar9 != (UClass *)0x0) {
        iVar7 = (int)pUVar9->_padding_;
        if (((int)pUVar8->_padding_ < iVar7) ||
           ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar7 * 8) !=
            &pUVar9->_padding_)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (bVar5) {
          pUVar12 = pUVar8;
        }
      }
    }
    pUVar9 = Z_Construct_UClass_UActorComponent_NoRegister();
    if (pUVar12 == pUVar9) {
      local_res10 = pUVar8;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar8);
      }
      AActor::
      ForEachComponent_Internal<UDS_InteractBrush,1,0,_AActor::GetComponents<UDS_InteractBrush,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
                (this,(TSubclassOf<UActorComponent>)&local_res10,&local_58);
    }
    else {
      local_res18 = pUVar8;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar8);
      }
      AActor::
      ForEachComponent_Internal<UDS_InteractBrush,0,0,_AActor::GetComponents<UDS_InteractBrush,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
                (this,(TSubclassOf<UActorComponent>)&local_res18,&local_58);
    }
    if (param_2 == &local_58) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x96e,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
    }
    lVar10 = (longlong)local_58.ArrayNum;
    if (local_58.ArrayNum != 0) {
      iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,local_58.ArrayNum,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax
                        );
      memcpy((param_2->AllocatorInstance).Data + (longlong)iVar7 * 8,local_58.AllocatorInstance.Data
             ,lVar10 << 3);
    }
    pFVar11 = pFVar11 + 8;
  } while( true );
}

// InteractiveBrushEnter @ 14b9b67a0

bool __thiscall
ADS_WorldInteractVolume::InteractiveBrushEnter
          (ADS_WorldInteractVolume *this,UDS_InteractBrush *param_1)

{
  int *piVar1;
  TArray<ADS_WorldInteractVolume_*,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  int iVar4;
  UObject *pUVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  code *pcVar8;
  UDS_InteractBrush *pUVar9;
  bool bVar10;
  undefined1 uVar11;
  int iVar12;
  UClass *pUVar13;
  UObject *pUVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  UObject *pUVar17;
  FScriptContainerElement *pFVar18;
  undefined1 local_res8 [8];
  UDS_InteractBrush *local_res10;
  FScriptContainerElement *local_res18;
  ADS_WorldInteractVolume *local_48 [2];
  
  pFVar18 = (this->BindingDrawingBoards).AllocatorInstance.Data;
  iVar12 = (this->BindingDrawingBoards).ArrayNum;
  local_res18 = pFVar18 + (longlong)iVar12 * 8;
  pFVar15 = local_res18;
  local_res10 = param_1;
  do {
    while( true ) {
      if ((this->BindingDrawingBoards).ArrayNum != iVar12) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<ADS_WorldDrawingBoard_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      pUVar9 = local_res10;
      if (pFVar18 == pFVar15) {
        return false;
      }
      if (*(longlong *)pFVar18 != 0) break;
LAB_14b9b690e:
      pFVar18 = pFVar18 + 8;
    }
    if (local_res10->bUseDrawOnlyDrawingBoardsClassList == false) break;
    pUVar5 = *(UObject **)(*(longlong *)pFVar18 + 0x10);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    pFVar6 = (pUVar9->DrawOnlyDrawingBoardsClassList).AllocatorInstance.Data;
    iVar3 = (pUVar9->DrawOnlyDrawingBoardsClassList).ArrayNum;
    pFVar16 = pFVar6;
    pFVar15 = local_res18;
    if (pFVar6 == pFVar6 + (longlong)iVar3 * 8) goto LAB_14b9b690e;
    do {
      lVar7 = *(longlong *)pFVar16;
      if ((lVar7 == 0) ||
         (pUVar13 = Z_Construct_UClass_ADS_WorldDrawingBoard_NoRegister(), pUVar13 == (UClass *)0x0)
         ) {
LAB_14b9b689b:
        pUVar17 = (UObject *)0x0;
      }
      else {
        iVar4 = (int)pUVar13->_padding_;
        if ((*(int *)(lVar7 + 0x38) < iVar4) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar7 + 0x30) + (longlong)iVar4 * 8) !=
            &pUVar13->_padding_)) {
          bVar10 = false;
        }
        else {
          bVar10 = true;
        }
        if (!bVar10) goto LAB_14b9b689b;
        pUVar17 = *(UObject **)pFVar16;
      }
      if ((pUVar5 == (UObject *)0x0) ||
         (pUVar13 = Z_Construct_UClass_ADS_WorldDrawingBoard_NoRegister(), pUVar13 == (UClass *)0x0)
         ) {
LAB_14b9b68d5:
        pUVar14 = (UObject *)0x0;
      }
      else {
        iVar4 = (int)pUVar13->_padding_;
        if ((*(int *)&pUVar5[1].field_0x10 < iVar4) ||
           ((longlong *)*(undefined1 **)(*(longlong *)&pUVar5[1].field_0x8 + (longlong)iVar4 * 8) !=
            &pUVar13->_padding_)) {
          bVar10 = false;
        }
        else {
          bVar10 = true;
        }
        pUVar14 = pUVar5;
        if (!bVar10) goto LAB_14b9b68d5;
      }
      pFVar15 = local_res18;
      if (pUVar17 == pUVar14) {
        if ((int)((longlong)pFVar16 - (longlong)pFVar6 >> 3) == -1) goto LAB_14b9b690e;
        goto LAB_14b9b6917;
      }
      pFVar16 = pFVar16 + 8;
    } while (pFVar16 != pFVar6 + (longlong)iVar3 * 8);
    pFVar18 = pFVar18 + 8;
  } while( true );
LAB_14b9b6917:
  pUVar9 = local_res10;
  pTVar2 = &local_res10->OverlappingInteractVolumes;
  pFVar18 = (pTVar2->AllocatorInstance).Data;
  local_48[0] = this;
  if (((pFVar18 <= (FScriptContainerElement *)local_48) &&
      ((FScriptContainerElement *)local_48 <
       pFVar18 + (longlong)(local_res10->OverlappingInteractVolumes).ArrayMax * 8)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar10)) {
    pcVar8 = (code *)swi(3);
    uVar11 = (*pcVar8)();
    return (bool)uVar11;
  }
  iVar12 = (pUVar9->OverlappingInteractVolumes).ArrayNum;
  piVar1 = &(pUVar9->OverlappingInteractVolumes).ArrayMax;
  if (iVar12 == *piVar1) {
    iVar12 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  (pUVar9->OverlappingInteractVolumes).ArrayNum = iVar12 + 1;
  *(ADS_WorldInteractVolume **)((pTVar2->AllocatorInstance).Data + (longlong)iVar12 * 8) =
       local_48[0];
  UDS_InteractBrush::UpdateDrawOnDrawingBoards(pUVar9);
  iVar12 = (pUVar9->DrawOnDrawingBoards).ArrayNum;
  if (iVar12 < 1) {
    if ((iVar12 != 0) || (pUVar9->bBrushActiveInVolume == false)) goto LAB_14b9b6a05;
    pUVar9->bBrushActiveInVolume = false;
    pUVar9->bSucceededDrawnThisTime = false;
  }
  else {
    if (pUVar9->bBrushActiveInVolume != false) goto LAB_14b9b6a05;
    pUVar9->bBrushActiveInVolume = true;
    pUVar9->bSucceededDrawnThisTime = false;
  }
  pUVar9->bSucceededDrawnLastTime = false;
LAB_14b9b6a05:
  TArray<UDS_InteractBrush_*,TSizedDefaultAllocator<32>_>::
  AddUniqueImpl<UDS_InteractBrush_*_const_&>(&this->OverlappingBrushes,&local_res10);
  return true;
}

// InteractiveBrushLeave @ 14b9b6a40

bool __thiscall
ADS_WorldInteractVolume::InteractiveBrushLeave
          (ADS_WorldInteractVolume *this,UDS_InteractBrush *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  UObject *pUVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  bool bVar7;
  UDS_InteractBrush *pUVar8;
  UClass *pUVar9;
  UObject *pUVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  UObject *pUVar13;
  FScriptContainerElement *pFVar14;
  ADS_WorldInteractVolume *local_res8;
  UDS_InteractBrush *local_res10;
  FScriptContainerElement *local_res18;
  
  pFVar14 = (this->BindingDrawingBoards).AllocatorInstance.Data;
  iVar1 = (this->BindingDrawingBoards).ArrayNum;
  local_res18 = pFVar14 + (longlong)iVar1 * 8;
  pFVar11 = local_res18;
  local_res10 = param_1;
  do {
    while( true ) {
      if ((this->BindingDrawingBoards).ArrayNum != iVar1) {
        `TCheckedPointerIterator<ADS_WorldDrawingBoard_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res8);
      }
      pUVar8 = local_res10;
      if (pFVar14 == pFVar11) {
        return false;
      }
      if (*(longlong *)pFVar14 != 0) break;
LAB_14b9b6b8c:
      pFVar14 = pFVar14 + 8;
    }
    if (local_res10->bUseDrawOnlyDrawingBoardsClassList == false) break;
    pUVar4 = *(UObject **)(*(longlong *)pFVar14 + 0x10);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    pFVar5 = (pUVar8->DrawOnlyDrawingBoardsClassList).AllocatorInstance.Data;
    iVar2 = (pUVar8->DrawOnlyDrawingBoardsClassList).ArrayNum;
    pFVar12 = pFVar5;
    pFVar11 = local_res18;
    if (pFVar5 == pFVar5 + (longlong)iVar2 * 8) goto LAB_14b9b6b8c;
    do {
      lVar6 = *(longlong *)pFVar12;
      if ((lVar6 == 0) ||
         (pUVar9 = Z_Construct_UClass_ADS_WorldDrawingBoard_NoRegister(), pUVar9 == (UClass *)0x0))
      {
LAB_14b9b6b1f:
        pUVar13 = (UObject *)0x0;
      }
      else {
        iVar3 = (int)pUVar9->_padding_;
        if ((*(int *)(lVar6 + 0x38) < iVar3) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar3 * 8) !=
            &pUVar9->_padding_)) {
          bVar7 = false;
        }
        else {
          bVar7 = true;
        }
        if (!bVar7) goto LAB_14b9b6b1f;
        pUVar13 = *(UObject **)pFVar12;
      }
      if ((pUVar4 == (UObject *)0x0) ||
         (pUVar9 = Z_Construct_UClass_ADS_WorldDrawingBoard_NoRegister(), pUVar9 == (UClass *)0x0))
      {
LAB_14b9b6b59:
        pUVar10 = (UObject *)0x0;
      }
      else {
        iVar3 = (int)pUVar9->_padding_;
        if ((*(int *)&pUVar4[1].field_0x10 < iVar3) ||
           ((longlong *)*(undefined1 **)(*(longlong *)&pUVar4[1].field_0x8 + (longlong)iVar3 * 8) !=
            &pUVar9->_padding_)) {
          bVar7 = false;
        }
        else {
          bVar7 = true;
        }
        pUVar10 = pUVar4;
        if (!bVar7) goto LAB_14b9b6b59;
      }
      pFVar11 = local_res18;
      if (pUVar13 == pUVar10) {
        if ((int)((longlong)pFVar12 - (longlong)pFVar5 >> 3) == -1) goto LAB_14b9b6b8c;
        goto LAB_14b9b6b95;
      }
      pFVar12 = pFVar12 + 8;
    } while (pFVar12 != pFVar5 + (longlong)iVar2 * 8);
    pFVar14 = pFVar14 + 8;
  } while( true );
LAB_14b9b6b95:
  pUVar8 = local_res10;
  local_res8 = this;
  TArray<ADS_WorldInteractVolume_*,TSizedDefaultAllocator<32>_>::Remove
            (&local_res10->OverlappingInteractVolumes,&local_res8);
  UDS_InteractBrush::UpdateDrawOnDrawingBoards(pUVar8);
  iVar1 = (pUVar8->DrawOnDrawingBoards).ArrayNum;
  if (iVar1 < 1) {
    if ((iVar1 != 0) || (pUVar8->bBrushActiveInVolume == false)) goto LAB_14b9b6bf1;
    pUVar8->bBrushActiveInVolume = false;
    pUVar8->bSucceededDrawnThisTime = false;
  }
  else {
    if (pUVar8->bBrushActiveInVolume != false) goto LAB_14b9b6bf1;
    pUVar8->bBrushActiveInVolume = true;
    pUVar8->bSucceededDrawnThisTime = false;
  }
  pUVar8->bSucceededDrawnLastTime = false;
LAB_14b9b6bf1:
  TArray<UDS_InteractBrush_*,TSizedDefaultAllocator<32>_>::Remove
            (&this->OverlappingBrushes,&local_res10);
  TArray<UDS_InteractBrush_*,TSizedDefaultAllocator<32>_>::Remove
            (&this->ManualAddingBrushes,&local_res10);
  return true;
}

// ManualInteractBrushEnterArea @ 14b9bba00

void __thiscall
ADS_WorldInteractVolume::ManualInteractBrushEnterArea
          (ADS_WorldInteractVolume *this,UDS_InteractBrush *param_1)

{
  bool bVar1;
  UDS_InteractBrush *local_res10 [3];
  
  local_res10[0] = param_1;
  TArray<UDS_InteractBrush_*,TSizedDefaultAllocator<32>_>::
  AddUniqueImpl<UDS_InteractBrush_*_const_&>(&this->ManualAddingBrushes,local_res10);
  bVar1 = InteractiveBrushEnter(this,local_res10[0]);
  if (bVar1) {
    UpdateDrawingBoardsActive(this);
  }
  return;
}

// ManualInteractBrushLeaveArea @ 14b9bba50

void __thiscall
ADS_WorldInteractVolume::ManualInteractBrushLeaveArea
          (ADS_WorldInteractVolume *this,UDS_InteractBrush *param_1)

{
  bool bVar1;
  UDS_InteractBrush *local_res10 [3];
  
  local_res10[0] = param_1;
  TArray<UDS_InteractBrush_*,TSizedDefaultAllocator<32>_>::Remove
            (&this->ManualAddingBrushes,local_res10);
  bVar1 = InteractiveBrushLeave(this,local_res10[0]);
  if (bVar1) {
    UpdateDrawingBoardsActive(this);
  }
  return;
}

// OnActorEnteredArea @ 14b9bbde0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
ADS_WorldInteractVolume::OnActorEnteredArea
          (ADS_WorldInteractVolume *this,UPrimitiveComponent *param_1,AActor *param_2,
          UPrimitiveComponent *param_3,int param_4,bool param_5,FHitResult *param_6)

{
  undefined8 *puVar1;
  int iVar2;
  bool bVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  byte bVar9;
  UClass *pUVar10;
  undefined1 local_28 [8];
  UClass *local_20;
  undefined8 *local_18;
  ulonglong local_10;
  
  pUVar6 = (UClass *)0x0;
  pUVar10 = (UClass *)0x0;
  local_18 = (undefined8 *)0x0;
  local_10 = 0;
  pUVar4 = Z_Construct_UClass_UDS_InteractBrush_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar4 == (UClass *)0x0) goto LAB_14b9bbe60;
  }
  else {
    pUVar10 = pUVar6;
    if (pUVar4 == (UClass *)0x0) goto LAB_14b9bbe60;
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  pUVar5 = Z_Construct_UClass_UActorComponent_NoRegister();
  pUVar10 = pUVar6;
  if (pUVar5 != (UClass *)0x0) {
    iVar2 = (int)pUVar5->_padding_;
    if (((int)pUVar4->_padding_ < iVar2) ||
       ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar2 * 8) != &pUVar5->_padding_)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      pUVar10 = pUVar4;
    }
  }
LAB_14b9bbe60:
  pUVar6 = Z_Construct_UClass_UActorComponent_NoRegister();
  local_20 = pUVar4;
  if (pUVar10 == pUVar6) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    AActor::
    ForEachComponent_Internal<UDS_InteractBrush,1,0,_AActor::GetComponents<UDS_InteractBrush,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
              (param_2,(TSubclassOf<UActorComponent>)&local_20,
               (TArray<UDS_InteractBrush_*,TSizedDefaultAllocator<32>_> *)&local_18);
  }
  else {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    AActor::
    ForEachComponent_Internal<UDS_InteractBrush,0,0,_AActor::GetComponents<UDS_InteractBrush,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
              (param_2,(TSubclassOf<UActorComponent>)&local_20,
               (TArray<UDS_InteractBrush_*,TSizedDefaultAllocator<32>_> *)&local_18);
  }
  iVar2 = (int)local_10;
  uVar7 = (ulonglong)(int)local_10;
  if (0 < (int)local_10) {
    bVar9 = 0;
    puVar1 = local_18 + uVar7;
    puVar8 = local_18;
    while( true ) {
      if ((int)uVar7 != iVar2) {
        `TCheckedPointerIterator<UDS_InteractBrush_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_28);
      }
      if (puVar8 == puVar1) break;
      bVar3 = InteractiveBrushEnter(this,(UDS_InteractBrush *)*puVar8);
      uVar7 = local_10 & 0xffffffff;
      bVar9 = bVar9 | bVar3;
      puVar8 = puVar8 + 1;
    }
    if (bVar9 != 0) {
      UpdateDrawingBoardsActive(this);
    }
  }
  if (local_18 != (undefined8 *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// OnActorLeavedArea @ 14b9bbf50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
ADS_WorldInteractVolume::OnActorLeavedArea
          (ADS_WorldInteractVolume *this,UPrimitiveComponent *param_1,AActor *param_2,
          UPrimitiveComponent *param_3,int param_4)

{
  undefined8 *puVar1;
  int iVar2;
  bool bVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  byte bVar9;
  UClass *pUVar10;
  undefined1 local_28 [8];
  UClass *local_20;
  undefined8 *local_18;
  ulonglong local_10;
  
  pUVar6 = (UClass *)0x0;
  pUVar10 = (UClass *)0x0;
  local_18 = (undefined8 *)0x0;
  local_10 = 0;
  pUVar4 = Z_Construct_UClass_UDS_InteractBrush_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar4 == (UClass *)0x0) goto LAB_14b9bbfd0;
  }
  else {
    pUVar10 = pUVar6;
    if (pUVar4 == (UClass *)0x0) goto LAB_14b9bbfd0;
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  pUVar5 = Z_Construct_UClass_UActorComponent_NoRegister();
  pUVar10 = pUVar6;
  if (pUVar5 != (UClass *)0x0) {
    iVar2 = (int)pUVar5->_padding_;
    if (((int)pUVar4->_padding_ < iVar2) ||
       ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar2 * 8) != &pUVar5->_padding_)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      pUVar10 = pUVar4;
    }
  }
LAB_14b9bbfd0:
  pUVar6 = Z_Construct_UClass_UActorComponent_NoRegister();
  local_20 = pUVar4;
  if (pUVar10 == pUVar6) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    AActor::
    ForEachComponent_Internal<UDS_InteractBrush,1,0,_AActor::GetComponents<UDS_InteractBrush,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
              (param_2,(TSubclassOf<UActorComponent>)&local_20,
               (TArray<UDS_InteractBrush_*,TSizedDefaultAllocator<32>_> *)&local_18);
  }
  else {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    AActor::
    ForEachComponent_Internal<UDS_InteractBrush,0,0,_AActor::GetComponents<UDS_InteractBrush,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
              (param_2,(TSubclassOf<UActorComponent>)&local_20,
               (TArray<UDS_InteractBrush_*,TSizedDefaultAllocator<32>_> *)&local_18);
  }
  iVar2 = (int)local_10;
  uVar7 = (ulonglong)(int)local_10;
  if (0 < (int)local_10) {
    bVar9 = 0;
    puVar1 = local_18 + uVar7;
    puVar8 = local_18;
    while( true ) {
      if ((int)uVar7 != iVar2) {
        `TCheckedPointerIterator<UDS_InteractBrush_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_28);
      }
      if (puVar8 == puVar1) break;
      bVar3 = InteractiveBrushLeave(this,(UDS_InteractBrush *)*puVar8);
      uVar7 = local_10 & 0xffffffff;
      bVar9 = bVar9 | bVar3;
      puVar8 = puVar8 + 1;
    }
    if (bVar9 != 0) {
      UpdateDrawingBoardsActive(this);
    }
  }
  if (local_18 != (undefined8 *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// RemoveBrush @ 14b9c2610

void __thiscall
ADS_WorldInteractVolume::RemoveBrush(ADS_WorldInteractVolume *this,UDS_InteractBrush *param_1)

{
  UDS_InteractBrush *local_res10 [3];
  
  local_res10[0] = param_1;
  TArray<UDS_InteractBrush_*,TSizedDefaultAllocator<32>_>::Remove
            (&this->OverlappingBrushes,local_res10);
  UpdateDrawingBoardsActive(this);
  return;
}

// ResetActiveState @ 14b9c2b30

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADS_WorldInteractVolume::ResetActiveState(ADS_WorldInteractVolume *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  UDS_InteractBrush *this_00;
  ADS_WorldDrawingBoard *pAVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  byte bVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  ForAnyElementType FVar12;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_98 [8];
  TArray<UDS_InteractBrush_*,TSizedDefaultAllocator<32>_> local_90;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_80;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_70;
  ADS_WorldInteractVolume *local_60;
  ADS_WorldInteractVolume *local_58;
  undefined8 local_50;
  ADS_WorldInteractVolume *local_48;
  ADS_WorldInteractVolume *local_40;
  
  pFVar10 = (this->OverlappingBrushes).AllocatorInstance.Data;
  iVar3 = (this->OverlappingBrushes).ArrayNum;
  pFVar2 = pFVar10 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->OverlappingBrushes).ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UDS_InteractBrush_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar10 == pFVar2) break;
    this_00 = *(UDS_InteractBrush **)pFVar10;
    local_60 = this;
    TArray<ADS_WorldInteractVolume_*,TSizedDefaultAllocator<32>_>::Remove
              (&this_00->OverlappingInteractVolumes,&local_60);
    UDS_InteractBrush::UpdateDrawOnDrawingBoards(this_00);
    iVar7 = (this_00->DrawOnDrawingBoards).ArrayNum;
    if (iVar7 < 1) {
      if ((iVar7 == 0) && (this_00->bBrushActiveInVolume != false)) {
        this_00->bBrushActiveInVolume = false;
        this_00->bSucceededDrawnThisTime = false;
        this_00->bSucceededDrawnLastTime = false;
      }
LAB_14b9c2bee:
      pFVar10 = pFVar10 + 8;
    }
    else {
      if (this_00->bBrushActiveInVolume != false) goto LAB_14b9c2bee;
      this_00->bBrushActiveInVolume = true;
      this_00->bSucceededDrawnThisTime = false;
      pFVar10 = pFVar10 + 8;
      this_00->bSucceededDrawnLastTime = false;
    }
  }
  pFVar10 = (this->BindingDrawingBoards).AllocatorInstance.Data;
  iVar3 = (this->BindingDrawingBoards).ArrayNum;
  pFVar2 = pFVar10 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->BindingDrawingBoards).ArrayNum != iVar3) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<ADS_WorldDrawingBoard_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar10 == pFVar2) break;
    pAVar4 = *(ADS_WorldDrawingBoard **)pFVar10;
    local_58 = this;
    if (pAVar4->bUseInteractVolume != false) {
      TArray<ADS_WorldInteractVolume_*,TSizedDefaultAllocator<32>_>::Remove
                (&pAVar4->ActiveVolumes,&local_58);
      ADS_WorldDrawingBoard::UpdateActive(pAVar4);
    }
    pFVar10 = pFVar10 + 8;
  }
  this->bVolumeActive = false;
  local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_70.ArrayNum = 0;
  local_70.ArrayMax = 0;
  local_50 = 0;
  AActor::GetOverlappingActors((AActor *)this,&local_70,(TSubclassOf<AActor>)&local_50);
  FVar12.Data = local_70.AllocatorInstance.Data;
  lVar11 = (longlong)local_70.ArrayNum;
  bVar9 = 0;
  local_90.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_90.ArrayNum = 0;
  local_90.ArrayMax = 0;
  local_80.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_80.ArrayNum = local_70.ArrayNum;
  if (local_70.ArrayNum == 0) {
    local_80.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_70.ArrayNum,0,&local_80.AllocatorInstance,local_70.ArrayNum,
               &local_80.ArrayMax);
    memcpy(local_80.AllocatorInstance.Data,FVar12.Data,lVar11 << 3);
  }
  GetInteractBrushes(&local_80,&local_90);
  if ((&local_90 == &this->ManualAddingBrushes) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x96e,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar3 = (this->ManualAddingBrushes).ArrayNum;
  if (iVar3 != 0) {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar3,&local_90.AllocatorInstance,&local_90.ArrayNum,&local_90.ArrayMax);
    memcpy(local_90.AllocatorInstance.Data + (longlong)iVar7 * 8,
           (this->ManualAddingBrushes).AllocatorInstance.Data,(longlong)iVar3 << 3);
  }
  iVar3 = local_90.ArrayNum;
  uVar8 = (ulonglong)local_90.ArrayNum;
  pFVar2 = local_90.AllocatorInstance.Data + uVar8 * 8;
  FVar12.Data = local_90.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar8 != iVar3) {
      `TCheckedPointerIterator<UDS_InteractBrush_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (FVar12.Data == pFVar2) break;
    bVar6 = InteractiveBrushEnter(this,*(UDS_InteractBrush **)FVar12.Data);
    uVar8 = local_90._8_8_ & 0xffffffff;
    bVar9 = bVar9 | bVar6;
    FVar12.Data = FVar12.Data + 8;
  }
  if (bVar9 != 0) {
    piVar1 = &(this->OverlappingBrushes).ArrayNum;
    if (this->bVolumeActive != false) {
      if (*piVar1 != 0) goto LAB_14b9c2e99;
      pFVar10 = (this->BindingDrawingBoards).AllocatorInstance.Data;
      iVar3 = (this->BindingDrawingBoards).ArrayNum;
      pFVar2 = pFVar10 + (longlong)iVar3 * 8;
      while( true ) {
        if ((this->BindingDrawingBoards).ArrayNum != iVar3) {
          `TCheckedPointerIterator<ADS_WorldDrawingBoard_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res20);
        }
        if (pFVar10 == pFVar2) break;
        pAVar4 = *(ADS_WorldDrawingBoard **)pFVar10;
        local_48 = this;
        if (pAVar4->bUseInteractVolume != false) {
          TArray<ADS_WorldInteractVolume_*,TSizedDefaultAllocator<32>_>::Remove
                    (&pAVar4->ActiveVolumes,&local_48);
          ADS_WorldDrawingBoard::UpdateActive(pAVar4);
        }
        pFVar10 = pFVar10 + 8;
      }
      this->bVolumeActive = false;
    }
    if (0 < *piVar1) {
      pFVar10 = (this->BindingDrawingBoards).AllocatorInstance.Data;
      iVar3 = (this->BindingDrawingBoards).ArrayNum;
      pFVar2 = pFVar10 + (longlong)iVar3 * 8;
      while( true ) {
        if ((this->BindingDrawingBoards).ArrayNum != iVar3) {
          `TCheckedPointerIterator<ADS_WorldDrawingBoard_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_98);
        }
        if (pFVar10 == pFVar2) break;
        pAVar4 = *(ADS_WorldDrawingBoard **)pFVar10;
        local_40 = this;
        if (pAVar4->bUseInteractVolume != false) {
          TArray<ADS_WorldInteractVolume_*,TSizedDefaultAllocator<32>_>::
          AddUniqueImpl<ADS_WorldInteractVolume_*_const_&>(&pAVar4->ActiveVolumes,&local_40);
          ADS_WorldDrawingBoard::UpdateActive(pAVar4);
        }
        pFVar10 = pFVar10 + 8;
      }
      this->bVolumeActive = true;
    }
  }
LAB_14b9c2e99:
  if (local_90.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.AllocatorInstance.Data);
  }
  if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.AllocatorInstance.Data);
  }
  return;
}

// UnBindDrawingBoard @ 14b9c8050

void __thiscall
ADS_WorldInteractVolume::UnBindDrawingBoard
          (ADS_WorldInteractVolume *this,ADS_WorldDrawingBoard *param_1)

{
  ADS_WorldDrawingBoard *local_res10 [3];
  
  local_res10[0] = param_1;
  TArray<ADS_WorldDrawingBoard_*,TSizedDefaultAllocator<32>_>::Remove
            (&this->BindingDrawingBoards,local_res10);
  ResetActiveState(this);
  return;
}

// UpdateDrawingBoardsActive @ 14b9c8ed0

void __thiscall ADS_WorldInteractVolume::UpdateDrawingBoardsActive(ADS_WorldInteractVolume *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  ADS_WorldDrawingBoard *pAVar3;
  FScriptContainerElement *pFVar4;
  ADS_WorldInteractVolume *local_res8;
  
  if (this->bVolumeActive != false) {
    if ((this->OverlappingBrushes).ArrayNum != 0) {
      return;
    }
    pFVar4 = (this->BindingDrawingBoards).AllocatorInstance.Data;
    iVar2 = (this->BindingDrawingBoards).ArrayNum;
    pFVar1 = pFVar4 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->BindingDrawingBoards).ArrayNum != iVar2) {
        `TCheckedPointerIterator<ADS_WorldDrawingBoard_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res8);
      }
      if (pFVar4 == pFVar1) break;
      pAVar3 = *(ADS_WorldDrawingBoard **)pFVar4;
      local_res8 = this;
      if (pAVar3->bUseInteractVolume != false) {
        TArray<ADS_WorldInteractVolume_*,TSizedDefaultAllocator<32>_>::Remove
                  (&pAVar3->ActiveVolumes,&local_res8);
        ADS_WorldDrawingBoard::UpdateActive(pAVar3);
      }
      pFVar4 = pFVar4 + 8;
    }
    this->bVolumeActive = false;
  }
  if (0 < (this->OverlappingBrushes).ArrayNum) {
    pFVar4 = (this->BindingDrawingBoards).AllocatorInstance.Data;
    iVar2 = (this->BindingDrawingBoards).ArrayNum;
    pFVar1 = pFVar4 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->BindingDrawingBoards).ArrayNum != iVar2) {
        `TCheckedPointerIterator<ADS_WorldDrawingBoard_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res8);
      }
      if (pFVar4 == pFVar1) break;
      pAVar3 = *(ADS_WorldDrawingBoard **)pFVar4;
      local_res8 = this;
      if (pAVar3->bUseInteractVolume != false) {
        TArray<ADS_WorldInteractVolume_*,TSizedDefaultAllocator<32>_>::
        AddUniqueImpl<ADS_WorldInteractVolume_*_const_&>(&pAVar3->ActiveVolumes,&local_res8);
        ADS_WorldDrawingBoard::UpdateActive(pAVar3);
      }
      pFVar4 = pFVar4 + 8;
    }
    this->bVolumeActive = true;
  }
  return;
}

