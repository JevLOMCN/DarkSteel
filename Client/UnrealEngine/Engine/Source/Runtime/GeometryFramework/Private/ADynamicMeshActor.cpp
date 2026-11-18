// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryFramework
// Functions: 17

// StaticClass @ 1496e9210

UClass * __cdecl ADynamicMeshActor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADynamicMeshActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryFramework",L"DynamicMeshActor",
               &Z_Registration_Info_UClass_ADynamicMeshActor.InnerSingleton,
               StaticRegisterNativesADynamicMeshActor,0x2d8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ADynamicMeshActor>,
               InternalVTableHelperCtorCaller<ADynamicMeshActor>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADynamicMeshActor.InnerSingleton;
}

// ADynamicMeshActor @ 1496f83c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ADynamicMeshActor * __thiscall
ADynamicMeshActor::ADynamicMeshActor(ADynamicMeshActor *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->bEnableComputeMeshPool = true;
  this->_padding_ = (longlong)&___7ADynamicMeshActor__6B_;
  (this->DynamicMeshComponent).field0_0x0.DebugPtr = (UDynamicMeshComponent *)0x0;
  (this->DynamicMeshPool).field0_0x0.DebugPtr = (UDynamicMeshPool *)0x0;
  return this;
}

// ADynamicMeshActor @ 1496f8400

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ADynamicMeshActor * __thiscall
ADynamicMeshActor::ADynamicMeshActor(ADynamicMeshActor *this,FObjectInitializer *param_1)

{
  FName FVar1;
  code *pcVar2;
  FName *pFVar3;
  UClass *pUVar4;
  UDynamicMeshComponent *pUVar5;
  UMaterial *pUVar6;
  FName local_res8;
  
  AActor::AActor((AActor *)this,param_1);
  this->bEnableComputeMeshPool = true;
  this->_padding_ = (longlong)&___7ADynamicMeshActor__6B_;
  (this->DynamicMeshComponent).field0_0x0.DebugPtr = (UDynamicMeshComponent *)0x0;
  (this->DynamicMeshPool).field0_0x0.DebugPtr = (UDynamicMeshPool *)0x0;
  pFVar3 = ::FName::FName(&local_res8,L"DynamicMeshComponent");
  FVar1 = *pFVar3;
  pUVar4 = UDynamicMeshComponent::StaticClass();
  pUVar5 = (UDynamicMeshComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar4,pUVar4,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar5 != (UDynamicMeshComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->DynamicMeshComponent).field0_0x0.DebugPtr = pUVar5;
  (**(code **)(pUVar5->_padding_ + 0x5f8))(pUVar5);
  UPrimitiveComponent::SetGenerateOverlapEvents
            ((UPrimitiveComponent *)(this->DynamicMeshComponent).field0_0x0.DebugPtr,false);
  pUVar5 = (this->DynamicMeshComponent).field0_0x0.DebugPtr;
  (**(code **)(pUVar5->_padding_ + 0x788))(pUVar5,UCollisionProfile::BlockAll_ProfileName,1);
  (((this->DynamicMeshComponent).field0_0x0.DebugPtr)->CollisionType).Value = '\0';
  pUVar5 = (this->DynamicMeshComponent).field0_0x0.DebugPtr;
  pcVar2 = *(code **)(pUVar5->_padding_ + 0x6b8);
  pUVar6 = UMaterial::GetDefaultMaterial(MD_Surface);
  (*pcVar2)(pUVar5,0,pUVar6);
  AActor::SetRootComponent
            ((AActor *)this,(USceneComponent *)(this->DynamicMeshComponent).field0_0x0.DebugPtr);
  return this;
}

// ~ADynamicMeshActor @ 1496fab40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADynamicMeshActor::~ADynamicMeshActor(ADynamicMeshActor *this)

{
  this->_padding_ = (longlong)&___7ADynamicMeshActor__6B_;
  AActor::~AActor((AActor *)this);
  return;
}

// AllocateComputeMesh @ 149702750

UDynamicMesh * __thiscall ADynamicMeshActor::AllocateComputeMesh(ADynamicMeshActor *this)

{
  UDynamicMeshPool *this_00;
  UDynamicMesh *pUVar1;
  
  if (this->bEnableComputeMeshPool != false) {
    this_00 = GetComputeMeshPool(this);
    if (this_00 != (UDynamicMeshPool *)0x0) {
      pUVar1 = UDynamicMeshPool::RequestMesh(this_00);
      return pUVar1;
    }
  }
  pUVar1 = NewObject<UDynamicMesh>((UObject *)this);
  return pUVar1;
}

// FreeAllComputeMeshes @ 14970c2a0

void __thiscall ADynamicMeshActor::FreeAllComputeMeshes(ADynamicMeshActor *this)

{
  UDynamicMeshPool *this_00;
  
  this_00 = GetComputeMeshPool(this);
  if (this_00 != (UDynamicMeshPool *)0x0) {
    UDynamicMeshPool::FreeAllMeshes(this_00);
    return;
  }
  return;
}

// GetComputeMeshPool @ 14970f1d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDynamicMeshPool * __thiscall ADynamicMeshActor::GetComputeMeshPool(ADynamicMeshActor *this)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDynamicMeshPool *pUVar3;
  longlong *plVar4;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  pUVar3 = (this->DynamicMeshPool).field0_0x0.DebugPtr;
  if (pUVar3 == (UDynamicMeshPool *)0x0) {
    if (this->bEnableComputeMeshPool == false) {
      pUVar3 = (UDynamicMeshPool *)0x0;
    }
    else {
      pUVar1 = GetTransientPackageAsObject();
      FObjectInitializer::AssertIfInConstructor
                (pUVar1,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar2 = UDynamicMeshPool::StaticClass();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_98,pUVar2);
      local_98._8_8_ = pUVar1;
      pUVar3 = (UDynamicMeshPool *)
               StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
      if (local_98._64_8_ != 0) {
        plVar4 = (longlong *)(local_98 + 0x50);
        if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
          plVar4 = (longlong *)local_98._104_8_;
        }
        (**(code **)(*plVar4 + 0x10))();
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar3 != (UDynamicMeshPool *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      (this->DynamicMeshPool).field0_0x0.DebugPtr = pUVar3;
    }
  }
  return pUVar3;
}

// GetPrivateStaticClass @ 149711050

UClass * __cdecl ADynamicMeshActor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADynamicMeshActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryFramework",L"DynamicMeshActor",
               &Z_Registration_Info_UClass_ADynamicMeshActor.InnerSingleton,
               StaticRegisterNativesADynamicMeshActor,0x2d8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ADynamicMeshActor>,
               InternalVTableHelperCtorCaller<ADynamicMeshActor>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADynamicMeshActor.InnerSingleton;
}

// ReleaseAllComputeMeshes @ 1497160f0

void __thiscall ADynamicMeshActor::ReleaseAllComputeMeshes(ADynamicMeshActor *this)

{
  UDynamicMeshPool *this_00;
  
  this_00 = GetComputeMeshPool(this);
  if (this_00 != (UDynamicMeshPool *)0x0) {
    UDynamicMeshPool::ReturnAllMeshes(this_00);
    return;
  }
  return;
}

// ReleaseComputeMesh @ 149716120

bool __thiscall ADynamicMeshActor::ReleaseComputeMesh(ADynamicMeshActor *this,UDynamicMesh *param_1)

{
  UDynamicMeshPool *this_00;
  
  if ((this->bEnableComputeMeshPool != false) && (param_1 != (UDynamicMesh *)0x0)) {
    this_00 = GetComputeMeshPool(this);
    if (this_00 != (UDynamicMeshPool *)0x0) {
      UDynamicMeshPool::ReturnMesh(this_00,param_1);
      return true;
    }
  }
  return false;
}

// StaticRegisterNativesADynamicMeshActor @ 14971aa30

void __cdecl ADynamicMeshActor::StaticRegisterNativesADynamicMeshActor(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 6;
  local_18.DataPtr = Z_Construct_UClass_ADynamicMeshActor_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAllocateComputeMesh @ 14971de00

void __cdecl
ADynamicMeshActor::execAllocateComputeMesh(UObject *param_1,FFrame *param_2,void *param_3)

{
  UDynamicMeshPool *this;
  UDynamicMesh *pUVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (param_1[0x11].field_0x20 != '\0') {
    this = GetComputeMeshPool((ADynamicMeshActor *)param_1);
    if (this != (UDynamicMeshPool *)0x0) {
      pUVar1 = UDynamicMeshPool::RequestMesh(this);
      *(UDynamicMesh **)param_3 = pUVar1;
      return;
    }
  }
  pUVar1 = NewObject<UDynamicMesh>(param_1);
  *(UDynamicMesh **)param_3 = pUVar1;
  return;
}

// execFreeAllComputeMeshes @ 14971e190

void __cdecl
ADynamicMeshActor::execFreeAllComputeMeshes(UObject *param_1,FFrame *param_2,void *param_3)

{
  UDynamicMeshPool *this;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = GetComputeMeshPool((ADynamicMeshActor *)param_1);
  if (this != (UDynamicMeshPool *)0x0) {
    UDynamicMeshPool::FreeAllMeshes(this);
    return;
  }
  return;
}

// execGetComputeMeshPool @ 14971e230

void __cdecl
ADynamicMeshActor::execGetComputeMeshPool(UObject *param_1,FFrame *param_2,void *param_3)

{
  UDynamicMeshPool *pUVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar1 = GetComputeMeshPool((ADynamicMeshActor *)param_1);
  *(UDynamicMeshPool **)param_3 = pUVar1;
  return;
}

// execGetDynamicMeshComponent @ 14971e330

void __cdecl
ADynamicMeshActor::execGetDynamicMeshComponent(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[0x11].field_0x18;
  return;
}

// execReleaseAllComputeMeshes @ 14971e9e0

void __cdecl
ADynamicMeshActor::execReleaseAllComputeMeshes(UObject *param_1,FFrame *param_2,void *param_3)

{
  UDynamicMeshPool *this;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = GetComputeMeshPool((ADynamicMeshActor *)param_1);
  if (this != (UDynamicMeshPool *)0x0) {
    UDynamicMeshPool::ReturnAllMeshes(this);
    return;
  }
  return;
}

// execReleaseComputeMesh @ 14971ea20

void __cdecl
ADynamicMeshActor::execReleaseComputeMesh(UObject *param_1,FFrame *param_2,void *param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  FProperty *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  UDynamicMesh *this;
  undefined1 uVar5;
  int iVar6;
  UDynamicMeshPool *pUVar7;
  char *pcVar8;
  FScriptContainerElement *pFVar9;
  atomic<unsigned_char> *paVar10;
  bool bVar11;
  UDynamicMesh *local_res8;
  UDynamicMesh *local_18 [2];
  
  local_res8 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  this = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (((param_1[0x11].field_0x20 == '\0') || (local_res8 == (UDynamicMesh *)0x0)) ||
     (pUVar7 = GetComputeMeshPool((ADynamicMeshActor *)param_1), pUVar7 == (UDynamicMeshPool *)0x0))
  {
    uVar5 = 0;
    goto LAB_14971ec81;
  }
  lpCriticalSection = &pUVar7->PoolAccessCs;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar9 = (pUVar7->AllCreatedMeshes).AllocatorInstance.Data;
  pFVar3 = pFVar9 + (longlong)(pUVar7->AllCreatedMeshes).ArrayNum * 8;
  for (; pFVar9 != pFVar3; pFVar9 = pFVar9 + 8) {
    if (*(UDynamicMesh **)pFVar9 == (UDynamicMesh *)0x0) {
      bVar11 = this == (UDynamicMesh *)0x0;
    }
    else {
      bVar11 = *(UDynamicMesh **)pFVar9 == this;
    }
    if (bVar11) {
      UDynamicMesh::Reset(this);
      pFVar9 = (pUVar7->CachedMeshes).AllocatorInstance.Data;
      pFVar3 = pFVar9 + (longlong)(pUVar7->CachedMeshes).ArrayNum * 8;
      goto joined_r0x00014971eb5b;
    }
  }
  pcVar8 = "AllCreatedMeshes.Contains(Mesh)";
  iVar6 = 0x278;
  paVar10 = &bGEnsureHasExecuted<227773480190345848>;
LAB_14971eb1b:
  bVar11 = UE::Assert::Private::ExecCheckImplInternal
                     (paVar10,false,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Private\\UDynamicMesh.cpp"
                      ,iVar6,pcVar8);
  if (bVar11) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  goto LAB_14971eb34;
joined_r0x00014971eb5b:
  if (pFVar9 == pFVar3) goto LAB_14971eb84;
  if (*(UDynamicMesh **)pFVar9 == (UDynamicMesh *)0x0) {
    bVar11 = this == (UDynamicMesh *)0x0;
  }
  else {
    bVar11 = *(UDynamicMesh **)pFVar9 == this;
  }
  if (bVar11) {
    pcVar8 = "CachedMeshes.Contains(Mesh) == false";
    iVar6 = 0x27b;
    paVar10 = &bGEnsureHasExecuted<227773480190345851>;
    goto LAB_14971eb1b;
  }
  pFVar9 = pFVar9 + 8;
  goto joined_r0x00014971eb5b;
LAB_14971eb84:
  local_18[0] = this;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  pFVar3 = (pUVar7->CachedMeshes).AllocatorInstance.Data;
  if (((pFVar3 <= (FScriptContainerElement *)local_18) &&
      ((FScriptContainerElement *)local_18 < pFVar3 + (longlong)(pUVar7->CachedMeshes).ArrayMax * 8)
      ) && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar6 = (pUVar7->CachedMeshes).ArrayNum;
  piVar1 = &(pUVar7->CachedMeshes).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(pUVar7->CachedMeshes).AllocatorInstance,piVar1);
  }
  (pUVar7->CachedMeshes).ArrayNum = iVar6 + 1;
  *(UDynamicMesh **)((pUVar7->CachedMeshes).AllocatorInstance.Data + (longlong)iVar6 * 8) =
       local_18[0];
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_18[0] != (UDynamicMesh *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)local_18[0]);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    uVar5 = 1;
    goto LAB_14971ec81;
  }
LAB_14971eb34:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar5 = 1;
LAB_14971ec81:
  *(undefined1 *)param_3 = uVar5;
  return;
}

