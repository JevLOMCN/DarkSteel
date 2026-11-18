// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Paper2D
// Functions: 21

// StaticClass @ 14acdfb60

UClass * __cdecl UPaperTileLayer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPaperTileLayer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Paper2D",L"PaperTileLayer",
               &Z_Registration_Info_UClass_UPaperTileLayer.InnerSingleton,
               StaticRegisterNativesUPaperTileLayer,0x90,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPaperTileLayer>,InternalVTableHelperCtorCaller<UPaperTileLayer>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPaperTileLayer.InnerSingleton;
}

// UPaperTileLayer @ 14aceafd0

UPaperTileLayer * __thiscall
UPaperTileLayer::UPaperTileLayer(UPaperTileLayer *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UPaperTileLayer__6B_;
  FText::FText(&this->LayerName);
  (this->AllocatedCells).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AllocatedCells).ArrayNum = 0;
  (this->AllocatedCells).ArrayMax = 0;
  (this->TileSet_DEPRECATED).field0_0x0.DebugPtr = (UPaperTileSet *)0x0;
  (this->AllocatedGrid_DEPRECATED).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AllocatedGrid_DEPRECATED).ArrayNum = 0;
  (this->AllocatedGrid_DEPRECATED).ArrayMax = 0;
  return this;
}

// UPaperTileLayer @ 14aceb020

UPaperTileLayer * __thiscall
UPaperTileLayer::UPaperTileLayer(UPaperTileLayer *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UPaperTileLayer__6B_;
  FText::FText(&this->LayerName);
  this->CollisionThicknessOverride = 50.0;
  this->CollisionOffsetOverride = 0.0;
  this->LayerWidth = 4;
  puVar2 = &this->field_0x40;
  this->bHiddenInGame = 0;
  this->bOverrideCollisionOffset = 0;
  this->bOverrideCollisionThickness = 0;
  this->bLayerCollides = 1;
  this->LayerHeight = 4;
  (this->LayerColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  (this->AllocatedCells).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AllocatedCells).ArrayNum = 0;
  (this->AllocatedCells).ArrayMax = 0;
  (this->TileSet_DEPRECATED).field0_0x0.DebugPtr = (UPaperTileSet *)0x0;
  (this->AllocatedGrid_DEPRECATED).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AllocatedGrid_DEPRECATED).ArrayNum = 0;
  (this->AllocatedGrid_DEPRECATED).ArrayMax = 0;
  DestructiveAllocateMap(this,4,4);
  return this;
}

// ~UPaperTileLayer @ 14acebe50

void __thiscall UPaperTileLayer::~UPaperTileLayer(UPaperTileLayer *this)

{
  FScriptContainerElement *pFVar1;
  ITextData *pIVar2;
  
  this->_padding_ = (longlong)&___7UPaperTileLayer__6B_;
  pFVar1 = (this->AllocatedGrid_DEPRECATED).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AllocatedCells).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar2 = (this->LayerName).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  UObject::~UObject((UObject *)this);
  return;
}

// AugmentBodySetup @ 14acef150

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UPaperTileLayer::AugmentBodySetup(UPaperTileLayer *this,UBodySetup *param_1,float param_2)

{
  TArray<FPaperTileMetadata,TSizedDefaultAllocator<32>_> *pTVar1;
  uchar uVar2;
  int iVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  TObjectPtr<UPaperTileSet>_u_0 TVar7;
  bool bVar8;
  uint uVar9;
  UPaperTileMap *pUVar10;
  int iVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_1c8 [32];
  ulonglong local_1a8;
  longlong local_1a0;
  int local_198;
  TObjectPtr<UPaperTileSet>_u_0 local_190;
  uint local_188;
  UPaperTileMap *local_180;
  TTransform<double> local_178;
  FSpriteGeometryCollisionBuilderBase local_118;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8 [2];
  undefined1 local_90 [24];
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  if (this->bLayerCollides != 0) {
    pUVar10 = CastChecked<UPaperTileMap,UObject>((UObject *)this->_padding_);
    fVar17 = (float)pUVar10->TileWidth;
    fVar18 = (float)pUVar10->TileHeight;
    if (this->bOverrideCollisionOffset != 0) {
      param_2 = this->CollisionOffsetOverride;
    }
    if (this->bOverrideCollisionThickness == 0) {
      fVar15 = pUVar10->CollisionThickness;
    }
    else {
      fVar15 = this->CollisionThicknessOverride;
    }
    local_180 = pUVar10;
    local_118.MyBodySetup = param_1;
    if ((param_1 == (UBodySetup *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("MyBodySetup",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\2D\\Paper2D\\Source\\Paper2D\\Private\\PaperSprite.cpp"
                           ,0x84c,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    fVar6 = __real_3f000000;
    fVar5 = __real_bf000000;
    uVar14 = 0;
    local_f8 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    dStack_f0 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
    local_118._padding_ = (longlong)&___7FPaperTileLayerToBodySetupBuilder__6B_;
    local_e8 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    dStack_e0 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    local_d8 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    dStack_d0 = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    local_b8 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    dStack_b0 = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    local_c8 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    dStack_c0 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
    local_a8[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
    local_a8[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_118.UnrealUnitsPerPixel = __real_3f800000 / pUVar10->PixelsPerUnrealUnit;
    local_118.CollisionDomain = (Type)(pUVar10->SpriteCollisionDomain).Value;
    local_90._0_16_ = (undefined1  [16])UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    if (0 < this->LayerHeight) {
      local_198 = 0;
      local_118.CollisionThickness = fVar15;
      local_118.ZOffsetAmount = param_2;
      do {
        iVar11 = 0;
        if (0 < this->LayerWidth) {
          do {
            GetCell(this,(FPaperTileInfo *)&local_190.ObjectPtr,iVar11,uVar14);
            uVar9 = local_188;
            TVar7 = local_190;
            if ((local_190.DebugPtr != (UPaperTileSet *)0x0) && (local_188 != 0xffffffff)) {
              uVar12 = local_188 & 0x1fffffff;
              if ((int)uVar12 < ((local_190.DebugPtr)->PerTileData).ArrayNum) {
                pTVar1 = &(local_190.DebugPtr)->PerTileData;
                iVar3 = ((local_190.DebugPtr)->PerTileData).ArrayNum;
                if (iVar3 <= (int)uVar12) {
                  local_1a8 = (ulonglong)uVar12;
                  local_1a0 = (longlong)iVar3;
                  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld");
                  if (bVar8) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                }
                pFVar13 = (pTVar1->AllocatorInstance).Data + (ulonglong)uVar12 * 0x40;
                if (pFVar13 != (FScriptContainerElement *)0x0) {
                  GetTileTransform(&local_178,uVar9 >> 0x1d);
                  uVar2 = (local_180->ProjectionMode).Value;
                  if (uVar2 == '\0') {
LAB_14acef448:
                    fVar16 = (float)local_198 * fVar18;
                    fVar15 = (float)iVar11 * fVar17;
                  }
                  else if (uVar2 == '\x01') {
                    fVar16 = (float)iVar11 * fVar18 * fVar5 - (float)(int)uVar14 * fVar18 * fVar6;
                    fVar15 = (float)iVar11 * fVar17 * fVar6 - (float)(int)uVar14 * fVar17 * fVar6;
                  }
                  else {
                    if ((uVar2 != '\x02') && (uVar2 != '\x03')) goto LAB_14acef448;
                    fVar16 = fVar18 * fVar6 * (float)local_198;
                    uVar9 = uVar14 & 0x80000001;
                    if ((int)uVar9 < 0) {
                      uVar9 = (uVar9 - 1 | 0xfffffffe) + 1;
                    }
                    fVar15 = (float)(int)uVar9 * fVar17 * fVar6 + (float)iVar11 * fVar17;
                  }
                  local_f8 = local_178.Rotation.XY.m128d_f64[0];
                  dStack_f0 = local_178.Rotation.XY.m128d_f64[1];
                  local_d8 = local_178.Translation.XY.m128d_f64[0];
                  dStack_d0 = local_178.Translation.XY.m128d_f64[1];
                  local_90._8_8_ =
                       (double)(((float)(int)((ulonglong)*(undefined8 *)((longlong)TVar7 + 0x28) >>
                                             0x20) - fVar18) * fVar6) + (double)fVar16;
                  local_90._0_8_ =
                       (double)(((float)(int)*(undefined8 *)((longlong)TVar7 + 0x28) - fVar17) *
                               fVar6) + (double)fVar15;
                  local_e8 = local_178.Rotation.ZW.m128d_f64[0];
                  dStack_e0 = local_178.Rotation.ZW.m128d_f64[1];
                  local_c8 = local_178.Translation.ZW.m128d_f64[0];
                  dStack_c0 = local_178.Translation.ZW.m128d_f64[1];
                  local_a8[0] = local_178.Scale3D.ZW.m128d_f64[0];
                  local_a8[1] = local_178.Scale3D.ZW.m128d_f64[1];
                  local_b8 = local_178.Scale3D.XY.m128d_f64[0];
                  dStack_b0 = local_178.Scale3D.XY.m128d_f64[1];
                  FSpriteGeometryCollisionBuilderBase::AddBoxCollisionShapesToBodySetup
                            (&local_118,(FSpriteGeometryCollection *)(pFVar13 + 8));
                  FSpriteGeometryCollisionBuilderBase::AddPolygonCollisionShapesToBodySetup
                            (&local_118,(FSpriteGeometryCollection *)(pFVar13 + 8));
                  FSpriteGeometryCollisionBuilderBase::AddCircleCollisionShapesToBodySetup
                            (&local_118,(FSpriteGeometryCollection *)(pFVar13 + 8));
                }
              }
            }
            iVar11 = iVar11 + 1;
          } while (iVar11 < this->LayerWidth);
        }
        local_198 = local_198 + -1;
        uVar14 = uVar14 + 1;
      } while ((int)uVar14 < this->LayerHeight);
    }
  }
  return;
}

// ConvertToTileSetPerCell @ 14acf2860

void __thiscall UPaperTileLayer::ConvertToTileSetPerCell(UPaperTileLayer *this)

{
  int *piVar1;
  UPaperTileSet *pUVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  TObjectPtr<UPaperTileSet>_u_0 *pTVar7;
  TObjectPtr<UPaperTileSet>_u_0 *pTVar8;
  uint uVar9;
  TObjectPtr<UPaperTileSet>_u_0 *pTVar10;
  TObjectPtr<UPaperTileSet>_u_0 *pTVar11;
  TObjectPtr<UPaperTileSet>_u_0 *pTVar12;
  
  uVar6 = (this->AllocatedGrid_DEPRECATED).ArrayNum;
  if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
  }
  pTVar11 = (TObjectPtr<UPaperTileSet>_u_0 *)0x0;
  piVar1 = &(this->AllocatedCells).ArrayMax;
  (this->AllocatedCells).ArrayNum = 0;
  if (*piVar1 != uVar6) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar6,&(this->AllocatedCells).AllocatorInstance,0,piVar1);
  }
  iVar5 = this->AllocatedHeight * this->AllocatedWidth;
  pTVar10 = pTVar11;
  pTVar12 = pTVar11;
  if (0 < iVar5) {
    do {
      uVar6 = (this->AllocatedCells).ArrayNum;
      if (uVar6 == *piVar1) {
        uVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&(this->AllocatedCells).AllocatorInstance,piVar1);
      }
      (this->AllocatedCells).ArrayNum = uVar6 + 1;
      uVar9 = 0;
      if ((int)uVar6 < (int)(uVar6 + 1)) {
        uVar9 = ~uVar6 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pTVar7 = (TObjectPtr<UPaperTileSet>_u_0 *)
               ((this->AllocatedCells).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x10);
      pTVar8 = pTVar11;
      if (pTVar7 != (TObjectPtr<UPaperTileSet>_u_0 *)0x0) {
        pTVar7->DebugPtr = (UPaperTileSet *)0x0;
        *(undefined4 *)(pTVar7 + 1) = 0xffffffff;
        pTVar8 = pTVar7;
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar2 = (this->TileSet_DEPRECATED).field0_0x0.DebugPtr, pUVar2 != (UPaperTileSet *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      uVar9 = (uint)pTVar10;
      *pTVar8 = (this->TileSet_DEPRECATED).field0_0x0;
      uVar6 = 0;
      if ((int)uVar9 < (this->AllocatedGrid_DEPRECATED).ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
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
      pTVar7 = (TObjectPtr<UPaperTileSet>_u_0 *)((longlong)&(pTVar12->ObjectPtr).field0_0x0 + 1);
      *(undefined4 *)(pTVar8 + 1) =
           *(undefined4 *)
            ((this->AllocatedGrid_DEPRECATED).AllocatorInstance.Data + (longlong)pTVar12 * 4);
      pTVar10 = (TObjectPtr<UPaperTileSet>_u_0 *)(ulonglong)(uVar9 + 1);
      pTVar12 = pTVar7;
    } while ((longlong)pTVar7 < (longlong)iVar5);
  }
  return;
}

// DestructiveAllocateMap @ 14acf56d0

void __thiscall
UPaperTileLayer::DestructiveAllocateMap(UPaperTileLayer *this,int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  
  if ((param_1 < 1) || (param_2 < 1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(NewWidth > 0) && (NewHeight > 0)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\2D\\Paper2D\\Source\\Paper2D\\Private\\PaperTileLayer.cpp"
                       ,0x57,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  this->LayerWidth = param_1;
  uVar6 = param_1 * param_2;
  this->LayerHeight = param_2;
  if (-1 < (int)uVar6) {
    piVar1 = &(this->AllocatedCells).ArrayNum;
    piVar2 = &(this->AllocatedCells).ArrayMax;
    *piVar1 = 0;
    if (*piVar2 != uVar6) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,uVar6,&(this->AllocatedCells).AllocatorInstance,0,piVar2);
    }
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,uVar6,&(this->AllocatedCells).AllocatorInstance,piVar1,piVar2);
    DefaultConstructItems<FPaperTileInfo,int>
              ((this->AllocatedCells).AllocatorInstance.Data + (longlong)iVar5 * 0x10,uVar6);
    this->AllocatedWidth = param_1;
    this->AllocatedHeight = param_2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
}

// GetCell @ 14acf97f0

FPaperTileInfo * __thiscall
UPaperTileLayer::GetCell
          (UPaperTileLayer *this,FPaperTileInfo *__return_storage_ptr__,int param_1,int param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  FPaperTileInfo *pFVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  UPaperTileSet *pUVar8;
  
  if ((((param_1 < 0) || (this->LayerWidth <= param_1)) || (param_2 < 0)) ||
     (this->LayerHeight <= param_2)) {
    pUVar8 = (UPaperTileSet *)0x0;
    iVar5 = -1;
  }
  else {
    uVar1 = this->LayerWidth * param_2 + param_1;
    uVar7 = 0;
    if ((int)uVar1 < (this->AllocatedCells).ArrayNum) {
      uVar7 = ~uVar1 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FPaperTileInfo *)(*pcVar2)();
        return pFVar4;
      }
    }
    pFVar6 = (this->AllocatedCells).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x10;
    pUVar8 = *(UPaperTileSet **)pFVar6;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UPaperTileSet *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    iVar5 = *(int *)(pFVar6 + 8);
  }
  (__return_storage_ptr__->TileSet).field0_0x0.DebugPtr = pUVar8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UPaperTileSet *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar8);
  }
  __return_storage_ptr__->PackedTileIndex = iVar5;
  return __return_storage_ptr__;
}

// GetLayerColor @ 14acfaca0

FLinearColor * __thiscall
UPaperTileLayer::GetLayerColor(UPaperTileLayer *this,FLinearColor *__return_storage_ptr__)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)&(this->LayerColor).field0_0x0 + 8);
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *(undefined8 *)&(this->LayerColor).field0_0x0
  ;
  *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar1;
  return __return_storage_ptr__;
}

// GetLayerIndex @ 14acfad80

int __thiscall UPaperTileLayer::GetLayerIndex(UPaperTileLayer *this)

{
  FScriptContainerElement *pFVar1;
  UPaperTileMap *pUVar2;
  FScriptContainerElement *pFVar3;
  
  pUVar2 = CastChecked<UPaperTileMap,UObject>((UObject *)this->_padding_);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  pFVar1 = (pUVar2->TileLayers).AllocatorInstance.Data;
  pFVar3 = pFVar1;
  while( true ) {
    if (pFVar3 == pFVar1 + (longlong)(pUVar2->TileLayers).ArrayNum * 8) {
      return -1;
    }
    if (*(UPaperTileLayer **)pFVar3 == this) break;
    pFVar3 = pFVar3 + 8;
  }
  return (int)((longlong)pFVar3 - (longlong)pFVar1 >> 3);
}

// GetNumOccupiedCells @ 14acfc720

/* WARNING: Removing unreachable block (ram,0x00014acfc77c) */

int __thiscall UPaperTileLayer::GetNumOccupiedCells(UPaperTileLayer *this)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  iVar1 = (this->AllocatedCells).ArrayNum;
  iVar2 = 0;
  pFVar3 = (this->AllocatedCells).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->AllocatedCells).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FPaperTileInfo_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar4) break;
    if ((*(longlong *)pFVar3 == 0) || (*(int *)(pFVar3 + 8) == -1)) {
      pFVar3 = pFVar3 + 0x10;
    }
    else {
      iVar2 = iVar2 + 1;
      pFVar3 = pFVar3 + 0x10;
    }
  }
  return iVar2;
}

// GetPrivateStaticClass @ 14acfd750

UClass * __cdecl UPaperTileLayer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPaperTileLayer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Paper2D",L"PaperTileLayer",
               &Z_Registration_Info_UClass_UPaperTileLayer.InnerSingleton,
               StaticRegisterNativesUPaperTileLayer,0x90,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPaperTileLayer>,InternalVTableHelperCtorCaller<UPaperTileLayer>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPaperTileLayer.InnerSingleton;
}

// GetTileMap @ 14acff790

UPaperTileMap * __thiscall UPaperTileLayer::GetTileMap(UPaperTileLayer *this)

{
  UPaperTileMap *pUVar1;
  
  pUVar1 = CastChecked<UPaperTileMap,UObject>((UObject *)this->_padding_);
  return pUVar1;
}

// GetTileTransform @ 14ad00f90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTransform<double> * __cdecl
UPaperTileLayer::GetTileTransform(TTransform<double> *__return_storage_ptr__,int param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  TQuat<double> *pTVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  TRotator<double> local_98;
  TQuat<double> local_78 [3];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    uVar15 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar14 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    if (::_TSS0 == -1) {
      TilePermutationTransforms[0].Rotation.XY = UE::Math::TTransform<double>::Identity.Rotation.XY;
      TilePermutationTransforms[0].Translation.XY =
           UE::Math::TTransform<double>::Identity.Translation.XY;
      TilePermutationTransforms[0].Rotation.ZW = UE::Math::TTransform<double>::Identity.Rotation.ZW;
      TilePermutationTransforms[0].Scale3D.XY = UE::Math::TTransform<double>::Identity.Scale3D.XY;
      TilePermutationTransforms[0].Translation.ZW =
           UE::Math::TTransform<double>::Identity.Translation.ZW;
      TilePermutationTransforms[0].Scale3D.ZW = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
      uVar17 = SUB84(PaperAxisX.field0_0x0._s_0.X,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar20 = (uint)((ulonglong)PaperAxisX.field0_0x0._0_8_ >> 0x20) &
               __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      uVar23 = SUB84(PaperAxisZ.field0_0x0._s_0.X,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar26 = (uint)((ulonglong)PaperAxisZ.field0_0x0._0_8_ >> 0x20) &
               __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      uVar34 = SUB84(PaperAxisY.field0_0x0._s_0.X,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar36 = (uint)((ulonglong)PaperAxisY.field0_0x0._0_8_ >> 0x20) &
               __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      uVar31 = SUB84(PaperAxisY.field0_0x0._s_0.Y,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar33 = (uint)((ulonglong)PaperAxisY.field0_0x0._8_8_ >> 0x20) &
               __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      uVar29 = SUB84(PaperAxisY.field0_0x0._s_0.Z,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar30 = (uint)((ulonglong)PaperAxisY.field0_0x0._16_8_ >> 0x20) &
               __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      uVar18 = SUB84(PaperAxisX.field0_0x0._s_0.Y,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar21 = (uint)((ulonglong)PaperAxisX.field0_0x0._8_8_ >> 0x20) &
               __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      local_98.Roll = 0.0;
      uVar19 = SUB84(PaperAxisX.field0_0x0._s_0.Z,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar22 = (uint)((ulonglong)PaperAxisX.field0_0x0._16_8_ >> 0x20) &
               __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      uVar24 = SUB84(PaperAxisZ.field0_0x0._s_0.Y,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar27 = (uint)((ulonglong)PaperAxisZ.field0_0x0._8_8_ >> 0x20) &
               __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      uVar25 = SUB84(PaperAxisZ.field0_0x0._s_0.Z,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar28 = (uint)((ulonglong)PaperAxisZ.field0_0x0._16_8_ >> 0x20) &
               __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      local_98.Pitch = ___xmm_00000000000000004056800000000000;
      local_98.Yaw = _UNK_150b45b78;
      pTVar16 = UE::Math::TRotator<double>::Quaternion(&local_98,local_78);
      TilePermutationTransforms[1].Rotation.ZW.m128d_f64[0] = pTVar16->Z;
      TilePermutationTransforms[1].Rotation.ZW.m128d_f64[1] = pTVar16->W;
      TilePermutationTransforms[1].Rotation.XY.m128d_f64[0] = pTVar16->X;
      TilePermutationTransforms[1].Rotation.XY.m128d_f64[1] = pTVar16->Y;
      TilePermutationTransforms[1].Translation.XY.m128d_f64[0] =
           (double)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_;
      TilePermutationTransforms[1].Translation.XY.m128d_f64[1] =
           (double)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_;
      TilePermutationTransforms[1].Translation.ZW.m128d_f64[1] = 0.0;
      TilePermutationTransforms[1].Translation.ZW.m128d_f64[0] =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uVar35 = SUB84(PaperAxisY.field0_0x0._s_0.X,0);
      uVar5 = (ulonglong)PaperAxisY.field0_0x0._0_8_ >> 0x20;
      uVar32 = SUB84(PaperAxisY.field0_0x0._s_0.Y,0);
      uVar6 = (ulonglong)PaperAxisY.field0_0x0._8_8_ >> 0x20;
      TilePermutationTransforms[1].Scale3D.XY.m128d_f64[1] =
           ((double)CONCAT44(uVar33,uVar31) - (double)CONCAT44(uVar21,uVar18)) +
           (double)CONCAT44(uVar27,uVar24);
      TilePermutationTransforms[1].Scale3D.XY.m128d_f64[0] =
           ((double)CONCAT44(uVar36,uVar34) - (double)CONCAT44(uVar20,uVar17)) +
           (double)CONCAT44(uVar26,uVar23);
      uVar20 = SUB84(PaperAxisZ.field0_0x0._s_0.X,0);
      uVar7 = (ulonglong)PaperAxisZ.field0_0x0._0_8_ >> 0x20;
      uVar17 = SUB84(PaperAxisX.field0_0x0._s_0.X,0);
      uVar8 = (ulonglong)PaperAxisX.field0_0x0._0_8_ >> 0x20;
      TilePermutationTransforms[1].Scale3D.ZW.m128d_f64[1] = 0.0;
      TilePermutationTransforms[1].Scale3D.ZW.m128d_f64[0] =
           ((double)CONCAT44(uVar30,uVar29) - (double)CONCAT44(uVar22,uVar19)) +
           (double)CONCAT44(uVar28,uVar25);
      uVar18 = SUB84(PaperAxisX.field0_0x0._s_0.Y,0);
      uVar9 = (ulonglong)PaperAxisX.field0_0x0._8_8_ >> 0x20;
      uVar21 = SUB84(PaperAxisZ.field0_0x0._s_0.Y,0);
      uVar10 = (ulonglong)PaperAxisZ.field0_0x0._8_8_ >> 0x20;
      uVar23 = SUB84(PaperAxisY.field0_0x0._s_0.Z,0);
      uVar11 = (ulonglong)PaperAxisY.field0_0x0._16_8_ >> 0x20;
      local_98.Roll = 0.0;
      uVar19 = SUB84(PaperAxisX.field0_0x0._s_0.Z,0);
      uVar12 = (ulonglong)PaperAxisX.field0_0x0._16_8_ >> 0x20;
      uVar22 = SUB84(PaperAxisZ.field0_0x0._s_0.Z,0);
      uVar13 = (ulonglong)PaperAxisZ.field0_0x0._16_8_ >> 0x20;
      local_98.Pitch = ___xmm_0000000000000000c066800000000000;
      local_98.Yaw = _UNK_152310658;
      pTVar16 = UE::Math::TRotator<double>::Quaternion(&local_98,local_78);
      TilePermutationTransforms[2].Rotation.ZW.m128d_f64[0] = pTVar16->Z;
      TilePermutationTransforms[2].Rotation.ZW.m128d_f64[1] = pTVar16->W;
      TilePermutationTransforms[2].Rotation.XY.m128d_f64[0] = pTVar16->X;
      TilePermutationTransforms[2].Rotation.XY.m128d_f64[1] = pTVar16->Y;
      TilePermutationTransforms[2].Translation.XY.m128d_f64[0] =
           (double)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_;
      TilePermutationTransforms[2].Translation.XY.m128d_f64[1] =
           (double)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_;
      TilePermutationTransforms[2].Translation.ZW.m128d_f64[1] = 0.0;
      TilePermutationTransforms[2].Translation.ZW.m128d_f64[0] =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      TilePermutationTransforms[2].Scale3D.XY.m128d_f64[1] =
           ((double)CONCAT44((uint)uVar6 & uVar15,uVar32 & uVar14) -
           (double)CONCAT44((uint)uVar9 & uVar15,uVar18 & uVar14)) +
           (double)CONCAT44((uint)uVar10 & uVar15,uVar21 & uVar14);
      TilePermutationTransforms[2].Scale3D.XY.m128d_f64[0] =
           ((double)CONCAT44((uint)uVar5 & uVar15,uVar35 & uVar14) -
           (double)CONCAT44((uint)uVar8 & uVar15,uVar17 & uVar14)) +
           (double)CONCAT44((uint)uVar7 & uVar15,uVar20 & uVar14);
      local_98.Pitch = ___xmm_00000000000000004056800000000000;
      local_98.Yaw = _UNK_150b45b78;
      local_98.Roll = 0.0;
      TilePermutationTransforms[2].Scale3D.ZW.m128d_f64[1] = 0.0;
      TilePermutationTransforms[2].Scale3D.ZW.m128d_f64[0] =
           ((double)CONCAT44((uint)uVar11 & uVar15,uVar23 & uVar14) -
           (double)CONCAT44((uint)uVar12 & uVar15,uVar19 & uVar14)) +
           (double)CONCAT44((uint)uVar13 & uVar15,uVar22 & uVar14);
      pTVar16 = UE::Math::TRotator<double>::Quaternion(&local_98,local_78);
      uVar25 = SUB84(PaperAxisY.field0_0x0._s_0.X,0);
      uVar5 = (ulonglong)PaperAxisY.field0_0x0._0_8_ >> 0x20;
      TilePermutationTransforms[3].Rotation.ZW.m128d_f64[0] = pTVar16->Z;
      TilePermutationTransforms[3].Rotation.ZW.m128d_f64[1] = pTVar16->W;
      TilePermutationTransforms[3].Rotation.XY.m128d_f64[0] = pTVar16->X;
      TilePermutationTransforms[3].Rotation.XY.m128d_f64[1] = pTVar16->Y;
      uVar24 = SUB84(PaperAxisY.field0_0x0._s_0.Y,0);
      uVar6 = (ulonglong)PaperAxisY.field0_0x0._8_8_ >> 0x20;
      uVar23 = SUB84(PaperAxisY.field0_0x0._s_0.Z,0);
      uVar7 = (ulonglong)PaperAxisY.field0_0x0._16_8_ >> 0x20;
      TilePermutationTransforms[3].Translation.XY.m128d_f64[0] =
           (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      TilePermutationTransforms[3].Translation.XY.m128d_f64[1] =
           (double)GlobalVectorConstants::FloatZero.m128_f32[1];
      TilePermutationTransforms[3].Scale3D.XY.m128d_f64[0] =
           (double)GlobalVectorConstants::Float1110.m128_f32[0];
      TilePermutationTransforms[3].Scale3D.XY.m128d_f64[1] =
           (double)GlobalVectorConstants::Float1110.m128_f32[1];
      uVar20 = SUB84(PaperAxisZ.field0_0x0._s_0.X,0);
      uVar8 = (ulonglong)PaperAxisZ.field0_0x0._0_8_ >> 0x20;
      TilePermutationTransforms[3].Translation.ZW.m128d_f64[0] =
           (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      TilePermutationTransforms[3].Translation.ZW.m128d_f64[1] =
           (double)GlobalVectorConstants::FloatZero.m128_f32[3];
      TilePermutationTransforms[3].Scale3D.ZW.m128d_f64[0] =
           (double)GlobalVectorConstants::Float1110.m128_f32[2];
      TilePermutationTransforms[3].Scale3D.ZW.m128d_f64[1] =
           (double)GlobalVectorConstants::Float1110.m128_f32[3];
      uVar17 = SUB84(PaperAxisX.field0_0x0._s_0.X,0);
      uVar9 = (ulonglong)PaperAxisX.field0_0x0._0_8_ >> 0x20;
      uVar18 = SUB84(PaperAxisX.field0_0x0._s_0.Y,0);
      uVar10 = (ulonglong)PaperAxisX.field0_0x0._8_8_ >> 0x20;
      uVar19 = SUB84(PaperAxisX.field0_0x0._s_0.Z,0);
      uVar11 = (ulonglong)PaperAxisX.field0_0x0._16_8_ >> 0x20;
      uVar21 = SUB84(PaperAxisZ.field0_0x0._s_0.Y,0);
      uVar12 = (ulonglong)PaperAxisZ.field0_0x0._8_8_ >> 0x20;
      uVar22 = SUB84(PaperAxisZ.field0_0x0._s_0.Z,0);
      uVar13 = (ulonglong)PaperAxisZ.field0_0x0._16_8_ >> 0x20;
      pTVar16 = UE::Math::TRotator<double>::Quaternion
                          (&UE::Math::TRotator<double>::ZeroRotator,local_78);
      TilePermutationTransforms[4].Rotation.ZW.m128d_f64[0] = pTVar16->Z;
      TilePermutationTransforms[4].Rotation.ZW.m128d_f64[1] = pTVar16->W;
      TilePermutationTransforms[4].Rotation.XY.m128d_f64[0] = pTVar16->X;
      TilePermutationTransforms[4].Rotation.XY.m128d_f64[1] = pTVar16->Y;
      TilePermutationTransforms[4].Translation.XY.m128d_f64[0] =
           (double)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_;
      TilePermutationTransforms[4].Translation.XY.m128d_f64[1] =
           (double)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_;
      TilePermutationTransforms[4].Translation.ZW.m128d_f64[1] = 0.0;
      TilePermutationTransforms[4].Translation.ZW.m128d_f64[0] =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      TilePermutationTransforms[4].Scale3D.XY.m128d_f64[1] =
           ((double)CONCAT44((uint)uVar6 & uVar15,uVar24 & uVar14) -
           (double)CONCAT44((uint)uVar10 & uVar15,uVar18 & uVar14)) +
           (double)CONCAT44((uint)uVar12 & uVar15,uVar21 & uVar14);
      TilePermutationTransforms[4].Scale3D.XY.m128d_f64[0] =
           ((double)CONCAT44((uint)uVar5 & uVar15,uVar25 & uVar14) -
           (double)CONCAT44((uint)uVar9 & uVar15,uVar17 & uVar14)) +
           (double)CONCAT44((uint)uVar8 & uVar15,uVar20 & uVar14);
      local_98.Pitch = ___xmm_0000000000000000c056800000000000;
      local_98.Yaw = _UNK_1517cfbf8;
      local_98.Roll = 0.0;
      TilePermutationTransforms[4].Scale3D.ZW.m128d_f64[1] = 0.0;
      TilePermutationTransforms[4].Scale3D.ZW.m128d_f64[0] =
           ((double)CONCAT44((uint)uVar7 & uVar15,uVar23 & uVar14) -
           (double)CONCAT44((uint)uVar11 & uVar15,uVar19 & uVar14)) +
           (double)CONCAT44((uint)uVar13 & uVar15,uVar22 & uVar14);
      pTVar16 = UE::Math::TRotator<double>::Quaternion(&local_98,local_78);
      TilePermutationTransforms[5].Rotation.ZW.m128d_f64[0] = pTVar16->Z;
      TilePermutationTransforms[5].Rotation.ZW.m128d_f64[1] = pTVar16->W;
      TilePermutationTransforms[5].Rotation.XY.m128d_f64[0] = pTVar16->X;
      TilePermutationTransforms[5].Rotation.XY.m128d_f64[1] = pTVar16->Y;
      TilePermutationTransforms[5].Translation.XY.m128d_f64[0] =
           (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      TilePermutationTransforms[5].Translation.XY.m128d_f64[1] =
           (double)GlobalVectorConstants::FloatZero.m128_f32[1];
      TilePermutationTransforms[5].Scale3D.XY.m128d_f64[0] =
           (double)GlobalVectorConstants::Float1110.m128_f32[0];
      TilePermutationTransforms[5].Scale3D.XY.m128d_f64[1] =
           (double)GlobalVectorConstants::Float1110.m128_f32[1];
      TilePermutationTransforms[5].Translation.ZW.m128d_f64[0] =
           (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      TilePermutationTransforms[5].Translation.ZW.m128d_f64[1] =
           (double)GlobalVectorConstants::FloatZero.m128_f32[3];
      TilePermutationTransforms[5].Scale3D.ZW.m128d_f64[0] =
           (double)GlobalVectorConstants::Float1110.m128_f32[2];
      TilePermutationTransforms[5].Scale3D.ZW.m128d_f64[1] =
           (double)GlobalVectorConstants::Float1110.m128_f32[3];
      local_98.Roll = 0.0;
      local_98.Pitch = ___xmm_0000000000000000c066800000000000;
      local_98.Yaw = _UNK_152310658;
      pTVar16 = UE::Math::TRotator<double>::Quaternion(&local_98,local_78);
      uVar25 = SUB84(PaperAxisY.field0_0x0._s_0.X,0);
      uVar5 = (ulonglong)PaperAxisY.field0_0x0._0_8_ >> 0x20;
      TilePermutationTransforms[6].Rotation.ZW.m128d_f64[0] = pTVar16->Z;
      TilePermutationTransforms[6].Rotation.ZW.m128d_f64[1] = pTVar16->W;
      TilePermutationTransforms[6].Rotation.XY.m128d_f64[0] = pTVar16->X;
      TilePermutationTransforms[6].Rotation.XY.m128d_f64[1] = pTVar16->Y;
      uVar24 = SUB84(PaperAxisY.field0_0x0._s_0.Y,0);
      uVar6 = (ulonglong)PaperAxisY.field0_0x0._8_8_ >> 0x20;
      uVar23 = SUB84(PaperAxisY.field0_0x0._s_0.Z,0);
      uVar7 = (ulonglong)PaperAxisY.field0_0x0._16_8_ >> 0x20;
      TilePermutationTransforms[6].Translation.XY.m128d_f64[0] =
           (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      TilePermutationTransforms[6].Translation.XY.m128d_f64[1] =
           (double)GlobalVectorConstants::FloatZero.m128_f32[1];
      TilePermutationTransforms[6].Scale3D.XY.m128d_f64[0] =
           (double)GlobalVectorConstants::Float1110.m128_f32[0];
      TilePermutationTransforms[6].Scale3D.XY.m128d_f64[1] =
           (double)GlobalVectorConstants::Float1110.m128_f32[1];
      uVar20 = SUB84(PaperAxisZ.field0_0x0._s_0.X,0);
      uVar8 = (ulonglong)PaperAxisZ.field0_0x0._0_8_ >> 0x20;
      TilePermutationTransforms[6].Translation.ZW.m128d_f64[0] =
           (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      TilePermutationTransforms[6].Translation.ZW.m128d_f64[1] =
           (double)GlobalVectorConstants::FloatZero.m128_f32[3];
      TilePermutationTransforms[6].Scale3D.ZW.m128d_f64[0] =
           (double)GlobalVectorConstants::Float1110.m128_f32[2];
      TilePermutationTransforms[6].Scale3D.ZW.m128d_f64[1] =
           (double)GlobalVectorConstants::Float1110.m128_f32[3];
      uVar17 = SUB84(PaperAxisX.field0_0x0._s_0.X,0);
      uVar9 = (ulonglong)PaperAxisX.field0_0x0._0_8_ >> 0x20;
      uVar18 = SUB84(PaperAxisX.field0_0x0._s_0.Y,0);
      uVar10 = (ulonglong)PaperAxisX.field0_0x0._8_8_ >> 0x20;
      uVar19 = SUB84(PaperAxisX.field0_0x0._s_0.Z,0);
      uVar11 = (ulonglong)PaperAxisX.field0_0x0._16_8_ >> 0x20;
      uVar21 = SUB84(PaperAxisZ.field0_0x0._s_0.Y,0);
      uVar12 = (ulonglong)PaperAxisZ.field0_0x0._8_8_ >> 0x20;
      uVar22 = SUB84(PaperAxisZ.field0_0x0._s_0.Z,0);
      uVar13 = (ulonglong)PaperAxisZ.field0_0x0._16_8_ >> 0x20;
      local_98.Roll = 0.0;
      local_98.Pitch = ___xmm_0000000000000000c056800000000000;
      local_98.Yaw = _UNK_1517cfbf8;
      pTVar16 = UE::Math::TRotator<double>::Quaternion(&local_98,local_78);
      TilePermutationTransforms[7].Rotation.ZW.m128d_f64[0] = pTVar16->Z;
      TilePermutationTransforms[7].Rotation.ZW.m128d_f64[1] = pTVar16->W;
      TilePermutationTransforms[7].Rotation.XY.m128d_f64[0] = pTVar16->X;
      TilePermutationTransforms[7].Rotation.XY.m128d_f64[1] = pTVar16->Y;
      TilePermutationTransforms[7].Translation.XY.m128d_f64[0] =
           (double)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_;
      TilePermutationTransforms[7].Translation.XY.m128d_f64[1] =
           (double)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_;
      TilePermutationTransforms[7].Translation.ZW.m128d_f64[1] = 0.0;
      TilePermutationTransforms[7].Translation.ZW.m128d_f64[0] =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      TilePermutationTransforms[7].Scale3D.XY.m128d_f64[1] =
           ((double)CONCAT44((uint)uVar6 & uVar15,uVar24 & uVar14) -
           (double)CONCAT44((uint)uVar10 & uVar15,uVar18 & uVar14)) +
           (double)CONCAT44((uint)uVar12 & uVar15,uVar21 & uVar14);
      TilePermutationTransforms[7].Scale3D.XY.m128d_f64[0] =
           ((double)CONCAT44((uint)uVar5 & uVar15,uVar25 & uVar14) -
           (double)CONCAT44((uint)uVar9 & uVar15,uVar17 & uVar14)) +
           (double)CONCAT44((uint)uVar8 & uVar15,uVar20 & uVar14);
      TilePermutationTransforms[7].Scale3D.ZW.m128d_f64[1] = 0.0;
      TilePermutationTransforms[7].Scale3D.ZW.m128d_f64[0] =
           ((double)CONCAT44((uint)uVar7 & uVar15,uVar23 & uVar14) -
           (double)CONCAT44((uint)uVar11 & uVar15,uVar19 & uVar14)) +
           (double)CONCAT44((uint)uVar13 & uVar15,uVar22 & uVar14);
      _Init_thread_footer(&::_TSS0);
    }
  }
  dVar1 = TilePermutationTransforms[param_1].Rotation.XY.m128d_f64[1];
  dVar2 = TilePermutationTransforms[param_1].Rotation.ZW.m128d_f64[0];
  dVar3 = TilePermutationTransforms[param_1].Rotation.ZW.m128d_f64[1];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] =
       TilePermutationTransforms[param_1].Rotation.XY.m128d_f64[0];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar1;
  dVar1 = TilePermutationTransforms[param_1].Translation.XY.m128d_f64[0];
  dVar4 = TilePermutationTransforms[param_1].Translation.XY.m128d_f64[1];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = dVar2;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar3;
  dVar2 = TilePermutationTransforms[param_1].Translation.ZW.m128d_f64[0];
  dVar3 = TilePermutationTransforms[param_1].Translation.ZW.m128d_f64[1];
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = dVar1;
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar4;
  dVar1 = TilePermutationTransforms[param_1].Scale3D.XY.m128d_f64[0];
  dVar4 = TilePermutationTransforms[param_1].Scale3D.XY.m128d_f64[1];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = dVar2;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar3;
  dVar2 = TilePermutationTransforms[param_1].Scale3D.ZW.m128d_f64[0];
  dVar3 = TilePermutationTransforms[param_1].Scale3D.ZW.m128d_f64[1];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = dVar1;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar4;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = dVar2;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar3;
  return __return_storage_ptr__;
}

// InBounds @ 14ad02780

bool __thiscall UPaperTileLayer::InBounds(UPaperTileLayer *this,int param_1,int param_2)

{
  if ((((-1 < param_1) && (param_1 < this->LayerWidth)) && (-1 < param_2)) &&
     (param_2 < this->LayerHeight)) {
    return true;
  }
  return false;
}

// ReallocateAndCopyMap @ 14ad064a0

void __thiscall UPaperTileLayer::ReallocateAndCopyMap(UPaperTileLayer *this)

{
  int iVar1;
  uint uVar2;
  FPaperTileInfo *pFVar3;
  code *pcVar4;
  uint uVar5;
  ForAnyElementType FVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  int local_res8;
  longlong local_70;
  ForAnyElementType local_60;
  int local_58;
  int local_54 [5];
  
  iVar13 = (this->AllocatedCells).ArrayNum;
  iVar1 = this->AllocatedHeight;
  pFVar3 = (FPaperTileInfo *)(this->AllocatedCells).AllocatorInstance.Data;
  uVar2 = this->AllocatedWidth;
  uVar14 = (ulonglong)(int)uVar2;
  local_60.Data = (FScriptContainerElement *)0x0;
  local_58 = iVar13;
  if (iVar13 == 0) {
    local_54[0] = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar13,0,&local_60,iVar13,local_54);
    ConstructItems<FPaperTileInfo,FPaperTileInfo,int>(local_60.Data,pFVar3,iVar13);
  }
  DestructiveAllocateMap(this,this->LayerWidth,this->LayerHeight);
  uVar5 = uVar2;
  if (this->LayerWidth < (int)uVar2) {
    uVar5 = this->LayerWidth;
  }
  if (this->LayerHeight < iVar1) {
    iVar1 = this->LayerHeight;
  }
  iVar13 = 0;
  if (0 < iVar1) {
    local_res8 = 0;
    lVar12 = uVar14 * 0x10;
    local_70 = 0;
    do {
      iVar11 = 0;
      lVar15 = local_70;
      if (0 < (int)uVar5) {
        do {
          uVar9 = iVar13 * this->LayerWidth + iVar11;
          uVar8 = 0;
          if (local_res8 + iVar11 < local_58) {
            uVar8 = (uint)~(local_res8 + iVar11) >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FVar6.Data = local_60.Data;
          uVar8 = 0;
          if ((int)uVar9 < (this->AllocatedCells).ArrayNum) {
            uVar8 = ~uVar9 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar10 = (this->AllocatedCells).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x10;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (*(UObject **)(FVar6.Data + lVar15) != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(*(UObject **)(FVar6.Data + lVar15));
          }
          iVar11 = iVar11 + 1;
          *(undefined8 *)pFVar10 = *(undefined8 *)(FVar6.Data + lVar15);
          *(undefined4 *)(pFVar10 + 8) = *(undefined4 *)(FVar6.Data + lVar15 + 8);
          lVar15 = lVar15 + 0x10;
        } while (iVar11 < (int)uVar5);
        uVar14 = (ulonglong)uVar2;
      }
      local_res8 = local_res8 + (int)uVar14;
      local_70 = local_70 + lVar12;
      iVar13 = iVar13 + 1;
    } while (iVar13 < iVar1);
  }
  if (local_60.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data);
  }
  return;
}

// ResizeMap @ 14ad08c90

void __thiscall UPaperTileLayer::ResizeMap(UPaperTileLayer *this,int param_1,int param_2)

{
  if ((this->LayerWidth == param_1) && (this->LayerHeight == param_2)) {
    return;
  }
  this->LayerWidth = param_1;
  this->LayerHeight = param_2;
  ReallocateAndCopyMap(this);
  return;
}

// SetCell @ 14ad09fb0

void __thiscall
UPaperTileLayer::SetCell(UPaperTileLayer *this,int param_1,int param_2,FPaperTileInfo *param_3)

{
  uint uVar1;
  UPaperTileSet *pUVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TObjectPtr<UPaperTileSet>_u_0 *pTVar6;
  
  if ((((-1 < param_1) && (param_1 < this->LayerWidth)) && (-1 < param_2)) &&
     (param_2 < this->LayerHeight)) {
    uVar1 = this->LayerWidth * param_2 + param_1;
    uVar5 = 0;
    if ((int)uVar1 < (this->AllocatedCells).ArrayNum) {
      uVar5 = ~uVar1 >> 0x1f;
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
    pTVar6 = (TObjectPtr<UPaperTileSet>_u_0 *)
             ((this->AllocatedCells).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x10);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar2 = (param_3->TileSet).field0_0x0.DebugPtr, pUVar2 != (UPaperTileSet *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    *pTVar6 = (param_3->TileSet).field0_0x0;
    *(int *)(pTVar6 + 1) = param_3->PackedTileIndex;
  }
  return;
}

// SetLayerColor @ 14ad0a390

void __thiscall UPaperTileLayer::SetLayerColor(UPaperTileLayer *this,FLinearColor *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  *(undefined8 *)&(this->LayerColor).field0_0x0 = *(undefined8 *)&param_1->field0_0x0;
  *(undefined8 *)((longlong)&(this->LayerColor).field0_0x0 + 8) = uVar1;
  return;
}

// StaticRegisterNativesUPaperTileLayer @ 14ad0e120

void __cdecl UPaperTileLayer::StaticRegisterNativesUPaperTileLayer(void)

{
  return;
}

// UsesTileSet @ 14ad0f590

bool __thiscall UPaperTileLayer::UsesTileSet(UPaperTileLayer *this,UPaperTileSet *param_1)

{
  int iVar1;
  UPaperTileSet *pUVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  undefined1 local_res8 [8];
  
  iVar1 = (this->AllocatedCells).ArrayNum;
  pFVar3 = (this->AllocatedCells).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->AllocatedCells).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FPaperTileInfo_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar4) {
      return false;
    }
    pUVar2 = *(UPaperTileSet **)pFVar3;
    if (pUVar2 == (UPaperTileSet *)0x0) {
      bVar5 = param_1 == (UPaperTileSet *)0x0;
    }
    else {
      bVar5 = pUVar2 == param_1;
    }
    if (((bVar5) && (pUVar2 != (UPaperTileSet *)0x0)) && (*(int *)(pFVar3 + 8) != -1)) break;
    pFVar3 = pFVar3 + 0x10;
  }
  return true;
}

