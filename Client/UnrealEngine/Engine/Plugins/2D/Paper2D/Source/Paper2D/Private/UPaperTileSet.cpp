// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Paper2D
// Functions: 22

// StaticClass @ 14ace1440

UClass * __cdecl UPaperTileSet::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPaperTileSet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Paper2D",L"PaperTileSet",
               &Z_Registration_Info_UClass_UPaperTileSet.InnerSingleton,
               StaticRegisterNativesUPaperTileSet,0xa8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPaperTileSet>,InternalVTableHelperCtorCaller<UPaperTileSet>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPaperTileSet.InnerSingleton;
}

// UPaperTileSet @ 14aceb480

UPaperTileSet * __thiscall UPaperTileSet::UPaperTileSet(UPaperTileSet *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UPaperTileSet__6B_;
  (this->TileSheet).field0_0x0.DebugPtr = (UTexture2D *)0x0;
  (this->AdditionalSourceTextures).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AdditionalSourceTextures).ArrayNum = 0;
  (this->AdditionalSourceTextures).ArrayMax = 0;
  (this->BorderMargin).Left = 0;
  (this->BorderMargin).Top = 0;
  (this->BorderMargin).Right = 0;
  (this->BorderMargin).Bottom = 0;
  (this->PerTileData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PerTileData).ArrayNum = 0;
  (this->PerTileData).ArrayMax = 0;
  (this->Terrains).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Terrains).ArrayNum = 0;
  (this->Terrains).ArrayMax = 0;
  return this;
}

// UPaperTileSet @ 14aceb4e0

UPaperTileSet * __thiscall
UPaperTileSet::UPaperTileSet(UPaperTileSet *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->TileWidth_DEPRECATED = 0x20;
  this->_padding_ = (longlong)&___7UPaperTileSet__6B_;
  (this->TileSheet).field0_0x0.DebugPtr = (UTexture2D *)0x0;
  (this->AdditionalSourceTextures).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AdditionalSourceTextures).ArrayNum = 0;
  (this->AdditionalSourceTextures).ArrayMax = 0;
  (this->BorderMargin).Left = 0;
  (this->BorderMargin).Top = 0;
  (this->BorderMargin).Right = 0;
  (this->BorderMargin).Bottom = 0;
  (this->PerTileData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PerTileData).ArrayNum = 0;
  (this->PerTileData).ArrayMax = 0;
  (this->Terrains).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Terrains).ArrayNum = 0;
  (this->Terrains).ArrayMax = 0;
  (this->TileSize).field0_0x0._s_0.X = 0x20;
  (this->TileSize).field0_0x0._s_0.Y = 0x20;
  this->TileHeight_DEPRECATED = 0x20;
  return this;
}

// ~UPaperTileSet @ 14acebf80

void __thiscall UPaperTileSet::~UPaperTileSet(UPaperTileSet *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UPaperTileSet__6B_;
  DestructItems<FPaperTileSetTerrain,int>
            ((FPaperTileSetTerrain *)(this->Terrains).AllocatorInstance.Data,
             (this->Terrains).ArrayNum);
  pFVar1 = (this->Terrains).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FPaperTileMetadata,int>
            ((FPaperTileMetadata *)(this->PerTileData).AllocatorInstance.Data,
             (this->PerTileData).ArrayNum);
  pFVar1 = (this->PerTileData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AdditionalSourceTextures).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// AddTerrainDescription @ 14aceeec0

bool __thiscall
UPaperTileSet::AddTerrainDescription(UPaperTileSet *this,FPaperTileSetTerrain *param_1)

{
  int *piVar1;
  TArray<FPaperTileSetTerrain,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  FPaperTileSetTerrain *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  
  if (0xfd < (this->Terrains).ArrayNum) {
    pFVar3 = (param_1->TerrainName).Data.AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    return false;
  }
  pTVar2 = &this->Terrains;
  pFVar4 = (FPaperTileSetTerrain *)(pTVar2->AllocatorInstance).Data;
  if ((pFVar4 <= param_1) && (param_1 < pFVar4 + (this->Terrains).ArrayMax)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  iVar8 = (this->Terrains).ArrayNum;
  piVar1 = &(this->Terrains).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->Terrains).ArrayNum = iVar8 + 1;
  pFVar3 = (pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 0x18;
  ::FString::FString((FString *)pFVar3,&param_1->TerrainName);
  *(int *)(pFVar3 + 0x10) = param_1->CenterTileIndex;
  pFVar3 = (param_1->TerrainName).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return true;
}

// DestructiveAllocateTileData @ 14acf57d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UPaperTileSet::DestructiveAllocateTileData(UPaperTileSet *this,int param_1,int param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 auStackY_d8 [32];
  undefined8 local_88;
  void *local_80;
  undefined8 local_78;
  FScriptContainerElement local_70;
  undefined4 local_6c;
  undefined4 local_68;
  FScriptContainerElement local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  uVar7 = param_2 * param_1;
  uVar8 = (ulonglong)uVar7;
  if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
  }
  DestructItems<FPaperTileMetadata,int>
            ((FPaperTileMetadata *)(this->PerTileData).AllocatorInstance.Data,
             (this->PerTileData).ArrayNum);
  piVar1 = &(this->PerTileData).ArrayMax;
  (this->PerTileData).ArrayNum = 0;
  if (*piVar1 != uVar7) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,uVar7,&(this->PerTileData).AllocatorInstance,0,piVar1);
  }
  if (0 < (int)uVar7) {
    do {
      pFVar2 = (this->PerTileData).AllocatorInstance.Data;
      local_88 = 0;
      local_80 = (void *)0x0;
      local_78 = 0;
      local_6c = 0x20;
      local_68 = 0x20;
      local_64 = (FScriptContainerElement)0x0;
      local_60 = 0;
      local_5c = 0x3f000000;
      local_58 = 0x40000000;
      local_70 = (FScriptContainerElement)0x3;
      local_50 = 0xffffffff;
      if ((pFVar2 <= (FScriptContainerElement *)&local_88) &&
         ((FScriptContainerElement *)&local_88 < pFVar2 + (longlong)*piVar1 * 0x40)) {
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
      iVar5 = (this->PerTileData).ArrayNum;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x840,&(this->PerTileData).AllocatorInstance,piVar1);
      }
      (this->PerTileData).ArrayNum = iVar5 + 1;
      pFVar2 = (this->PerTileData).AllocatorInstance.Data;
      lVar6 = (longlong)iVar5 * 0x40;
      *(undefined8 *)(pFVar2 + lVar6) = local_88;
      *(undefined8 *)(pFVar2 + lVar6 + 8) = 0;
      *(void **)(pFVar2 + lVar6 + 8) = local_80;
      local_80 = (void *)0x0;
      *(undefined4 *)(pFVar2 + lVar6 + 0x10) = (undefined4)local_78;
      *(undefined4 *)(pFVar2 + lVar6 + 0x14) = local_78._4_4_;
      local_78 = 0;
      pFVar2[lVar6 + 0x18] = local_70;
      *(undefined4 *)(pFVar2 + lVar6 + 0x1c) = local_6c;
      *(undefined4 *)(pFVar2 + lVar6 + 0x20) = local_68;
      pFVar2[lVar6 + 0x24] = local_64;
      *(undefined4 *)(pFVar2 + lVar6 + 0x28) = local_60;
      *(undefined4 *)(pFVar2 + lVar6 + 0x2c) = local_5c;
      *(undefined4 *)(pFVar2 + lVar6 + 0x30) = local_58;
      *(undefined4 *)(pFVar2 + lVar6 + 0x38) = local_50;
      DestructItems<FSpriteGeometryShape,int>((FSpriteGeometryShape *)0x0,0);
      if (local_80 != (void *)0x0) {
        FMemory::Free(local_80);
      }
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  this->AllocatedWidth = param_1;
  this->AllocatedHeight = param_2;
  return;
}

// GetMutableTileMetadata @ 14acfb9f0

FPaperTileMetadata * __thiscall
UPaperTileSet::GetMutableTileMetadata(UPaperTileSet *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FPaperTileMetadata *pFVar4;
  
  if ((-1 < param_1) && (param_1 < (this->PerTileData).ArrayNum)) {
    uVar3 = 0;
    if (param_1 < (this->PerTileData).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FPaperTileMetadata *)(*pcVar1)();
        return pFVar4;
      }
    }
    return (FPaperTileMetadata *)
           ((this->PerTileData).AllocatorInstance.Data + (longlong)param_1 * 0x40);
  }
  return (FPaperTileMetadata *)0x0;
}

// GetPrivateStaticClass @ 14acfd970

UClass * __cdecl UPaperTileSet::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPaperTileSet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Paper2D",L"PaperTileSet",
               &Z_Registration_Info_UClass_UPaperTileSet.InnerSingleton,
               StaticRegisterNativesUPaperTileSet,0xa8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPaperTileSet>,InternalVTableHelperCtorCaller<UPaperTileSet>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPaperTileSet.InnerSingleton;
}

// GetTerrainMembership @ 14acfed30

int __thiscall UPaperTileSet::GetTerrainMembership(UPaperTileSet *this,FPaperTileInfo *param_1)

{
  return -1;
}

// GetTileCount @ 14acff6d0

int __thiscall UPaperTileSet::GetTileCount(UPaperTileSet *this)

{
  UTexture2D *pUVar1;
  TIntPoint<int>_u_0_s_0 TVar2;
  
  pUVar1 = (this->TileSheet).field0_0x0.DebugPtr;
  if (pUVar1 != (UTexture2D *)0x0) {
    TVar2 = (pUVar1->ImportedSize).field0_0x0._s_0;
    return (((((this->PerTileSpacing).field0_0x0._s_0.X - (this->BorderMargin).Right) -
             (this->BorderMargin).Left) + TVar2.X) /
           ((this->TileSize).field0_0x0._s_0.X + (this->PerTileSpacing).field0_0x0._s_0.X)) *
           ((((TVar2.Y - (this->BorderMargin).Bottom) - (this->BorderMargin).Top) +
            (this->PerTileSpacing).field0_0x0._s_0.Y) /
           ((this->TileSize).field0_0x0._s_0.Y + (this->PerTileSpacing).field0_0x0._s_0.Y));
  }
  return 0;
}

// GetTileCountX @ 14acff730

int __thiscall UPaperTileSet::GetTileCountX(UPaperTileSet *this)

{
  int iVar1;
  UTexture2D *pUVar2;
  
  pUVar2 = (this->TileSheet).field0_0x0.DebugPtr;
  if (pUVar2 != (UTexture2D *)0x0) {
    iVar1 = (this->PerTileSpacing).field0_0x0._s_0.X;
    return ((((pUVar2->ImportedSize).field0_0x0._s_0.X - (this->BorderMargin).Right) -
            (this->BorderMargin).Left) + iVar1) / ((this->TileSize).field0_0x0._s_0.X + iVar1);
  }
  return 0;
}

// GetTileCountY @ 14acff760

int __thiscall UPaperTileSet::GetTileCountY(UPaperTileSet *this)

{
  int iVar1;
  UTexture2D *pUVar2;
  
  pUVar2 = (this->TileSheet).field0_0x0.DebugPtr;
  if (pUVar2 != (UTexture2D *)0x0) {
    iVar1 = (this->PerTileSpacing).field0_0x0._s_0.Y;
    return ((((pUVar2->ImportedSize).field0_0x0._s_0.Y - (this->BorderMargin).Bottom) -
            (this->BorderMargin).Top) + iVar1) / ((this->TileSize).field0_0x0._s_0.Y + iVar1);
  }
  return 0;
}

// GetTileMetadata @ 14acff7c0

FPaperTileMetadata * __thiscall UPaperTileSet::GetTileMetadata(UPaperTileSet *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FPaperTileMetadata *pFVar4;
  
  if ((-1 < param_1) && (param_1 < (this->PerTileData).ArrayNum)) {
    uVar3 = 0;
    if (param_1 < (this->PerTileData).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FPaperTileMetadata *)(*pcVar1)();
        return pFVar4;
      }
    }
    return (FPaperTileMetadata *)
           ((this->PerTileData).AllocatorInstance.Data + (longlong)param_1 * 0x40);
  }
  return (FPaperTileMetadata *)0x0;
}

// GetTileUV @ 14ad01670

bool __thiscall UPaperTileSet::GetTileUV(UPaperTileSet *this,int param_1,TVector2<double> *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  UTexture2D *pUVar5;
  TIntPoint<int>_u_0_s_0 TVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  
  pUVar5 = (this->TileSheet).field0_0x0.DebugPtr;
  piVar1 = &(this->PerTileSpacing).field0_0x0._s_0.Y;
  iVar8 = 0;
  piVar2 = &(this->TileSize).field0_0x0._s_0.Y;
  if (pUVar5 == (UTexture2D *)0x0) {
    iVar9 = 0;
  }
  else {
    TVar6 = (pUVar5->ImportedSize).field0_0x0._s_0;
    iVar9 = (this->PerTileSpacing).field0_0x0._s_0.X;
    iVar9 = ((((TVar6.Y - (this->BorderMargin).Bottom) - (this->BorderMargin).Top) + *piVar1) /
            (*piVar2 + *piVar1)) *
            ((iVar9 + ((TVar6.X - (this->BorderMargin).Right) - (this->BorderMargin).Left)) /
            ((this->TileSize).field0_0x0._s_0.X + iVar9));
  }
  if ((param_1 < 0) || (iVar9 <= param_1)) {
    bVar7 = false;
  }
  else {
    if (pUVar5 != (UTexture2D *)0x0) {
      iVar8 = ((((this->PerTileSpacing).field0_0x0._s_0.X - (this->BorderMargin).Right) -
               (this->BorderMargin).Left) + (pUVar5->ImportedSize).field0_0x0._s_0.X) /
              ((this->TileSize).field0_0x0._s_0.X + (this->PerTileSpacing).field0_0x0._s_0.X);
    }
    iVar9 = *piVar1;
    iVar3 = *piVar2;
    iVar4 = (this->BorderMargin).Top;
    bVar7 = true;
    (param_2->field0_0x0)._s_0.X =
         (double)(((this->TileSize).field0_0x0._s_0.X + (this->PerTileSpacing).field0_0x0._s_0.X) *
                  (param_1 % iVar8) + (this->BorderMargin).Left);
    (param_2->field0_0x0)._s_0.Y = (double)((iVar9 + iVar3) * (param_1 / iVar8) + iVar4);
  }
  return bVar7;
}

// GetTileUVFromTileXY @ 14ad01780

TIntPoint<int> __thiscall
UPaperTileSet::GetTileUVFromTileXY(UPaperTileSet *this,TIntPoint<int> *param_1)

{
  int *in_R8;
  
  (param_1->field0_0x0)._s_0.X =
       ((this->PerTileSpacing).field0_0x0._s_0.X + (this->TileSize).field0_0x0._s_0.X) * *in_R8 +
       (this->BorderMargin).Left;
  (param_1->field0_0x0)._s_0.Y =
       ((this->PerTileSpacing).field0_0x0._s_0.Y + (this->TileSize).field0_0x0._s_0.Y) * in_R8[1] +
       (this->BorderMargin).Top;
  return (TIntPoint<int>)(TIntPoint<int>_u_0)param_1;
}

// GetTileUserData @ 14ad017b0

FName __thiscall UPaperTileSet::GetTileUserData(UPaperTileSet *this,int param_1)

{
  FPaperTileMetadata *pFVar1;
  uint in_register_00000014;
  FName FVar2;
  int in_R8D;
  
  FVar2.Number = in_register_00000014;
  FVar2.ComparisonIndex.Value = param_1;
  pFVar1 = GetTileMetadata(this,in_R8D);
  if (pFVar1 != (FPaperTileMetadata *)0x0) {
    *(FName *)FVar2 = pFVar1->UserDataName;
    return FVar2;
  }
  *(FName *)FVar2 = (FName)0x0;
  return FVar2;
}

// GetTileXYFromTextureUV @ 14ad01840

TIntPoint<int> __thiscall
UPaperTileSet::GetTileXYFromTextureUV(UPaperTileSet *this,TVector2<double> *param_1,bool param_2)

{
  int iVar1;
  undefined7 in_register_00000081;
  char in_R9B;
  int iVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  
  iVar2 = (this->PerTileSpacing).field0_0x0._s_0.Y + (this->TileSize).field0_0x0._s_0.Y;
  dVar3 = *(double *)CONCAT71(in_register_00000081,param_2) - (double)(this->BorderMargin).Left;
  fVar5 = (float)dVar3;
  dVar4 = ((double *)CONCAT71(in_register_00000081,param_2))[1] - (double)(this->BorderMargin).Top;
  iVar1 = (this->PerTileSpacing).field0_0x0._s_0.X + (this->TileSize).field0_0x0._s_0.X;
  fVar6 = (float)dVar4;
  if (in_R9B != '\0') {
    fVar6 = __real_bf000000 - (fVar6 + fVar6);
    *(int *)&param_1->field0_0x0 =
         ((iVar1 - ((int)ROUND(__real_bf000000 - (fVar5 + fVar5)) >> 1)) + -1) / iVar1;
    *(int *)((longlong)&param_1->field0_0x0 + 4) = ((iVar2 - ((int)ROUND(fVar6) >> 1)) + -1) / iVar2
    ;
    return (TIntPoint<int>)(TIntPoint<int>_u_0)param_1;
  }
  *(int *)&param_1->field0_0x0 = (int)dVar3 / iVar1;
  *(int *)((longlong)&param_1->field0_0x0 + 4) = (int)dVar4 / iVar2;
  return (TIntPoint<int>)(TIntPoint<int>_u_0)param_1;
}

// PostLoad @ 14ad05f10

void __thiscall UPaperTileSet::PostLoad(UPaperTileSet *this)

{
  int iVar1;
  UTexture2D *pUVar2;
  TIntPoint<int>_u_0 TVar3;
  FGuid FVar4;
  int iVar5;
  FGuid local_18;
  
  local_18 = FPaperCustomVersion::GUID;
  iVar5 = UObjectBaseUtility::GetLinkerCustomVersion((UObjectBaseUtility *)this,&local_18);
  if (iVar5 < 0xf) {
    local_18.B = this->Margin_DEPRECATED;
    local_18.A = local_18.B;
    local_18.C = local_18.B;
    local_18.D = local_18.B;
    FVar4 = local_18;
    TVar3._s_0.Y = this->Spacing_DEPRECATED;
    TVar3._s_0.X = this->Spacing_DEPRECATED;
    (this->PerTileSpacing).field0_0x0 = TVar3;
    (this->TileSize).field0_0x0 = *(TIntPoint<int>_u_0 *)&this->TileWidth_DEPRECATED;
    (this->BorderMargin).Left = local_18.B;
    (this->BorderMargin).Top = local_18.B;
    (this->BorderMargin).Right = local_18.C;
    (this->BorderMargin).Bottom = local_18.D;
    local_18 = FVar4;
  }
  pUVar2 = (this->TileSheet).field0_0x0.DebugPtr;
  if (pUVar2 != (UTexture2D *)0x0) {
    UObject::ConditionalPostLoad((UObject *)pUVar2);
    pUVar2 = (this->TileSheet).field0_0x0.DebugPtr;
    if (pUVar2 == (UTexture2D *)0x0) {
      iVar5 = 0;
      this->WidthInTiles = 0;
    }
    else {
      iVar5 = (this->TileSize).field0_0x0._s_0.Y;
      iVar1 = (this->PerTileSpacing).field0_0x0._s_0.Y;
      this->WidthInTiles =
           ((((this->PerTileSpacing).field0_0x0._s_0.X - (this->BorderMargin).Right) -
            (this->BorderMargin).Left) + (pUVar2->ImportedSize).field0_0x0._s_0.X) /
           ((this->TileSize).field0_0x0._s_0.X + (this->PerTileSpacing).field0_0x0._s_0.X);
      iVar5 = ((((pUVar2->ImportedSize).field0_0x0._s_0.Y - (this->BorderMargin).Bottom) -
               (this->BorderMargin).Top) + (this->PerTileSpacing).field0_0x0._s_0.Y) /
              (iVar5 + iVar1);
    }
    this->HeightInTiles = iVar5;
    ReallocateAndCopyTileData(this);
  }
  UObject::PostLoad((UObject *)this);
  return;
}

// ReallocateAndCopyTileData @ 14ad06750

void __thiscall UPaperTileSet::ReallocateAndCopyTileData(UPaperTileSet *this)

{
  uint uVar1;
  int iVar2;
  FPaperTileMetadata *pFVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  int iVar16;
  longlong local_78;
  ForAnyElementType local_60;
  int local_58;
  int local_54 [5];
  
  uVar1 = this->AllocatedWidth;
  uVar15 = (ulonglong)(int)uVar1;
  if ((uVar1 != this->WidthInTiles) || (this->AllocatedHeight != this->HeightInTiles)) {
    pFVar3 = (FPaperTileMetadata *)(this->PerTileData).AllocatorInstance.Data;
    iVar16 = (this->PerTileData).ArrayNum;
    iVar2 = this->AllocatedHeight;
    local_60.Data = (FScriptContainerElement *)0x0;
    local_58 = iVar16;
    if (iVar16 == 0) {
      local_54[0] = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,8,iVar16,0,&local_60,iVar16,local_54);
      ConstructItems<FPaperTileMetadata,FPaperTileMetadata,int>(local_60.Data,pFVar3,iVar16);
    }
    DestructiveAllocateTileData(this,this->WidthInTiles,this->HeightInTiles);
    uVar5 = uVar1;
    if (this->WidthInTiles < (int)uVar1) {
      uVar5 = this->WidthInTiles;
    }
    if (this->HeightInTiles < iVar2) {
      iVar2 = this->HeightInTiles;
    }
    iVar16 = 0;
    if (0 < iVar2) {
      iVar14 = 0;
      local_78 = 0;
      lVar12 = uVar15 * 0x40;
      do {
        iVar10 = 0;
        lVar13 = local_78;
        if (0 < (int)uVar5) {
          do {
            uVar8 = iVar16 * this->WidthInTiles + iVar10;
            uVar7 = 0;
            if (iVar14 + iVar10 < local_58) {
              uVar7 = (uint)~(iVar14 + iVar10) >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar11 = local_60.Data + lVar13;
            uVar7 = 0;
            if ((int)uVar8 < (this->PerTileData).ArrayNum) {
              uVar7 = ~uVar8 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar9 = (this->PerTileData).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x40;
            *(undefined8 *)pFVar9 = *(undefined8 *)pFVar11;
            FSpriteGeometryCollection::operator=
                      ((FSpriteGeometryCollection *)(pFVar9 + 8),
                       (FSpriteGeometryCollection *)(pFVar11 + 8));
            iVar10 = iVar10 + 1;
            pFVar9[0x38] = pFVar11[0x38];
            pFVar9[0x39] = pFVar11[0x39];
            pFVar9[0x3a] = pFVar11[0x3a];
            pFVar9[0x3b] = pFVar11[0x3b];
            lVar13 = lVar13 + 0x40;
          } while (iVar10 < (int)uVar5);
          uVar15 = (ulonglong)uVar1;
        }
        local_78 = local_78 + lVar12;
        iVar16 = iVar16 + 1;
        iVar14 = iVar14 + (int)uVar15;
      } while (iVar16 < iVar2);
    }
    DestructItems<FPaperTileMetadata,int>((FPaperTileMetadata *)local_60.Data,local_58);
    if ((FPaperTileMetadata *)local_60.Data != (FPaperTileMetadata *)0x0) {
      FMemory::Free(local_60.Data);
    }
  }
  return;
}

// Serialize @ 14ad09f10

void __thiscall UPaperTileSet::Serialize(UPaperTileSet *this,FArchive *param_1)

{
  UObject::Serialize((UObject *)this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014ad09f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FPaperCustomVersion::GUID);
  return;
}

// Serialize @ 14ad09f40

void __thiscall UPaperTileSet::Serialize(UPaperTileSet *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UObject::Serialize((UObject *)this,pFVar1);
  (**(code **)(*(longlong *)pFVar1 + 0x230))(pFVar1,&FPaperCustomVersion::GUID);
  return;
}

// StaticRegisterNativesUPaperTileSet @ 14ad0e180

void __cdecl UPaperTileSet::StaticRegisterNativesUPaperTileSet(void)

{
  return;
}

