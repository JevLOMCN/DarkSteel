// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProceduralMeshComponent
// Functions: 52

// StaticClass @ 14d262320

UClass * __cdecl UProceduralMeshComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UProceduralMeshComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProceduralMeshComponent",L"ProceduralMeshComponent",
               &Z_Registration_Info_UClass_UProceduralMeshComponent.InnerSingleton,
               StaticRegisterNativesUProceduralMeshComponent,0x610,0x10,CLASS_Intrinsic|CLASS_Config
               ,CASTCLASS_None,L"Engine",InternalConstructor<UProceduralMeshComponent>,
               InternalVTableHelperCtorCaller<UProceduralMeshComponent>,local_res8,
               UMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UProceduralMeshComponent.InnerSingleton;
}

// UProceduralMeshComponent @ 14d2650d0

UProceduralMeshComponent * __thiscall
UProceduralMeshComponent::UProceduralMeshComponent
          (UProceduralMeshComponent *this,FVTableHelper *param_1)

{
  UMeshComponent::UMeshComponent((UMeshComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  this->_padding_ = (longlong)&___7UProceduralMeshComponent__6B_;
  (this->ProcMeshBodySetup).field0_0x0.DebugPtr = (UBodySetup *)0x0;
  (this->ProcMeshSections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ProcMeshSections).ArrayNum = 0;
  (this->ProcMeshSections).ArrayMax = 0;
  (this->CollisionConvexElems).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CollisionConvexElems).ArrayNum = 0;
  (this->CollisionConvexElems).ArrayMax = 0;
  (this->AsyncBodySetupQueue).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AsyncBodySetupQueue).ArrayNum = 0;
  (this->AsyncBodySetupQueue).ArrayMax = 0;
  return this;
}

// UProceduralMeshComponent @ 14d265180

UProceduralMeshComponent * __thiscall
UProceduralMeshComponent::UProceduralMeshComponent
          (UProceduralMeshComponent *this,FObjectInitializer *param_1)

{
  UMeshComponent::UMeshComponent((UMeshComponent *)this,param_1);
  this->bUseComplexAsSimpleCollision = true;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  this->_padding_ = (longlong)&___7UProceduralMeshComponent__6B_;
  (this->ProcMeshBodySetup).field0_0x0.DebugPtr = (UBodySetup *)0x0;
  (this->ProcMeshSections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ProcMeshSections).ArrayNum = 0;
  (this->ProcMeshSections).ArrayMax = 0;
  (this->CollisionConvexElems).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CollisionConvexElems).ArrayNum = 0;
  (this->CollisionConvexElems).ArrayMax = 0;
  (this->AsyncBodySetupQueue).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AsyncBodySetupQueue).ArrayNum = 0;
  (this->AsyncBodySetupQueue).ArrayMax = 0;
  return this;
}

// ~UProceduralMeshComponent @ 14d265810

void __thiscall UProceduralMeshComponent::~UProceduralMeshComponent(UProceduralMeshComponent *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  this->_padding_ = (longlong)&___7UProceduralMeshComponent__6B_;
  pFVar1 = (this->AsyncBodySetupQueue).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FKConvexElem,int>
            ((FKConvexElem *)(this->CollisionConvexElems).AllocatorInstance.Data,
             (this->CollisionConvexElems).ArrayNum);
  pFVar1 = (this->CollisionConvexElems).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FProcMeshSection,int>
            ((FProcMeshSection *)(this->ProcMeshSections).AllocatorInstance.Data,
             (this->ProcMeshSections).ArrayNum);
  pFVar1 = (this->ProcMeshSections).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IInterface_CollisionDataProvider__6B_;
  UMeshComponent::~UMeshComponent((UMeshComponent *)this);
  return;
}

// operator() @ 14d265aa0

void __thiscall
`UProceduralMeshComponent::SetMeshSectionVisible'::__l8::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  undefined1 uVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  
  lVar3 = *(longlong *)this;
  uVar1 = *(undefined1 *)((longlong)this + 0xc);
  uVar2 = *(uint *)((longlong)this + 8);
  bVar5 = IsInRenderingThread();
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ProceduralMeshComponent\\Source\\ProceduralMeshComponent\\Private\\ProceduralMeshComponent.cpp"
                         ,300,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((int)uVar2 < *(int *)(lVar3 + 0x288)) {
    if (((int)uVar2 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (*(longlong *)(*(longlong *)(lVar3 + 0x280) + (longlong)(int)uVar2 * 8) != 0) {
      uVar6 = 0;
      if ((int)uVar2 < *(int *)(lVar3 + 0x288)) {
        uVar6 = ~uVar2 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *(undefined1 *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x280) + (longlong)(int)uVar2 * 8) + 0x3d0) = uVar1;
    }
  }
  return;
}

// AddCollisionConvexMesh @ 14d2663e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UProceduralMeshComponent::AddCollisionConvexMesh
          (UProceduralMeshComponent *this,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  TArray<FKConvexElem,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  FKConvexElem *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStackY_1b8 [32];
  TVector<double>_u_0 local_168;
  double dStack_150;
  double local_148;
  double dStack_140;
  uchar local_138;
  uchar uStack_137;
  uchar uStack_136;
  uchar uStack_135;
  uchar uStack_134;
  uchar uStack_133;
  uchar uStack_132;
  uchar uStack_131;
  FKConvexElem local_128;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  if (3 < param_1->ArrayNum) {
    FKConvexElem::FKConvexElem(&local_128);
    if (&local_128.VertexData != param_1) {
      local_128.VertexData.ArrayNum = param_1->ArrayNum;
      lVar8 = (longlong)local_128.VertexData.ArrayNum;
      pFVar3 = (param_1->AllocatorInstance).Data;
      if (local_128.VertexData.ArrayNum == 0) {
        if (local_128.VertexData.ArrayMax != 0) {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,0,local_128.VertexData.ArrayMax,&local_128.VertexData.AllocatorInstance,
                     0,&local_128.VertexData.ArrayMax);
        }
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,local_128.VertexData.ArrayNum,local_128.VertexData.ArrayMax,
                   &local_128.VertexData.AllocatorInstance,local_128.VertexData.ArrayNum,
                   &local_128.VertexData.ArrayMax);
        memcpy(local_128.VertexData.AllocatorInstance.Data,pFVar3,lVar8 * 0x18);
      }
    }
    iVar7 = param_1->ArrayNum;
    if ((iVar7 < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    UE::Math::TBox<double>::TBox<double>
              ((TBox<double> *)&local_168._s_0,(TVector<double> *)(param_1->AllocatorInstance).Data,
               iVar7);
    pTVar2 = &this->CollisionConvexElems;
    pFVar4 = (FKConvexElem *)(pTVar2->AllocatorInstance).Data;
    local_128.ElemBox.Min.field0_0x0._s_0.X = local_168._s_0.X;
    local_128.ElemBox.Min.field0_0x0._s_0.Y = local_168._s_0.Y;
    local_128.ElemBox.Min.field0_0x0._s_0.Z = local_168._s_0.Z;
    local_128.ElemBox.Max.field0_0x0._s_0.X = dStack_150;
    local_128.ElemBox.IsValid = local_138;
    local_128.ElemBox.Pad[0] = uStack_137;
    local_128.ElemBox.Pad[1] = uStack_136;
    local_128.ElemBox.Pad[2] = uStack_135;
    local_128.ElemBox.Pad[3] = uStack_134;
    local_128.ElemBox.Pad[4] = uStack_133;
    local_128.ElemBox.Pad[5] = uStack_132;
    local_128.ElemBox.Pad[6] = uStack_131;
    local_128.ElemBox.Max.field0_0x0._s_0.Y = local_148;
    local_128.ElemBox.Max.field0_0x0._s_0.Z = dStack_140;
    if (((pFVar4 <= &local_128) && (&local_128 < pFVar4 + (this->CollisionConvexElems).ArrayMax)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar7 = (this->CollisionConvexElems).ArrayNum;
    piVar1 = &(this->CollisionConvexElems).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x100,0x10,&pTVar2->AllocatorInstance,piVar1);
    }
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    (this->CollisionConvexElems).ArrayNum = iVar7 + 1;
    FKConvexElem::FKConvexElem((FKConvexElem *)(pFVar3 + (longlong)iVar7 * 0x100),&local_128);
    UpdateCollision(this);
    FKConvexElem::~FKConvexElem(&local_128);
  }
  pFVar3 = (param_1->AllocatorInstance).Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// CalcBounds @ 14d268410

TBoxSphereBounds<double,double> * __thiscall
UProceduralMeshComponent::CalcBounds
          (UProceduralMeshComponent *this,TBoxSphereBounds<double,double> *__return_storage_ptr__,
          TTransform<double> *param_1)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  TMatrix<double> local_88;
  
  UE::Math::TTransform<double>::ToMatrixWithScale(param_1,&local_88);
  UE::Math::TBoxSphereBounds<double,double>::TransformBy
            (&this->LocalBounds,__return_storage_ptr__,&local_88);
  dVar4 = (double)*(float *)((longlong)&this->_padding_ + 4);
  dVar3 = (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y * dVar4;
  dVar1 = (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z;
  auVar2._8_4_ = SUB84(dVar3,0);
  auVar2._0_8_ = (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X * dVar4;
  auVar2._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *(undefined1 (*) [16])&(__return_storage_ptr__->BoxExtent).field0_0x0 = auVar2;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = dVar4 * dVar1;
  __return_storage_ptr__->SphereRadius =
       (double)*(float *)((longlong)&this->_padding_ + 4) * __return_storage_ptr__->SphereRadius;
  return __return_storage_ptr__;
}

// ClearAllMeshSections @ 14d26a700

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UProceduralMeshComponent::ClearAllMeshSections(UProceduralMeshComponent *this)

{
  int *piVar1;
  
  DestructItems<FProcMeshSection,int>
            ((FProcMeshSection *)(this->ProcMeshSections).AllocatorInstance.Data,
             (this->ProcMeshSections).ArrayNum);
  piVar1 = &(this->ProcMeshSections).ArrayMax;
  (this->ProcMeshSections).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,8,0,&(this->ProcMeshSections).AllocatorInstance,0,piVar1);
  }
  UpdateLocalBounds(this);
  UpdateCollision(this);
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  return;
}

// ClearCollisionConvexMeshes @ 14d26a780

void __thiscall UProceduralMeshComponent::ClearCollisionConvexMeshes(UProceduralMeshComponent *this)

{
  int *piVar1;
  
  DestructItems<FKConvexElem,int>
            ((FKConvexElem *)(this->CollisionConvexElems).AllocatorInstance.Data,
             (this->CollisionConvexElems).ArrayNum);
  piVar1 = &(this->CollisionConvexElems).ArrayMax;
  (this->CollisionConvexElems).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x100,0x10,0,&(this->CollisionConvexElems).AllocatorInstance,0,piVar1);
  }
  UpdateCollision(this);
  return;
}

// ClearMeshSection @ 14d26a7f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UProceduralMeshComponent::ClearMeshSection(UProceduralMeshComponent *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 < (this->ProcMeshSections).ArrayNum) {
    if (param_1 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FProcMeshSection::Reset
              ((FProcMeshSection *)
               ((this->ProcMeshSections).AllocatorInstance.Data + (longlong)param_1 * 0x60));
    UpdateLocalBounds(this);
    UpdateCollision(this);
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  return;
}

// ContainsPhysicsTriMeshData @ 14d26a940

bool __thiscall
UProceduralMeshComponent::ContainsPhysicsTriMeshData(UProceduralMeshComponent *this,bool param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (int)this->_padding_;
  lVar2 = this->_padding_;
  lVar3 = (longlong)iVar1 * 0x60 + lVar2;
  while( true ) {
    if ((int)this->_padding_ != iVar1) {
      `TCheckedPointerIterator<FProcMeshSection_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (lVar2 == lVar3) break;
    if ((2 < *(int *)(lVar2 + 0x18)) && (*(char *)(lVar2 + 0x58) != '\0')) {
      return true;
    }
    lVar2 = lVar2 + 0x60;
  }
  return false;
}

// CreateBodySetupHelper @ 14d26b240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UBodySetup * __thiscall
UProceduralMeshComponent::CreateBodySetupHelper(UProceduralMeshComponent *this)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  UClass *pUVar6;
  UBodySetup *pUVar7;
  FGuid *pFVar8;
  longlong *plVar9;
  undefined1 auStack_c8 [32];
  FGuid local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  bVar5 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  local_a8.A = 0;
  local_a8.B = 0;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar6 = Z_Construct_UClass_UBodySetup_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar6);
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_98._16_4_ = 0;
  local_98._20_4_ = 0;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_98._8_8_ = this;
  local_98._24_4_ = -(uint)bVar5 & (RF_ArchetypeObject|RF_Public);
  pUVar7 = (UBodySetup *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar9 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar9 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  pFVar8 = FGuid::NewGuid(&local_a8);
  uVar1 = pFVar8->A;
  uVar2 = pFVar8->B;
  uVar3 = pFVar8->C;
  uVar4 = pFVar8->D;
  pUVar7->bGenerateMirroredCollision = '\0';
  pUVar7->bDoubleSidedGeometry = '\x01';
  (pUVar7->BodySetupGuid).A = uVar1;
  (pUVar7->BodySetupGuid).B = uVar2;
  (pUVar7->BodySetupGuid).C = uVar3;
  (pUVar7->BodySetupGuid).D = uVar4;
  *(byte *)((longlong)&pUVar7->_padding_ + 1) = -(this->bUseComplexAsSimpleCollision != false) & 3;
  return pUVar7;
}

// CreateMeshSection @ 14d26cdf0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UProceduralMeshComponent::CreateMeshSection
          (UProceduralMeshComponent *this,int param_1,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_4,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_5,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_6,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_7,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_8,
          TArray<FColor,TSizedDefaultAllocator<32>_> *param_9,
          TArray<FProcMeshTangent,TSizedDefaultAllocator<32>_> *param_10,bool param_11)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  int iVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  code *pcVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  bool bVar15;
  bool bVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  bool bVar20;
  bool bVar21;
  int iVar22;
  int iVar23;
  FName *pFVar24;
  FThreadSafeStaticStat<FStat_STAT_ProcMesh_CreateMeshSection> FVar25;
  undefined8 *puVar26;
  longlong lVar27;
  uint uVar28;
  int iVar29;
  FProcMeshSection *this_00;
  uint uVar30;
  uint uVar31;
  longlong lVar32;
  int iVar33;
  int iVar34;
  longlong lVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  longlong local_1c8;
  longlong local_1c0;
  longlong local_1b8;
  FName local_1a8;
  FColor_u_0 local_1a0 [2];
  FName local_198;
  FName local_190;
  FName local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  FString local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  
  FVar25 = StatPtr_STAT_ProcMesh_CreateMeshSection;
  if (StatPtr_STAT_ProcMesh_CreateMeshSection ==
      (FThreadSafeStaticStat<FStat_STAT_ProcMesh_CreateMeshSection>)0x0) {
    pFVar24 = ::FName::FName(&local_180,"STAT_ProcMesh_CreateMeshSection");
    FVar25 = (FThreadSafeStaticStat<FStat_STAT_ProcMesh_CreateMeshSection>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ProcMesh_CreateMeshSection,
                        *pFVar24,L"Create Mesh Section","STATGROUP_ProceduralMesh",
                        "STATCAT_Advanced",L"ProceduralMesh",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  bVar15 = false;
  bVar16 = false;
  local_190.ComparisonIndex.Value = 0;
  local_190.Number = 0;
  local_1a8 = *(FName *)FVar25;
  bVar20 = false;
  bVar21 = false;
  if ((local_1a8.ComparisonIndex.Value.Value != 0) || (local_1a8.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1a0[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1a0[0]._s_0,(char *)*(FName *)((longlong)FVar25 + 0x10));
      bVar15 = false;
      bVar16 = true;
      bVar20 = false;
      bVar21 = true;
      if (-1 < CpuChannel->Enabled) {
        local_198.ComparisonIndex.Value = local_1a8.ComparisonIndex.Value.Value;
        local_198.Number = local_1a8.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_198,(wchar_t *)*(FName *)((longlong)FVar25 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ProceduralMeshComponent\\Source\\ProceduralMeshComponent\\Private\\ProceduralMeshComponent.cpp"
                   ,0x226);
        bVar15 = true;
        bVar16 = true;
        bVar20 = true;
        bVar21 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(local_1a8,CycleScopeStart);
      bVar20 = true;
      goto LAB_14d26cf75;
    }
  }
  bVar16 = bVar21;
  bVar15 = bVar20;
  bVar20 = false;
  local_1a8 = local_190;
LAB_14d26cf75:
  if ((this->ProcMeshSections).ArrayNum <= param_1) {
    TArray<FProcMeshSection,TSizedDefaultAllocator<32>_>::SetNum
              (&this->ProcMeshSections,param_1 + 1,No);
  }
  uVar30 = 0;
  if (param_1 < (this->ProcMeshSections).ArrayNum) {
    uVar30 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar30 == 0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar21)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  this_00 = (FProcMeshSection *)
            ((this->ProcMeshSections).AllocatorInstance.Data + (longlong)param_1 * 0x60);
  FProcMeshSection::Reset(this_00);
  piVar1 = &(this_00->ProcVertexBuffer).ArrayMax;
  iVar29 = param_2->ArrayNum;
  piVar2 = &(this_00->ProcVertexBuffer).ArrayNum;
  *piVar2 = 0;
  if ((this_00->ProcVertexBuffer).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x98,8,0,(ForAnyElementType *)this_00,0,piVar1);
  }
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x98,8,iVar29,(ForAnyElementType *)this_00,piVar2,piVar1);
  uVar19 = _UNK_150689518;
  uVar18 = ___xmm_00000000000000003ff0000000000000;
  uVar17 = __real_3ff0000000000000;
  uVar30 = 0;
  if (0 < iVar29) {
    lVar27 = 0;
    lVar35 = 0;
    local_1c8 = 0;
    local_1c0 = 0;
    local_1b8 = 0;
    do {
      uVar28 = ~uVar30 >> 0x1f;
      uVar31 = 0;
      if ((int)uVar30 < (this_00->ProcVertexBuffer).ArrayNum) {
        uVar31 = uVar28;
      }
      if ((uVar31 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pFVar10 = (this_00->ProcVertexBuffer).AllocatorInstance.Data;
      uVar31 = 0;
      if ((int)uVar30 < param_2->ArrayNum) {
        uVar31 = uVar28;
      }
      if ((uVar31 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pFVar11 = (param_2->AllocatorInstance).Data;
      pFVar3 = pFVar11 + local_1b8;
      uVar4 = *(undefined8 *)(pFVar3 + 8);
      *(undefined8 *)(pFVar10 + lVar35) = *(undefined8 *)pFVar3;
      *(undefined8 *)(pFVar10 + lVar35 + 8) = uVar4;
      *(undefined8 *)(pFVar10 + lVar35 + 0x10) = *(undefined8 *)(pFVar11 + local_1b8 + 0x10);
      if (param_4->ArrayNum == iVar29) {
        uVar31 = 0;
        if ((int)uVar30 < param_4->ArrayNum) {
          uVar31 = uVar28;
        }
        if ((uVar31 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pFVar11 = (param_4->AllocatorInstance).Data;
        pFVar3 = pFVar11 + local_1b8;
        puVar26 = &local_e8;
        local_e8 = *(undefined8 *)pFVar3;
        uStack_e0 = *(undefined8 *)(pFVar3 + 8);
        local_d8 = *(undefined8 *)(pFVar11 + local_1b8 + 0x10);
      }
      else {
        local_c0 = uVar17;
        local_d0 = 0;
        uStack_c8 = 0;
        puVar26 = &local_d0;
      }
      uVar13 = puVar26[1];
      uVar4 = puVar26[2];
      *(undefined8 *)(pFVar10 + lVar35 + 0x18) = *puVar26;
      *(undefined8 *)(pFVar10 + lVar35 + 0x18 + 8) = uVar13;
      *(undefined8 *)(pFVar10 + lVar35 + 0x28) = uVar4;
      if (param_5->ArrayNum == iVar29) {
        uVar31 = 0;
        if ((int)uVar30 < param_5->ArrayNum) {
          uVar31 = uVar28;
        }
        if ((uVar31 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pFVar3 = (param_5->AllocatorInstance).Data + local_1c0;
        puVar26 = &local_178;
        local_178 = *(undefined8 *)pFVar3;
        uStack_170 = *(undefined8 *)(pFVar3 + 8);
      }
      else {
        puVar26 = &local_168;
        local_168 = 0;
        uStack_160 = 0;
      }
      uVar4 = puVar26[1];
      *(undefined8 *)(pFVar10 + lVar35 + 0x58) = *puVar26;
      *(undefined8 *)(pFVar10 + lVar35 + 0x58 + 8) = uVar4;
      if (param_6->ArrayNum == iVar29) {
        uVar31 = 0;
        if ((int)uVar30 < param_6->ArrayNum) {
          uVar31 = uVar28;
        }
        if ((uVar31 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pFVar3 = (param_6->AllocatorInstance).Data + local_1c0;
        puVar26 = &local_158;
        local_158 = *(undefined8 *)pFVar3;
        uStack_150 = *(undefined8 *)(pFVar3 + 8);
      }
      else {
        puVar26 = &local_148;
        local_148 = 0;
        uStack_140 = 0;
      }
      uVar4 = puVar26[1];
      *(undefined8 *)(pFVar10 + lVar35 + 0x68) = *puVar26;
      *(undefined8 *)(pFVar10 + lVar35 + 0x68 + 8) = uVar4;
      if (param_7->ArrayNum == iVar29) {
        uVar31 = 0;
        if ((int)uVar30 < param_7->ArrayNum) {
          uVar31 = uVar28;
        }
        if ((uVar31 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pFVar3 = (param_7->AllocatorInstance).Data + local_1c0;
        local_138 = *(undefined8 *)pFVar3;
        uStack_130 = *(undefined8 *)(pFVar3 + 8);
        puVar26 = &local_138;
      }
      else {
        local_128 = 0;
        uStack_120 = 0;
        puVar26 = &local_128;
      }
      uVar4 = puVar26[1];
      *(undefined8 *)(pFVar10 + lVar35 + 0x78) = *puVar26;
      *(undefined8 *)(pFVar10 + lVar35 + 0x78 + 8) = uVar4;
      if (param_8->ArrayNum == iVar29) {
        uVar31 = 0;
        if ((int)uVar30 < param_8->ArrayNum) {
          uVar31 = uVar28;
        }
        if ((uVar31 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pFVar3 = (param_8->AllocatorInstance).Data + local_1c0;
        puVar26 = &local_118;
        local_118 = *(undefined8 *)pFVar3;
        uStack_110 = *(undefined8 *)(pFVar3 + 8);
      }
      else {
        puVar26 = &local_108;
        local_108 = 0;
        uStack_100 = 0;
      }
      uVar4 = puVar26[1];
      *(undefined8 *)(pFVar10 + lVar35 + 0x88) = *puVar26;
      *(undefined8 *)(pFVar10 + lVar35 + 0x88 + 8) = uVar4;
      if (param_9->ArrayNum == iVar29) {
        uVar31 = 0;
        if ((int)uVar30 < param_9->ArrayNum) {
          uVar31 = uVar28;
        }
        if ((uVar31 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        uVar36 = *(undefined4 *)((param_9->AllocatorInstance).Data + lVar27 * 4);
      }
      else {
        uVar36 = 0xffffffff;
      }
      *(undefined4 *)(pFVar10 + lVar35 + 0x50) = uVar36;
      if (param_10->ArrayNum == iVar29) {
        uVar31 = 0;
        if ((int)uVar30 < param_10->ArrayNum) {
          uVar31 = uVar28;
        }
        if ((uVar31 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pFVar11 = (param_10->AllocatorInstance).Data;
        pFVar3 = pFVar11 + local_1c8;
        pFVar11 = pFVar11 + local_1c8 + 0x10;
        puVar26 = &local_98;
        local_98 = *(undefined8 *)pFVar3;
        uStack_90 = *(undefined8 *)(pFVar3 + 8);
        local_88 = *(undefined8 *)pFVar11;
        uStack_80 = *(undefined8 *)(pFVar11 + 8);
      }
      else {
        puVar26 = &local_b8;
        local_a8 = 0;
        local_b8 = uVar18;
        uStack_b0 = uVar19;
        local_a0 = 0;
      }
      uVar4 = puVar26[1];
      uVar13 = puVar26[2];
      uVar14 = puVar26[3];
      *(undefined8 *)(pFVar10 + lVar35 + 0x30) = *puVar26;
      *(undefined8 *)(pFVar10 + lVar35 + 0x30 + 8) = uVar4;
      *(undefined8 *)(pFVar10 + lVar35 + 0x40) = uVar13;
      *(undefined8 *)(pFVar10 + lVar35 + 0x40 + 8) = uVar14;
      if ((this_00->SectionLocalBox).IsValid == '\0') {
        dVar5 = *(double *)(pFVar10 + lVar35 + 8);
        (this_00->SectionLocalBox).Max.field0_0x0._s_0.X = *(double *)(pFVar10 + lVar35);
        (this_00->SectionLocalBox).Max.field0_0x0._s_0.Y = dVar5;
        dVar5 = *(double *)(pFVar10 + lVar35 + 0x10);
        (this_00->SectionLocalBox).Max.field0_0x0._s_0.Z = dVar5;
        dVar6 = (this_00->SectionLocalBox).Max.field0_0x0._s_0.X;
        dVar7 = (this_00->SectionLocalBox).Max.field0_0x0._s_0.Y;
        (this_00->SectionLocalBox).IsValid = '\x01';
        (this_00->SectionLocalBox).Min.field0_0x0._s_0.X = dVar6;
        (this_00->SectionLocalBox).Min.field0_0x0._s_0.Y = dVar7;
        (this_00->SectionLocalBox).Min.field0_0x0._s_0.Z = dVar5;
      }
      else {
        dVar5 = *(double *)(pFVar10 + lVar35);
        uVar36 = SUB84(dVar5,0);
        uVar37 = (undefined4)((ulonglong)dVar5 >> 0x20);
        dVar6 = *(double *)&(this_00->SectionLocalBox).Min.field0_0x0;
        if (dVar6 <= dVar5) {
          uVar36 = SUB84(dVar6,0);
          uVar37 = (undefined4)((ulonglong)dVar6 >> 0x20);
        }
        dVar5 = *(double *)&(this_00->SectionLocalBox).Max.field0_0x0;
        uVar38 = SUB84(dVar5,0);
        uVar39 = (undefined4)((ulonglong)dVar5 >> 0x20);
        (this_00->SectionLocalBox).Min.field0_0x0._s_0.X = (double)CONCAT44(uVar37,uVar36);
        dVar6 = *(double *)((longlong)&(this_00->SectionLocalBox).Min.field0_0x0 + 8);
        uVar36 = SUB84(dVar6,0);
        uVar37 = (undefined4)((ulonglong)dVar6 >> 0x20);
        dVar7 = *(double *)(pFVar10 + lVar35 + 8);
        if (dVar7 <= dVar6) {
          uVar36 = SUB84(dVar7,0);
          uVar37 = (undefined4)((ulonglong)dVar7 >> 0x20);
        }
        (this_00->SectionLocalBox).Min.field0_0x0._s_0.Y = (double)CONCAT44(uVar37,uVar36);
        dVar6 = *(double *)(pFVar10 + lVar35 + 0x10);
        uVar36 = SUB84(dVar6,0);
        uVar37 = (undefined4)((ulonglong)dVar6 >> 0x20);
        dVar7 = *(double *)((longlong)&(this_00->SectionLocalBox).Min.field0_0x0 + 0x10);
        if (dVar7 <= dVar6) {
          uVar36 = SUB84(dVar7,0);
          uVar37 = (undefined4)((ulonglong)dVar7 >> 0x20);
        }
        (this_00->SectionLocalBox).Min.field0_0x0._s_0.Z = (double)CONCAT44(uVar37,uVar36);
        dVar6 = *(double *)(pFVar10 + lVar35);
        if (dVar5 <= dVar6) {
          uVar38 = SUB84(dVar6,0);
          uVar39 = (undefined4)((ulonglong)dVar6 >> 0x20);
        }
        dVar5 = *(double *)((longlong)&(this_00->SectionLocalBox).Max.field0_0x0 + 8);
        uVar36 = SUB84(dVar5,0);
        uVar37 = (undefined4)((ulonglong)dVar5 >> 0x20);
        (this_00->SectionLocalBox).Max.field0_0x0._s_0.X = (double)CONCAT44(uVar39,uVar38);
        dVar6 = *(double *)(pFVar10 + lVar35 + 8);
        if (dVar5 <= dVar6) {
          uVar36 = SUB84(dVar6,0);
          uVar37 = (undefined4)((ulonglong)dVar6 >> 0x20);
        }
        dVar5 = *(double *)((longlong)&(this_00->SectionLocalBox).Max.field0_0x0 + 0x10);
        uVar38 = SUB84(dVar5,0);
        uVar39 = (undefined4)((ulonglong)dVar5 >> 0x20);
        (this_00->SectionLocalBox).Max.field0_0x0._s_0.Y = (double)CONCAT44(uVar37,uVar36);
        dVar6 = *(double *)(pFVar10 + lVar35 + 0x10);
        if (dVar5 <= dVar6) {
          uVar38 = SUB84(dVar6,0);
          uVar39 = (undefined4)((ulonglong)dVar6 >> 0x20);
        }
        (this_00->SectionLocalBox).Max.field0_0x0._s_0.Z = (double)CONCAT44(uVar39,uVar38);
      }
      local_1b8 = local_1b8 + 0x18;
      local_1c0 = local_1c0 + 0x10;
      local_1c8 = local_1c8 + 0x20;
      uVar30 = uVar30 + 1;
      lVar27 = lVar27 + 1;
      lVar35 = lVar35 + 0x98;
    } while (lVar27 < iVar29);
  }
  iVar29 = iVar29 + -1;
  iVar8 = param_3->ArrayNum;
  iVar33 = 0;
  uVar30 = 1;
  iVar8 = (iVar8 / 3 + (iVar8 >> 0x1f) +
          (int)(((longlong)iVar8 / 3 + ((longlong)iVar8 >> 0x3f) & 0xffffffffU) >> 0x1f)) * 3;
  lVar27 = (longlong)iVar8;
  if (0 < lVar27) {
    uVar31 = 1;
    lVar32 = 4;
    lVar35 = (lVar27 - 1U) / 3 + 1;
    iVar33 = 0;
    do {
      uVar28 = 0;
      if ((int)(uVar31 + 1) < param_3->ArrayNum) {
        uVar28 = ~(uVar31 + 1) >> 0x1f;
      }
      if ((uVar28 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pFVar10 = (param_3->AllocatorInstance).Data;
      iVar23 = iVar29;
      if (*(int *)(pFVar10 + lVar32 + 4) < iVar29) {
        iVar23 = *(int *)(pFVar10 + lVar32 + 4);
      }
      uVar28 = 0;
      if ((int)uVar31 < param_3->ArrayNum) {
        uVar28 = ~uVar31 >> 0x1f;
      }
      if ((uVar28 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pFVar10 = (param_3->AllocatorInstance).Data;
      iVar34 = iVar29;
      if (*(int *)(pFVar10 + lVar32) < iVar29) {
        iVar34 = *(int *)(pFVar10 + lVar32);
      }
      uVar28 = 0;
      if ((int)(uVar31 - 1) < param_3->ArrayNum) {
        uVar28 = ~(uVar31 - 1) >> 0x1f;
      }
      if ((uVar28 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      iVar9 = *(int *)((param_3->AllocatorInstance).Data + lVar32 + -4);
      iVar22 = iVar29;
      if (iVar9 < iVar29) {
        iVar22 = iVar9;
      }
      if (((iVar22 == iVar34) || (iVar22 == iVar23)) || (iVar34 == iVar23)) {
        iVar23 = 1;
      }
      else {
        iVar23 = 0;
      }
      uVar31 = uVar31 + 3;
      iVar33 = iVar33 + iVar23;
      lVar32 = lVar32 + 0xc;
      lVar35 = lVar35 + -1;
    } while (lVar35 != 0);
    if ((0 < iVar33) && (2 < (byte)LogProceduralComponent._0_1_)) {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_f8,(UObject *)0x0,None);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogProceduralComponent);
      if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Data.AllocatorInstance.Data);
      }
    }
  }
  piVar1 = &(this_00->ProcIndexBuffer).ArrayNum;
  piVar2 = &(this_00->ProcIndexBuffer).ArrayMax;
  *piVar1 = 0;
  if ((this_00->ProcIndexBuffer).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this_00->ProcIndexBuffer).AllocatorInstance,0,piVar2);
  }
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,iVar8 + iVar33 * -3,&(this_00->ProcIndexBuffer).AllocatorInstance,
             &(this_00->ProcIndexBuffer).ArrayNum,piVar2);
  uVar31 = 0;
  if (0 < lVar27) {
    local_1b8 = 0;
    lVar35 = 4;
    local_1c0 = (lVar27 - 1U) / 3 + 1;
    uVar31 = 0;
    do {
      uVar28 = 0;
      if ((int)(uVar30 + 1) < param_3->ArrayNum) {
        uVar28 = ~(uVar30 + 1) >> 0x1f;
      }
      if ((uVar28 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pFVar10 = (param_3->AllocatorInstance).Data;
      iVar8 = iVar29;
      if (*(int *)(pFVar10 + lVar35 + 4) < iVar29) {
        iVar8 = *(int *)(pFVar10 + lVar35 + 4);
      }
      uVar28 = 0;
      if ((int)uVar30 < param_3->ArrayNum) {
        uVar28 = ~uVar30 >> 0x1f;
      }
      if ((uVar28 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pFVar10 = (param_3->AllocatorInstance).Data;
      iVar23 = iVar29;
      if (*(int *)(pFVar10 + lVar35) < iVar29) {
        iVar23 = *(int *)(pFVar10 + lVar35);
      }
      uVar28 = 0;
      if ((int)(uVar30 - 1) < param_3->ArrayNum) {
        uVar28 = ~(uVar30 - 1) >> 0x1f;
      }
      if ((uVar28 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pFVar10 = (param_3->AllocatorInstance).Data;
      iVar34 = iVar29;
      if (*(int *)(pFVar10 + lVar35 + -4) < iVar29) {
        iVar34 = *(int *)(pFVar10 + lVar35 + -4);
      }
      if (((iVar34 == iVar23) || (iVar34 == iVar8)) || (iVar23 == iVar8)) {
        iVar33 = iVar33 + -1;
      }
      else {
        uVar28 = 0;
        if ((int)uVar31 < *piVar1) {
          uVar28 = ~uVar31 >> 0x1f;
        }
        if ((uVar28 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        *(int *)((this_00->ProcIndexBuffer).AllocatorInstance.Data + local_1b8) = iVar34;
        uVar28 = 0;
        if ((int)(uVar31 + 1) < *piVar1) {
          uVar28 = ~(uVar31 + 1) >> 0x1f;
        }
        if ((uVar28 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        *(int *)((this_00->ProcIndexBuffer).AllocatorInstance.Data + local_1b8 + 4) = iVar23;
        uVar28 = 0;
        if ((int)(uVar31 + 2) < *piVar1) {
          uVar28 = ~(uVar31 + 2) >> 0x1f;
        }
        if ((uVar28 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        uVar31 = uVar31 + 3;
        *(int *)((this_00->ProcIndexBuffer).AllocatorInstance.Data + local_1b8 + 8) = iVar8;
        local_1b8 = local_1b8 + 0xc;
      }
      uVar30 = uVar30 + 3;
      lVar35 = lVar35 + 0xc;
      local_1c0 = local_1c0 + -1;
    } while (local_1c0 != 0);
  }
  if ((iVar33 != 0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumDegenerateTriangles == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ProceduralMeshComponent\\Source\\ProceduralMeshComponent\\Private\\ProceduralMeshComponent.cpp"
                          ,0x274,L""), bVar21)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  if ((uVar31 != (this_00->ProcIndexBuffer).ArrayNum) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("CopyIndexIdx == NewSection.ProcIndexBuffer.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ProceduralMeshComponent\\Source\\ProceduralMeshComponent\\Private\\ProceduralMeshComponent.cpp"
                          ,0x275,L""), bVar21)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  this_00->bEnableCollision = param_11;
  UpdateLocalBounds(this);
  UpdateCollision(this);
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  if (bVar16) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar20) {
    FThreadStats::AddMessage(local_1a8,CycleScopeEnd);
  }
  return;
}

// CreateMeshSection_LinearColor @ 14d26dca0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UProceduralMeshComponent::CreateMeshSection_LinearColor
          (UProceduralMeshComponent *this,int param_1,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_4,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_5,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_6,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_7,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_8,
          TArray<FLinearColor,TSizedDefaultAllocator<32>_> *param_9,
          TArray<FProcMeshTangent,TSizedDefaultAllocator<32>_> *param_10,bool param_11,bool param_12
          )

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> *pTVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FScriptContainerElement *this_00;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  TArray<FColor,TSizedDefaultAllocator<32>_> local_88 [5];
  
  pTVar5 = param_9;
  local_88[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88[0].ArrayNum = 0;
  local_88[0].ArrayMax = 0;
  if (0 < param_9->ArrayNum) {
    TArray<FColor,TSizedDefaultAllocator<32>_>::SetNum(local_88,param_9->ArrayNum,Default);
    fVar4 = __real_437f0000;
    fVar3 = __real_3f000000;
    fVar2 = __real_3f800000;
    iVar8 = param_9->ArrayNum;
    uVar9 = 0;
    if (0 < iVar8) {
      lVar10 = 0;
      lVar11 = 0;
      do {
        uVar7 = 0;
        if ((int)uVar9 < iVar8) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        this_00 = (pTVar5->AllocatorInstance).Data + lVar11;
        if (param_12) {
          FLinearColor::ToFColorSRGB((FLinearColor *)this_00);
        }
        else {
          fVar12 = *(float *)(this_00 + 8);
          fVar13 = *(float *)(this_00 + 4);
          if (fVar12 <= 0.0) {
            fVar12 = 0.0;
          }
          fVar14 = (((FLinearColor_u_0 *)&this_00->field_0x0)->_s_0).R;
          if (fVar13 <= 0.0) {
            fVar13 = 0.0;
          }
          fVar15 = *(float *)(this_00 + 0xc);
          if (fVar14 <= 0.0) {
            fVar14 = 0.0;
          }
          if (fVar15 <= 0.0) {
            fVar15 = 0.0;
          }
          if (fVar2 <= fVar12) {
            fVar12 = fVar2;
          }
          if (fVar2 <= fVar13) {
            fVar13 = fVar2;
          }
          if (fVar2 <= fVar14) {
            fVar14 = fVar2;
          }
          if (fVar2 <= fVar15) {
            fVar15 = fVar2;
          }
          param_9._0_1_ = (undefined1)(int)(fVar12 * fVar4 + fVar3);
          param_9._1_1_ = (undefined1)(int)(fVar13 * fVar4 + fVar3);
          param_9._2_1_ = (undefined1)(int)(fVar14 * fVar4 + fVar3);
          param_9._3_1_ = (undefined1)(int)(fVar15 * fVar4 + fVar3);
        }
        uVar7 = 0;
        if ((int)uVar9 < local_88[0].ArrayNum) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar9 = uVar9 + 1;
        lVar11 = lVar11 + 0x10;
        *(uint *)(local_88[0].AllocatorInstance.Data + lVar10 * 4) =
             CONCAT13(param_9._3_1_,CONCAT12(param_9._2_1_,CONCAT11(param_9._1_1_,param_9._0_1_)));
        lVar10 = lVar10 + 1;
        iVar8 = pTVar5->ArrayNum;
      } while ((int)uVar9 < iVar8);
    }
  }
  CreateMeshSection(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,local_88,
                    param_10,param_11);
  if (local_88[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88[0].AllocatorInstance.Data);
  }
  return;
}

// CreateProcMeshBodySetup @ 14d26dfd0

void __thiscall UProceduralMeshComponent::CreateProcMeshBodySetup(UProceduralMeshComponent *this)

{
  UBodySetup *pUVar1;
  
  if ((this->ProcMeshBodySetup).field0_0x0.DebugPtr == (UBodySetup *)0x0) {
    pUVar1 = CreateBodySetupHelper(this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UBodySetup *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    (this->ProcMeshBodySetup).field0_0x0.DebugPtr = pUVar1;
  }
  return;
}

// CreateSceneProxy @ 14d26e020

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPrimitiveSceneProxy * __thiscall
UProceduralMeshComponent::CreateSceneProxy(UProceduralMeshComponent *this)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_ProcMesh_CreateSceneProxy> FVar6;
  FProceduralMeshSceneProxy *this_00;
  FProceduralMeshSceneProxy *pFVar7;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar8;
  FNameEntryId FVar9;
  FName FVar10;
  FNameEntryId FVar11;
  LARGE_INTEGER local_res10;
  FName local_res18 [2];
  FStatMessage local_38;
  
  pFVar7 = (FProceduralMeshSceneProxy *)0x0;
  FVar11.Value = 0;
  FVar6 = StatPtr_STAT_ProcMesh_CreateSceneProxy;
  if (StatPtr_STAT_ProcMesh_CreateSceneProxy ==
      (FThreadSafeStaticStat<FStat_STAT_ProcMesh_CreateSceneProxy>)0x0) {
    pFVar5 = ::FName::FName(local_res18,"STAT_ProcMesh_CreateSceneProxy");
    FVar6 = (FThreadSafeStaticStat<FStat_STAT_ProcMesh_CreateSceneProxy>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ProcMesh_CreateSceneProxy,*pFVar5,
                       L"Create ProcMesh Proxy","STATGROUP_ProceduralMesh","STATCAT_Advanced",
                       L"ProceduralMesh",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar10 = *(FName *)FVar6;
  bVar2 = false;
  bVar4 = false;
  FVar9 = FVar10.ComparisonIndex.Value;
  uVar8 = FVar10.Number;
  if ((FVar9.Value != 0) || (uVar8 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10.s,(char *)*(FName *)((longlong)FVar6 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.s.LowPart = FVar9.Value;
        local_res10.s.HighPart = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res10.s,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ProceduralMeshComponent\\Source\\ProceduralMeshComponent\\Private\\ProceduralMeshComponent.cpp"
                   ,0x371);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res10.s.LowPart = FVar9.Value;
      local_res10.s.HighPart = uVar8;
      FThreadStats::AddMessage(FVar10,CycleScopeStart);
      bVar3 = true;
      FVar11.Value = FVar9.Value;
      goto LAB_14d26e17e;
    }
  }
  bVar3 = false;
  FVar10.ComparisonIndex.Value = 0;
  FVar10.Number = 0;
LAB_14d26e17e:
  this_00 = ::operator_new(0x2a0);
  if (this_00 != (FProceduralMeshSceneProxy *)0x0) {
    pFVar7 = FProceduralMeshSceneProxy::FProceduralMeshSceneProxy(this_00,this);
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar10 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_38.NameAndInfo.Number = FVar10.Number & 0xffff6fff | 0x6000;
      local_38.NameAndInfo.Index.Value = FVar11.Value;
      QueryPerformanceCounter(&local_res10);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res10.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_res10.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_res10.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_res10.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_38);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  return (FPrimitiveSceneProxy *)pFVar7;
}

// FinishPhysicsAsyncCook @ 14d26e7a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UProceduralMeshComponent::FinishPhysicsAsyncCook
          (UProceduralMeshComponent *this,bool param_1,UBodySetup *param_2)

{
  int *piVar1;
  TArray<TObjectPtr<UBodySetup>,TSizedDefaultAllocator<32>_> *pTVar2;
  char cVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  ForAnyElementType FVar6;
  TEnumAsByte<ECollisionTraceFlag> TVar7;
  char cVar8;
  bool bVar9;
  undefined7 extraout_var;
  int iVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  longlong lVar13;
  uint uVar14;
  undefined8 local_58;
  ForAnyElementType local_50;
  undefined8 local_48;
  
  uVar11 = (this->AsyncBodySetupQueue).ArrayNum;
  local_50.Data = (FScriptContainerElement *)0x0;
  local_48 = 0;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  if (0 < (int)uVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar11,&local_50,0,(int *)((longlong)&local_48 + 4));
  }
  pTVar2 = &this->AsyncBodySetupQueue;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UBodySetup *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  pFVar4 = (pTVar2->AllocatorInstance).Data;
  pFVar12 = pFVar4;
  do {
    if (pFVar12 == pFVar4 + (longlong)(this->AsyncBodySetupQueue).ArrayNum * 8) {
LAB_14d26eaee:
      if (local_50.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data);
      }
      return;
    }
    if (*(UBodySetup **)pFVar12 == param_2) {
      uVar11 = (uint)((longlong)pFVar12 - (longlong)pFVar4 >> 3);
      if (uVar11 != 0xffffffff) {
        TVar7 = UBodySetupCore::GetCollisionTraceFlag((UBodySetupCore *)param_2);
        iVar10 = (param_2->AggGeom).ConvexElems.ArrayNum;
        cVar3 = *(char *)CONCAT71(extraout_var,TVar7.Value);
        cVar8 = (**(code **)(this->_padding_ + 0x20))(&this->_padding_,0);
        if (cVar3 == '\x02') {
          if (iVar10 != 0) goto LAB_14d26e89a;
LAB_14d26e970:
          bVar9 = true;
        }
        else {
          if (((cVar3 == '\x03') && (cVar8 == '\0')) ||
             ((cVar3 == '\x01' && ((iVar10 == 0 && (cVar8 == '\0')))))) goto LAB_14d26e970;
LAB_14d26e89a:
          bVar9 = false;
        }
        if ((param_1) || (bVar9)) {
          (this->ProcMeshBodySetup).field0_0x0.DebugPtr = param_2;
          UActorComponent::RecreatePhysicsState((UActorComponent *)this);
          uVar11 = uVar11 + 1;
          if ((int)uVar11 < (this->AsyncBodySetupQueue).ArrayNum) {
            lVar13 = (longlong)(int)uVar11 * 8;
            do {
              uVar14 = 0;
              if ((int)uVar11 < (this->AsyncBodySetupQueue).ArrayNum) {
                uVar14 = ~uVar11 >> 0x1f;
              }
              if ((uVar14 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              local_58 = *(undefined8 *)((pTVar2->AllocatorInstance).Data + lVar13);
              if (((local_50.Data <= (FScriptContainerElement *)&local_58) &&
                  ((FScriptContainerElement *)&local_58 <
                   local_50.Data + (longlong)local_48._4_4_ * 8)) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar9)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              iVar10 = (int)local_48;
              if ((int)local_48 == local_48._4_4_) {
                iVar10 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,&local_50,(int *)((longlong)&local_48 + 4));
              }
              uVar11 = uVar11 + 1;
              local_48 = CONCAT44(local_48._4_4_,iVar10 + 1);
              lVar13 = lVar13 + 8;
              *(undefined8 *)(local_50.Data + (longlong)iVar10 * 8) = local_58;
            } while ((int)uVar11 < (this->AsyncBodySetupQueue).ArrayNum);
          }
          FVar6.Data = local_50.Data;
          iVar10 = (int)local_48;
          piVar1 = &(this->AsyncBodySetupQueue).ArrayMax;
          (this->AsyncBodySetupQueue).ArrayNum = (int)local_48;
          if (((int)local_48 == 0) && (*piVar1 == 0)) {
            *piVar1 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,(int)local_48,*piVar1,&pTVar2->AllocatorInstance,(int)local_48,piVar1);
            ConstructItems<TObjectPtr<UBodySetup>,UBodySetup_*,int>
                      ((pTVar2->AllocatorInstance).Data,(UBodySetup **)FVar6.Data,iVar10);
          }
        }
        else {
          uVar14 = 0;
          if ((int)uVar11 < (this->AsyncBodySetupQueue).ArrayNum) {
            uVar14 = ~uVar11 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar4 = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar11 * 8;
          iVar10 = (this->AsyncBodySetupQueue).ArrayNum + ~uVar11;
          if (iVar10 != 0) {
            memmove(pFVar4,pFVar4 + 8,(longlong)iVar10 << 3);
          }
          piVar1 = &(this->AsyncBodySetupQueue).ArrayNum;
          *piVar1 = *piVar1 + -1;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,&pTVar2->AllocatorInstance,(this->AsyncBodySetupQueue).ArrayNum,
                     &(this->AsyncBodySetupQueue).ArrayMax);
        }
      }
      goto LAB_14d26eaee;
    }
    pFVar12 = pFVar12 + 8;
  } while( true );
}

// GetBodySetup @ 14d271380

UBodySetup * __thiscall UProceduralMeshComponent::GetBodySetup(UProceduralMeshComponent *this)

{
  UBodySetup *pUVar1;
  
  pUVar1 = (this->ProcMeshBodySetup).field0_0x0.DebugPtr;
  if (pUVar1 == (UBodySetup *)0x0) {
    pUVar1 = CreateBodySetupHelper(this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UBodySetup *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    (this->ProcMeshBodySetup).field0_0x0.DebugPtr = pUVar1;
  }
  return pUVar1;
}

// GetMaterialFromCollisionFaceIndex @ 14d272230

UMaterialInterface * __thiscall
UProceduralMeshComponent::GetMaterialFromCollisionFaceIndex
          (UProceduralMeshComponent *this,int param_1,int *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UMaterialInterface *pUVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  
  *param_2 = 0;
  if (param_1 < 0) {
    return (UMaterialInterface *)0x0;
  }
  uVar6 = 0;
  iVar7 = 0;
  if (0 < (this->ProcMeshSections).ArrayNum) {
    lVar8 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < (this->ProcMeshSections).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pUVar5 = (UMaterialInterface *)(*pcVar2)();
        return pUVar5;
      }
      iVar1 = *(int *)((this->ProcMeshSections).AllocatorInstance.Data + lVar8 + 0x18);
      iVar7 = iVar7 + iVar1 / 3 + (iVar1 >> 0x1f) +
                      (int)(((longlong)iVar1 / 3 + ((longlong)iVar1 >> 0x3f) & 0xffffffffU) >> 0x1f)
      ;
      if (param_1 < iVar7) {
        pUVar5 = (UMaterialInterface *)(**(code **)(this->_padding_ + 0x690))(this,uVar6);
        *param_2 = uVar6;
        return pUVar5;
      }
      uVar6 = uVar6 + 1;
      lVar8 = lVar8 + 0x60;
    } while ((int)uVar6 < (this->ProcMeshSections).ArrayNum);
  }
  return (UMaterialInterface *)0x0;
}

// GetNumMaterials @ 14d272a90

int __thiscall UProceduralMeshComponent::GetNumMaterials(UProceduralMeshComponent *this)

{
  return (this->ProcMeshSections).ArrayNum;
}

// GetNumSections @ 14d272aa0

int __thiscall UProceduralMeshComponent::GetNumSections(UProceduralMeshComponent *this)

{
  return (this->ProcMeshSections).ArrayNum;
}

// GetPhysicsTriMeshData @ 14d272ac0

bool __thiscall
UProceduralMeshComponent::GetPhysicsTriMeshData
          (UProceduralMeshComponent *this,FTriMeshCollisionData *param_1,bool param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  char cVar3;
  UObject *pUVar4;
  longlong lVar5;
  code *pcVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  UClass *pUVar11;
  FString *pFVar12;
  FScriptContainerElement *pFVar13;
  wchar_t *pwVar14;
  uint uVar15;
  uint uVar16;
  wchar_t *pwVar17;
  FScriptContainerElement *pFVar18;
  longlong lVar19;
  longlong *plVar20;
  undefined2 local_a8 [2];
  int local_a4;
  uint local_a0;
  undefined8 local_98;
  int local_90;
  int local_88;
  float local_84;
  float fStack_80;
  float local_7c;
  longlong local_78;
  FString local_70;
  FString local_60;
  FString local_50;
  
  local_a4 = 0;
  pUVar11 = Z_Construct_UClass_UPhysicsSettings_NoRegister();
  if ((pUVar11->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar11);
  }
  pUVar4 = (pUVar11->ClassDefaultObject).field0_0x0.DebugPtr;
  if (pUVar4 == (UObject *)0x0) {
    pFVar12 = GetTypeName<UPhysicsSettings>(&local_70);
    if ((pFVar12->Data).ArrayNum == 0) {
      pwVar14 = L"";
    }
    else {
      pwVar14 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar14);
  }
  pUVar11 = Z_Construct_UClass_UPhysicsSettings_NoRegister();
  iVar10 = (int)pUVar11->_padding_;
  if ((*(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38) < iVar10) ||
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar10 * 8) !=
      &pUVar11->_padding_)) {
    pFVar12 = GetTypeName<UPhysicsSettings>(&local_60);
    pwVar14 = L"";
    if ((pFVar12->Data).ArrayNum == 0) {
      pwVar17 = L"";
    }
    else {
      pwVar17 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
    }
    pFVar12 = GetFullNameForCastLogError<UObject>(&local_50,pUVar4);
    if ((pFVar12->Data).ArrayNum != 0) {
      pwVar14 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar14,pwVar17);
  }
  cVar3 = pUVar4[9].field_0x17;
  if (cVar3 != '\0') {
    iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x10,8,1,&(param_1->UVs).AllocatorInstance,&(param_1->UVs).ArrayNum,
                        &(param_1->UVs).ArrayMax);
    pFVar13 = (param_1->UVs).AllocatorInstance.Data + (longlong)iVar10 * 0x10;
    *(undefined8 *)pFVar13 = 0;
    *(undefined8 *)(pFVar13 + 8) = 0;
  }
  local_a0 = 0;
  if (0 < (int)this->_padding_) {
    do {
      uVar16 = local_a0;
      uVar15 = 0;
      if ((int)local_a0 < (int)this->_padding_) {
        uVar15 = ~local_a0 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      plVar20 = (longlong *)((longlong)(int)uVar16 * 0x60 + this->_padding_);
      if ((char)plVar20[0xb] != '\0') {
        iVar10 = (int)plVar20[1];
        uVar15 = 0;
        if (0 < iVar10) {
          piVar1 = &(param_1->Vertices).ArrayMax;
          lVar19 = 0;
          do {
            uVar16 = 0;
            if ((int)uVar15 < iVar10) {
              uVar16 = ~uVar15 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar6 = (code *)swi(3);
              uVar9 = (*pcVar6)();
              return (bool)uVar9;
            }
            lVar5 = *plVar20;
            pFVar13 = (param_1->Vertices).AllocatorInstance.Data;
            local_7c = (float)*(double *)(lVar5 + 0x10 + lVar19);
            fStack_80 = (float)*(double *)(lVar5 + 8 + lVar19);
            local_84 = (float)*(double *)(lVar5 + lVar19);
            if (((pFVar13 <= (FScriptContainerElement *)&local_84) &&
                ((FScriptContainerElement *)&local_84 < pFVar13 + (longlong)*piVar1 * 0xc)) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar8)) {
              pcVar6 = (code *)swi(3);
              uVar9 = (*pcVar6)();
              return (bool)uVar9;
            }
            iVar10 = (param_1->Vertices).ArrayNum;
            if (iVar10 == *piVar1) {
              iVar10 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x40c,(ForAnyElementType *)param_1,piVar1);
            }
            (param_1->Vertices).ArrayNum = iVar10 + 1;
            pFVar13 = (param_1->Vertices).AllocatorInstance.Data;
            *(ulonglong *)(pFVar13 + (longlong)iVar10 * 0xc) = CONCAT44(fStack_80,local_84);
            *(float *)(pFVar13 + (longlong)iVar10 * 0xc + 8) = local_7c;
            if (cVar3 != '\0') {
              if (((param_1->UVs).ArrayNum < 1) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar6 = (code *)swi(3);
                uVar9 = (*pcVar6)();
                return (bool)uVar9;
              }
              pFVar13 = (param_1->UVs).AllocatorInstance.Data;
              uVar16 = 0;
              if ((int)uVar15 < (int)plVar20[1]) {
                uVar16 = ~uVar15 >> 0x1f;
              }
              if ((uVar16 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar6 = (code *)swi(3);
                uVar9 = (*pcVar6)();
                return (bool)uVar9;
              }
              pFVar18 = (FScriptContainerElement *)(*plVar20 + 0x58 + lVar19);
              if (((*(FScriptContainerElement **)&pFVar13->field_0x0 <= pFVar18) &&
                  (pFVar18 < *(FScriptContainerElement **)&pFVar13->field_0x0 +
                             (longlong)*(int *)(pFVar13 + 0xc) * 0x10)) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar8)) {
                pcVar6 = (code *)swi(3);
                uVar9 = (*pcVar6)();
                return (bool)uVar9;
              }
              iVar10 = *(int *)&pFVar13[8].field_0x0;
              if (iVar10 == *(int *)(pFVar13 + 0xc)) {
                iVar10 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x810,(ForAnyElementType *)pFVar13,(int *)(pFVar13 + 0xc));
              }
              *(int *)&pFVar13[8].field_0x0 = iVar10 + 1;
              uVar7 = *(undefined8 *)(pFVar18 + 8);
              pFVar13 = *(FScriptContainerElement **)&pFVar13->field_0x0;
              *(undefined8 *)(pFVar13 + (longlong)iVar10 * 0x10) = *(undefined8 *)pFVar18;
              *(undefined8 *)(pFVar13 + (longlong)iVar10 * 0x10 + 8) = uVar7;
            }
            iVar10 = (int)plVar20[1];
            uVar15 = uVar15 + 1;
            lVar19 = lVar19 + 0x98;
            uVar16 = local_a0;
          } while ((int)uVar15 < iVar10);
        }
        iVar10 = (int)plVar20[3];
        iVar10 = iVar10 / 3 + (iVar10 >> 0x1f) +
                 (int)(((longlong)iVar10 / 3 + ((longlong)iVar10 >> 0x3f) & 0xffffffffU) >> 0x1f);
        local_78 = (longlong)iVar10;
        if (0 < iVar10) {
          uVar16 = 2;
          local_88 = 0;
          lVar19 = 8;
          do {
            local_98 = 0;
            local_90 = 0;
            uVar15 = 0;
            if (local_88 < (int)plVar20[3]) {
              uVar15 = ~(uVar16 - 2) >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar6 = (code *)swi(3);
              uVar9 = (*pcVar6)();
              return (bool)uVar9;
            }
            local_98 = CONCAT44(local_98._4_4_,local_a4 + *(int *)(lVar19 + -8 + plVar20[2]));
            uVar15 = 0;
            if ((int)(uVar16 - 1) < (int)plVar20[3]) {
              uVar15 = ~(uVar16 - 1) >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar6 = (code *)swi(3);
              uVar9 = (*pcVar6)();
              return (bool)uVar9;
            }
            local_98 = CONCAT44(local_a4 + *(int *)(lVar19 + -4 + plVar20[2]),(undefined4)local_98);
            uVar15 = 0;
            if ((int)uVar16 < (int)plVar20[3]) {
              uVar15 = ~uVar16 >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar6 = (code *)swi(3);
              uVar9 = (*pcVar6)();
              return (bool)uVar9;
            }
            pFVar13 = (param_1->Indices).AllocatorInstance.Data;
            local_90 = local_a4 + *(int *)(plVar20[2] + lVar19);
            if (((pFVar13 <= (FScriptContainerElement *)&local_98) &&
                ((FScriptContainerElement *)&local_98 <
                 pFVar13 + (longlong)(param_1->Indices).ArrayMax * 0xc)) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar8)) {
              pcVar6 = (code *)swi(3);
              uVar9 = (*pcVar6)();
              return (bool)uVar9;
            }
            iVar10 = (param_1->Indices).ArrayNum;
            if (iVar10 == (param_1->Indices).ArrayMax) {
              iVar10 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x40c,&(param_1->Indices).AllocatorInstance,
                                  &(param_1->Indices).ArrayMax);
            }
            (param_1->Indices).ArrayNum = iVar10 + 1;
            pFVar13 = (param_1->Indices).AllocatorInstance.Data;
            *(undefined8 *)(pFVar13 + (longlong)iVar10 * 0xc) = local_98;
            *(int *)(pFVar13 + (longlong)iVar10 * 0xc + 8) = local_90;
            pFVar13 = (param_1->MaterialIndices).AllocatorInstance.Data;
            local_a8[0] = (undefined2)local_a0;
            if (((pFVar13 <= (FScriptContainerElement *)local_a8) &&
                ((FScriptContainerElement *)local_a8 <
                 pFVar13 + (longlong)(param_1->MaterialIndices).ArrayMax * 2)) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar8)) {
              pcVar6 = (code *)swi(3);
              uVar9 = (*pcVar6)();
              return (bool)uVar9;
            }
            iVar10 = (param_1->MaterialIndices).ArrayNum;
            if (iVar10 == (param_1->MaterialIndices).ArrayMax) {
              iVar10 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x202,&(param_1->MaterialIndices).AllocatorInstance,
                                  &(param_1->MaterialIndices).ArrayMax);
            }
            (param_1->MaterialIndices).ArrayNum = iVar10 + 1;
            uVar16 = uVar16 + 3;
            lVar19 = lVar19 + 0xc;
            local_78 = local_78 + -1;
            local_88 = local_88 + 3;
            *(undefined2 *)
             ((param_1->MaterialIndices).AllocatorInstance.Data + (longlong)iVar10 * 2) =
                 local_a8[0];
          } while (local_78 != 0);
          local_78 = 0;
          uVar16 = local_a0;
        }
        local_a4 = (param_1->Vertices).ArrayNum;
      }
      local_a0 = uVar16 + 1;
    } while ((int)local_a0 < (int)this->_padding_);
  }
  param_1->bFlipNormals = 1;
  param_1->bFastCook = 1;
  param_1->bDeformableMesh = 1;
  return true;
}

// GetPrivateStaticClass @ 14d2732f0

UClass * __cdecl UProceduralMeshComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UProceduralMeshComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProceduralMeshComponent",L"ProceduralMeshComponent",
               &Z_Registration_Info_UClass_UProceduralMeshComponent.InnerSingleton,
               StaticRegisterNativesUProceduralMeshComponent,0x610,0x10,CLASS_Intrinsic|CLASS_Config
               ,CASTCLASS_None,L"Engine",InternalConstructor<UProceduralMeshComponent>,
               InternalVTableHelperCtorCaller<UProceduralMeshComponent>,local_res8,
               UMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UProceduralMeshComponent.InnerSingleton;
}

// GetProcMeshSection @ 14d2733b0

FProcMeshSection * __thiscall
UProceduralMeshComponent::GetProcMeshSection(UProceduralMeshComponent *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FProcMeshSection *pFVar3;
  
  if ((this->ProcMeshSections).ArrayNum <= param_1) {
    return (FProcMeshSection *)0x0;
  }
  if (param_1 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FProcMeshSection *)(*pcVar1)();
      return pFVar3;
    }
  }
  return (FProcMeshSection *)
         ((this->ProcMeshSections).AllocatorInstance.Data + (longlong)param_1 * 0x60);
}

// GetTriMeshSizeEstimates @ 14d2741d0

bool __thiscall
UProceduralMeshComponent::GetTriMeshSizeEstimates
          (UProceduralMeshComponent *this,FTriMeshCollisionDataEstimates *param_1,bool param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (int)this->_padding_;
  lVar2 = this->_padding_;
  lVar3 = (longlong)iVar1 * 0x60 + lVar2;
  while( true ) {
    if ((int)this->_padding_ != iVar1) {
      `TCheckedPointerIterator<FProcMeshSection_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (lVar2 == lVar3) break;
    if (*(char *)(lVar2 + 0x58) != '\0') {
      param_1->VerticeCount = param_1->VerticeCount + (longlong)*(int *)(lVar2 + 8);
    }
    lVar2 = lVar2 + 0x60;
  }
  return true;
}

// IsMeshSectionVisible @ 14d274730

bool __thiscall
UProceduralMeshComponent::IsMeshSectionVisible(UProceduralMeshComponent *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if ((this->ProcMeshSections).ArrayNum <= param_1) {
    return false;
  }
  if (param_1 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return (bool)(this->ProcMeshSections).AllocatorInstance.Data[(longlong)param_1 * 0x60 + 0x59];
}

// PostLoad @ 14d2758a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UProceduralMeshComponent::PostLoad(UProceduralMeshComponent *this)

{
  bool bVar1;
  
  UPrimitiveComponent::PostLoad((UPrimitiveComponent *)this);
  if ((this->ProcMeshBodySetup).field0_0x0.DebugPtr != (UBodySetup *)0x0) {
    bVar1 = UObjectBaseUtility::IsTemplate
                      ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
    if (bVar1) {
      UObjectBase::AtomicallySetFlags
                ((UObjectBase *)(this->ProcMeshBodySetup).field0_0x0.DebugPtr,
                 RF_ArchetypeObject|RF_Public);
      return;
    }
  }
  return;
}

// SetCollisionConvexMeshes @ 14d2762b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UProceduralMeshComponent::SetCollisionConvexMeshes
          (UProceduralMeshComponent *this,
          TArray<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
          *param_1)

{
  int *piVar1;
  TArray<FKConvexElem,TSizedDefaultAllocator<32>_> *pTVar2;
  FKConvexElem *pFVar3;
  void *_Src;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  undefined1 auStackY_1e8 [32];
  longlong local_198;
  TVector<double>_u_0 local_188;
  double dStack_170;
  double local_168;
  double dStack_160;
  uchar local_158;
  uchar uStack_157;
  uchar uStack_156;
  uchar uStack_155;
  uchar uStack_154;
  uchar uStack_153;
  uchar uStack_152;
  uchar uStack_151;
  undefined1 local_148 [48];
  ForAnyElementType local_118;
  int local_110;
  int local_10c [5];
  TVector<double>_u_0 local_f8;
  TVector<double>_u_0 aTStack_e0 [6];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  pTVar2 = &this->CollisionConvexElems;
  piVar1 = &(this->CollisionConvexElems).ArrayMax;
  pFVar3 = (FKConvexElem *)(pTVar2->AllocatorInstance).Data;
  iVar7 = (this->CollisionConvexElems).ArrayNum;
  if ((this->CollisionConvexElems).ArrayMax < 0) {
    DestructItems<FKConvexElem,int>(pFVar3,iVar7);
    (this->CollisionConvexElems).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x100,0x10,0,&pTVar2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FKConvexElem,int>(pFVar3,iVar7);
    (this->CollisionConvexElems).ArrayNum = 0;
  }
  uVar9 = 0;
  if (0 < param_1->ArrayNum) {
    local_198 = 0;
    do {
      FKConvexElem::FKConvexElem((FKConvexElem *)local_148);
      uVar6 = 0;
      if ((int)uVar9 < param_1->ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar8 = (param_1->AllocatorInstance).Data + local_198;
      if ((FScriptContainerElement *)(local_148 + 0x30) != pFVar8) {
        iVar7 = *(int *)(pFVar8 + 8);
        _Src = *(void **)pFVar8;
        local_110 = iVar7;
        if ((iVar7 == 0) && (local_10c[0] == 0)) {
          local_10c[0] = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,iVar7,local_10c[0],(ForAnyElementType *)(local_148 + 0x30),iVar7,
                     (int *)(local_148 + 0x3c));
          if (iVar7 != 0) {
            memcpy(local_118.Data,_Src,(longlong)iVar7 * 0x18);
          }
        }
      }
      iVar7 = local_110;
      if ((local_110 < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      UE::Math::TBox<double>::TBox<double>
                ((TBox<double> *)&local_188._s_0,(TVector<double> *)local_118.Data,iVar7);
      pFVar8 = (pTVar2->AllocatorInstance).Data;
      local_f8._s_0.X = local_188._s_0.X;
      local_f8._s_0.Y = local_188._s_0.Y;
      local_f8._s_0.Z = local_188._s_0.Z;
      aTStack_e0[0]._s_0.X = dStack_170;
      aTStack_e0[1]._0_1_ = local_158;
      aTStack_e0[1]._1_1_ = uStack_157;
      aTStack_e0[1]._2_1_ = uStack_156;
      aTStack_e0[1]._3_1_ = uStack_155;
      aTStack_e0[1]._4_1_ = uStack_154;
      aTStack_e0[1]._5_1_ = uStack_153;
      aTStack_e0[1]._6_1_ = uStack_152;
      aTStack_e0[1]._7_1_ = uStack_151;
      aTStack_e0[0]._s_0.Y = local_168;
      aTStack_e0[0]._s_0.Z = dStack_160;
      if (((pFVar8 <= (FScriptContainerElement *)local_148) &&
          ((FScriptContainerElement *)local_148 < pFVar8 + (longlong)*piVar1 * 0x100)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar7 = (this->CollisionConvexElems).ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x100,0x10,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->CollisionConvexElems).ArrayNum = iVar7 + 1;
      FKConvexElem::FKConvexElem
                ((FKConvexElem *)((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 0x100),
                 (FKConvexElem *)local_148);
      FKConvexElem::~FKConvexElem((FKConvexElem *)local_148);
      local_198 = local_198 + 0x10;
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < param_1->ArrayNum);
  }
  UpdateCollision(this);
  return;
}

// SetMeshSectionVisible @ 14d2765a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UProceduralMeshComponent::SetMeshSectionVisible
          (UProceduralMeshComponent *this,int param_1,bool param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar4;
  undefined ***pppuVar5;
  ulonglong uVar6;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong local_b0;
  undefined2 local_9b;
  undefined1 local_99;
  code *local_98 [2];
  undefined **local_88;
  longlong lStack_80;
  int local_78;
  undefined1 uStack_74;
  undefined2 uStack_73;
  undefined1 uStack_71;
  undefined ***local_70;
  undefined1 local_68 [16];
  undefined **local_58;
  longlong lStack_50;
  undefined8 local_48;
  undefined ***local_40;
  byte local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  iVar1 = (this->ProcMeshSections).ArrayNum;
  if (param_1 < iVar1) {
    if (param_1 < 0) {
      local_b8 = (longlong)param_1;
      local_b0 = (longlong)iVar1;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    (this->ProcMeshSections).AllocatorInstance.Data[(longlong)param_1 * 0x60 + 0x59] =
         (FScriptContainerElement)param_2;
    lStack_80 = this->_padding_;
    if (lStack_80 != 0) {
      uStack_73 = local_9b;
      uStack_71 = local_99;
      local_98[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`UProceduralMeshComponent::SetMeshSectionVisible'::__l8::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
      local_70 = (undefined ***)0x0;
      local_88 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`UProceduralMeshComponent::SetMeshSectionVisible'::`8'::<lambda_1>,1,0>
                  ::_vftable_;
      local_78 = param_1;
      uStack_74 = param_2;
      this_00 = FRenderCommandList::GetInstanceTLS();
      if (this_00 == (FRenderCommandList *)0x0) {
        FRenderThreadCommandPipe::
        Enqueue<TRenderCommandTag<_UProceduralMeshComponent::SetMeshSectionVisible_::__l8::TSTR_FProcMeshSectionVisibilityUpdate800>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                  ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_98);
      }
      else {
        this_01 = FRenderCommandList::GetRenderThread(this_00);
        local_48._4_1_ = uStack_74;
        local_48._0_4_ = local_78;
        local_48._5_2_ = uStack_73;
        local_48._7_1_ = uStack_71;
        local_68._0_8_ = local_98[0];
        local_40 = local_70;
        local_58 = local_88;
        lStack_50 = lStack_80;
        local_98[0] = (code *)0x0;
        local_38 = 2;
        pFVar4 = (FRenderCommandTag *)
                 TRenderCommandTag<`UProceduralMeshComponent::SetMeshSectionVisible'::__l8::TSTR_FProcMeshSectionVisibilityUpdate800>
                 ::Get();
        UE::RenderCommandPipe::FCommandList::Enqueue
                  (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                            *)local_68,pFVar4);
        uVar6 = (ulonglong)local_38;
        if (2 < uVar6) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L"");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar6] ==
            UE::Core::Private::
            TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct)
        {
          if ((code *)local_68._0_8_ != (code *)0x0) {
            pppuVar5 = (undefined ***)(local_68 + 0x10);
            if (local_40 != (undefined ***)0x0) {
              pppuVar5 = local_40;
            }
            (*(code *)(*pppuVar5)[2])();
          }
        }
        else {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar6])(local_68);
        }
      }
      if (local_98[0] != (code *)0x0) {
        pppuVar5 = &local_88;
        if (local_70 != (undefined ***)0x0) {
          pppuVar5 = local_70;
        }
        (*(code *)(*pppuVar5)[2])();
      }
    }
  }
  return;
}

// SetProcMeshSection @ 14d2769e0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UProceduralMeshComponent::SetProcMeshSection
          (UProceduralMeshComponent *this,int param_1,FProcMeshSection *param_2)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  uint uVar4;
  TArray<FProcMeshVertex,TSizedDefaultAllocator<32>_> *this_00;
  
  if ((this->ProcMeshSections).ArrayNum <= param_1) {
    TArray<FProcMeshSection,TSizedDefaultAllocator<32>_>::SetNum
              (&this->ProcMeshSections,param_1 + 1,No);
  }
  uVar4 = 0;
  if (param_1 < (this->ProcMeshSections).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = (TArray<FProcMeshVertex,TSizedDefaultAllocator<32>_> *)
            ((this->ProcMeshSections).AllocatorInstance.Data + (longlong)param_1 * 0x60);
  TArray<FProcMeshVertex,TSizedDefaultAllocator<32>_>::operator=(this_00,&param_2->ProcVertexBuffer)
  ;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)(this_00 + 1),
             &param_2->ProcIndexBuffer);
  dVar2 = (param_2->SectionLocalBox).Min.field0_0x0._s_0.Y;
  this_00[2].AllocatorInstance.Data =
       (FScriptContainerElement *)(param_2->SectionLocalBox).Min.field0_0x0._s_0.X;
  *(double *)&this_00[2].ArrayNum = dVar2;
  dVar2 = (param_2->SectionLocalBox).Max.field0_0x0._s_0.X;
  this_00[3].AllocatorInstance.Data =
       (FScriptContainerElement *)(param_2->SectionLocalBox).Min.field0_0x0._s_0.Z;
  *(double *)&this_00[3].ArrayNum = dVar2;
  dVar2 = (param_2->SectionLocalBox).Max.field0_0x0._s_0.Z;
  this_00[4].AllocatorInstance.Data =
       (FScriptContainerElement *)(param_2->SectionLocalBox).Max.field0_0x0._s_0.Y;
  *(double *)&this_00[4].ArrayNum = dVar2;
  this_00[5].AllocatorInstance.Data =
       *(FScriptContainerElement **)&(param_2->SectionLocalBox).IsValid;
  *(bool *)&this_00[5].ArrayNum = param_2->bEnableCollision;
  *(bool *)((longlong)&this_00[5].ArrayNum + 1) = param_2->bSectionVisible;
  UpdateLocalBounds(this);
  UpdateCollision(this);
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  return;
}

// StaticRegisterNativesUProceduralMeshComponent @ 14d27a660

void __cdecl UProceduralMeshComponent::StaticRegisterNativesUProceduralMeshComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xb;
  local_18.DataPtr = Z_Construct_UClass_UProceduralMeshComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UpdateCollision @ 14d27bb60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UProceduralMeshComponent::UpdateCollision(UProceduralMeshComponent *this)

{
  int *piVar1;
  TArray<TObjectPtr<UBodySetup>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<FStat_STAT_ProcMesh_UpdateCollision> FVar16;
  UWorld *this_00;
  UBodySetup *this_01;
  undefined8 *puVar17;
  ulong64 uVar18;
  FGuid *pFVar19;
  FName FVar20;
  FScriptContainerElement *pFVar21;
  uint uVar22;
  undefined1 local_res10 [8];
  FColor_u_0 local_res18 [2];
  FName local_res20;
  UBodySetup *local_c8 [2];
  FName local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  FName local_a8;
  undefined4 local_9c;
  undefined1 local_98 [8];
  FDelegateAllocation local_90;
  UProceduralMeshComponent *local_80;
  FDestructionSentinel local_78;
  FDelegateAllocation *local_60;
  FGuid local_58;
  
  FVar16 = StatPtr_STAT_ProcMesh_UpdateCollision;
  if (StatPtr_STAT_ProcMesh_UpdateCollision ==
      (FThreadSafeStaticStat<FStat_STAT_ProcMesh_UpdateCollision>)0x0) {
    pFVar15 = ::FName::FName(&local_b8,"STAT_ProcMesh_UpdateCollision");
    FVar16 = (FThreadSafeStaticStat<FStat_STAT_ProcMesh_UpdateCollision>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ProcMesh_UpdateCollision,*pFVar15
                        ,L"Update Collision","STATGROUP_ProceduralMesh","STATCAT_Advanced",
                        L"ProceduralMesh",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar20 = *(FName *)FVar16;
  bVar8 = false;
  bVar10 = false;
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  if ((FVar20.ComparisonIndex.Value.Value == 0) && (FVar20.Number == 0)) {
LAB_14d27bc9b:
    bVar9 = false;
    FVar20 = local_a8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.ComparisonIndex.Value = FVar20.ComparisonIndex.Value.Value;
        local_res20.Number = FVar20.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res20,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ProceduralMeshComponent\\Source\\ProceduralMeshComponent\\Private\\ProceduralMeshComponent.cpp"
                   ,0x40c);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14d27bc9b;
    FThreadStats::AddMessage(FVar20,CycleScopeStart);
    bVar9 = true;
  }
  this_00 = (UWorld *)this->_padding_;
  if (this_00 == (UWorld *)0x0) {
    this_00 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    if (this_00 != (UWorld *)0x0) goto LAB_14d27bccc;
  }
  else {
LAB_14d27bccc:
    bVar11 = UWorld::IsGameWorld(this_00);
    if ((bVar11) && (this->bUseAsyncCooking != false)) {
      pTVar2 = &this->AsyncBodySetupQueue;
      bVar11 = true;
      pFVar21 = (pTVar2->AllocatorInstance).Data;
      iVar13 = (this->AsyncBodySetupQueue).ArrayNum;
      pFVar3 = pFVar21 + (longlong)iVar13 * 8;
      while( true ) {
        if ((this->AsyncBodySetupQueue).ArrayNum != iVar13) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<TObjectPtr<UBodySetup>,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res10);
        }
        if (pFVar21 == pFVar3) break;
        UBodySetup::AbortPhysicsMeshAsyncCreation(*(UBodySetup **)pFVar21);
        pFVar21 = pFVar21 + 8;
      }
      local_c8[0] = CreateBodySetupHelper(this);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_c8[0] != (UBodySetup *)0x0)
         ) {
        UE::GC::MarkAsReachable((UObject *)local_c8[0]);
      }
      pFVar3 = (pTVar2->AllocatorInstance).Data;
      if ((pFVar3 <= (FScriptContainerElement *)local_c8) &&
         ((FScriptContainerElement *)local_c8 <
          pFVar3 + (longlong)(this->AsyncBodySetupQueue).ArrayMax * 8)) {
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar12) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      iVar13 = (this->AsyncBodySetupQueue).ArrayNum;
      piVar1 = &(this->AsyncBodySetupQueue).ArrayMax;
      if (iVar13 == *piVar1) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&pTVar2->AllocatorInstance,piVar1);
        (this->AsyncBodySetupQueue).ArrayNum = iVar13;
      }
      (this->AsyncBodySetupQueue).ArrayNum = iVar13 + 1;
      *(UBodySetup **)((pTVar2->AllocatorInstance).Data + (longlong)iVar13 * 8) = local_c8[0];
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_c8[0] != (UBodySetup *)0x0)
         ) {
        UE::GC::MarkAsReachable((UObject *)local_c8[0]);
      }
      iVar13 = (this->AsyncBodySetupQueue).ArrayNum;
      uVar22 = iVar13 - 1;
      uVar14 = 0;
      if ((int)uVar22 < iVar13) {
        uVar14 = ~uVar22 >> 0x1f;
      }
      if (uVar14 == 0) {
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar12) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      this_01 = *(UBodySetup **)
                 ((pTVar2->AllocatorInstance).Data +
                 (longlong)(this->AsyncBodySetupQueue).ArrayNum * 8 + -8);
      goto LAB_14d27bec3;
    }
  }
  bVar11 = false;
  piVar1 = &(this->AsyncBodySetupQueue).ArrayMax;
  (this->AsyncBodySetupQueue).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->AsyncBodySetupQueue).AllocatorInstance,0,piVar1);
  }
  this_01 = (this->ProcMeshBodySetup).field0_0x0.DebugPtr;
  if (this_01 == (UBodySetup *)0x0) {
    this_01 = CreateBodySetupHelper(this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_01 != (UBodySetup *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_01);
    }
    (this->ProcMeshBodySetup).field0_0x0.DebugPtr = this_01;
  }
LAB_14d27bec3:
  TArray<FKConvexElem,TSizedDefaultAllocator<32>_>::operator=
            (&(this_01->AggGeom).ConvexElems,&this->CollisionConvexElems);
  *(byte *)((longlong)&this_01->_padding_ + 1) = -(this->bUseComplexAsSimpleCollision != false) & 3;
  if (bVar11) {
    uStack_b0 = 0;
    local_b8 = (FName)FinishPhysicsAsyncCook;
    uStack_ac = local_9c;
    local_98 = (undefined1  [8])0x0;
    local_90.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_90.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_98,
               (FWriteAccessScope *)&local_78);
    local_60 = &local_90;
    puVar17 = UE::Core::Private::DelegateAllocate(0x30,&local_90);
    if (puVar17 != (undefined8 *)0x0) {
      *puVar17 = &
                 ___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy__PEAVUBodySetup____6B_
      ;
      puVar17[1] = this_01;
      uVar18 = FDelegateHandle::GenerateNewID();
      puVar17[2] = uVar18;
      *puVar17 = &
                 ___7__TBaseUObjectMethodDelegateInstance__0A_VUProceduralMeshComponent____A6AX_N_ZUFDefaultDelegateUserPolicy__PEAVUBodySetup____6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar17[3] = 0;
      local_80 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar17 + 3),(FObjectPtr)&local_80);
      *(FName *)(puVar17 + 4) = local_b8;
      puVar17[5] = CONCAT44(uStack_ac,uStack_b0);
    }
    if (local_78.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
    }
    UBodySetup::CreatePhysicsMeshesAsync
              (this_01,(TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy> *)local_98);
  }
  else {
    pFVar19 = FGuid::NewGuid(&local_58);
    uVar14 = pFVar19->A;
    uVar22 = pFVar19->B;
    uVar6 = pFVar19->C;
    uVar7 = pFVar19->D;
    lVar4 = this_01->_padding_;
    this_01->bHasCookedCollisionData = '\x01';
    (this_01->BodySetupGuid).A = uVar14;
    (this_01->BodySetupGuid).B = uVar22;
    (this_01->BodySetupGuid).C = uVar6;
    (this_01->BodySetupGuid).D = uVar7;
    (**(code **)(lVar4 + 0x2d0))(this_01);
    (**(code **)(this_01->_padding_ + 0x2b0))(this_01);
    UActorComponent::RecreatePhysicsState((UActorComponent *)this);
  }
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar9) {
    FThreadStats::AddMessage(FVar20,CycleScopeEnd);
  }
  return;
}

// UpdateLocalBounds @ 14d27c070

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UProceduralMeshComponent::UpdateLocalBounds(UProceduralMeshComponent *this)

{
  double dVar1;
  double dVar2;
  int iVar3;
  longlong lVar4;
  double dVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  char cVar8;
  FScriptContainerElement *pFVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined1 local_c8 [8];
  double local_c0;
  double dStack_b8;
  double local_b0;
  double dStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  double local_90;
  
  pFVar7 = (this->ProcMeshSections).AllocatorInstance.Data;
  iVar3 = (this->ProcMeshSections).ArrayNum;
  cVar8 = '\0';
  pFVar6 = pFVar7 + 0x30;
  local_c0 = 0.0;
  dStack_b8 = 0.0;
  pFVar9 = pFVar7 + (longlong)iVar3 * 0x60;
  local_b0 = 0.0;
  dStack_a8 = 0.0;
  local_a0 = 0.0;
  uStack_98 = 0.0;
  local_90 = (double)(ulonglong)local_90._0_1_;
  uVar22 = 0;
  uVar23 = 0;
  uVar24 = 0;
  uVar25 = 0;
  uVar18 = 0;
  uVar21 = 0;
  uVar17 = 0;
  uVar20 = 0;
  uVar12 = 0;
  uVar15 = 0;
  uVar11 = 0;
  uVar14 = 0;
LAB_14d27c110:
  do {
    if ((this->ProcMeshSections).ArrayNum != iVar3) {
      `TCheckedPointerIterator<FProcMeshSection,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_c8);
    }
    if (pFVar7 == pFVar9) {
      if (cVar8 == '\0') {
        local_b0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        uStack_98 = (double)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_;
        local_90 = 0.0;
        local_c0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        dStack_b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        dStack_a8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_a0 = (double)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_;
      }
      else {
        dVar1 = (double)CONCAT44(uVar23,uVar22) - (double)CONCAT44(uVar14,uVar11);
        dVar5 = (double)CONCAT44(uVar21,uVar18) - (double)CONCAT44(uVar20,uVar17);
        dVar2 = (double)CONCAT44(uVar25,uVar24) - (double)CONCAT44(uVar15,uVar12);
        local_a0 = dVar1 * __real_3fe0000000000000;
        dStack_a8 = dVar5 * __real_3fe0000000000000;
        uStack_98 = dVar2 * __real_3fe0000000000000;
        local_c0 = dStack_a8 + (double)CONCAT44(uVar20,uVar17);
        dStack_b8 = local_a0 + (double)CONCAT44(uVar14,uVar11);
        local_b0 = uStack_98 + (double)CONCAT44(uVar15,uVar12);
        local_90 = SQRT((dVar1 * dVar1 + dVar5 * dVar5 + dVar2 * dVar2) * __real_3fd0000000000000);
      }
      (this->LocalBounds).Origin.field0_0x0._s_0.X = local_c0;
      (this->LocalBounds).Origin.field0_0x0._s_0.Y = dStack_b8;
      (this->LocalBounds).Origin.field0_0x0._s_0.Z = local_b0;
      (this->LocalBounds).BoxExtent.field0_0x0._s_0.X = dStack_a8;
      lVar4 = this->_padding_;
      *(undefined4 *)((longlong)&(this->LocalBounds).BoxExtent.field0_0x0 + 8) =
           (undefined4)local_a0;
      *(undefined4 *)((longlong)&(this->LocalBounds).BoxExtent.field0_0x0 + 0xc) = local_a0._4_4_;
      *(undefined4 *)((longlong)&(this->LocalBounds).BoxExtent.field0_0x0 + 0x10) =
           (undefined4)uStack_98;
      *(undefined4 *)((longlong)&(this->LocalBounds).BoxExtent.field0_0x0 + 0x14) = uStack_98._4_4_;
      (this->LocalBounds).SphereRadius = local_90;
      (**(code **)(lVar4 + 0x5b0))(this);
      UActorComponent::MarkRenderTransformDirty((UActorComponent *)this);
      return;
    }
    if (cVar8 == '\0') {
      if (pFVar6[0x20] != (FScriptContainerElement)0x0) {
        uVar17 = *(undefined4 *)(pFVar6 + -0x10);
        uVar20 = *(undefined4 *)(pFVar6 + -0xc);
        uVar11 = *(undefined4 *)(pFVar6 + -8);
        uVar14 = *(undefined4 *)(pFVar6 + -4);
        uVar12 = *(undefined4 *)pFVar6;
        uVar15 = *(undefined4 *)(pFVar6 + 4);
        uVar18 = *(undefined4 *)(pFVar6 + 8);
        uVar21 = *(undefined4 *)(pFVar6 + 0xc);
        uVar22 = *(undefined4 *)(pFVar6 + 0x10);
        uVar23 = *(undefined4 *)(pFVar6 + 0x14);
        uVar24 = *(undefined4 *)(pFVar6 + 0x18);
        uVar25 = *(undefined4 *)(pFVar6 + 0x1c);
        local_90 = *(double *)(pFVar6 + 0x20);
        cVar8 = local_90._0_1_;
      }
    }
    else if (pFVar6[0x20] != (FScriptContainerElement)0x0) {
      dVar1 = *(double *)(pFVar6 + -0x10);
      pFVar7 = pFVar7 + 0x60;
      dVar2 = *(double *)(pFVar6 + -8);
      uVar10 = SUB84(dVar1,0);
      uVar13 = (int)((ulonglong)dVar1 >> 0x20);
      if ((double)CONCAT44(uVar20,uVar17) <= dVar1) {
        uVar10 = uVar17;
        uVar13 = uVar20;
      }
      uVar16 = SUB84(dVar2,0);
      uVar19 = (int)((ulonglong)dVar2 >> 0x20);
      if ((double)CONCAT44(uVar14,uVar11) <= dVar2) {
        uVar16 = uVar11;
        uVar19 = uVar14;
      }
      dVar1 = *(double *)pFVar6;
      uVar11 = SUB84(dVar1,0);
      uVar14 = (int)((ulonglong)dVar1 >> 0x20);
      if ((double)CONCAT44(uVar15,uVar12) <= dVar1) {
        uVar11 = uVar12;
        uVar14 = uVar15;
      }
      dVar1 = *(double *)(pFVar6 + 8);
      uVar17 = SUB84(dVar1,0);
      uVar20 = (int)((ulonglong)dVar1 >> 0x20);
      if (dVar1 <= (double)CONCAT44(uVar21,uVar18)) {
        uVar17 = uVar18;
        uVar20 = uVar21;
      }
      dVar1 = *(double *)(pFVar6 + 0x10);
      uVar12 = SUB84(dVar1,0);
      uVar15 = (int)((ulonglong)dVar1 >> 0x20);
      if (dVar1 <= (double)CONCAT44(uVar23,uVar22)) {
        uVar12 = uVar22;
        uVar15 = uVar23;
      }
      dVar1 = *(double *)(pFVar6 + 0x18);
      uVar18 = SUB84(dVar1,0);
      uVar21 = (int)((ulonglong)dVar1 >> 0x20);
      if (dVar1 <= (double)CONCAT44(uVar25,uVar24)) {
        uVar18 = uVar24;
        uVar21 = uVar25;
      }
      pFVar6 = pFVar6 + 0x60;
      uVar22 = uVar12;
      uVar23 = uVar15;
      uVar24 = uVar18;
      uVar25 = uVar21;
      uVar18 = uVar17;
      uVar21 = uVar20;
      uVar17 = uVar10;
      uVar20 = uVar13;
      uVar12 = uVar11;
      uVar15 = uVar14;
      uVar11 = uVar16;
      uVar14 = uVar19;
      goto LAB_14d27c110;
    }
    pFVar7 = pFVar7 + 0x60;
    pFVar6 = pFVar6 + 0x60;
  } while( true );
}

// UpdateMeshSection @ 14d27c320

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UProceduralMeshComponent::UpdateMeshSection
          (UProceduralMeshComponent *this,int param_1,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_3,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_4,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_5,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_6,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_7,
          TArray<FColor,TSizedDefaultAllocator<32>_> *param_8,
          TArray<FProcMeshTangent,TSizedDefaultAllocator<32>_> *param_9)

{
  int iVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_ProcMesh_UpdateSectionGT> FVar13;
  TVector<double>_u_0 *pTVar14;
  int *piVar15;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar16;
  undefined ***pppuVar17;
  longlong lVar18;
  FName FVar19;
  uint uVar20;
  UProceduralMeshComponent *this_02;
  uint uVar21;
  FScriptContainerElement *pFVar22;
  ulonglong uVar23;
  TArray<FProcMeshVertex,TSizedDefaultAllocator<32>_> *pTVar24;
  FScriptContainerElement *pFVar25;
  longlong lVar26;
  longlong lVar27;
  FScriptContainerElement *pFVar28;
  undefined1 auStackY_238 [32];
  undefined1 local_1d7 [7];
  longlong local_1d0;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_1c8;
  FName local_1b8;
  UProceduralMeshComponent *local_1b0;
  TArray<FProcMeshVertex,TSizedDefaultAllocator<32>_> *local_1a8;
  FColor_u_0 local_1a0;
  int local_19c;
  FName local_198;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_190;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_188;
  TArray<FProcMeshTangent,TSizedDefaultAllocator<32>_> *local_180;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *local_178;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *local_170;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *local_168;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *local_160;
  TArray<FColor,TSizedDefaultAllocator<32>_> *local_158;
  FName local_150;
  FName local_148;
  TVector<double>_u_0 local_138;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined1 local_108;
  undefined4 local_107;
  undefined2 local_103;
  undefined1 local_101;
  FName local_100;
  code *local_f8 [2];
  undefined **local_e8;
  longlong lStack_e0;
  int *local_d8;
  undefined ***local_d0;
  undefined1 local_c8 [16];
  undefined **local_b8;
  longlong lStack_b0;
  int *local_a8;
  undefined ***local_a0;
  byte local_98;
  TVector<double>_u_0 local_88 [2];
  ulonglong local_50;
  
  pTVar14 = &local_138;
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_238;
  lVar26 = 0;
  local_178 = param_4;
  local_170 = param_5;
  local_168 = param_6;
  local_160 = param_7;
  local_158 = param_8;
  local_180 = param_9;
  FVar13 = StatPtr_STAT_ProcMesh_UpdateSectionGT;
  local_1b0 = this;
  local_19c = param_1;
  local_190 = param_2;
  local_188 = param_3;
  if (StatPtr_STAT_ProcMesh_UpdateSectionGT ==
      (FThreadSafeStaticStat<FStat_STAT_ProcMesh_UpdateSectionGT>)0x0) {
    pFVar12 = ::FName::FName(&local_100,"STAT_ProcMesh_UpdateSectionGT");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_ProcMesh_UpdateSectionGT>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ProcMesh_UpdateSectionGT,*pFVar12
                        ,L"UpdateSection GT","STATGROUP_ProceduralMesh","STATCAT_Advanced",
                        L"ProceduralMesh",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar19 = *(FName *)FVar13;
  bVar6 = false;
  bVar7 = false;
  local_148.ComparisonIndex.Value = 0;
  local_148.Number = 0;
  bVar8 = false;
  bVar9 = false;
  if ((FVar19.ComparisonIndex.Value.Value != 0) || (FVar19.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1a0.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1a0._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar6 = false;
      bVar7 = true;
      bVar8 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_198.ComparisonIndex.Value = FVar19.ComparisonIndex.Value.Value;
        local_198.Number = FVar19.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_198,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ProceduralMeshComponent\\Source\\ProceduralMeshComponent\\Private\\ProceduralMeshComponent.cpp"
                   ,0x291);
        bVar6 = true;
        bVar7 = true;
        bVar8 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_1b8 = FVar19;
      local_150 = FVar19;
      FThreadStats::AddMessage(FVar19,CycleScopeStart);
      bVar8 = true;
      goto LAB_14d27c4df;
    }
  }
  bVar7 = bVar9;
  bVar6 = bVar8;
  bVar8 = false;
  local_150 = local_148;
  FVar19 = local_148;
LAB_14d27c4df:
  if (param_1 < (this->ProcMeshSections).ArrayNum) {
    if ((param_1 < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar1 = param_2->ArrayNum;
    pTVar24 = (TArray<FProcMeshVertex,TSizedDefaultAllocator<32>_> *)
              ((this->ProcMeshSections).AllocatorInstance.Data + (longlong)param_1 * 0x60);
    local_1a8 = pTVar24;
    if (pTVar24->ArrayNum == iVar1) {
      if (iVar1 == 0) {
        local_108 = 0;
        local_107 = 0;
        local_103 = 0;
        local_101 = 0;
        local_138._s_0.X = 0.0;
        local_138._s_0.Y = 0.0;
        local_138._s_0.Z = 0.0;
        uStack_120 = 0;
        local_118 = 0;
        uStack_110 = 0;
      }
      else {
        if ((iVar1 < 1) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        UE::Math::TBox<double>::TBox<double>
                  ((TBox<double> *)&local_88[0]._s_0,
                   (TVector<double> *)(param_2->AllocatorInstance).Data,iVar1);
        pTVar14 = local_88;
      }
      dVar3 = (pTVar14->_s_0).Y;
      uVar21 = 0;
      pFVar28 = (FScriptContainerElement *)(pTVar14->_s_0).Z;
      dVar4 = pTVar14->XYZ[3];
      pTVar24[2].AllocatorInstance.Data = (FScriptContainerElement *)(pTVar14->_s_0).X;
      *(double *)&pTVar24[2].ArrayNum = dVar3;
      pFVar25 = (FScriptContainerElement *)pTVar14->XYZ[4];
      dVar3 = pTVar14->XYZ[5];
      pTVar24[3].AllocatorInstance.Data = pFVar28;
      *(double *)&pTVar24[3].ArrayNum = dVar4;
      pFVar28 = (FScriptContainerElement *)pTVar14->XYZ[6];
      pTVar24[4].AllocatorInstance.Data = pFVar25;
      *(double *)&pTVar24[4].ArrayNum = dVar3;
      pTVar24[5].AllocatorInstance.Data = pFVar28;
      if (0 < iVar1) {
        lVar18 = 0;
        local_1b8.ComparisonIndex.Value = 0;
        local_1b8.Number = 0;
        lVar27 = 0;
        local_1d0 = 0;
        do {
          uVar20 = ~uVar21 >> 0x1f;
          uVar10 = 0;
          if ((int)uVar21 < pTVar24->ArrayNum) {
            uVar10 = uVar20;
          }
          if ((uVar10 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar28 = (pTVar24->AllocatorInstance).Data;
          if (local_190->ArrayNum == iVar1) {
            uVar10 = 0;
            if ((int)uVar21 < local_190->ArrayNum) {
              uVar10 = uVar20;
            }
            if ((uVar10 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pFVar22 = (local_190->AllocatorInstance).Data;
            pFVar25 = pFVar22 + local_1d0;
            uVar5 = *(undefined8 *)(pFVar25 + 8);
            *(undefined8 *)(pFVar28 + lVar27) = *(undefined8 *)pFVar25;
            *(undefined8 *)(pFVar28 + lVar27 + 8) = uVar5;
            *(undefined8 *)(pFVar28 + lVar27 + 0x10) = *(undefined8 *)(pFVar22 + local_1d0 + 0x10);
          }
          if (local_188->ArrayNum == iVar1) {
            uVar10 = 0;
            if ((int)uVar21 < local_188->ArrayNum) {
              uVar10 = uVar20;
            }
            if ((uVar10 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pFVar22 = (local_188->AllocatorInstance).Data;
            pFVar25 = pFVar22 + local_1d0;
            uVar5 = *(undefined8 *)(pFVar25 + 8);
            *(undefined8 *)(pFVar28 + lVar27 + 0x18) = *(undefined8 *)pFVar25;
            *(undefined8 *)(pFVar28 + lVar27 + 0x18 + 8) = uVar5;
            *(undefined8 *)(pFVar28 + lVar27 + 0x28) = *(undefined8 *)(pFVar22 + local_1d0 + 0x10);
          }
          if (local_180->ArrayNum == iVar1) {
            uVar10 = 0;
            if ((int)uVar21 < local_180->ArrayNum) {
              uVar10 = uVar20;
            }
            if ((uVar10 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pFVar22 = (local_180->AllocatorInstance).Data;
            pFVar25 = pFVar22 + (longlong)local_1b8;
            uVar5 = *(undefined8 *)(pFVar25 + 8);
            *(undefined8 *)(pFVar28 + lVar27 + 0x30) = *(undefined8 *)pFVar25;
            *(undefined8 *)(pFVar28 + lVar27 + 0x30 + 8) = uVar5;
            pFVar22 = pFVar22 + (longlong)local_1b8 + 0x10;
            uVar5 = *(undefined8 *)(pFVar22 + 8);
            *(undefined8 *)(pFVar28 + lVar27 + 0x40) = *(undefined8 *)pFVar22;
            *(undefined8 *)(pFVar28 + lVar27 + 0x40 + 8) = uVar5;
          }
          if (local_178->ArrayNum == iVar1) {
            uVar10 = 0;
            if ((int)uVar21 < local_178->ArrayNum) {
              uVar10 = uVar20;
            }
            if ((uVar10 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pFVar25 = (local_178->AllocatorInstance).Data + lVar26;
            uVar5 = *(undefined8 *)(pFVar25 + 8);
            *(undefined8 *)(pFVar28 + lVar27 + 0x58) = *(undefined8 *)pFVar25;
            *(undefined8 *)(pFVar28 + lVar27 + 0x58 + 8) = uVar5;
          }
          if (local_170->ArrayNum == iVar1) {
            uVar10 = 0;
            if ((int)uVar21 < local_170->ArrayNum) {
              uVar10 = uVar20;
            }
            if ((uVar10 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pFVar25 = (local_170->AllocatorInstance).Data + lVar26;
            uVar5 = *(undefined8 *)(pFVar25 + 8);
            *(undefined8 *)(pFVar28 + lVar27 + 0x68) = *(undefined8 *)pFVar25;
            *(undefined8 *)(pFVar28 + lVar27 + 0x68 + 8) = uVar5;
          }
          if (local_168->ArrayNum == iVar1) {
            uVar10 = 0;
            if ((int)uVar21 < local_168->ArrayNum) {
              uVar10 = uVar20;
            }
            if ((uVar10 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pFVar25 = (local_168->AllocatorInstance).Data + lVar26;
            uVar5 = *(undefined8 *)(pFVar25 + 8);
            *(undefined8 *)(pFVar28 + lVar27 + 0x78) = *(undefined8 *)pFVar25;
            *(undefined8 *)(pFVar28 + lVar27 + 0x78 + 8) = uVar5;
          }
          if (local_160->ArrayNum == iVar1) {
            uVar10 = 0;
            if ((int)uVar21 < local_160->ArrayNum) {
              uVar10 = uVar20;
            }
            if ((uVar10 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pFVar25 = (local_160->AllocatorInstance).Data + lVar26;
            uVar5 = *(undefined8 *)(pFVar25 + 8);
            *(undefined8 *)(pFVar28 + lVar27 + 0x88) = *(undefined8 *)pFVar25;
            *(undefined8 *)(pFVar28 + lVar27 + 0x88 + 8) = uVar5;
          }
          if (local_158->ArrayNum == iVar1) {
            uVar10 = 0;
            if ((int)uVar21 < local_158->ArrayNum) {
              uVar10 = uVar20;
            }
            if ((uVar10 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            *(undefined4 *)(pFVar28 + lVar27 + 0x50) =
                 *(undefined4 *)((local_158->AllocatorInstance).Data + lVar18 * 4);
          }
          uVar21 = uVar21 + 1;
          local_1b8 = (FName)((longlong)local_1b8 + 0x20);
          local_1d0 = local_1d0 + 0x18;
          lVar18 = lVar18 + 1;
          lVar27 = lVar27 + 0x98;
          lVar26 = lVar26 + 0x10;
          FVar19 = local_150;
          pTVar24 = local_1a8;
        } while (lVar18 < iVar1);
      }
      this_02 = local_1b0;
      if ((char)pTVar24[5].ArrayNum != '\0') {
        iVar1 = (local_1b0->ProcMeshSections).ArrayNum;
        pFVar28 = (local_1b0->ProcMeshSections).AllocatorInstance.Data;
        local_1c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1c8.ArrayNum = 0;
        local_1c8.ArrayMax = 0;
        pFVar25 = pFVar28 + (longlong)iVar1 * 0x60;
        while( true ) {
          if ((this_02->ProcMeshSections).ArrayNum != iVar1) {
            local_1d7[0] = 0;
            `TCheckedPointerIterator<FProcMeshSection,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_1d7);
          }
          if (pFVar28 == pFVar25) break;
          if (pFVar28[0x58] != (FScriptContainerElement)0x0) {
            iVar11 = *(int *)(pFVar28 + 8);
            uVar21 = 0;
            this_02 = local_1b0;
            if (0 < iVar11) {
              lVar26 = 0;
              do {
                uVar10 = 0;
                if ((int)uVar21 < iVar11) {
                  uVar10 = ~uVar21 >> 0x1f;
                }
                if ((uVar10 == 0) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar9)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                pFVar22 = (FScriptContainerElement *)(*(longlong *)pFVar28 + lVar26);
                if (((local_1c8.AllocatorInstance.Data <= pFVar22) &&
                    (pFVar22 < local_1c8.AllocatorInstance.Data +
                               (longlong)local_1c8.ArrayMax * 0x18)) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar9)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                if (local_1c8.ArrayNum == local_1c8.ArrayMax) {
                  iVar11 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x818,&local_1c8.AllocatorInstance,&local_1c8.ArrayMax);
                  local_1c8.ArrayNum = iVar11;
                }
                lVar18 = (longlong)local_1c8.ArrayNum;
                uVar21 = uVar21 + 1;
                lVar26 = lVar26 + 0x98;
                local_1c8.ArrayNum = local_1c8.ArrayNum + 1;
                uVar5 = *(undefined8 *)(pFVar22 + 8);
                *(undefined8 *)(local_1c8.AllocatorInstance.Data + lVar18 * 0x18) =
                     *(undefined8 *)pFVar22;
                *(undefined8 *)(local_1c8.AllocatorInstance.Data + lVar18 * 0x18 + 8) = uVar5;
                *(undefined8 *)(local_1c8.AllocatorInstance.Data + lVar18 * 0x18 + 0x10) =
                     *(undefined8 *)(pFVar22 + 0x10);
                iVar11 = *(int *)(pFVar28 + 8);
                this_02 = local_1b0;
              } while ((int)uVar21 < iVar11);
            }
          }
          pFVar28 = pFVar28 + 0x60;
        }
        FBodyInstance::UpdateTriMeshVertices((FBodyInstance *)&this_02->_padding_,&local_1c8);
        pTVar24 = local_1a8;
        if (local_1c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1c8.AllocatorInstance.Data);
          pTVar24 = local_1a8;
        }
      }
      if ((this_02->_padding_ != 0) && ((this_02->_padding_ & 0x100) == 0)) {
        piVar15 = ::operator_new(0x18);
        local_d8 = (int *)0x0;
        if (piVar15 != (int *)0x0) {
          piVar15[2] = 0;
          piVar15[3] = 0;
          piVar15[4] = 0;
          piVar15[5] = 0;
          local_d8 = piVar15;
        }
        *local_d8 = local_19c;
        TArray<FProcMeshVertex,TSizedDefaultAllocator<32>_>::operator=
                  ((TArray<FProcMeshVertex,TSizedDefaultAllocator<32>_> *)(local_d8 + 2),pTVar24);
        local_d0 = (undefined ***)0x0;
        local_e8 = &UE::Core::Private::Function::
                    TFunction_OwnedObject<`UProceduralMeshComponent::UpdateMeshSection'::`49'::<lambda_1>,1,0>
                    ::_vftable_;
        lStack_e0 = this_02->_padding_;
        local_f8[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`UProceduralMeshComponent::UpdateMeshSection'::__l49::<lambda_1>,void,FRHICommandListImmediate_&>
                      ::Call;
        this_00 = FRenderCommandList::GetInstanceTLS();
        if (this_00 == (FRenderCommandList *)0x0) {
          FRenderThreadCommandPipe::
          Enqueue<TRenderCommandTag<_UProceduralMeshComponent::UpdateMeshSection_::__l49::TSTR_FProcMeshSectionUpdate756>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                    ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_f8);
        }
        else {
          this_01 = FRenderCommandList::GetRenderThread(this_00);
          local_c8._0_8_ = local_f8[0];
          local_a0 = local_d0;
          local_b8 = local_e8;
          lStack_b0 = lStack_e0;
          local_a8 = local_d8;
          local_f8[0] = (code *)0x0;
          local_98 = 2;
          pFVar16 = (FRenderCommandTag *)
                    TRenderCommandTag<`UProceduralMeshComponent::UpdateMeshSection'::__l49::TSTR_FProcMeshSectionUpdate756>
                    ::Get();
          UE::RenderCommandPipe::FCommandList::Enqueue
                    (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                              *)local_c8,pFVar16);
          uVar23 = (ulonglong)local_98;
          if ((2 < uVar23) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0xd4,L""), bVar9)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar23] ==
              UE::Core::Private::
              TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::
              Destruct) {
            if ((code *)local_c8._0_8_ != (code *)0x0) {
              pppuVar17 = (undefined ***)(local_c8 + 0x10);
              if (local_a0 != (undefined ***)0x0) {
                pppuVar17 = local_a0;
              }
              (*(code *)(*pppuVar17)[2])();
            }
          }
          else {
            (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar23])(local_c8);
          }
        }
        if (local_f8[0] != (code *)0x0) {
          pppuVar17 = &local_e8;
          if (local_d0 != (undefined ***)0x0) {
            pppuVar17 = local_d0;
          }
          (*(code *)(*pppuVar17)[2])();
        }
      }
      UpdateLocalBounds(this_02);
      UActorComponent::MarkRenderTransformDirty((UActorComponent *)this_02);
    }
    else if (1 < (byte)LogProceduralComponent._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogProceduralComponent);
    }
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar8) {
    FThreadStats::AddMessage(FVar19,CycleScopeEnd);
  }
  return;
}

// UpdateMeshSection_LinearColor @ 14d27cd80

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UProceduralMeshComponent::UpdateMeshSection_LinearColor
          (UProceduralMeshComponent *this,int param_1,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_3,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_4,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_5,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_6,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_7,
          TArray<FLinearColor,TSizedDefaultAllocator<32>_> *param_8,
          TArray<FProcMeshTangent,TSizedDefaultAllocator<32>_> *param_9,bool param_10)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> *pTVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FScriptContainerElement *this_00;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  TArray<FColor,TSizedDefaultAllocator<32>_> local_88 [5];
  
  pTVar5 = param_8;
  local_88[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88[0].ArrayNum = 0;
  local_88[0].ArrayMax = 0;
  if (0 < param_8->ArrayNum) {
    TArray<FColor,TSizedDefaultAllocator<32>_>::SetNum(local_88,param_8->ArrayNum,Default);
    fVar4 = __real_437f0000;
    fVar3 = __real_3f000000;
    fVar2 = __real_3f800000;
    iVar8 = param_8->ArrayNum;
    uVar9 = 0;
    if (0 < iVar8) {
      lVar10 = 0;
      lVar11 = 0;
      do {
        uVar7 = 0;
        if ((int)uVar9 < iVar8) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        this_00 = (pTVar5->AllocatorInstance).Data + lVar11;
        if (param_10) {
          FLinearColor::ToFColorSRGB((FLinearColor *)this_00);
        }
        else {
          fVar12 = *(float *)(this_00 + 8);
          fVar13 = *(float *)(this_00 + 4);
          if (fVar12 <= 0.0) {
            fVar12 = 0.0;
          }
          fVar14 = (((FLinearColor_u_0 *)&this_00->field_0x0)->_s_0).R;
          if (fVar13 <= 0.0) {
            fVar13 = 0.0;
          }
          fVar15 = *(float *)(this_00 + 0xc);
          if (fVar14 <= 0.0) {
            fVar14 = 0.0;
          }
          if (fVar15 <= 0.0) {
            fVar15 = 0.0;
          }
          if (fVar2 <= fVar12) {
            fVar12 = fVar2;
          }
          if (fVar2 <= fVar13) {
            fVar13 = fVar2;
          }
          if (fVar2 <= fVar14) {
            fVar14 = fVar2;
          }
          if (fVar2 <= fVar15) {
            fVar15 = fVar2;
          }
          param_8._0_1_ = (undefined1)(int)(fVar12 * fVar4 + fVar3);
          param_8._1_1_ = (undefined1)(int)(fVar13 * fVar4 + fVar3);
          param_8._2_1_ = (undefined1)(int)(fVar14 * fVar4 + fVar3);
          param_8._3_1_ = (undefined1)(int)(fVar15 * fVar4 + fVar3);
        }
        uVar7 = 0;
        if ((int)uVar9 < local_88[0].ArrayNum) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar9 = uVar9 + 1;
        lVar11 = lVar11 + 0x10;
        *(uint *)(local_88[0].AllocatorInstance.Data + lVar10 * 4) =
             CONCAT13(param_8._3_1_,CONCAT12(param_8._2_1_,CONCAT11(param_8._1_1_,param_8._0_1_)));
        lVar10 = lVar10 + 1;
        iVar8 = pTVar5->ArrayNum;
      } while ((int)uVar9 < iVar8);
    }
  }
  UpdateMeshSection(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,local_88,param_9);
  if (local_88[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88[0].AllocatorInstance.Data);
  }
  return;
}

// WantsNegXTriMesh @ 14d27db70

bool __thiscall UProceduralMeshComponent::WantsNegXTriMesh(UProceduralMeshComponent *this)

{
  return false;
}

// _getUObject @ 14d27dc40

UObject * __thiscall UProceduralMeshComponent::_getUObject(UProceduralMeshComponent *this)

{
  return (UObject *)((longlong)&this[-1].LocalBounds.BoxExtent.field0_0x0 + 8);
}

// _getUObject`adjustor{552}' @ 14d27dc4c

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UProceduralMeshComponent::_getUObject`adjustor{552}' (void)const __ptr64 */

UObject * __thiscall
UProceduralMeshComponent::_getUObject_adjustor_552__(UProceduralMeshComponent *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UProceduralMeshComponent *)&this[-1]._padding_);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{560}' @ 14d27dc60

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UProceduralMeshComponent::_getUObject`adjustor{560}' (void)const __ptr64 */

UObject * __thiscall
UProceduralMeshComponent::_getUObject_adjustor_560__(UProceduralMeshComponent *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UProceduralMeshComponent *)&this[-1]._padding_);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{568}' @ 14d27dc74

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UProceduralMeshComponent::_getUObject`adjustor{568}' (void)const __ptr64 */

UObject * __thiscall
UProceduralMeshComponent::_getUObject_adjustor_568__(UProceduralMeshComponent *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UProceduralMeshComponent *)&this[-1]._padding_);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{1384}' @ 14d27dc88

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UProceduralMeshComponent::_getUObject`adjustor{1384}' (void)const __ptr64 */

UObject * __thiscall
UProceduralMeshComponent::_getUObject_adjustor_1384__(UProceduralMeshComponent *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UProceduralMeshComponent *)&this[-1]._padding_);
  return (UObject *)pUVar1;
}

// execAddCollisionConvexMesh @ 14d27dca0

void __cdecl
UProceduralMeshComponent::execAddCollisionConvexMesh(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *_Src;
  longlong lVar2;
  void *local_28;
  undefined8 local_20;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_18;
  
  local_28 = (void *)0x0;
  local_20 = 0;
  FArrayProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  _Src = local_28;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = (longlong)(int)local_20;
  local_18.ArrayNum = (int)local_20;
  if ((int)local_20 == 0) {
    local_18.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,(int)local_20,0,&local_18.AllocatorInstance,(int)local_20,&local_18.ArrayMax);
    memcpy(local_18.AllocatorInstance.Data,_Src,lVar2 * 0x18);
  }
  AddCollisionConvexMesh((UProceduralMeshComponent *)param_1,&local_18);
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// execClearAllMeshSections @ 14d27e010

void __cdecl
UProceduralMeshComponent::execClearAllMeshSections(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ClearAllMeshSections((UProceduralMeshComponent *)param_1);
  return;
}

// execClearCollisionConvexMeshes @ 14d27e030

void __cdecl
UProceduralMeshComponent::execClearCollisionConvexMeshes
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ClearCollisionConvexMeshes((UProceduralMeshComponent *)param_1);
  return;
}

// execClearMeshSection @ 14d27e050

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UProceduralMeshComponent::execClearMeshSection(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  uint uVar5;
  uint local_res8 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar4 = (longlong)(int)local_res8[0];
  if ((int)local_res8[0] < *(int *)&param_1[0x24].field_0x10) {
    uVar5 = 0;
    if ((int)local_res8[0] < *(int *)&param_1[0x24].field_0x10) {
      uVar5 = ~local_res8[0] >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    FProcMeshSection::Reset
              ((FProcMeshSection *)(lVar4 * 0x60 + *(longlong *)&param_1[0x24].field_0x8));
    UpdateLocalBounds((UProceduralMeshComponent *)param_1);
    UpdateCollision((UProceduralMeshComponent *)param_1);
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// execCreateMeshSection @ 14d27eee0

void __cdecl
UProceduralMeshComponent::execCreateMeshSection(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<FColor,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FProcMeshTangent,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar7;
  int local_res10 [2];
  int local_res20 [2];
  TArray<FProcMeshTangent,TSizedDefaultAllocator<32>_> local_a8;
  TArray<FColor,TSizedDefaultAllocator<32>_> local_98;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_88;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_78;
  TArray<int,TSizedDefaultAllocator<32>_> local_68;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_58;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_48;
  
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
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 0;
  pTVar5 = &local_58;
  if ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar5 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  pTVar4 = &local_68;
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar4 = (TArray<int,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  pTVar7 = &local_78;
  if ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar7 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.ArrayNum = 0;
  local_98.ArrayMax = 0;
  pTVar6 = &local_88;
  if ((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar6 = (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayNum = 0;
  local_a8.ArrayMax = 0;
  pTVar2 = &local_98;
  if ((TArray<FColor,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FColor,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<FColor,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  local_res10[0] = 0;
  pTVar3 = &local_a8;
  if ((TArray<FProcMeshTangent,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FProcMeshTangent,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar3 = (TArray<FProcMeshTangent,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  CreateMeshSection((UProceduralMeshComponent *)param_1,local_res20[0],pTVar5,pTVar4,pTVar7,pTVar6,
                    &local_48,&local_48,&local_48,pTVar2,pTVar3,local_res10[0] != 0);
  if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.AllocatorInstance.Data);
  }
  if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.AllocatorInstance.Data);
  }
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  return;
}

// execCreateMeshSection_LinearColor @ 14d27f250

void __cdecl
UProceduralMeshComponent::execCreateMeshSection_LinearColor
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<FProcMeshTangent,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> *pTVar5;
  bool bVar6;
  int local_res10 [2];
  int local_res20 [2];
  int local_f8 [2];
  TArray<FProcMeshTangent,TSizedDefaultAllocator<32>_> local_f0;
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> local_e0;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_d0;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_c0;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_b0;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_a0;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_90;
  TArray<int,TSizedDefaultAllocator<32>_> local_80;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_70;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *local_60;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *local_58;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_50;
  TArray<int,TSizedDefaultAllocator<32>_> *local_48;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_40;
  
  local_f8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_f8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_f8);
  }
  local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_70.ArrayNum = 0;
  local_70.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_70,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_70);
  }
  local_80.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_80.ArrayNum = 0;
  local_80.ArrayMax = 0;
  local_40 = &local_70;
  if ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    local_40 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
               param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_80,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_80);
  }
  local_90.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_90.ArrayNum = 0;
  local_90.ArrayMax = 0;
  local_48 = &local_80;
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    local_48 = (TArray<int,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_90,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_90);
  }
  local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a0.ArrayNum = 0;
  local_a0.ArrayMax = 0;
  local_50 = &local_90;
  if ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    local_50 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
               param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a0);
  }
  local_b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b0.ArrayNum = 0;
  local_b0.ArrayMax = 0;
  local_58 = &local_a0;
  if ((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    local_58 = (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
               param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b0);
  }
  local_c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c0.ArrayNum = 0;
  local_c0.ArrayMax = 0;
  local_60 = &local_b0;
  if ((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    local_60 = (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
               param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c0);
  }
  local_d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d0.ArrayNum = 0;
  local_d0.ArrayMax = 0;
  pTVar4 = &local_c0;
  if ((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar4 = (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d0);
  }
  local_e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e0.ArrayNum = 0;
  local_e0.ArrayMax = 0;
  pTVar3 = &local_d0;
  if ((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar3 = (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e0);
  }
  local_f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f0.ArrayNum = 0;
  local_f0.ArrayMax = 0;
  pTVar5 = &local_e0;
  if ((TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar5 = (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f0);
  }
  local_res10[0] = 0;
  pTVar2 = &local_f0;
  if ((TArray<FProcMeshTangent,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FProcMeshTangent,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<FProcMeshTangent,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar6 = local_res10[0] != 0;
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  CreateMeshSection_LinearColor
            ((UProceduralMeshComponent *)param_1,local_f8[0],local_40,local_48,local_50,local_58,
             local_60,pTVar4,pTVar3,pTVar5,pTVar2,bVar6,local_res20[0] != 0);
  if (local_f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.AllocatorInstance.Data);
  }
  if (local_e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.AllocatorInstance.Data);
  }
  if (local_d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.AllocatorInstance.Data);
  }
  if (local_c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.AllocatorInstance.Data);
  }
  if (local_b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.AllocatorInstance.Data);
  }
  if (local_a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.AllocatorInstance.Data);
  }
  if (local_90.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.AllocatorInstance.Data);
  }
  if (local_80.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.AllocatorInstance.Data);
  }
  if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.AllocatorInstance.Data);
  }
  return;
}

// execGetNumSections @ 14d27f9f0

void __cdecl
UProceduralMeshComponent::execGetNumSections(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[0x24].field_0x10;
  return;
}

// execIsMeshSectionVisible @ 14d280000

void __cdecl
UProceduralMeshComponent::execIsMeshSectionVisible(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  uint uVar5;
  uint local_res8 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar4 = (longlong)(int)local_res8[0];
  if ((int)local_res8[0] < *(int *)&param_1[0x24].field_0x10) {
    uVar5 = 0;
    if ((int)local_res8[0] < *(int *)&param_1[0x24].field_0x10) {
      uVar5 = ~local_res8[0] >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    *(undefined1 *)param_3 =
         *(undefined1 *)(lVar4 * 0x60 + 0x59 + *(longlong *)&param_1[0x24].field_0x8);
  }
  else {
    *(undefined1 *)param_3 = 0;
  }
  return;
}

// execSetMeshSectionVisible @ 14d280100

void __cdecl
UProceduralMeshComponent::execSetMeshSectionVisible(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  int local_res20 [2];
  
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetMeshSectionVisible((UProceduralMeshComponent *)param_1,local_res20[0],local_res10[0] != 0);
  return;
}

// execUpdateMeshSection @ 14d280440

void __cdecl
UProceduralMeshComponent::execUpdateMeshSection(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<FProcMeshTangent,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FColor,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar6;
  int local_res10 [2];
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_88;
  TArray<FProcMeshTangent,TSizedDefaultAllocator<32>_> local_78;
  TArray<FColor,TSizedDefaultAllocator<32>_> local_68;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_58;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_48;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_38;
  
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
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  pTVar6 = &local_38;
  if ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar6 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  pTVar5 = &local_48;
  if ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar5 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 0;
  pTVar3 = &local_58;
  if ((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar3 = (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  pTVar4 = &local_68;
  if ((TArray<FColor,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FColor,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar4 = (TArray<FColor,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  pTVar2 = &local_78;
  if ((TArray<FProcMeshTangent,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FProcMeshTangent,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<FProcMeshTangent,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UpdateMeshSection((UProceduralMeshComponent *)param_1,local_res10[0],pTVar6,pTVar5,pTVar3,
                    &local_88,&local_88,&local_88,pTVar4,pTVar2);
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// execUpdateMeshSection_LinearColor @ 14d280720

void __cdecl
UProceduralMeshComponent::execUpdateMeshSection_LinearColor
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<FProcMeshTangent,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar6;
  int local_res10 [2];
  int local_res20 [2];
  TArray<FProcMeshTangent,TSizedDefaultAllocator<32>_> local_d8;
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> local_c8;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_b8;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_a8;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_98;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_88;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_78;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_68;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *local_58;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_50;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_48;
  
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
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  local_48 = &local_68;
  if ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    local_48 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
               param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  local_50 = &local_78;
  if ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    local_50 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
               param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.ArrayNum = 0;
  local_98.ArrayMax = 0;
  local_58 = &local_88;
  if ((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    local_58 = (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
               param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayNum = 0;
  local_a8.ArrayMax = 0;
  pTVar4 = &local_98;
  if ((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar4 = (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ArrayNum = 0;
  local_b8.ArrayMax = 0;
  pTVar3 = &local_a8;
  if ((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar3 = (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.ArrayNum = 0;
  local_c8.ArrayMax = 0;
  pTVar6 = &local_b8;
  if ((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar6 = (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = 0;
  local_d8.ArrayMax = 0;
  pTVar5 = &local_c8;
  if ((TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar5 = (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d8);
  }
  local_res10[0] = 0;
  pTVar2 = &local_d8;
  if ((TArray<FProcMeshTangent,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FProcMeshTangent,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<FProcMeshTangent,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UpdateMeshSection_LinearColor
            ((UProceduralMeshComponent *)param_1,local_res20[0],local_48,local_50,local_58,pTVar4,
             pTVar3,pTVar6,pTVar5,pTVar2,local_res10[0] != 0);
  if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.AllocatorInstance.Data);
  }
  if (local_b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.AllocatorInstance.Data);
  }
  if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.AllocatorInstance.Data);
  }
  if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.AllocatorInstance.Data);
  }
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  return;
}

