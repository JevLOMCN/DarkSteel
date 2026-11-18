// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 15

// StaticClass @ 147aa56a0

UClass * __cdecl ADecalActor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADecalActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DecalActor",
               &Z_Registration_Info_UClass_ADecalActor.InnerSingleton,
               StaticRegisterNativesADecalActor,0x2c8,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,
               L"Engine",InternalConstructor<ADecalActor>,
               InternalVTableHelperCtorCaller<ADecalActor>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADecalActor.InnerSingleton;
}

// ADecalActor @ 147aba5d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ADecalActor * __thiscall ADecalActor::ADecalActor(ADecalActor *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7ADecalActor__6B_;
  (this->Decal).field0_0x0.DebugPtr = (UDecalComponent *)0x0;
  return this;
}

// ADecalActor @ 147aba610

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ADecalActor * __thiscall ADecalActor::ADecalActor(ADecalActor *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  FName FVar2;
  FName *pFVar3;
  UClass *pUVar4;
  UDecalComponent *pUVar5;
  FName local_res8;
  TRotator<double> local_28;
  
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7ADecalActor__6B_;
  (this->Decal).field0_0x0.DebugPtr = (UDecalComponent *)0x0;
  pFVar3 = ::FName::FName(&local_res8,L"NewDecalComponent");
  FVar2 = *pFVar3;
  pUVar4 = Z_Construct_UClass_UDecalComponent_NoRegister();
  pUVar5 = (UDecalComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar4,pUVar4,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UDecalComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  local_28.Pitch = ___xmm_0000000000000000c056800000000000;
  local_28.Yaw = _UNK_1517cfbf8;
  (this->Decal).field0_0x0.DebugPtr = pUVar5;
  local_28.Roll = 0.0;
  USceneComponent::SetRelativeRotation
            ((USceneComponent *)pUVar5,&local_28,false,(FHitResult *)0x0,None);
  ((this->Decal).field0_0x0.DebugPtr)->bDestroyOwnerAfterFade = '\x01';
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar5 = (this->Decal).field0_0x0.DebugPtr, pUVar5 != (UDecalComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  this->_padding_ = (longlong)(this->Decal).field0_0x0;
  AActor::SetCanBeDamaged((AActor *)this,false);
  return this;
}

// ~ADecalActor @ 147abec60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADecalActor::~ADecalActor(ADecalActor *this)

{
  this->_padding_ = (longlong)&___7ADecalActor__6B_;
  AActor::~AActor((AActor *)this);
  return;
}

// CreateDynamicMaterialInstance @ 147acdd60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UMaterialInstanceDynamic * __thiscall ADecalActor::CreateDynamicMaterialInstance(ADecalActor *this)

{
  UDecalComponent *pUVar1;
  UMaterialInstanceDynamic *pUVar2;
  
  pUVar1 = (this->Decal).field0_0x0.DebugPtr;
  if (pUVar1 != (UDecalComponent *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147acdd6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pUVar2 = (UMaterialInstanceDynamic *)(**(code **)(*(longlong *)pUVar1 + 0x640))();
    return pUVar2;
  }
  return (UMaterialInstanceDynamic *)0x0;
}

// GetDecalMaterial @ 147ae61a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UMaterialInterface * __thiscall ADecalActor::GetDecalMaterial(ADecalActor *this)

{
  UDecalComponent *pUVar1;
  
  pUVar1 = (this->Decal).field0_0x0.DebugPtr;
  if (pUVar1 == (UDecalComponent *)0x0) {
    return (UMaterialInterface *)0x0;
  }
  return (pUVar1->DecalMaterial).field0_0x0.DebugPtr;
}

// GetPrivateStaticClass @ 147aeafc0

UClass * __cdecl ADecalActor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADecalActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DecalActor",
               &Z_Registration_Info_UClass_ADecalActor.InnerSingleton,
               StaticRegisterNativesADecalActor,0x2c8,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,
               L"Engine",InternalConstructor<ADecalActor>,
               InternalVTableHelperCtorCaller<ADecalActor>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADecalActor.InnerSingleton;
}

// PostLoad @ 147afcc30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADecalActor::PostLoad(ADecalActor *this)

{
  byte *pbVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FPackageFileVersion FVar6;
  ForAnyElementType *pFVar7;
  ADecalActor *apAStack_18 [2];
  
  UObject::PostLoad((UObject *)this);
  lVar2 = this->_padding_;
  if (lVar2 != 0) {
    pFVar7 = (ForAnyElementType *)(lVar2 + 0x1a8);
    apAStack_18[0] = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    if ((pFVar7->Data <= (FScriptContainerElement *)apAStack_18) &&
       ((FScriptContainerElement *)apAStack_18 <
        pFVar7->Data + (longlong)*(int *)(lVar2 + 0x1b4) * 8)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = *(int *)(lVar2 + 0x1b0);
    if (iVar5 == *(int *)(lVar2 + 0x1b4)) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,pFVar7,(int *)(lVar2 + 0x1b4));
    }
    *(int *)(lVar2 + 0x1b0) = iVar5 + 1;
    *(ADecalActor **)(pFVar7->Data + (longlong)iVar5 * 8) = apAStack_18[0];
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (apAStack_18[0] != (ADecalActor *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)apAStack_18[0]);
    }
  }
  FVar6 = UObjectBaseUtility::GetLinkerUEVersion((UObjectBaseUtility *)this);
  if (*(int *)FVar6 < 0x156) {
    *(byte *)((longlong)&this->_padding_ + 3) =
         -((char)this->_padding_ != '\0') & 8U | *(byte *)((longlong)&this->_padding_ + 3) & 0xf7;
  }
  if ((this->_padding_ & 0x10) != 0) {
    pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
    *pbVar1 = *pbVar1 & 0xfb;
  }
  pbVar1 = (byte *)((longlong)&this->_padding_ + 4);
  *pbVar1 = *pbVar1 | 1;
  return;
}

// Serialize @ 147b10930

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADecalActor::Serialize(ADecalActor *this,FArchive *param_1)

{
  UDecalComponent *pUVar1;
  TVector<double>_u_0 local_28;
  
  if ((*(int *)&param_1->field_0x40 < 0x1e3) &&
     (pUVar1 = (this->Decal).field0_0x0.DebugPtr, pUVar1 != (UDecalComponent *)0x0)) {
    local_28._s_0.X = ___xmm_40700000000000004060000000000000;
    local_28._s_0.Y = _UNK_15185d558;
    local_28._s_0.Z = __real_4070000000000000;
    USceneComponent::SetRelativeScale3D_Direct
              ((USceneComponent *)pUVar1,(TVector<double> *)&local_28._s_0);
  }
  AActor::Serialize((AActor *)this,param_1);
  if ((*(int *)&param_1->field_0x40 < 0x1e3) &&
     (pUVar1 = (this->Decal).field0_0x0.DebugPtr, pUVar1 != (UDecalComponent *)0x0)) {
    (pUVar1->DecalSize).field0_0x0._s_0.X = 1.0;
    (pUVar1->DecalSize).field0_0x0._s_0.Y = 1.0;
    (pUVar1->DecalSize).field0_0x0._s_0.Z = 1.0;
  }
  return;
}

// Serialize @ 147b109d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADecalActor::Serialize(ADecalActor *this,FStructuredArchiveRecord param_1)

{
  UDecalComponent *pUVar1;
  FArchive *pFVar2;
  FSlotBase local_res10 [3];
  TVector<double>_u_0 local_28;
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar2 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  if ((*(int *)&pFVar2->field_0x40 < 0x1e3) &&
     (pUVar1 = (this->Decal).field0_0x0.DebugPtr, pUVar1 != (UDecalComponent *)0x0)) {
    local_28._s_0.X = ___xmm_40700000000000004060000000000000;
    local_28._s_0.Y = _UNK_15185d558;
    local_28._s_0.Z = __real_4070000000000000;
    USceneComponent::SetRelativeScale3D_Direct
              ((USceneComponent *)pUVar1,(TVector<double> *)&local_28._s_0);
  }
  AActor::Serialize((AActor *)this,pFVar2);
  if ((*(int *)&pFVar2->field_0x40 < 0x1e3) &&
     (pUVar1 = (this->Decal).field0_0x0.DebugPtr, pUVar1 != (UDecalComponent *)0x0)) {
    (pUVar1->DecalSize).field0_0x0._s_0.X = 1.0;
    (pUVar1->DecalSize).field0_0x0._s_0.Y = 1.0;
    (pUVar1->DecalSize).field0_0x0._s_0.Z = 1.0;
  }
  return;
}

// SetDecalMaterial @ 147b11cf0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADecalActor::SetDecalMaterial(ADecalActor *this,UMaterialInterface *param_1)

{
  UDecalComponent *this_00;
  
  this_00 = (this->Decal).field0_0x0.DebugPtr;
  if (this_00 == (UDecalComponent *)0x0) {
    return;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMaterialInterface *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this_00->DecalMaterial).field0_0x0.DebugPtr = param_1;
  (**(code **)(*(longlong *)this_00 + 0x378))(this_00);
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this_00);
  return;
}

// StaticRegisterNativesADecalActor @ 147b171a0

void __cdecl ADecalActor::StaticRegisterNativesADecalActor(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_ADecalActor_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execCreateDynamicMaterialInstance @ 147b24d50

void __cdecl
ADecalActor::execCreateDynamicMaterialInstance(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x760))();
  *(undefined8 *)param_3 = uVar1;
  return;
}

// execGetDecalMaterial @ 147b263b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl ADecalActor::execGetDecalMaterial(UObject *param_1,FFrame *param_2,void *param_3)

{
  UMaterialInterface *pUVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(UDecalComponent **)&param_1[0x11].field_0x18 != (UDecalComponent *)0x0) {
    pUVar1 = UDecalComponent::GetDecalMaterial(*(UDecalComponent **)&param_1[0x11].field_0x18);
    *(UMaterialInterface **)param_3 = pUVar1;
    return;
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execSetDecalMaterial @ 147b26680

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl ADecalActor::execSetDecalMaterial(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UMaterialInterface *local_res8;
  
  local_res8 = (UMaterialInterface *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(UDecalComponent **)&param_1[0x11].field_0x18 != (UDecalComponent *)0x0) {
    UDecalComponent::SetDecalMaterial(*(UDecalComponent **)&param_1[0x11].field_0x18,local_res8);
  }
  return;
}

