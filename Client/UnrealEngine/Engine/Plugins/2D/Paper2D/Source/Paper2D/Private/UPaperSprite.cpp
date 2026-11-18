// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Paper2D
// Functions: 21

// StaticClass @ 14acddfd0

UClass * __cdecl UPaperSprite::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPaperSprite.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Paper2D",L"PaperSprite",
               &Z_Registration_Info_UClass_UPaperSprite.InnerSingleton,
               StaticRegisterNativesUPaperSprite,0xb8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPaperSprite>,InternalVTableHelperCtorCaller<UPaperSprite>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPaperSprite.InnerSingleton;
}

// UPaperSprite @ 14acea6b0

UPaperSprite * __thiscall UPaperSprite::UPaperSprite(UPaperSprite *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_CollisionDataProvider__;
  this->_padding_ = (longlong)&_vftable__for__ISlateTextureAtlasInterface__;
  (this->AdditionalSourceTextures).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AdditionalSourceTextures).ArrayNum = 0;
  (this->AdditionalSourceTextures).ArrayMax = 0;
  (this->BakedSourceTexture).field0_0x0.DebugPtr = (UTexture2D *)0x0;
  (this->DefaultMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->AlternateMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->Sockets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Sockets).ArrayNum = 0;
  (this->Sockets).ArrayMax = 0;
  (this->BodySetup).field0_0x0.DebugPtr = (UBodySetup *)0x0;
  (this->BakedRenderData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BakedRenderData).ArrayNum = 0;
  (this->BakedRenderData).ArrayMax = 0;
  return this;
}

// UPaperSprite @ 14acea730

UPaperSprite * __thiscall UPaperSprite::UPaperSprite(UPaperSprite *this,FObjectInitializer *param_1)

{
  longlong lVar1;
  void *pvVar2;
  ulonglong uVar3;
  
  UObject::UObject((UObject *)this,param_1);
  uVar3 = (ulonglong)_tls_index;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_CollisionDataProvider__;
  this->_padding_ = (longlong)&_vftable__for__ISlateTextureAtlasInterface__;
  (this->AdditionalSourceTextures).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AdditionalSourceTextures).ArrayNum = 0;
  (this->AdditionalSourceTextures).ArrayMax = 0;
  (this->BakedSourceTexture).field0_0x0.DebugPtr = (UTexture2D *)0x0;
  (this->DefaultMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->AlternateMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->Sockets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Sockets).ArrayNum = 0;
  (this->Sockets).ArrayMax = 0;
  (this->BodySetup).field0_0x0.DebugPtr = (UBodySetup *)0x0;
  (this->BakedRenderData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BakedRenderData).ArrayNum = 0;
  pvVar2 = ThreadLocalStoragePointer;
  (this->BakedRenderData).ArrayMax = 0;
  (this->SpriteCollisionDomain).Value = '\x02';
  this->AlternateMaterialSplitIndex = -1;
  this->PixelsPerUnrealUnit = 2.56;
  lVar1 = *(longlong *)((longlong)pvVar2 + uVar3 * 8);
  if (*(int *)(lVar1 + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ConstructorHelpers::FObjectFinder<UMaterialInterface>::FObjectFinder<UMaterialInterface>
                (&MaskedMaterialRef,L"/Paper2D/MaskedUnlitSpriteMaterial",0);
      atexit(`UPaperSprite::UPaperSprite'::__l2::_dynamic_atexit_destructor_for__MaskedMaterialRef__
            );
      _Init_thread_footer(&::_TSS0);
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (MaskedMaterialRef.Object.field0_0x0 != (UMaterialInterface *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)MaskedMaterialRef.Object.field0_0x0);
  }
  (this->DefaultMaterial).field0_0x0.ObjectPtr.field0_0x0 =
       (FObjectPtr_u_0)MaskedMaterialRef.Object.field0_0x0;
  if (*(int *)(lVar1 + 0x9d4c) < ::_TSS1) {
    _Init_thread_header(&::_TSS1);
    if (::_TSS1 == -1) {
      ConstructorHelpers::FObjectFinder<UMaterialInterface>::FObjectFinder<UMaterialInterface>
                (&OpaqueMaterialRef,L"/Paper2D/OpaqueUnlitSpriteMaterial",0);
      atexit(`UPaperSprite::UPaperSprite'::__l2::_dynamic_atexit_destructor_for__OpaqueMaterialRef__
            );
      _Init_thread_footer(&::_TSS1);
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (OpaqueMaterialRef.Object.field0_0x0 != (UMaterialInterface *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)OpaqueMaterialRef.Object.field0_0x0);
  }
  (this->AlternateMaterial).field0_0x0.ObjectPtr.field0_0x0 =
       (FObjectPtr_u_0)OpaqueMaterialRef.Object.field0_0x0;
  return this;
}

// ~UPaperSprite @ 14acebb90

void __thiscall UPaperSprite::~UPaperSprite(UPaperSprite *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_CollisionDataProvider__;
  this->_padding_ = (longlong)&_vftable__for__ISlateTextureAtlasInterface__;
  pFVar1 = (this->BakedRenderData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Sockets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AdditionalSourceTextures).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7ISlateTextureAtlasInterface__6B_;
  this->_padding_ = (longlong)&___7IInterface_CollisionDataProvider__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// ContainsPhysicsTriMeshData @ 14acf2300

bool __thiscall UPaperSprite::ContainsPhysicsTriMeshData(UPaperSprite *this,bool param_1)

{
  return false;
}

// FindSocket @ 14acf7c10

FPaperSpriteSocket * __thiscall UPaperSprite::FindSocket(UPaperSprite *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FPaperSpriteSocket *pFVar4;
  longlong lVar5;
  uint uVar6;
  
  uVar6 = 0;
  if (0 < (this->Sockets).ArrayNum) {
    lVar5 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar6 < (this->Sockets).ArrayNum) {
        uVar3 = ~uVar6 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FPaperSpriteSocket *)(*pcVar1)();
        return pFVar4;
      }
      pFVar4 = (FPaperSpriteSocket *)((this->Sockets).AllocatorInstance.Data + lVar5);
      if (pFVar4->SocketName == param_1) {
        return pFVar4;
      }
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x70;
    } while ((int)uVar6 < (this->Sockets).ArrayNum);
  }
  return (FPaperSpriteSocket *)0x0;
}

// GetBakedAdditionalSourceTextures @ 14acf93b0

void __thiscall
UPaperSprite::GetBakedAdditionalSourceTextures
          (UPaperSprite *this,
          TArray<UTexture_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *param_1)

{
  TArray<UTexture_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::
  operator=<TSizedDefaultAllocator<32>_>
            (param_1,(TArray<UTexture_*,TSizedDefaultAllocator<32>_> *)
                     &this->AdditionalSourceTextures);
  return;
}

// GetBakedTexture @ 14acf93d0

UTexture2D * __thiscall UPaperSprite::GetBakedTexture(UPaperSprite *this)

{
  return (this->BakedSourceTexture).field0_0x0.DebugPtr;
}

// GetMaterial @ 14acfb4c0

UMaterialInterface * __thiscall UPaperSprite::GetMaterial(UPaperSprite *this,int param_1)

{
  if (param_1 == 0) {
    return (this->DefaultMaterial).field0_0x0.DebugPtr;
  }
  if (param_1 == 1) {
    return (this->AlternateMaterial).field0_0x0.DebugPtr;
  }
  return (UMaterialInterface *)0x0;
}

// GetNumMaterials @ 14acfc6a0

int __thiscall UPaperSprite::GetNumMaterials(UPaperSprite *this)

{
  return (this->AlternateMaterialSplitIndex != -1) + 1;
}

// GetPhysicsTriMeshData @ 14acfc970

bool __thiscall
UPaperSprite::GetPhysicsTriMeshData(UPaperSprite *this,FTriMeshCollisionData *param_1,bool param_2)

{
  return false;
}

// GetPrivateStaticClass @ 14acfd230

UClass * __cdecl UPaperSprite::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPaperSprite.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Paper2D",L"PaperSprite",
               &Z_Registration_Info_UClass_UPaperSprite.InnerSingleton,
               StaticRegisterNativesUPaperSprite,0xb8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPaperSprite>,InternalVTableHelperCtorCaller<UPaperSprite>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPaperSprite.InnerSingleton;
}

// GetRenderBounds @ 14acfdcc0

TBoxSphereBounds<double,double> * __thiscall
UPaperSprite::GetRenderBounds
          (UPaperSprite *this,TBoxSphereBounds<double,double> *__return_storage_ptr__)

{
  double dVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  bool bVar6;
  TBoxSphereBounds<double,double> *pTVar7;
  uint uVar8;
  longlong lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  double dVar14;
  uint uVar16;
  double dVar17;
  uint uVar19;
  double dVar18;
  double dVar20;
  uint uVar21;
  uint uVar22;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  uint uVar15;
  
  uVar8 = 0;
  bVar5 = false;
  dStack_f0 = 0.0;
  local_f8 = 0.0;
  local_e8 = 0.0;
  dStack_e0 = 0.0;
  dStack_d0 = 0.0;
  local_d8 = 0.0;
  if (0 < (this->BakedRenderData).ArrayNum) {
    lVar9 = 0;
    dVar20 = local_d8;
    do {
      uVar15 = 0;
      if ((int)uVar8 < (this->BakedRenderData).ArrayNum) {
        uVar15 = ~uVar8 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TBoxSphereBounds<double,double> *)(*pcVar3)();
        return pTVar7;
      }
      pFVar2 = (this->BakedRenderData).AllocatorInstance.Data;
      dVar12 = *(double *)(pFVar2 + lVar9);
      dVar1 = *(double *)(pFVar2 + lVar9 + 8);
      dVar17 = dVar1 * PaperAxisY.field0_0x0._s_0.X + dVar12 * PaperAxisX.field0_0x0._s_0.X;
      local_d8 = dVar1 * PaperAxisY.field0_0x0._s_0.Y + dVar12 * PaperAxisX.field0_0x0._s_0.Y;
      dVar12 = dVar1 * PaperAxisY.field0_0x0._s_0.Z + dVar12 * PaperAxisX.field0_0x0._s_0.Z;
      if (bVar5) {
        if (dVar17 <= local_f8) {
          local_f8 = dVar17;
        }
        if (dVar12 <= local_e8) {
          local_e8 = dVar12;
        }
        if (local_d8 <= dStack_f0) {
          dStack_f0 = local_d8;
        }
        if (dStack_e0 <= dVar17) {
          dStack_e0 = dVar17;
        }
        if (dVar20 <= local_d8) {
          dVar20 = local_d8;
        }
        local_d8 = dVar20;
        if (dStack_d0 <= dVar12) {
          dStack_d0 = dVar12;
        }
      }
      else {
        bVar5 = true;
        local_f8 = dVar17;
        dStack_f0 = local_d8;
        dStack_e0 = dVar17;
        local_e8 = dVar12;
        dStack_d0 = dVar12;
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 0x20;
      dVar20 = local_d8;
    } while ((int)uVar8 < (this->BakedRenderData).ArrayNum);
  }
  dVar1 = PaperAxisZ.field0_0x0._s_0.X * __real_3fe0000000000000;
  dVar12 = PaperAxisZ.field0_0x0._s_0.Y * __real_3fe0000000000000;
  dVar20 = PaperAxisZ.field0_0x0._s_0.Z * __real_3fe0000000000000;
  uVar21 = (uint)__xmm_80000000000000008000000000000000;
  uVar8 = SUB84(dVar1,0) ^ uVar21;
  uVar22 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  uVar15 = (uint)((ulonglong)dVar1 >> 0x20) ^ uVar22;
  dVar13 = (double)CONCAT44(uVar15,uVar8);
  uVar16 = SUB84(dVar12,0) ^ uVar21;
  uVar19 = (uint)((ulonglong)dVar12 >> 0x20) ^ uVar22;
  dVar14 = (double)CONCAT44(uVar19,uVar16);
  dVar18 = (double)CONCAT44(uVar19,uVar16);
  uVar21 = SUB84(dVar20,0) ^ uVar21;
  uVar22 = (uint)((ulonglong)dVar20 >> 0x20) ^ uVar22;
  dVar17 = (double)CONCAT44(uVar15,uVar8);
  uVar8 = uVar21;
  uVar15 = uVar22;
  if (bVar5) {
    if (local_f8 <= dVar17) {
      dVar17 = local_f8;
    }
    if (local_e8 <= (double)CONCAT44(uVar22,uVar21)) {
      uVar8 = SUB84(local_e8,0);
      uVar15 = (uint)((ulonglong)local_e8 >> 0x20);
    }
    if ((double)CONCAT44(uVar22,uVar21) <= dStack_d0) {
      uVar21 = SUB84(dStack_d0,0);
      uVar22 = (uint)((ulonglong)dStack_d0 >> 0x20);
    }
    if (dStack_f0 <= dVar18) {
      dVar18 = dStack_f0;
    }
    if (dVar13 <= dStack_e0) {
      dVar13 = dStack_e0;
    }
    if (dVar14 <= local_d8) {
      dVar14 = local_d8;
    }
  }
  dVar4 = dVar1;
  if (dVar17 <= dVar1) {
    dVar4 = dVar17;
  }
  if (dVar1 <= dVar13) {
    dVar1 = dVar13;
  }
  dVar17 = dVar12;
  if (dVar12 <= dVar14) {
    dVar17 = dVar14;
  }
  if (dVar18 <= dVar12) {
    dVar12 = dVar18;
  }
  dVar13 = dVar20;
  if (dVar20 <= (double)CONCAT44(uVar22,uVar21)) {
    dVar13 = (double)CONCAT44(uVar22,uVar21);
  }
  if ((double)CONCAT44(uVar15,uVar8) <= dVar20) {
    dVar20 = (double)CONCAT44(uVar15,uVar8);
  }
  dVar17 = dVar17 - dVar12;
  dVar13 = dVar13 - dVar20;
  dVar1 = (dVar1 - dVar4) * __real_3fe0000000000000;
  dVar18 = dVar17 * __real_3fe0000000000000;
  dVar14 = dVar13 * __real_3fe0000000000000;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.X = dVar1 + dVar4;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = dVar18 + dVar12;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = dVar14 + dVar20;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = dVar1;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = dVar18;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = dVar14;
  dVar20 = (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X;
  auVar10._0_8_ = dVar20 * dVar20;
  auVar10._8_8_ = 0;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = (dVar13 * dVar13 + dVar17 * dVar17) * __real_3fd0000000000000 + auVar10._0_8_;
  auVar11 = sqrtpd(auVar10,auVar11);
  __return_storage_ptr__->SphereRadius = auVar11._0_8_;
  return __return_storage_ptr__;
}

// GetSlateAtlasData @ 14acfe400

FSlateAtlasData * __thiscall
UPaperSprite::GetSlateAtlasData(UPaperSprite *this,FSlateAtlasData *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  UTexture *pUVar4;
  longlong lVar5;
  TVector2<double> TVar6;
  double dVar7;
  double dVar8;
  
  TVar6.field0_0x0 = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  dVar8 = __real_3ff0000000000000;
  pUVar4 = (UTexture *)(this->AdditionalSourceTextures).AllocatorInstance.Data;
  if (pUVar4 != (UTexture *)0x0) {
    lVar5 = pUVar4[1]._padding_;
    __return_storage_ptr__->AtlasTexture = pUVar4;
    dVar7 = dVar8 / (double)(int)lVar5;
    dVar8 = dVar8 / (double)(int)((ulonglong)lVar5 >> 0x20);
    dVar1 = (double)this->_padding_;
    dVar2 = (double)this->_padding_;
    dVar3 = (double)this->_padding_;
    (__return_storage_ptr__->StartUV).field0_0x0._s_0.X = dVar7 * (double)this->_padding_;
    (__return_storage_ptr__->StartUV).field0_0x0._s_0.Y = dVar8 * dVar2;
    (__return_storage_ptr__->SizeUV).field0_0x0._s_0.X = dVar7 * dVar1;
    (__return_storage_ptr__->SizeUV).field0_0x0._s_0.Y = dVar8 * dVar3;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->AtlasTexture = (UTexture *)0x0;
  (__return_storage_ptr__->StartUV).field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar6.field0_0x0;
  (__return_storage_ptr__->SizeUV).field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar6.field0_0x0;
  return __return_storage_ptr__;
}

// PostLoad @ 14ad05700

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UPaperSprite::PostLoad(UPaperSprite *this)

{
  int iVar1;
  FGuid local_18;
  
  UObject::PostLoad((UObject *)this);
  local_18 = FPaperCustomVersion::GUID;
  iVar1 = UObjectBaseUtility::GetLinkerCustomVersion((UObjectBaseUtility *)this,&local_18);
  if ((iVar1 < 0x11) && (2 < (byte)LogPaper2D._0_1_)) {
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,(FString *)&local_18,(UObject *)0x0);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPaper2D);
    if ((void *)local_18._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_18._0_8_);
    }
  }
  return;
}

// QuerySupportedSockets @ 14ad06330

void __thiscall
UPaperSprite::QuerySupportedSockets
          (UPaperSprite *this,
          TArray<FComponentSocketDescription,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  
  uVar7 = 0;
  if (0 < (this->Sockets).ArrayNum) {
    lVar8 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar7 < (this->Sockets).ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar5 = param_1->ArrayNum;
      pFVar2 = (this->Sockets).AllocatorInstance.Data;
      if (uVar5 == param_1->ArrayMax) {
        uVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x40c,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      param_1->ArrayNum = uVar5 + 1;
      uVar6 = 0;
      if ((int)uVar5 < (int)(uVar5 + 1)) {
        uVar6 = ~uVar5 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (param_1->AllocatorInstance).Data + (longlong)(int)uVar5 * 0xc;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        *(undefined8 *)pFVar1 = *(undefined8 *)(pFVar2 + lVar8 + 0x60);
        pFVar1[8] = (FScriptContainerElement)0x2;
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 0x70;
    } while ((int)uVar7 < (this->Sockets).ArrayNum);
  }
  return;
}

// Serialize @ 14ad09a00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UPaperSprite::Serialize(UPaperSprite *this,FArchive *param_1)

{
  FString local_18;
  
  UObject::Serialize((UObject *)this,param_1);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FPaperCustomVersion::GUID);
  if ((this->SpriteCollisionDomain).Value == '\x01') {
    if (2 < (byte)LogPaper2D._0_1_) {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_18,(UObject *)0x0);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPaper2D);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    (this->SpriteCollisionDomain).Value = '\x02';
  }
  return;
}

// Serialize @ 14ad09aa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UPaperSprite::Serialize(UPaperSprite *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res8;
  FString local_18;
  
  local_res8.StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res8);
  UObject::Serialize((UObject *)this,pFVar1);
  (**(code **)(*(longlong *)pFVar1 + 0x230))(pFVar1,&FPaperCustomVersion::GUID);
  if ((this->SpriteCollisionDomain).Value == '\x01') {
    if (2 < (byte)LogPaper2D._0_1_) {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_18,(UObject *)0x0);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPaper2D);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    (this->SpriteCollisionDomain).Value = '\x02';
  }
  return;
}

// StaticRegisterNativesUPaperSprite @ 14ad0e020

void __cdecl UPaperSprite::StaticRegisterNativesUPaperSprite(void)

{
  return;
}

// _getUObject @ 14ad10230

UObject * __thiscall UPaperSprite::_getUObject(UPaperSprite *this)

{
  return (UObject *)&this[-1].SpriteCollisionDomain;
}

// _getUObject`adjustor{8}' @ 14ad1023c

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl UPaperSprite::_getUObject`adjustor{8}'
   (void)const __ptr64 */

UObject * __thiscall UPaperSprite::_getUObject_adjustor_8__(UPaperSprite *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UPaperSprite *)&this[-1].BakedRenderData.ArrayNum);
  return (UObject *)pUVar1;
}

