// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 5

// FGrid3DCollectionRWInstanceData_GameThread @ 149168810

FGrid3DCollectionRWInstanceData_GameThread * __thiscall
FGrid3DCollectionRWInstanceData_GameThread::FGrid3DCollectionRWInstanceData_GameThread
          (FGrid3DCollectionRWInstanceData_GameThread *this,
          FGrid3DCollectionRWInstanceData_GameThread *param_1)

{
  bool bVar1;
  UTextureRenderTargetVolume *pUVar2;
  double dVar3;
  
  this->ClearBeforeNonIterationStage = param_1->ClearBeforeNonIterationStage;
  *(undefined8 *)&(this->NumCells).field0_0x0 = *(undefined8 *)&(param_1->NumCells).field0_0x0;
  (this->NumCells).field0_0x0._s_0.Z = (param_1->NumCells).field0_0x0._s_0.Z;
  *(undefined8 *)&(this->NumTiles).field0_0x0 = *(undefined8 *)&(param_1->NumTiles).field0_0x0;
  (this->NumTiles).field0_0x0._s_0.Z = (param_1->NumTiles).field0_0x0._s_0.Z;
  this->TotalNumAttributes = param_1->TotalNumAttributes;
  this->TotalNumNamedAttributes = param_1->TotalNumNamedAttributes;
  dVar3 = (param_1->CellSize).field0_0x0._s_0.Y;
  (this->CellSize).field0_0x0._s_0.X = (param_1->CellSize).field0_0x0._s_0.X;
  (this->CellSize).field0_0x0._s_0.Y = dVar3;
  (this->CellSize).field0_0x0._s_0.Z = (param_1->CellSize).field0_0x0._s_0.Z;
  dVar3 = (param_1->WorldBBoxSize).field0_0x0._s_0.Y;
  (this->WorldBBoxSize).field0_0x0._s_0.X = (param_1->WorldBBoxSize).field0_0x0._s_0.X;
  (this->WorldBBoxSize).field0_0x0._s_0.Y = dVar3;
  (this->WorldBBoxSize).field0_0x0._s_0.Z = (param_1->WorldBBoxSize).field0_0x0._s_0.Z;
  (this->PixelFormat).bIsSet = false;
  bVar1 = (param_1->PixelFormat).bIsSet;
  (this->PixelFormat).bIsSet = bVar1;
  if (bVar1 != false) {
    (this->PixelFormat).TypedValue = (param_1->PixelFormat).TypedValue;
  }
  this->UseRGBATexture = param_1->UseRGBATexture;
  this->NeedsRealloc = param_1->NeedsRealloc;
  (this->RTUserParamBinding).UObjectOffset = (param_1->RTUserParamBinding).UObjectOffset;
  (this->RTUserParamBinding).BoundStore = (param_1->RTUserParamBinding).BoundStore;
  (this->RTUserParamBinding).BoundVariable._padding_ =
       (param_1->RTUserParamBinding).BoundVariable._padding_;
  *(int *)&(this->RTUserParamBinding).BoundVariable._padding_ =
       (int)(param_1->RTUserParamBinding).BoundVariable._padding_;
  (this->RTUserParamBinding).BoundVariable.VarData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RTUserParamBinding).BoundVariable.VarData.AllocatorInstance.Data =
       (param_1->RTUserParamBinding).BoundVariable.VarData.AllocatorInstance.Data;
  (param_1->RTUserParamBinding).BoundVariable.VarData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RTUserParamBinding).BoundVariable.VarData.ArrayNum =
       (param_1->RTUserParamBinding).BoundVariable.VarData.ArrayNum;
  (this->RTUserParamBinding).BoundVariable.VarData.ArrayMax =
       (param_1->RTUserParamBinding).BoundVariable.VarData.ArrayMax;
  (param_1->RTUserParamBinding).BoundVariable.VarData.ArrayNum = 0;
  (param_1->RTUserParamBinding).BoundVariable.VarData.ArrayMax = 0;
  (this->RTUserParamBinding).LayoutVersion = (param_1->RTUserParamBinding).LayoutVersion;
  pUVar2 = param_1->TargetTexture;
  (this->Vars).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->TargetTexture = pUVar2;
  (this->Vars).AllocatorInstance.Data = (param_1->Vars).AllocatorInstance.Data;
  (param_1->Vars).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Vars).ArrayNum = (param_1->Vars).ArrayNum;
  (this->Vars).ArrayMax = (param_1->Vars).ArrayMax;
  (param_1->Vars).ArrayNum = 0;
  (param_1->Vars).ArrayMax = 0;
  (this->Offsets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Offsets).AllocatorInstance.Data = (param_1->Offsets).AllocatorInstance.Data;
  (param_1->Offsets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Offsets).ArrayNum = (param_1->Offsets).ArrayNum;
  (this->Offsets).ArrayMax = (param_1->Offsets).ArrayMax;
  (param_1->Offsets).ArrayNum = 0;
  (param_1->Offsets).ArrayMax = 0;
  this->OtherDI = param_1->OtherDI;
  this->OtherInstanceData = param_1->OtherInstanceData;
  return this;
}

// FGrid3DCollectionRWInstanceData_GameThread @ 1491689a0

FGrid3DCollectionRWInstanceData_GameThread * __thiscall
FGrid3DCollectionRWInstanceData_GameThread::FGrid3DCollectionRWInstanceData_GameThread
          (FGrid3DCollectionRWInstanceData_GameThread *this,
          FGrid3DCollectionRWInstanceData_GameThread *param_1)

{
  int *piVar1;
  TArray<FNiagaraVariableBase,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  double dVar7;
  
  this->ClearBeforeNonIterationStage = param_1->ClearBeforeNonIterationStage;
  *(undefined8 *)&(this->NumCells).field0_0x0 = *(undefined8 *)&(param_1->NumCells).field0_0x0;
  (this->NumCells).field0_0x0._s_0.Z = (param_1->NumCells).field0_0x0._s_0.Z;
  *(undefined8 *)&(this->NumTiles).field0_0x0 = *(undefined8 *)&(param_1->NumTiles).field0_0x0;
  (this->NumTiles).field0_0x0._s_0.Z = (param_1->NumTiles).field0_0x0._s_0.Z;
  this->TotalNumAttributes = param_1->TotalNumAttributes;
  this->TotalNumNamedAttributes = param_1->TotalNumNamedAttributes;
  dVar7 = (param_1->CellSize).field0_0x0._s_0.Y;
  (this->CellSize).field0_0x0._s_0.X = (param_1->CellSize).field0_0x0._s_0.X;
  (this->CellSize).field0_0x0._s_0.Y = dVar7;
  (this->CellSize).field0_0x0._s_0.Z = (param_1->CellSize).field0_0x0._s_0.Z;
  dVar7 = (param_1->WorldBBoxSize).field0_0x0._s_0.Y;
  (this->WorldBBoxSize).field0_0x0._s_0.X = (param_1->WorldBBoxSize).field0_0x0._s_0.X;
  (this->WorldBBoxSize).field0_0x0._s_0.Y = dVar7;
  (this->WorldBBoxSize).field0_0x0._s_0.Z = (param_1->WorldBBoxSize).field0_0x0._s_0.Z;
  (this->PixelFormat).bIsSet = false;
  bVar4 = (param_1->PixelFormat).bIsSet;
  (this->PixelFormat).bIsSet = bVar4;
  if (bVar4 != false) {
    (this->PixelFormat).TypedValue = (param_1->PixelFormat).TypedValue;
  }
  this->UseRGBATexture = param_1->UseRGBATexture;
  this->NeedsRealloc = param_1->NeedsRealloc;
  (this->RTUserParamBinding).UObjectOffset = (param_1->RTUserParamBinding).UObjectOffset;
  (this->RTUserParamBinding).BoundStore = (param_1->RTUserParamBinding).BoundStore;
  FNiagaraVariable::FNiagaraVariable
            (&(this->RTUserParamBinding).BoundVariable,&(param_1->RTUserParamBinding).BoundVariable)
  ;
  pTVar2 = &this->Vars;
  (this->RTUserParamBinding).LayoutVersion = (param_1->RTUserParamBinding).LayoutVersion;
  this->TargetTexture = param_1->TargetTexture;
  piVar1 = &(this->Vars).ArrayMax;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar5 = (param_1->Vars).ArrayNum;
  pFVar6 = (param_1->Vars).AllocatorInstance.Data;
  (this->Vars).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,iVar5,0,&pTVar2->AllocatorInstance,iVar5,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar6,(longlong)iVar5 * 0xc);
  }
  pTVar3 = &this->Offsets;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Offsets).ArrayMax;
  iVar5 = (param_1->Offsets).ArrayNum;
  pFVar6 = (param_1->Offsets).AllocatorInstance.Data;
  (this->Offsets).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar5,0,&pTVar3->AllocatorInstance,iVar5,piVar1);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar6,(longlong)iVar5 << 2);
  }
  this->OtherDI = param_1->OtherDI;
  this->OtherInstanceData = param_1->OtherInstanceData;
  return this;
}

// FGrid3DCollectionRWInstanceData_GameThread @ 149168b70

FGrid3DCollectionRWInstanceData_GameThread * __thiscall
FGrid3DCollectionRWInstanceData_GameThread::FGrid3DCollectionRWInstanceData_GameThread
          (FGrid3DCollectionRWInstanceData_GameThread *this)

{
  undefined8 uVar1;
  int iVar2;
  
  this->ClearBeforeNonIterationStage = true;
  *(undefined8 *)&(this->NumCells).field0_0x0 =
       UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
  (this->NumCells).field0_0x0._s_0.Z = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  *(undefined8 *)&(this->NumTiles).field0_0x0 =
       UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
  (this->NumTiles).field0_0x0._s_0.Z = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  this->TotalNumAttributes = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  this->TotalNumNamedAttributes = 0;
  (this->CellSize).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->CellSize).field0_0x0._s_0.Y = (double)uVar1;
  (this->CellSize).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->WorldBBoxSize).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->WorldBBoxSize).field0_0x0._s_0.Y = (double)uVar1;
  (this->WorldBBoxSize).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined2 *)&(this->PixelFormat).bIsSet = 0;
  (this->RTUserParamBinding).UObjectOffset = -1;
  (this->RTUserParamBinding).BoundStore = (FNiagaraParameterStore *)0x0;
  this->NeedsRealloc = false;
  (this->RTUserParamBinding).BoundVariable._padding_ = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)
                     &(this->RTUserParamBinding).BoundVariable._padding_,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&(this->RTUserParamBinding).BoundVariable._padding_ = iVar2;
  (this->RTUserParamBinding).BoundVariable.VarData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RTUserParamBinding).BoundVariable.VarData.ArrayNum = 0;
  (this->RTUserParamBinding).BoundVariable.VarData.ArrayMax = 0;
  this->TargetTexture = (UTextureRenderTargetVolume *)0x0;
  (this->Vars).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Vars).ArrayNum = 0;
  (this->Vars).ArrayMax = 0;
  (this->Offsets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Offsets).ArrayNum = 0;
  (this->Offsets).ArrayMax = 0;
  this->OtherDI = (UNiagaraDataInterface *)0x0;
  this->OtherInstanceData = (FGrid3DCollectionRWInstanceData_GameThread *)0x0;
  return this;
}

// FindAttributeIndexByName @ 14917a6e0

int __thiscall
FGrid3DCollectionRWInstanceData_GameThread::FindAttributeIndexByName
          (FGrid3DCollectionRWInstanceData_GameThread *this,FName *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FNiagaraTypeDefinition *pFVar5;
  uchar uVar6;
  FName *pFVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  
  uVar8 = 0;
  if (0 < (this->Vars).ArrayNum) {
    lVar9 = 0;
    do {
      uVar10 = ~uVar8 >> 0x1f;
      uVar3 = 0;
      if ((int)uVar8 < (this->Vars).ArrayNum) {
        uVar3 = uVar10;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      pFVar7 = (FName *)((this->Vars).AllocatorInstance.Data + lVar9);
      if (*pFVar7 == *param_1) {
        if (param_2 == 1) {
          pFVar5 = FNiagaraTypeDefinitionHandle::Resolve
                             ((FNiagaraTypeDefinitionHandle *)(pFVar7 + 1));
          if ((((TObjectPtr<UObject>_u_0)(pFVar5->ClassStructOrEnum).field0_0x0.DebugPtr ==
                FNiagaraTypeDefinition::FloatDef.ClassStructOrEnum.field0_0x0) &&
              (pFVar5->UnderlyingType == FNiagaraTypeDefinition::FloatDef.UnderlyingType)) &&
             (pFVar5->Flags == FNiagaraTypeDefinition::FloatDef.Flags)) {
            uVar3 = 0;
            if ((int)uVar8 < (this->Offsets).ArrayNum) {
              uVar3 = uVar10;
            }
            if ((uVar3 == 0) &&
               (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar2)) {
              pcVar1 = (code *)swi(3);
              iVar4 = (*pcVar1)();
              return iVar4;
            }
            goto LAB_14917a812;
          }
        }
        else if (param_2 == 2) {
          pFVar5 = FNiagaraTypeDefinitionHandle::Resolve
                             ((FNiagaraTypeDefinitionHandle *)(pFVar7 + 1));
          if (((TObjectPtr<UObject>_u_0)(pFVar5->ClassStructOrEnum).field0_0x0.DebugPtr ==
               FNiagaraTypeDefinition::Vec2Def.ClassStructOrEnum.field0_0x0) &&
             (uVar6 = FNiagaraTypeDefinition::Vec2Def.Flags,
             pFVar5->UnderlyingType == FNiagaraTypeDefinition::Vec2Def.UnderlyingType)) {
LAB_14917a8f0:
            if (pFVar5->Flags == uVar6) {
LAB_14917a929:
              uVar3 = 0;
              if ((int)uVar8 < (this->Offsets).ArrayNum) {
                uVar3 = uVar10;
              }
              if ((uVar3 == 0) &&
                 (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar2)) {
                pcVar1 = (code *)swi(3);
                iVar4 = (*pcVar1)();
                return iVar4;
              }
LAB_14917a812:
              return *(int *)((this->Offsets).AllocatorInstance.Data + (longlong)(int)uVar8 * 4);
            }
          }
        }
        else if (param_2 == 3) {
          pFVar5 = FNiagaraTypeDefinitionHandle::Resolve
                             ((FNiagaraTypeDefinitionHandle *)(pFVar7 + 1));
          if (((TObjectPtr<UObject>_u_0)(pFVar5->ClassStructOrEnum).field0_0x0.DebugPtr ==
               FNiagaraTypeDefinition::Vec3Def.ClassStructOrEnum.field0_0x0) &&
             (uVar6 = FNiagaraTypeDefinition::Vec3Def.Flags,
             pFVar5->UnderlyingType == FNiagaraTypeDefinition::Vec3Def.UnderlyingType))
          goto LAB_14917a8f0;
        }
        else if (param_2 == 4) {
          pFVar5 = FNiagaraTypeDefinitionHandle::Resolve
                             ((FNiagaraTypeDefinitionHandle *)(pFVar7 + 1));
          if ((((TObjectPtr<UObject>_u_0)(pFVar5->ClassStructOrEnum).field0_0x0.DebugPtr ==
                FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0) &&
              (pFVar5->UnderlyingType == FNiagaraTypeDefinition::Vec4Def.UnderlyingType)) &&
             (pFVar5->Flags == FNiagaraTypeDefinition::Vec4Def.Flags)) goto LAB_14917a929;
          pFVar5 = FNiagaraTypeDefinitionHandle::Resolve
                             ((FNiagaraTypeDefinitionHandle *)(pFVar7 + 1));
          if (((TObjectPtr<UObject>_u_0)(pFVar5->ClassStructOrEnum).field0_0x0.DebugPtr ==
               FNiagaraTypeDefinition::ColorDef.ClassStructOrEnum.field0_0x0) &&
             (uVar6 = FNiagaraTypeDefinition::ColorDef.Flags,
             pFVar5->UnderlyingType == FNiagaraTypeDefinition::ColorDef.UnderlyingType))
          goto LAB_14917a8f0;
        }
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 0xc;
    } while ((int)uVar8 < (this->Vars).ArrayNum);
  }
  return -1;
}

// UpdateTargetTexture @ 1491909d0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FGrid3DCollectionRWInstanceData_GameThread::UpdateTargetTexture
          (FGrid3DCollectionRWInstanceData_GameThread *this,ENiagaraGpuBufferFormat param_1)

{
  int iVar1;
  UTextureRenderTargetVolume *pUVar2;
  FName FVar3;
  UClass *pUVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  FName local_res8;
  FString local_28;
  
  if (((this->RTUserParamBinding).UObjectOffset != -1) &&
     (FNiagaraParameterStore::GetUObject((this->RTUserParamBinding).BoundStore,(int)&local_res8),
     FVar3 = local_res8, local_res8 != (FName)0x0)) {
    pUVar4 = Z_Construct_UClass_UTextureRenderTargetVolume_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(*(longlong *)((longlong)FVar3 + 0x10) + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)((longlong)FVar3 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar4->_padding_)) {
      this->TargetTexture = (UTextureRenderTargetVolume *)0x0;
      if (1 < (byte)LogNiagara._0_1_) {
        if (*(longlong *)((longlong)FVar3 + 0x10) == 0) {
          ::FString::FString(&local_28,L"None");
        }
        else {
          local_res8 = *(FName *)(*(longlong *)((longlong)FVar3 + 0x10) + 0x18);
          ::FName::ToString(&local_res8,&local_28);
        }
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      this->TargetTexture = (UTextureRenderTargetVolume *)FVar3;
    }
  }
  if (this->TargetTexture != (UTextureRenderTargetVolume *)0x0) {
    uVar5 = (this->NumTiles).field0_0x0._s_0.X * (this->NumCells).field0_0x0._s_0.X;
    uVar7 = (this->NumTiles).field0_0x0._s_0.Y * (this->NumCells).field0_0x0._s_0.Y;
    uVar6 = (this->NumTiles).field0_0x0._s_0.Z * (this->NumCells).field0_0x0._s_0.Z;
    FNiagaraUtilities::BufferFormatToPixelFormat
              ((ENiagaraGpuBufferFormat)&local_res8,(uint)param_1,0x600008);
    if (local_res8.ComparisonIndex.Value._1_1_ != '\0') {
      pUVar2 = this->TargetTexture;
      if ((((pUVar2->SizeX != uVar5) || (pUVar2->SizeY != uVar7)) || (pUVar2->SizeZ != uVar6)) ||
         ((pUVar2->OverrideFormat).Value != (uchar)local_res8.ComparisonIndex.Value)) {
        (pUVar2->OverrideFormat).Value = (uchar)local_res8.ComparisonIndex.Value;
        pUVar2 = this->TargetTexture;
        *(undefined8 *)&(pUVar2->ClearColor).field0_0x0 = 0;
        *(undefined8 *)((longlong)&(pUVar2->ClearColor).field0_0x0 + 8) = 0;
        UTextureRenderTargetVolume::InitAutoFormat(this->TargetTexture,uVar5,uVar7,uVar6);
        UTextureRenderTargetVolume::UpdateResourceImmediate(this->TargetTexture,true);
        return true;
      }
    }
  }
  return false;
}

