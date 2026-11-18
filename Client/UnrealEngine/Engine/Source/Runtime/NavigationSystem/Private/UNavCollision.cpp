// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 24

// StaticClass @ 146d62510

UClass * __cdecl UNavCollision::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavCollision.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"NavCollision",
               &Z_Registration_Info_UClass_UNavCollision.InnerSingleton,
               StaticRegisterNativesUNavCollision,0x130,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UNavCollision>,
               InternalVTableHelperCtorCaller<UNavCollision>,local_res8,
               UNavCollisionBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavCollision.InnerSingleton;
}

// UNavCollision @ 146d76070

UNavCollision * __thiscall UNavCollision::UNavCollision(UNavCollision *this,FVTableHelper *param_1)

{
  UNavCollisionBase::UNavCollisionBase((UNavCollisionBase *)this,param_1);
  this->_padding_ = (longlong)&___7UNavCollision__6B_;
  *(undefined8 *)&this->ConvexShapeIndices = 0;
  *(undefined8 *)&(this->ConvexShapeIndices).field_0x8 = 0;
  *(undefined8 *)&(this->ConvexShapeIndices).field_0x10 = 0;
  (this->Bounds).IsValid = '\0';
  (this->CylinderCollision).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CylinderCollision).ArrayNum = 0;
  (this->CylinderCollision).ArrayMax = 0;
  (this->BoxCollision).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoxCollision).ArrayNum = 0;
  (this->BoxCollision).ArrayMax = 0;
  (this->AreaClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->BodySetupGuid).A = 0;
  (this->BodySetupGuid).B = 0;
  (this->BodySetupGuid).C = 0;
  (this->BodySetupGuid).D = 0;
  (this->CookedFormatData).Formats.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CookedFormatData).Formats.Pairs.ArrayNum = 0;
  (this->CookedFormatData).Formats.Pairs.ArrayMax = 0;
  return this;
}

// UNavCollision @ 146d76100

UNavCollision * __thiscall
UNavCollision::UNavCollision(UNavCollision *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  UNavCollisionBase::UNavCollisionBase((UNavCollisionBase *)this,param_1);
  *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffffd;
  this->_padding_ = (longlong)&___7UNavCollision__6B_;
  *(undefined8 *)&this->ConvexShapeIndices = 0;
  *(undefined8 *)&(this->ConvexShapeIndices).field_0x8 = 0;
  *(undefined8 *)&(this->ConvexShapeIndices).field_0x10 = 0;
  (this->Bounds).IsValid = '\0';
  (this->CylinderCollision).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CylinderCollision).ArrayNum = 0;
  (this->CylinderCollision).ArrayMax = 0;
  (this->BoxCollision).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoxCollision).ArrayNum = 0;
  (this->BoxCollision).ArrayMax = 0;
  (this->AreaClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->BodySetupGuid).A = 0;
  (this->BodySetupGuid).B = 0;
  (this->BodySetupGuid).C = 0;
  (this->BodySetupGuid).D = 0;
  (this->CookedFormatData).Formats.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CookedFormatData).Formats.Pairs.ArrayNum = 0;
  (this->CookedFormatData).Formats.Pairs.ArrayMax = 0;
  puVar2 = &this->field_0x108;
  this->bGatherConvexGeometry = 1;
  this->bForceGeometryRebuild = 0;
  this->bCreateOnClient = 1;
  return this;
}

// ~UNavCollision @ 146d78c90

void __thiscall UNavCollision::~UNavCollision(UNavCollision *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNavCollision__6B_;
  FFormatContainer::~FFormatContainer(&this->CookedFormatData);
  pFVar1 = (this->BoxCollision).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CylinderCollision).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  NavMeshMemory::FNavigationMemoryStat::ForAnyElementType::~ForAnyElementType
            ((ForAnyElementType *)&this->ConvexShapeIndices);
  UNavCollisionBase::~UNavCollisionBase((UNavCollisionBase *)this);
  return;
}

// operator() @ 146d7ae60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UNavCollision::GetNavigationModifier'::__l2::<lambda_1>::operator()
          (void *this,TNavStatArray<UE::Math::TVector<double>_> *param_1,int param_2,int param_3)

{
  UObject *pUVar1;
  uint *puVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  undefined1 auStackY_108 [32];
  UObject *local_b8;
  UObject *local_b0;
  FAreaNavModifier local_a8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_108;
  FAreaNavModifier::FAreaNavModifier(&local_a8);
  pUVar1 = (UObject *)**(undefined8 **)((longlong)this + 8);
  if ((*(uint *)(*(longlong *)this + 0x50) >> 3 & 1) == 0) {
    local_b0 = pUVar1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    FAreaNavModifier::InitializeConvex
              (&local_a8,param_1,param_2,param_3,*(TTransform<double> **)((longlong)this + 0x10),
               (TSubclassOf<UNavAreaBase>)&local_b0);
  }
  else {
    local_b8 = pUVar1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    FAreaNavModifier::InitializePerInstanceConvex
              (&local_a8,param_1,param_2,param_3,(TSubclassOf<UNavAreaBase>)&local_b8);
  }
  local_a8.bIncludeAgentHeight = '\x01';
  puVar2 = *(uint **)this;
  if ((*(FAreaNavModifier **)(puVar2 + 8) <= &local_a8) &&
     (&local_a8 < *(FAreaNavModifier **)(puVar2 + 8) + (int)puVar2[0xb])) {
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
  uVar5 = puVar2[10];
  if (uVar5 == puVar2[0xb]) {
    uVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x870,(ForAnyElementType *)(puVar2 + 8),(int *)(puVar2 + 0xb));
  }
  puVar2[10] = uVar5 + 1;
  FAreaNavModifier::FAreaNavModifier
            ((FAreaNavModifier *)((longlong)(int)uVar5 * 0x70 + *(longlong *)(puVar2 + 8)),&local_a8
            );
  uVar5 = local_a8._padding_ & 1U | *puVar2;
  *puVar2 = (uVar5 ^ *puVar2) & 0xfffffffe ^ uVar5;
  uVar5 = ((uint)(byte)local_a8._106_1_ | puVar2[0x14]) & 2 ^ puVar2[0x14] & 0xfffffffd;
  puVar2[0x14] = uVar5;
  puVar2[0x14] = ((byte)local_a8._106_1_ | uVar5) & 4 ^ uVar5 & 0xfffffffb;
  if (local_a8.Points.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Points.AllocatorInstance.Data);
  }
  return;
}

// ClearCollision @ 146d87210

void __thiscall UNavCollision::ClearCollision(UNavCollision *this)

{
  int iVar1;
  
  iVar1 = *(int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  if (iVar1 < 0) {
    UE::Core::Private::ReallocTo<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)&this->_padding_,0,
               (int *)((longlong)&this->_padding_ + 4));
  }
  iVar1 = *(int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  if (iVar1 < 0) {
    UE::Core::Private::ReallocTo<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)&this->_padding_,0,(int *)((longlong)&this->_padding_ + 4)
              );
  }
  iVar1 = *(int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  if (iVar1 < 0) {
    UE::Core::Private::ReallocTo<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)&this->_padding_,0,
               (int *)((longlong)&this->_padding_ + 4));
  }
  iVar1 = *(int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  if (iVar1 < 0) {
    UE::Core::Private::ReallocTo<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)&this->_padding_,0,(int *)((longlong)&this->_padding_ + 4)
              );
  }
  *(undefined4 *)&(this->ConvexShapeIndices).field_0x10 = 0;
  if (*(int *)&(this->ConvexShapeIndices).field_0x14 < 0) {
    UE::Core::Private::ReallocTo<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)&this->ConvexShapeIndices,0,
               (int *)&(this->ConvexShapeIndices).field_0x14);
  }
  *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffffd;
  (this->Bounds).Min.field0_0x0._s_0.X = 0.0;
  (this->Bounds).Min.field0_0x0._s_0.Y = 0.0;
  (this->Bounds).Min.field0_0x0._s_0.Z = 0.0;
  (this->Bounds).Max.field0_0x0._s_0.X = 0.0;
  (this->Bounds).Max.field0_0x0._s_0.Y = 0.0;
  (this->Bounds).Max.field0_0x0._s_0.Z = 0.0;
  (this->Bounds).IsValid = '\0';
  (this->Bounds).Pad[0] = '\0';
  (this->Bounds).Pad[1] = '\0';
  (this->Bounds).Pad[2] = '\0';
  (this->Bounds).Pad[3] = '\0';
  (this->Bounds).Pad[4] = '\0';
  (this->Bounds).Pad[5] = '\0';
  (this->Bounds).Pad[6] = '\0';
  return;
}

// CopyUserSettings @ 146d88ff0

void __thiscall UNavCollision::CopyUserSettings(UNavCollision *this,UNavCollision *param_1)

{
  int *piVar1;
  TArray<FNavCollisionCylinder,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FNavCollisionBox,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  UClass *pUVar6;
  
  pTVar2 = &this->CylinderCollision;
  if (pTVar2 != &param_1->CylinderCollision) {
    iVar4 = (param_1->CylinderCollision).ArrayNum;
    piVar1 = &(this->CylinderCollision).ArrayMax;
    pFVar5 = (param_1->CylinderCollision).AllocatorInstance.Data;
    (this->CylinderCollision).ArrayNum = iVar4;
    if ((iVar4 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,iVar4,*piVar1,&pTVar2->AllocatorInstance,iVar4,piVar1);
      if (iVar4 != 0) {
        memcpy((pTVar2->AllocatorInstance).Data,pFVar5,(longlong)iVar4 << 5);
      }
    }
  }
  pTVar3 = &this->BoxCollision;
  if (pTVar3 != &param_1->BoxCollision) {
    iVar4 = (param_1->BoxCollision).ArrayNum;
    piVar1 = &(this->BoxCollision).ArrayMax;
    pFVar5 = (param_1->BoxCollision).AllocatorInstance.Data;
    (this->BoxCollision).ArrayNum = iVar4;
    if ((iVar4 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,iVar4,*piVar1,&pTVar3->AllocatorInstance,iVar4,piVar1);
      if (iVar4 != 0) {
        memcpy((pTVar3->AllocatorInstance).Data,pFVar5,(longlong)iVar4 * 0x30);
      }
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar6 = (param_1->AreaClass).Class.field0_0x0.DebugPtr, pUVar6 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  (this->AreaClass).Class.field0_0x0 = (param_1->AreaClass).Class.field0_0x0;
  *(uint *)&this->_padding_ =
       (uint)this->_padding_ ^ ((uint)this->_padding_ ^ (uint)param_1->_padding_) & 1;
  *(uint *)&this->field_0x108 =
       (ZPULL(*(undefined4 *)&this->field_0x108,0,1) ^ param_1->bGatherConvexGeometry) & 1 ^
       *(undefined4 *)&this->field_0x108;
  return;
}

// DrawSimpleGeom @ 146d92520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
UNavCollision::DrawSimpleGeom
          (UNavCollision *this,FPrimitiveDrawInterface *param_1,TTransform<double> *param_2,
          FColor param_3)

{
  FScriptContainerElement *pFVar1;
  float fVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  undefined1 auStackY_238 [32];
  TMatrix<double> local_208;
  TMatrix<double> local_188;
  TMatrix<double> local_108;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_238;
  UE::Math::TTransform<double>::ToMatrixWithScale(param_2,&local_108);
  dVar9 = _UNK_150689518;
  dVar8 = ___xmm_00000000000000003ff0000000000000;
  dVar7 = _UNK_15061cbc8;
  dVar6 = ___xmm_3ff00000000000000000000000000000;
  dVar5 = __real_3ff0000000000000;
  uVar12 = 0;
  if (0 < (this->CylinderCollision).ArrayNum) {
    lVar14 = 0;
    do {
      uVar13 = ~uVar12 >> 0x1f;
      uVar11 = 0;
      if ((int)uVar12 < (this->CylinderCollision).ArrayNum) {
        uVar11 = uVar13;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (this->CylinderCollision).AllocatorInstance.Data;
      pFVar1 = pFVar3 + lVar14;
      local_208.M[3][0] = *(double *)pFVar1;
      local_208.M[3][1] = *(double *)(pFVar1 + 8);
      local_208.M[3][2] = *(double *)(pFVar3 + lVar14 + 0x10);
      local_208.M[3][3] = dVar5;
      local_208.M[0][0] = dVar8;
      local_208.M[0][1] = dVar9;
      local_208.M[0][2] = 0.0;
      local_208.M[0][3] = 0.0;
      local_208.M[1][0] = dVar6;
      local_208.M[1][1] = dVar7;
      local_208.M[1][2] = 0.0;
      local_208.M[1][3] = 0.0;
      local_208.M[2][0] = 0.0;
      local_208.M[2][1] = 0.0;
      local_208.M[2][2] = dVar8;
      local_208.M[2][3] = dVar9;
      VectorMatrixMultiply(&local_208,&local_208,&local_108);
      uVar11 = 0;
      if ((int)uVar12 < (this->CylinderCollision).ArrayNum) {
        uVar11 = uVar13;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      fVar2 = *(float *)((this->CylinderCollision).AllocatorInstance.Data + lVar14 + 0x1c);
      uVar11 = 0;
      if ((int)uVar12 < (this->CylinderCollision).ArrayNum) {
        uVar11 = uVar13;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      DrawCylinderHelper(param_1,&local_208,
                         (double)*(float *)((this->CylinderCollision).AllocatorInstance.Data +
                                           lVar14 + 0x18),(double)fVar2,param_3);
      uVar12 = uVar12 + 1;
      lVar14 = lVar14 + 0x20;
    } while ((int)uVar12 < (this->CylinderCollision).ArrayNum);
  }
  uVar12 = 0;
  if (0 < (this->BoxCollision).ArrayNum) {
    lVar14 = 0;
    do {
      uVar11 = 0;
      if ((int)uVar12 < (this->BoxCollision).ArrayNum) {
        uVar11 = ~uVar12 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (this->BoxCollision).AllocatorInstance.Data;
      pFVar1 = pFVar3 + lVar14;
      local_188.M[3][0] = *(double *)pFVar1;
      local_188.M[3][1] = *(double *)(pFVar1 + 8);
      local_188.M[3][2] = *(double *)(pFVar3 + lVar14 + 0x10);
      local_188.M[3][3] = dVar5;
      local_188.M[0][0] = dVar8;
      local_188.M[0][1] = dVar9;
      local_188.M[0][2] = 0.0;
      local_188.M[0][3] = 0.0;
      local_188.M[1][0] = dVar6;
      local_188.M[1][1] = dVar7;
      local_188.M[1][2] = 0.0;
      local_188.M[1][3] = 0.0;
      local_188.M[2][0] = 0.0;
      local_188.M[2][1] = 0.0;
      local_188.M[2][2] = dVar8;
      local_188.M[2][3] = dVar9;
      VectorMatrixMultiply(&local_188,&local_188,&local_108);
      uVar11 = 0;
      if ((int)uVar12 < (this->BoxCollision).ArrayNum) {
        uVar11 = ~uVar12 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      DrawBoxHelper(param_1,&local_188,
                    (TVector<double> *)((this->BoxCollision).AllocatorInstance.Data + lVar14 + 0x18)
                    ,param_3);
      uVar12 = uVar12 + 1;
      lVar14 = lVar14 + 0x30;
    } while ((int)uVar12 < (this->BoxCollision).ArrayNum);
  }
  return;
}

// ExportGeometry @ 146d94cb0

bool __thiscall
UNavCollision::ExportGeometry
          (UNavCollision *this,TTransform<double> *param_1,FNavigableGeometryExport *param_2)

{
  if ((this->_padding_ & 2) != 0) {
    (**(code **)((longlong)*param_2 + 0x30))
              (param_2,this->_padding_,(int)this->_padding_,this->_padding_,(int)this->_padding_,
               param_1);
    (**(code **)((longlong)*param_2 + 0x30))
              (param_2,this->_padding_,(int)this->_padding_,this->_padding_,(int)this->_padding_,
               param_1);
  }
  return (bool)((byte)((uint)this->_padding_ >> 1) & 1);
}

// GatherCollision @ 146d97b20

void __thiscall UNavCollision::GatherCollision(UNavCollision *this)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  UClass *pUVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  uint uVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  uint uVar20;
  uint uVar21;
  float fVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  FKAggregateGeom local_378;
  undefined1 local_2d8 [25];
  FScriptContainerElement local_2bf;
  undefined4 local_2b8;
  undefined1 *local_2b0;
  TVector<double>_u_0 local_2a8;
  double local_290;
  double dStack_288;
  double local_280;
  float local_278;
  float local_274;
  undefined1 local_268 [25];
  FScriptContainerElement local_24f;
  undefined4 local_248;
  undefined1 *local_240;
  TVector<double>_u_0 local_238;
  double local_220;
  double dStack_218;
  double local_210;
  float local_208;
  float local_204;
  float local_200;
  TRotator<double> local_1f8;
  TRotator<double> local_1e0;
  TTransform<double> local_1c8;
  TTransform<double> local_168;
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  double local_b8;
  double local_b0;
  double dStack_a8;
  double local_a0;
  ulonglong uVar15;
  
  ClearCollision(this);
  uVar17 = this->_padding_;
  uVar15 = 0;
  uVar14 = 0;
  if (uVar17 != 0) {
    pUVar12 = Z_Construct_UClass_UStaticMesh_NoRegister();
    iVar10 = (int)pUVar12->_padding_;
    if ((iVar10 <= *(int *)(*(longlong *)(uVar17 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(uVar17 + 0x10) + 0x30) + (longlong)iVar10 * 8)
        == &pUVar12->_padding_)) goto LAB_146d97b8b;
  }
  uVar17 = uVar15;
LAB_146d97b8b:
  if (((this->bGatherConvexGeometry != 0) && (uVar17 != 0)) &&
     (*(UBodySetup **)(uVar17 + 0x1d8) != (UBodySetup *)0x0)) {
    NavigationHelper::GatherCollision(*(UBodySetup **)(uVar17 + 0x1d8),this);
  }
  dVar7 = __real_3fb0000000000000;
  uVar16 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar11 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  local_378.SphereElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_378.SphereElems.ArrayNum = 0;
  local_378.SphereElems.ArrayMax = 0;
  local_378.BoxElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_378.BoxElems.ArrayNum = 0;
  local_378.BoxElems.ArrayMax = 0;
  local_378.SphylElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_378.SphylElems.ArrayNum = 0;
  local_378.SphylElems.ArrayMax = 0;
  local_378.ConvexElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_378.ConvexElems.ArrayNum = 0;
  local_378.ConvexElems.ArrayMax = 0;
  local_378.TaperedCapsuleElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_378.TaperedCapsuleElems.ArrayNum = 0;
  local_378.TaperedCapsuleElems.ArrayMax = 0;
  local_378.LevelSetElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_378.LevelSetElems.ArrayNum = 0;
  local_378.LevelSetElems.ArrayMax = 0;
  local_378.SkinnedLevelSetElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_378.SkinnedLevelSetElems.ArrayNum = 0;
  local_378.SkinnedLevelSetElems.ArrayMax = 0;
  local_378.MLLevelSetElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_378.MLLevelSetElems.ArrayNum = 0;
  local_378.MLLevelSetElems.ArrayMax = 0;
  local_378.SkinnedTriangleMeshElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_378.SkinnedTriangleMeshElems.ArrayNum = 0;
  local_378.SkinnedTriangleMeshElems.ArrayMax = 0;
  local_378.RenderInfoPtr = (atomic<FKConvexGeomRenderInfo_*>)0x0;
  local_378.RenderInfoLock.State = (atomic<unsigned_char>)0x0;
  uVar17 = uVar15;
  uVar19 = uVar15;
  if (0 < (this->BoxCollision).ArrayNum) {
    do {
      uVar18 = (uint)uVar17;
      uVar20 = uVar14;
      if ((int)uVar18 < (this->BoxCollision).ArrayNum) {
        uVar20 = ~uVar18 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar13 = (this->BoxCollision).AllocatorInstance.Data;
      dVar6 = *(double *)(pFVar13 + uVar19 + 0x18) + *(double *)(pFVar13 + uVar19 + 0x18);
      fVar26 = (float)dVar6;
      dVar6 = (double)fVar26 - dVar6;
      uVar20 = SUB84(dVar6,0) & uVar11;
      uVar21 = (uint)((ulonglong)dVar6 >> 0x20) & uVar16;
      if ((dVar7 <= (double)CONCAT44(uVar21,uVar20) && (double)CONCAT44(uVar21,uVar20) != dVar7) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("FloatFitsIn<OutType>(In, Precision)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                             ,0xc0,L"Loss of data caused by narrowing conversion"), bVar9)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      dVar6 = *(double *)(pFVar13 + uVar19 + 0x20) + *(double *)(pFVar13 + uVar19 + 0x20);
      fVar25 = (float)dVar6;
      dVar6 = (double)fVar25 - dVar6;
      uVar20 = SUB84(dVar6,0) & uVar11;
      uVar21 = (uint)((ulonglong)dVar6 >> 0x20) & uVar16;
      if ((dVar7 <= (double)CONCAT44(uVar21,uVar20) && (double)CONCAT44(uVar21,uVar20) != dVar7) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("FloatFitsIn<OutType>(In, Precision)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                             ,0xc0,L"Loss of data caused by narrowing conversion"), bVar9)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      dVar6 = *(double *)(pFVar13 + uVar19 + 0x28) + *(double *)(pFVar13 + uVar19 + 0x28);
      fVar22 = (float)dVar6;
      dVar6 = (double)fVar22 - dVar6;
      uVar20 = SUB84(dVar6,0) & uVar11;
      uVar21 = (uint)((ulonglong)dVar6 >> 0x20) & uVar16;
      if ((dVar7 <= (double)CONCAT44(uVar21,uVar20) && (double)CONCAT44(uVar21,uVar20) != dVar7) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("FloatFitsIn<OutType>(In, Precision)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                             ,0xc0,L"Loss of data caused by narrowing conversion"), bVar9)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_268[0x18] = local_268[0x18] | 1;
      local_240 = local_268;
      local_268._8_4_ = 0;
      local_268._12_4_ = 0;
      local_268._16_4_ = 0;
      local_238._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_238._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_238._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_210 = UE::Math::TRotator<double>::ZeroRotator.Roll;
      fVar4 = GlobalVectorConstants::Float0001.m128_f32[0];
      fVar5 = GlobalVectorConstants::Float0001.m128_f32[2];
      local_220 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
      dStack_218 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
      local_268._20_4_ = 1;
      uVar27 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      uVar29 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20)
      ;
      local_24f = (FScriptContainerElement)0x3;
      local_248 = 6;
      local_268._0_8_ = &___7FKBoxElem__6B_;
      uVar31 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      uVar32 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20)
      ;
      dVar6 = *(double *)(pFVar13 + uVar19 + 8);
      pFVar1 = pFVar13 + uVar19;
      uVar28 = *(undefined4 *)pFVar1;
      uVar30 = *(undefined4 *)(pFVar1 + 4);
      dVar8 = *(double *)pFVar1;
      dVar2 = *(double *)(pFVar13 + uVar19 + 0x10);
      uVar23 = SUB84(dVar6,0);
      uVar24 = (undefined4)((ulonglong)dVar6 >> 0x20);
      local_1c8.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_1c8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_1c8.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      local_1c8.Rotation.XY.m128d_f64[1]._0_4_ = uVar27;
      local_1c8.Rotation.XY.m128d_f64[0] = (double)fVar4;
      local_1c8.Rotation.XY.m128d_f64[1]._4_4_ = uVar29;
      local_1c8.Scale3D.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_1c8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_1c8.Scale3D.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      local_1c8.Rotation.ZW.m128d_f64[1]._0_4_ = uVar31;
      local_1c8.Rotation.ZW.m128d_f64[0] = (double)fVar5;
      local_1c8.Rotation.ZW.m128d_f64[1]._4_4_ = uVar32;
      local_1c8.Translation.ZW.m128d_f64[1] = 0.0;
      local_208 = fVar26;
      local_204 = fVar25;
      local_200 = fVar22;
      local_1c8.Translation.XY.m128d_f64[0]._0_4_ = uVar28;
      local_1c8.Translation.XY.m128d_f64[0]._4_4_ = uVar30;
      local_1c8.Translation.XY.m128d_f64[1]._0_4_ = uVar23;
      local_1c8.Translation.XY.m128d_f64[1]._4_4_ = uVar24;
      local_1c8.Translation.ZW.m128d_f64[0] = dVar2;
      bVar9 = UE::Math::TTransform<double>::IsValid(&local_1c8);
      if ((!bVar9) &&
         (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<8441893820995469421>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\PhysicsEngine\\BoxElem.h"
                             ,0x6d,"InTransform.IsValid()"), bVar9)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_108._8_4_ = uVar27;
      local_108._0_8_ = (double)fVar4;
      local_108._12_4_ = uVar29;
      local_f8._8_4_ = uVar31;
      local_f8._0_8_ = (double)fVar5;
      local_f8._12_4_ = uVar32;
      UE::Math::TQuat<double>::Rotator((TQuat<double> *)local_108,&local_1f8);
      local_210 = local_1f8.Roll;
      local_220 = local_1f8.Pitch;
      dStack_218 = local_1f8.Yaw;
      local_238._s_0.X = dVar8;
      local_238._8_8_ = dVar6;
      local_238._s_0.Z = dVar2;
      local_c8 = uVar28;
      uStack_c4 = uVar30;
      uStack_c0 = uVar23;
      uStack_bc = uVar24;
      local_b8 = dVar2;
      if (((local_378.BoxElems.AllocatorInstance.Data <= (FKBoxElem *)local_268) &&
          ((FScriptContainerElement *)local_268 <
           local_378.BoxElems.AllocatorInstance.Data + (longlong)local_378.BoxElems.ArrayMax * 0x70)
          ) && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar9)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar10 = local_378.BoxElems.ArrayNum;
      if (local_378.BoxElems.ArrayNum == local_378.BoxElems.ArrayMax) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x870,&local_378.BoxElems.AllocatorInstance,&local_378.BoxElems.ArrayMax
                           );
      }
      local_378.BoxElems.ArrayNum = iVar10 + 1;
      pFVar13 = local_378.BoxElems.AllocatorInstance.Data + (longlong)iVar10 * 0x70;
      *(undefined ***)&pFVar13->field_0x0 = &___7FKShapeElem__6B_;
      *(undefined4 *)(pFVar13 + 8) = local_268._8_4_;
      *(ulonglong *)(pFVar13 + 0xc) = CONCAT44(local_268._16_4_,local_268._12_4_);
      *(undefined4 *)(pFVar13 + 0x14) = local_268._20_4_;
      pFVar13[0x18] = (FScriptContainerElement)(local_268[0x18] & 1 | (byte)pFVar13[0x18] & 0xfe);
      pFVar13[0x19] = local_24f;
      *(undefined4 *)(pFVar13 + 0x20) = 6;
      *(FScriptContainerElement **)(pFVar13 + 0x28) = pFVar13;
      *(undefined ***)&pFVar13->field_0x0 = &___7FKBoxElem__6B_;
      *(double *)(pFVar13 + 0x30) = local_238._s_0.X;
      *(double *)(pFVar13 + 0x38) = local_238._s_0.Y;
      *(double *)(pFVar13 + 0x40) = local_238._s_0.Z;
      *(double *)(pFVar13 + 0x48) = local_220;
      *(double *)(pFVar13 + 0x50) = dStack_218;
      *(double *)(pFVar13 + 0x58) = local_210;
      *(float *)(pFVar13 + 0x60) = local_208;
      *(float *)(pFVar13 + 100) = local_204;
      *(float *)(pFVar13 + 0x68) = local_200;
      FKBoxElem::~FKBoxElem((FKBoxElem *)local_268);
      uVar17 = (ulonglong)(uVar18 + 1);
      uVar19 = uVar19 + 0x30;
    } while ((int)(uVar18 + 1) < (this->BoxCollision).ArrayNum);
  }
  fVar26 = __real_3f000000;
  uVar17 = uVar15;
  if (0 < (this->CylinderCollision).ArrayNum) {
    do {
      uVar16 = (uint)uVar15;
      uVar11 = 0;
      if ((int)uVar16 < (this->CylinderCollision).ArrayNum) {
        uVar11 = ~uVar16 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar13 = (this->CylinderCollision).AllocatorInstance.Data;
      local_2b0 = local_2d8;
      local_278 = *(float *)(pFVar13 + uVar17 + 0x18);
      local_274 = *(float *)(pFVar13 + uVar17 + 0x1c);
      local_2d8[0x18] = local_2d8[0x18] | 1;
      local_2a8._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_2a8._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_2a8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_280 = UE::Math::TRotator<double>::ZeroRotator.Roll;
      fVar25 = GlobalVectorConstants::Float0001.m128_f32[0];
      fVar22 = GlobalVectorConstants::Float0001.m128_f32[2];
      uVar28 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      uVar30 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20)
      ;
      local_2d8._8_4_ = 0;
      local_2d8._12_4_ = 0;
      local_2d8._16_4_ = 0;
      local_2d8._20_4_ = 2;
      local_2bf = (FScriptContainerElement)0x3;
      uVar23 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      uVar24 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20)
      ;
      local_2b8 = 6;
      local_2d8._0_8_ = &___7FKSphylElem__6B_;
      local_290 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
      dStack_288 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
      dVar6 = *(double *)(pFVar13 + uVar17);
      dVar2 = *(double *)(pFVar13 + uVar17 + 8);
      local_168.Rotation.XY.m128d_f64[1]._0_4_ = uVar28;
      local_168.Rotation.XY.m128d_f64[0] = (double)fVar25;
      local_168.Rotation.XY.m128d_f64[1]._4_4_ = uVar30;
      local_168.Rotation.ZW.m128d_f64[1]._0_4_ = uVar23;
      local_168.Rotation.ZW.m128d_f64[0] = (double)fVar22;
      local_168.Rotation.ZW.m128d_f64[1]._4_4_ = uVar24;
      dVar7 = (double)(*(float *)(pFVar13 + uVar17 + 0x1c) * fVar26) +
              *(double *)(pFVar13 + uVar17 + 0x10);
      local_168.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_168.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_168.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      local_168.Scale3D.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_168.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_168.Scale3D.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      local_168.Translation.ZW.m128d_f64[1] = 0.0;
      local_168.Translation.XY.m128d_f64[0] = dVar6;
      local_168.Translation.XY.m128d_f64[1] = dVar2;
      local_168.Translation.ZW.m128d_f64[0] = dVar7;
      bVar9 = UE::Math::TTransform<double>::IsValid(&local_168);
      if ((!bVar9) &&
         (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_6356621301104246694>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\PhysicsEngine\\SphylElem.h"
                             ,0x5a,"InTransform.IsValid()"), bVar9)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_e8._8_4_ = uVar28;
      local_e8._0_8_ = (double)fVar25;
      local_e8._12_4_ = uVar30;
      local_d8._8_4_ = uVar23;
      local_d8._0_8_ = (double)fVar22;
      local_d8._12_4_ = uVar24;
      UE::Math::TQuat<double>::Rotator((TQuat<double> *)local_e8,&local_1e0);
      local_280 = local_1e0.Roll;
      local_290 = local_1e0.Pitch;
      dStack_288 = local_1e0.Yaw;
      local_2a8._s_0.X = dVar6;
      local_2a8._s_0.Y = dVar2;
      local_2a8._s_0.Z = dVar7;
      local_b0 = dVar6;
      dStack_a8 = dVar2;
      local_a0 = dVar7;
      if (((local_378.SphylElems.AllocatorInstance.Data <= (FKSphylElem *)local_2d8) &&
          ((FScriptContainerElement *)local_2d8 <
           local_378.SphylElems.AllocatorInstance.Data +
           (longlong)local_378.SphylElems.ArrayMax * 0x68)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar10 = local_378.SphylElems.ArrayNum;
      if (local_378.SphylElems.ArrayNum == local_378.SphylElems.ArrayMax) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x868,&local_378.SphylElems.AllocatorInstance,
                            &local_378.SphylElems.ArrayMax);
      }
      local_378.SphylElems.ArrayNum = iVar10 + 1;
      pFVar13 = local_378.SphylElems.AllocatorInstance.Data + (longlong)iVar10 * 0x68;
      *(undefined ***)&pFVar13->field_0x0 = &___7FKShapeElem__6B_;
      *(undefined4 *)(pFVar13 + 8) = local_2d8._8_4_;
      *(ulonglong *)(pFVar13 + 0xc) = CONCAT44(local_2d8._16_4_,local_2d8._12_4_);
      *(undefined4 *)(pFVar13 + 0x14) = local_2d8._20_4_;
      pFVar13[0x18] = (FScriptContainerElement)(local_2d8[0x18] & 1 | (byte)pFVar13[0x18] & 0xfe);
      pFVar13[0x19] = local_2bf;
      *(undefined4 *)(pFVar13 + 0x20) = 6;
      *(FScriptContainerElement **)(pFVar13 + 0x28) = pFVar13;
      *(undefined ***)&pFVar13->field_0x0 = &___7FKSphylElem__6B_;
      *(double *)(pFVar13 + 0x30) = local_2a8._s_0.X;
      *(double *)(pFVar13 + 0x38) = local_2a8._s_0.Y;
      *(double *)(pFVar13 + 0x40) = local_2a8._s_0.Z;
      *(double *)(pFVar13 + 0x48) = local_290;
      *(double *)(pFVar13 + 0x50) = dStack_288;
      *(double *)(pFVar13 + 0x58) = local_280;
      *(float *)(pFVar13 + 0x60) = local_278;
      *(float *)(pFVar13 + 100) = local_274;
      FKSphylElem::~FKSphylElem((FKSphylElem *)local_2d8);
      uVar15 = (ulonglong)(uVar16 + 1);
      uVar17 = uVar17 + 0x20;
    } while ((int)(uVar16 + 1) < (this->CylinderCollision).ArrayNum);
  }
  if (local_378.SphereElems.ArrayNum + local_378.ConvexElems.ArrayNum +
      local_378.TaperedCapsuleElems.ArrayNum + local_378.LevelSetElems.ArrayNum +
      local_378.SkinnedLevelSetElems.ArrayNum + local_378.MLLevelSetElems.ArrayNum +
      local_378.SkinnedTriangleMeshElems.ArrayNum + local_378.SphylElems.ArrayNum +
      local_378.BoxElems.ArrayNum != 0) {
    NavigationHelper::GatherCollision(&local_378,this);
  }
  if ((0 < (int)this->_padding_) || (0 < (int)this->_padding_)) {
    uVar14 = 2;
  }
  *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffffd;
  *(uint *)&this->_padding_ = (uint)this->_padding_ | uVar14;
  DestructItems<FKSkinnedTriangleMeshElem,int>
            ((FKSkinnedTriangleMeshElem *)local_378.SkinnedTriangleMeshElems.AllocatorInstance.Data,
             local_378.SkinnedTriangleMeshElems.ArrayNum);
  if ((FKSkinnedTriangleMeshElem *)local_378.SkinnedTriangleMeshElems.AllocatorInstance.Data !=
      (FKSkinnedTriangleMeshElem *)0x0) {
    FMemory::Free(local_378.SkinnedTriangleMeshElems.AllocatorInstance.Data);
  }
  DestructItems<FKMLLevelSetElem,int>
            ((FKMLLevelSetElem *)local_378.MLLevelSetElems.AllocatorInstance.Data,
             local_378.MLLevelSetElems.ArrayNum);
  if ((FKMLLevelSetElem *)local_378.MLLevelSetElems.AllocatorInstance.Data !=
      (FKMLLevelSetElem *)0x0) {
    FMemory::Free(local_378.MLLevelSetElems.AllocatorInstance.Data);
  }
  DestructItems<FKSkinnedLevelSetElem,int>
            ((FKSkinnedLevelSetElem *)local_378.SkinnedLevelSetElems.AllocatorInstance.Data,
             local_378.SkinnedLevelSetElems.ArrayNum);
  if ((FKSkinnedLevelSetElem *)local_378.SkinnedLevelSetElems.AllocatorInstance.Data !=
      (FKSkinnedLevelSetElem *)0x0) {
    FMemory::Free(local_378.SkinnedLevelSetElems.AllocatorInstance.Data);
  }
  DestructItems<FKLevelSetElem,int>
            ((FKLevelSetElem *)local_378.LevelSetElems.AllocatorInstance.Data,
             local_378.LevelSetElems.ArrayNum);
  if ((FKLevelSetElem *)local_378.LevelSetElems.AllocatorInstance.Data != (FKLevelSetElem *)0x0) {
    FMemory::Free(local_378.LevelSetElems.AllocatorInstance.Data);
  }
  DestructItems<FKTaperedCapsuleElem,int>
            ((FKTaperedCapsuleElem *)local_378.TaperedCapsuleElems.AllocatorInstance.Data,
             local_378.TaperedCapsuleElems.ArrayNum);
  if ((FKTaperedCapsuleElem *)local_378.TaperedCapsuleElems.AllocatorInstance.Data !=
      (FKTaperedCapsuleElem *)0x0) {
    FMemory::Free(local_378.TaperedCapsuleElems.AllocatorInstance.Data);
  }
  DestructItems<FKConvexElem,int>
            ((FKConvexElem *)local_378.ConvexElems.AllocatorInstance.Data,
             local_378.ConvexElems.ArrayNum);
  if ((FKConvexElem *)local_378.ConvexElems.AllocatorInstance.Data != (FKConvexElem *)0x0) {
    FMemory::Free(local_378.ConvexElems.AllocatorInstance.Data);
  }
  DestructItems<FKSphylElem,int>
            ((FKSphylElem *)local_378.SphylElems.AllocatorInstance.Data,
             local_378.SphylElems.ArrayNum);
  if ((FKSphylElem *)local_378.SphylElems.AllocatorInstance.Data != (FKSphylElem *)0x0) {
    FMemory::Free(local_378.SphylElems.AllocatorInstance.Data);
  }
  DestructItems<FKBoxElem,int>
            ((FKBoxElem *)local_378.BoxElems.AllocatorInstance.Data,local_378.BoxElems.ArrayNum);
  if ((FKBoxElem *)local_378.BoxElems.AllocatorInstance.Data != (FKBoxElem *)0x0) {
    FMemory::Free(local_378.BoxElems.AllocatorInstance.Data);
  }
  DestructItems<FKSphereElem,int>
            ((FKSphereElem *)local_378.SphereElems.AllocatorInstance.Data,
             local_378.SphereElems.ArrayNum);
  if ((FKSphereElem *)local_378.SphereElems.AllocatorInstance.Data != (FKSphereElem *)0x0) {
    FMemory::Free(local_378.SphereElems.AllocatorInstance.Data);
  }
  return;
}

// GetBounds @ 146d99f60

TBox<double> * __thiscall
UNavCollision::GetBounds(UNavCollision *this,TBox<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  
  dVar1 = (this->Bounds).Min.field0_0x0._s_0.Y;
  dVar2 = (this->Bounds).Min.field0_0x0._s_0.Z;
  dVar3 = (this->Bounds).Max.field0_0x0._s_0.X;
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = (this->Bounds).Min.field0_0x0._s_0.X;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar1;
  dVar1 = (this->Bounds).Max.field0_0x0._s_0.Y;
  dVar4 = (this->Bounds).Max.field0_0x0._s_0.Z;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar2;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar3;
  uVar5 = (this->Bounds).IsValid;
  uVar6 = (this->Bounds).Pad[0];
  uVar7 = (this->Bounds).Pad[1];
  uVar8 = (this->Bounds).Pad[2];
  uVar9 = (this->Bounds).Pad[3];
  uVar10 = (this->Bounds).Pad[4];
  uVar11 = (this->Bounds).Pad[5];
  uVar12 = (this->Bounds).Pad[6];
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar1;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar4;
  __return_storage_ptr__->IsValid = uVar5;
  __return_storage_ptr__->Pad[0] = uVar6;
  __return_storage_ptr__->Pad[1] = uVar7;
  __return_storage_ptr__->Pad[2] = uVar8;
  __return_storage_ptr__->Pad[3] = uVar9;
  __return_storage_ptr__->Pad[4] = uVar10;
  __return_storage_ptr__->Pad[5] = uVar11;
  __return_storage_ptr__->Pad[6] = uVar12;
  return __return_storage_ptr__;
}

// GetCookedData @ 146d9a050

/* WARNING: Enum "Type": Some values do not have unique names */

TBulkData<unsigned_char> * __thiscall
UNavCollision::GetCookedData(UNavCollision *this,FName param_1)

{
  TConsoleVariableData<int> *pTVar1;
  bool bVar2;
  bool bVar3;
  TBulkData<unsigned_char> **ppTVar4;
  FBulkData *this_00;
  longlong lVar5;
  FString *pFVar6;
  long64 lVar7;
  FStaticBasicLogRecord *pFVar8;
  bool bVar9;
  FString local_18;
  
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId567,"UNavCollision::GetCookedData",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavCollision.cpp"
               ,0x237);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId567);
  }
  if (((this->bGatherConvexGeometry == 0) && ((this->BoxCollision).ArrayNum < 1)) &&
     ((this->CylinderCollision).ArrayNum < 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  bVar2 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if ((!bVar2) && (bVar3)) {
    ppTVar4 = TSortedMap<FName,TBulkData<unsigned_char>_*,TSizedDefaultAllocator<32>,FNameFastLess>
              ::Find(&(this->CookedFormatData).Formats,param_1);
    this_00 = (FBulkData *)FFormatContainer::GetFormat(&this->CookedFormatData,param_1);
    pTVar1 = CVarNavCollisionAvailable.Ref;
    if (ppTVar4 == (TBulkData<unsigned_char> **)0x0) {
      bVar3 = IsInParallelGameThread();
      if ((bVar3) || (bVar3 = IsInGameThread(), bVar3)) {
        lVar5 = 0;
      }
      else {
        lVar5 = 4;
      }
      if (*(int *)((longlong)pTVar1->ShadowedValue + lVar5) == 0) goto LAB_146d9a19f;
      if ((byte)LogNavigation._0_1_ < 2) goto LAB_146d9a1f0;
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_18,(UObject *)0x0);
      pFVar8 = &::LOG_Static;
LAB_146d9a182:
      UE::Logging::Private::BasicLog<2>(pFVar8,(FLogCategoryBase *)&LogNavigation);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    else {
LAB_146d9a19f:
      if ((byte)LogNavigation._0_1_ < 2) {
        if (this_00 == (FBulkData *)0x0) goto LAB_146d9a1f0;
      }
      else if (this_00 == (FBulkData *)0x0) {
        pFVar6 = UObjectBaseUtility::GetPathName
                           ((UObjectBaseUtility *)this,&local_18,(UObject *)0x0);
        if ((pFVar6->Data).ArrayNum == 0) {
          pFVar8 = &::LOG_Static;
        }
        else {
          pFVar8 = &::LOG_Static;
        }
        goto LAB_146d9a182;
      }
      lVar7 = FBulkData::GetBulkDataSize(this_00);
      if (0 < lVar7) goto LAB_146d9a1f2;
    }
  }
LAB_146d9a1f0:
  this_00 = (FBulkData *)0x0;
LAB_146d9a1f2:
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return (TBulkData<unsigned_char> *)this_00;
}

// GetGuid @ 146d9b5a0

FGuid * __thiscall UNavCollision::GetGuid(UNavCollision *this,FGuid *__return_storage_ptr__)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = (this->BodySetupGuid).B;
  uVar2 = (this->BodySetupGuid).C;
  uVar3 = (this->BodySetupGuid).D;
  __return_storage_ptr__->A = (this->BodySetupGuid).A;
  __return_storage_ptr__->B = uVar1;
  __return_storage_ptr__->C = uVar2;
  __return_storage_ptr__->D = uVar3;
  return __return_storage_ptr__;
}

// GetNavigationModifier @ 146d9dbc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UNavCollision::GetNavigationModifier
          (UNavCollision *this,FCompositeNavModifier *param_1,TTransform<double> *param_2)

{
  int *piVar1;
  TObjectPtr<UClass>_u_0 TVar2;
  longlong lVar3;
  FAreaNavModifier *pFVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  FCompositeNavModifier *pFVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_UNavCollision::GetNavigationModifier(FCompositeNavModifier_&,UE::Math::TTransform<double>_const_&)_::_2_::FStat_STAT_NavCollision_GetNavigationModifier>
  FVar13;
  UClass *pUVar14;
  TSubclassOf<UNavAreaBase> TVar15;
  UClass *pUVar16;
  uint uVar17;
  TObjectPtr<UClass>_u_0 TVar18;
  FName FVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  bool bVar23;
  undefined1 auStackY_1a8 [32];
  longlong local_140;
  FColor_u_0 local_138 [2];
  FCompositeNavModifier *local_130;
  FName local_128;
  FName local_120;
  FCompositeNavModifier *local_118;
  TObjectPtr<UClass>_u_0 *local_110;
  TTransform<double> *local_108;
  FName local_100;
  TObjectPtr<UClass>_u_0 local_f0;
  TObjectPtr<UClass>_u_0 local_e8;
  TObjectPtr<UClass>_u_0 local_e0;
  FName local_d8;
  FName local_d0 [3];
  FAreaNavModifier local_b8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  TVar18.DebugPtr = (UClass *)0x0;
  local_130 = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_NavCollision_GetNavigationModifier ==
        (FThreadSafeStaticStat<_public:_virtual_void___cdecl_UNavCollision::GetNavigationModifier(FCompositeNavModifier_&,UE::Math::TTransform<double>_const_&)_::_2_::FStat_STAT_NavCollision_GetNavigationModifier>
         )0x0) {
      pFVar12 = ::FName::FName(&local_d8,"STAT_NavCollision_GetNavigationModifier");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NavCollision_GetNavigationModifier,
                 *pFVar12,L"STAT_NavCollision_GetNavigationModifier","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar13 = StatPtr_STAT_NavCollision_GetNavigationModifier;
  if (StatPtr_STAT_NavCollision_GetNavigationModifier ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl_UNavCollision::GetNavigationModifier(FCompositeNavModifier_&,UE::Math::TTransform<double>_const_&)_::_2_::FStat_STAT_NavCollision_GetNavigationModifier>
       )0x0) {
    pFVar12 = ::FName::FName(local_d0,"STAT_NavCollision_GetNavigationModifier");
    FVar13 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_UNavCollision::GetNavigationModifier(FCompositeNavModifier_&,UE::Math::TTransform<double>_const_&)_::_2_::FStat_STAT_NavCollision_GetNavigationModifier>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_NavCollision_GetNavigationModifier,*pFVar12,
                          L"STAT_NavCollision_GetNavigationModifier","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar19 = *(FName *)FVar13;
  bVar6 = false;
  bVar7 = false;
  local_100.ComparisonIndex.Value = 0;
  local_100.Number = 0;
  bVar9 = false;
  bVar23 = false;
  if ((FVar19.ComparisonIndex.Value.Value == 0) && (FVar19.Number == 0)) {
LAB_146d9dd54:
    bVar7 = bVar23;
    bVar6 = bVar9;
    bVar9 = false;
    local_120 = local_100;
    FVar19 = local_100;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_138[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_138[0]._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar6 = false;
      bVar7 = true;
      bVar9 = false;
      bVar23 = true;
      if (-1 < CpuChannel->Enabled) {
        local_128.ComparisonIndex.Value = FVar19.ComparisonIndex.Value.Value;
        local_128.Number = FVar19.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_128,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavCollision.cpp"
                   ,0x142);
        bVar6 = true;
        bVar7 = true;
        bVar9 = true;
        bVar23 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146d9dd54;
    local_120 = FVar19;
    FThreadStats::AddMessage(FVar19,CycleScopeStart);
    bVar9 = true;
  }
  pUVar16 = (this->AreaClass).Class.field0_0x0.DebugPtr;
  if ((pUVar16 == (UClass *)0x0) || (pUVar14 = UNavArea::StaticClass(), pUVar14 == (UClass *)0x0)) {
LAB_146d9ddab:
    TVar15 = FNavigationSystem::GetDefaultObstacleArea();
    lVar3 = *(longlong *)TVar15.Class.field0_0x0;
    if ((lVar3 != 0) &&
       (pUVar16 = Z_Construct_UClass_UNavAreaBase_NoRegister(), pUVar16 != (UClass *)0x0)) {
      iVar10 = (int)pUVar16->_padding_;
      if ((*(int *)(lVar3 + 0x38) < iVar10) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar10 * 8) !=
          &pUVar16->_padding_)) {
        bVar23 = false;
      }
      else {
        bVar23 = true;
      }
      if (bVar23) {
        TVar18.DebugPtr = *(UClass **)TVar15.Class.field0_0x0;
      }
    }
    if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_146d9de0b;
    bVar23 = TVar18.DebugPtr == (UClass *)0x0;
  }
  else {
    iVar10 = (int)pUVar14->_padding_;
    if (((int)pUVar16->_padding_ < iVar10) ||
       ((longlong *)*(undefined1 **)(pUVar16->_padding_ + (longlong)iVar10 * 8) !=
        &pUVar14->_padding_)) {
      bVar23 = false;
    }
    else {
      bVar23 = true;
    }
    if ((!bVar23) ||
       (TVar2 = (TObjectPtr<UClass>_u_0)(this->AreaClass).Class.field0_0x0.DebugPtr,
       TVar2.DebugPtr == (UClass *)0x0)) goto LAB_146d9ddab;
    bVar23 = UE::GC::GIsIncrementalReachabilityPending == false;
    TVar18 = TVar2;
  }
  if (!bVar23) {
    UE::GC::MarkAsReachable((UObject *)TVar18.DebugPtr);
  }
LAB_146d9de0b:
  local_f0 = TVar18;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar18.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TVar18.DebugPtr);
  }
  if ((this->_padding_ & 2) == 0) {
    GatherCollision(this);
  }
  iVar10 = (param_1->Areas).ArrayNum;
  uVar20 = iVar10 + (uint)((int)this->_padding_ != 0) +
           *(int *)&(this->ConvexShapeIndices).field_0x10;
  if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar20);
  }
  if ((param_1->Areas).ArrayMax < (int)uVar20) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x70,8,uVar20,&(param_1->Areas).AllocatorInstance,iVar10,&(param_1->Areas).ArrayMax);
  }
  pFVar8 = local_130;
  iVar10 = *(int *)&(this->ConvexShapeIndices).field_0x10;
  local_110 = &local_f0;
  local_118 = param_1;
  local_108 = param_2;
  if (0 < iVar10) {
    local_140 = 4;
    uVar20 = 1;
    iVar21 = 0;
    do {
      local_130 = (FCompositeNavModifier *)CONCAT44(local_130._4_4_,uVar20);
      if (((int)uVar20 < 0) || (iVar10 <= (int)uVar20)) {
        iVar22 = (int)this->_padding_;
      }
      else {
        uVar17 = 0;
        if ((int)uVar20 < *(int *)&(this->ConvexShapeIndices).field_0x10) {
          uVar17 = ~uVar20 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar23)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar22 = *(int *)(local_140 + *(longlong *)&this->ConvexShapeIndices);
      }
      if (iVar21 < iVar22) {
        FAreaNavModifier::FAreaNavModifier(&local_b8);
        if (pFVar8->bIsPerInstanceModifier == 0) {
          local_e0.DebugPtr = local_f0.DebugPtr;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (local_f0.DebugPtr != (UClass *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)local_f0.DebugPtr);
          }
          FAreaNavModifier::InitializeConvex
                    (&local_b8,(TNavStatArray<UE::Math::TVector<double>_> *)&this->_padding_,iVar21,
                     iVar22,local_108,(TSubclassOf<UNavAreaBase>)&local_e0);
        }
        else {
          local_e8.DebugPtr = local_f0.DebugPtr;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (local_f0.DebugPtr != (UClass *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)local_f0.DebugPtr);
          }
          FAreaNavModifier::InitializePerInstanceConvex
                    (&local_b8,(TNavStatArray<UE::Math::TVector<double>_> *)&this->_padding_,iVar21,
                     iVar22,(TSubclassOf<UNavAreaBase>)&local_e8);
        }
        local_b8.bIncludeAgentHeight = '\x01';
        pFVar4 = (FAreaNavModifier *)(pFVar8->Areas).AllocatorInstance.Data;
        if (((pFVar4 <= &local_b8) && (&local_b8 < pFVar4 + (pFVar8->Areas).ArrayMax)) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar23)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar10 = (pFVar8->Areas).ArrayNum;
        piVar1 = &(pFVar8->Areas).ArrayMax;
        if (iVar10 == *piVar1) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x870,&(pFVar8->Areas).AllocatorInstance,piVar1);
        }
        (pFVar8->Areas).ArrayNum = iVar10 + 1;
        FAreaNavModifier::FAreaNavModifier
                  ((FAreaNavModifier *)
                   ((pFVar8->Areas).AllocatorInstance.Data + (longlong)iVar10 * 0x70),&local_b8);
        uVar17 = (uint)pFVar8->_padding_;
        uVar11 = local_b8._padding_ & 1U | uVar17;
        *(uint *)&pFVar8->_padding_ = (uVar17 ^ uVar11) & 0xfffffffe ^ uVar11;
        uVar17 = ((uint)(byte)local_b8._106_1_ | *(uint *)&pFVar8->field_0x50) & 2 ^
                 *(uint *)&pFVar8->field_0x50 & 0xfffffffd;
        *(uint *)&pFVar8->field_0x50 = uVar17;
        *(uint *)&pFVar8->field_0x50 = ((byte)local_b8._106_1_ | uVar17) & 4 ^ uVar17 & 0xfffffffb;
        if (local_b8.Points.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.Points.AllocatorInstance.Data);
        }
      }
      iVar10 = *(int *)&(this->ConvexShapeIndices).field_0x10;
      local_140 = local_140 + 4;
      uVar20 = uVar20 + 1;
      FVar19 = local_120;
      iVar21 = iVar22;
    } while ((int)local_130 < iVar10);
  }
  iVar10 = (int)this->_padding_;
  if (0 < iVar10) {
    `UNavCollision::GetNavigationModifier'::__l2::<lambda_1>::operator()
              (&local_118,(TNavStatArray<UE::Math::TVector<double>_> *)&this->_padding_,0,
               iVar10 + -1);
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar9) {
    FThreadStats::AddMessage(FVar19,CycleScopeEnd);
  }
  return;
}

// GetPrivateStaticClass @ 146da05b0

UClass * __cdecl UNavCollision::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavCollision.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"NavCollision",
               &Z_Registration_Info_UClass_UNavCollision.InnerSingleton,
               StaticRegisterNativesUNavCollision,0x130,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UNavCollision>,
               InternalVTableHelperCtorCaller<UNavCollision>,local_res8,
               UNavCollisionBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavCollision.InnerSingleton;
}

// GetResourceSizeEx @ 146da20e0

void __thiscall UNavCollision::GetResourceSizeEx(UNavCollision *this,FResourceSizeEx *param_1)

{
  TBulkData<unsigned_char> **ppTVar1;
  FBulkData *this_00;
  ulong64 uVar2;
  
  UObject::GetResourceSizeEx((UObject *)this,param_1);
  ppTVar1 = TSortedMap<FName,TBulkData<unsigned_char>_*,TSizedDefaultAllocator<32>,FNameFastLess>::
            Find(&(this->CookedFormatData).Formats,NAVCOLLISION_FORMAT);
  if (ppTVar1 != (TBulkData<unsigned_char> **)0x0) {
    this_00 = (FBulkData *)FFormatContainer::GetFormat(&this->CookedFormatData,NAVCOLLISION_FORMAT);
    uVar2 = FBulkData::GetBulkDataSize(this_00);
    FResourceSizeEx::AddDedicatedSystemMemoryBytes(param_1,uVar2);
  }
  return;
}

// NeedsLoadForClient @ 146da7ab0

bool __thiscall UNavCollision::NeedsLoadForClient(UNavCollision *this)

{
  return this->bCreateOnClient;
}

// NeedsLoadForTargetPlatform @ 146da7ad0

bool __thiscall
UNavCollision::NeedsLoadForTargetPlatform(UNavCollision *this,ITargetPlatform *param_1)

{
  return true;
}

// PostInitProperties @ 146dabc90

void __thiscall UNavCollision::PostInitProperties(UNavCollision *this)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  UObject::PostInitProperties((UObject *)this);
  if (((this->_padding_ & 0x10) != 0) && ((GIsServer != false || (this->bCreateOnClient != 0)))) {
    local_48 = (undefined1  [8])0x0;
    local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_40.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
               (FWriteAccessScope *)&local_30);
    local_18 = &local_40;
    puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = &
                ___7__TCommonDelegateInstanceState___A6APEAVUNavCollisionBase__AEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar2 = FDelegateHandle::GenerateNewID();
      puVar1[2] = uVar2;
      *puVar1 = &
                ___7__TBaseStaticDelegateInstance___A6APEAVUNavCollisionBase__AEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar1[3] = ::`anonymous_namespace'::CreateNewNavCollisionInstance;
    }
    if (local_30.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)
               &UNavCollisionBase::ConstructNewInstanceDelegate,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_48);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
               (FWriteAccessScope *)&local_30);
    if ((local_40.DelegateSize != 0) &&
       (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_40,0,0,0x10);
      local_40.DelegateSize = 0;
    }
    if (local_30.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
    }
    if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_40.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_48);
  }
  return;
}

// PostLoad @ 146dac360

void __thiscall UNavCollision::PostLoad(UNavCollision *this)

{
  int iVar1;
  UObject *this_00;
  char cVar2;
  UClass *pUVar3;
  
  UObject::PostLoad((UObject *)this);
  this_00 = (UObject *)this->_padding_;
  if (this_00 != (UObject *)0x0) {
    UObject::ConditionalPostLoad(this_00);
    pUVar3 = Z_Construct_UClass_UStaticMesh_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&this_00->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&this_00->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      cVar2 = (**(code **)(*(longlong *)(this_00 + 6) + 0x10))();
      if (cVar2 == '\0') {
        (**(code **)(this->_padding_ + 0x2b0))(this,*(undefined8 *)&this_00[0xb].field_0x20);
      }
    }
  }
  return;
}

// Serialize @ 146db84c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UNavCollision::Serialize(UNavCollision *this,FArchive *param_1)

{
  undefined1 *puVar1;
  uint *puVar2;
  int *piVar3;
  longlong *plVar4;
  ulonglong *puVar5;
  bool bVar6;
  bool bVar7;
  FName FVar8;
  int iVar9;
  undefined8 uVar10;
  uint uVar11;
  bool bVar12;
  uint local_res8 [2];
  uint local_res10 [2];
  uint local_res18;
  TArray<FName,TSizedDefaultAllocator<32>_> local_48;
  FGuid local_38;
  
  UObject::Serialize((UObject *)this,param_1);
  uVar10 = (**(code **)(*(longlong *)param_1 + 0x28))(param_1);
  plVar4 = *(longlong **)&param_1->field_0x8;
  local_res8[0] = 4;
  local_res10[0] = 0xa237f237;
  if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res10);
    }
  }
  else {
    local_res10[0] = *(uint *)*plVar4;
    *plVar4 = *plVar4 + 4;
  }
  if (local_res10[0] == 0xa237f237) {
    plVar4 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))();
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
  }
  else {
    local_res8[0] = 1;
    (**(code **)(*(longlong *)param_1 + 0x1b8))(param_1,uVar10);
  }
  local_38.A = 0;
  local_38.B = 0;
  local_38.C = 0;
  local_38.D = 0;
  ::operator<<(param_1,&local_38);
  if ((*(longlong *)&param_1->field_0x68 == 0) ||
     (*(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) == 0)) {
    uVar11 = 0;
  }
  else {
    uVar11 = 1;
  }
  bVar12 = SUB41(uVar11,0);
  puVar5 = *(ulonglong **)&param_1->field_0x8;
  puVar1 = &param_1->field_0x28;
  puVar2 = (uint *)*puVar5 + 1;
  if ((uint *)puVar5[1] < puVar2) {
    local_res18 = 0;
    if ((*puVar1 & 1) == 0) {
      local_res18 = uVar11;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1);
    if (1 < local_res18) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar11 = local_res18;
    if ((*puVar1 & 1) != 0) goto LAB_146db862b;
  }
  else {
    uVar11 = *(uint *)*puVar5;
    *puVar5 = (ulonglong)puVar2;
LAB_146db862b:
    bVar12 = uVar11 != 0;
  }
  if ((bVar12 == false) && ((*puVar1 & 1) != 0)) {
    UObjectBaseUtility::GetFullName
              ((UObjectBaseUtility *)this,(FString *)&local_48,(UObject *)0x0,None);
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogNavigation);
    if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
  }
  FVar8 = NAVCOLLISION_FORMAT;
  if (this->bGatherConvexGeometry == 0) {
    piVar3 = &(this->BoxCollision).ArrayNum;
    if (((this->CylinderCollision).ArrayNum == 0) && (*piVar3 == 0)) {
      bVar6 = true;
      bVar7 = false;
      goto LAB_146db86ba;
    }
    bVar6 = false;
    bVar7 = false;
    if ((*piVar3 < 1) && ((this->CylinderCollision).ArrayNum < 1)) {
      bVar7 = false;
      goto LAB_146db86ba;
    }
  }
  else {
    bVar7 = true;
  }
  bVar6 = bVar7;
  bVar7 = true;
LAB_146db86ba:
  if (bVar12 != false) {
    if (3 < (int)local_res8[0]) {
      bVar6 = bVar7;
    }
    if (bVar6) {
      if ((*(longlong *)&param_1->field_0x68 == 0) ||
         (*(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) == 0)) {
        FFormatContainer::Serialize
                  (&this->CookedFormatData,param_1,(UObject *)this,
                   (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0,true,0,true,false);
      }
      else {
        GetCookedData(this,NAVCOLLISION_FORMAT);
        local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_48.ArrayNum = 0;
        local_48.ArrayMax = 0;
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&local_48.AllocatorInstance,&local_48.ArrayMax);
        local_48.ArrayNum = iVar9 + 1;
        *(FName *)(local_48.AllocatorInstance.Data + (longlong)iVar9 * 8) = FVar8;
        FFormatContainer::Serialize
                  (&this->CookedFormatData,param_1,(UObject *)this,&local_48,true,0,true,false);
        if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.AllocatorInstance.Data);
        }
      }
    }
  }
  if (1 < (int)local_res8[0]) {
    (**(code **)(*(longlong *)param_1 + 0x150))(param_1,&this->AreaClass);
  }
  return;
}

// Serialize @ 146db87c0

void __thiscall UNavCollision::Serialize(UNavCollision *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// Setup @ 146db9c60

void __thiscall UNavCollision::Setup(UNavCollision *this,UBodySetup *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  TBulkData<unsigned_char> *pTVar4;
  FLLMScope local_res8 [2];
  FMemScope local_res18 [2];
  FNavCollisionDataReader local_28;
  
  if ((((this->_padding_ & 2) == 0) && (param_1 != (UBodySetup *)0x0)) &&
     ((((this->BodySetupGuid).D != (param_1->BodySetupGuid).D ||
       (this->BodySetupGuid).C != (param_1->BodySetupGuid).C) ||
      (this->BodySetupGuid).B != (param_1->BodySetupGuid).B) ||
      (this->BodySetupGuid).A != (param_1->BodySetupGuid).A)) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        ::FName::FName(&LLMScope_Name233,L"NavigationCollision");
        _Init_thread_footer(&::_TSS0);
      }
    }
    FLLMScope::FLLMScope(local_res8,LLMScope_Name233,false,None,Default,true);
    FMemScope::FMemScope(local_res18,&LLMScope_Name233,true);
    uVar1 = (param_1->BodySetupGuid).B;
    uVar2 = (param_1->BodySetupGuid).C;
    uVar3 = (param_1->BodySetupGuid).D;
    (this->BodySetupGuid).A = (param_1->BodySetupGuid).A;
    (this->BodySetupGuid).B = uVar1;
    (this->BodySetupGuid).C = uVar2;
    (this->BodySetupGuid).D = uVar3;
    ClearCollision(this);
    pTVar4 = GetCookedData(this,NAVCOLLISION_FORMAT);
    if (((this->bForceGeometryRebuild == 0) && (pTVar4 != (TBulkData<unsigned_char> *)0x0)) &&
       (pTVar4->field_0x13 == '\0')) {
      FNavCollisionDataReader::FNavCollisionDataReader
                (&local_28,pTVar4,(FNavCollisionConvex *)&this->_padding_,
                 (FNavCollisionConvex *)&this->_padding_,&this->ConvexShapeIndices,&this->Bounds);
      *(uint *)&this->_padding_ = (uint)this->_padding_ | 2;
    }
    FMemScope::~FMemScope(local_res18);
    FLLMScope::~FLLMScope(local_res8);
  }
  return;
}

// StaticRegisterNativesUNavCollision @ 146dba980

void __cdecl UNavCollision::StaticRegisterNativesUNavCollision(void)

{
  return;
}

