// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 5

// FGrid2DCollectionRWInstanceData_GameThread @ 149168270

FGrid2DCollectionRWInstanceData_GameThread * __thiscall
FGrid2DCollectionRWInstanceData_GameThread::FGrid2DCollectionRWInstanceData_GameThread
          (FGrid2DCollectionRWInstanceData_GameThread *this,
          FGrid2DCollectionRWInstanceData_GameThread *param_1)

{
  bool bVar1;
  UTextureRenderTarget *pUVar2;
  double dVar3;
  
  this->ClearBeforeNonIterationStage = param_1->ClearBeforeNonIterationStage;
  (this->NumCells).field0_0x0 = (param_1->NumCells).field0_0x0;
  this->NumAttributes = param_1->NumAttributes;
  dVar3 = (param_1->CellSize).field0_0x0._s_0.Y;
  (this->CellSize).field0_0x0._s_0.X = (param_1->CellSize).field0_0x0._s_0.X;
  (this->CellSize).field0_0x0._s_0.Y = dVar3;
  dVar3 = (param_1->WorldBBoxSize).field0_0x0._s_0.Y;
  (this->WorldBBoxSize).field0_0x0._s_0.X = (param_1->WorldBBoxSize).field0_0x0._s_0.X;
  (this->WorldBBoxSize).field0_0x0._s_0.Y = dVar3;
  (this->PixelFormat).bIsSet = false;
  bVar1 = (param_1->PixelFormat).bIsSet;
  (this->PixelFormat).bIsSet = bVar1;
  if (bVar1 != false) {
    (this->PixelFormat).TypedValue = (param_1->PixelFormat).TypedValue;
  }
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
  this->NeedsRealloc = param_1->NeedsRealloc;
  this->OtherDI = param_1->OtherDI;
  this->OtherInstanceData = param_1->OtherInstanceData;
  return this;
}

// FGrid2DCollectionRWInstanceData_GameThread @ 1491683a0

FGrid2DCollectionRWInstanceData_GameThread * __thiscall
FGrid2DCollectionRWInstanceData_GameThread::FGrid2DCollectionRWInstanceData_GameThread
          (FGrid2DCollectionRWInstanceData_GameThread *this,
          FGrid2DCollectionRWInstanceData_GameThread *param_1)

{
  TArray<FNiagaraVariableBase,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  double dVar7;
  
  this->ClearBeforeNonIterationStage = param_1->ClearBeforeNonIterationStage;
  (this->NumCells).field0_0x0 = (param_1->NumCells).field0_0x0;
  this->NumAttributes = param_1->NumAttributes;
  dVar7 = (param_1->CellSize).field0_0x0._s_0.Y;
  (this->CellSize).field0_0x0._s_0.X = (param_1->CellSize).field0_0x0._s_0.X;
  (this->CellSize).field0_0x0._s_0.Y = dVar7;
  dVar7 = (param_1->WorldBBoxSize).field0_0x0._s_0.Y;
  (this->WorldBBoxSize).field0_0x0._s_0.X = (param_1->WorldBBoxSize).field0_0x0._s_0.X;
  (this->WorldBBoxSize).field0_0x0._s_0.Y = dVar7;
  (this->PixelFormat).bIsSet = false;
  bVar4 = (param_1->PixelFormat).bIsSet;
  (this->PixelFormat).bIsSet = bVar4;
  if (bVar4 != false) {
    (this->PixelFormat).TypedValue = (param_1->PixelFormat).TypedValue;
  }
  (this->RTUserParamBinding).UObjectOffset = (param_1->RTUserParamBinding).UObjectOffset;
  (this->RTUserParamBinding).BoundStore = (param_1->RTUserParamBinding).BoundStore;
  FNiagaraVariable::FNiagaraVariable
            (&(this->RTUserParamBinding).BoundVariable,&(param_1->RTUserParamBinding).BoundVariable)
  ;
  pTVar1 = &this->Vars;
  (this->RTUserParamBinding).LayoutVersion = (param_1->RTUserParamBinding).LayoutVersion;
  this->TargetTexture = param_1->TargetTexture;
  piVar2 = &(this->Vars).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar5 = (param_1->Vars).ArrayNum;
  pFVar6 = (param_1->Vars).AllocatorInstance.Data;
  (this->Vars).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,iVar5,0,&pTVar1->AllocatorInstance,iVar5,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar6,(longlong)iVar5 * 0xc);
  }
  pTVar3 = &this->Offsets;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Offsets).ArrayMax;
  iVar5 = (param_1->Offsets).ArrayNum;
  pFVar6 = (param_1->Offsets).AllocatorInstance.Data;
  (this->Offsets).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar5,0,&pTVar3->AllocatorInstance,iVar5,piVar2);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar6,(longlong)iVar5 << 2);
  }
  this->NeedsRealloc = param_1->NeedsRealloc;
  this->OtherDI = param_1->OtherDI;
  this->OtherInstanceData = param_1->OtherInstanceData;
  return this;
}

// FGrid2DCollectionRWInstanceData_GameThread @ 149168530

FGrid2DCollectionRWInstanceData_GameThread * __thiscall
FGrid2DCollectionRWInstanceData_GameThread::FGrid2DCollectionRWInstanceData_GameThread
          (FGrid2DCollectionRWInstanceData_GameThread *this)

{
  int iVar1;
  
  this->ClearBeforeNonIterationStage = true;
  (this->NumCells).field0_0x0 = (TIntPoint<int>_u_0)0x0;
  this->NumAttributes = 0;
  (this->CellSize).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->WorldBBoxSize).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->PixelFormat).bIsSet = false;
  (this->RTUserParamBinding).UObjectOffset = -1;
  (this->RTUserParamBinding).BoundStore = (FNiagaraParameterStore *)0x0;
  (this->RTUserParamBinding).BoundVariable._padding_ = 0;
  iVar1 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)
                     &(this->RTUserParamBinding).BoundVariable._padding_,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&(this->RTUserParamBinding).BoundVariable._padding_ = iVar1;
  (this->RTUserParamBinding).BoundVariable.VarData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RTUserParamBinding).BoundVariable.VarData.ArrayNum = 0;
  (this->RTUserParamBinding).BoundVariable.VarData.ArrayMax = 0;
  this->TargetTexture = (UTextureRenderTarget *)0x0;
  (this->Vars).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Vars).ArrayNum = 0;
  (this->Vars).ArrayMax = 0;
  (this->Offsets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Offsets).ArrayNum = 0;
  (this->Offsets).ArrayMax = 0;
  this->NeedsRealloc = false;
  this->OtherDI = (UNiagaraDataInterface *)0x0;
  this->OtherInstanceData = (FGrid2DCollectionRWInstanceData_GameThread *)0x0;
  return this;
}

// FindAttributeIndexByName @ 14917a430

int __thiscall
FGrid2DCollectionRWInstanceData_GameThread::FindAttributeIndexByName
          (FGrid2DCollectionRWInstanceData_GameThread *this,FName *param_1,int param_2)

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
            goto LAB_14917a55f;
          }
        }
        else if (param_2 == 2) {
          pFVar5 = FNiagaraTypeDefinitionHandle::Resolve
                             ((FNiagaraTypeDefinitionHandle *)(pFVar7 + 1));
          if (((TObjectPtr<UObject>_u_0)(pFVar5->ClassStructOrEnum).field0_0x0.DebugPtr ==
               FNiagaraTypeDefinition::Vec2Def.ClassStructOrEnum.field0_0x0) &&
             (uVar6 = FNiagaraTypeDefinition::Vec2Def.Flags,
             pFVar5->UnderlyingType == FNiagaraTypeDefinition::Vec2Def.UnderlyingType)) {
LAB_14917a63d:
            if (pFVar5->Flags == uVar6) {
LAB_14917a676:
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
LAB_14917a55f:
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
          goto LAB_14917a63d;
        }
        else if (param_2 == 4) {
          pFVar5 = FNiagaraTypeDefinitionHandle::Resolve
                             ((FNiagaraTypeDefinitionHandle *)(pFVar7 + 1));
          if ((((TObjectPtr<UObject>_u_0)(pFVar5->ClassStructOrEnum).field0_0x0.DebugPtr ==
                FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0) &&
              (pFVar5->UnderlyingType == FNiagaraTypeDefinition::Vec4Def.UnderlyingType)) &&
             (pFVar5->Flags == FNiagaraTypeDefinition::Vec4Def.Flags)) goto LAB_14917a676;
          pFVar5 = FNiagaraTypeDefinitionHandle::Resolve
                             ((FNiagaraTypeDefinitionHandle *)(pFVar7 + 1));
          if (((TObjectPtr<UObject>_u_0)(pFVar5->ClassStructOrEnum).field0_0x0.DebugPtr ==
               FNiagaraTypeDefinition::ColorDef.ClassStructOrEnum.field0_0x0) &&
             (uVar6 = FNiagaraTypeDefinition::ColorDef.Flags,
             pFVar5->UnderlyingType == FNiagaraTypeDefinition::ColorDef.UnderlyingType))
          goto LAB_14917a63d;
        }
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 0xc;
    } while ((int)uVar8 < (this->Vars).ArrayNum);
  }
  return -1;
}

// UpdateTargetTexture @ 1491906a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FGrid2DCollectionRWInstanceData_GameThread::UpdateTargetTexture
          (FGrid2DCollectionRWInstanceData_GameThread *this,ENiagaraGpuBufferFormat param_1)

{
  int iVar1;
  longlong lVar2;
  UTextureRenderTarget2DArray *this_00;
  UTextureRenderTarget2D *this_01;
  undefined8 uVar3;
  undefined8 uVar4;
  FName FVar5;
  UClass *pUVar6;
  FString *pFVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  FName local_res8;
  FString local_38;
  FNiagaraGrid2DLegacyTiled2DInfo local_28;
  
  if (((this->RTUserParamBinding).UObjectOffset != -1) &&
     (FNiagaraParameterStore::GetUObject((this->RTUserParamBinding).BoundStore,(int)&local_res8),
     FVar5 = local_res8, local_res8 != (FName)0x0)) {
    pUVar6 = Z_Construct_UClass_UTextureRenderTarget2DArray_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)(*(longlong *)((longlong)FVar5 + 0x10) + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)((longlong)FVar5 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar6->_padding_)) {
      pUVar6 = Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
      lVar2 = *(longlong *)((longlong)FVar5 + 0x10);
      iVar1 = (int)pUVar6->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar6->_padding_)) {
        if (1 < (byte)LogNiagara._0_1_) {
          if (lVar2 == 0) {
            ::FString::FString(&local_38,L"None");
          }
          else {
            local_res8 = *(FName *)(lVar2 + 0x18);
            ::FName::ToString(&local_res8,&local_38);
          }
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
          if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_38.Data.AllocatorInstance.Data);
          }
        }
        goto LAB_1491907c8;
      }
    }
    pUVar6 = Z_Construct_UClass_UTextureRenderTarget_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)(*(longlong *)((longlong)FVar5 + 0x10) + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)((longlong)FVar5 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar6->_padding_)) {
      pFVar7 = GetTypeName<UTextureRenderTarget>(&local_38);
      pwVar9 = L"";
      if ((pFVar7->Data).ArrayNum == 0) {
        pwVar8 = L"";
      }
      else {
        pwVar8 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
      }
      pFVar7 = GetFullNameForCastLogError<UObject>((FString *)&local_28,(UObject *)FVar5);
      if ((pFVar7->Data).ArrayNum != 0) {
        pwVar9 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar9,pwVar8);
    }
    this->TargetTexture = (UTextureRenderTarget *)FVar5;
  }
LAB_1491907c8:
  this_00 = (UTextureRenderTarget2DArray *)this->TargetTexture;
  if (this_00 != (UTextureRenderTarget2DArray *)0x0) {
    pUVar6 = Z_Construct_UClass_UTextureRenderTarget2DArray_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)(this_00->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar6->_padding_)) {
      this_01 = (UTextureRenderTarget2D *)this->TargetTexture;
      if (this_01 != (UTextureRenderTarget2D *)0x0) {
        pUVar6 = Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
        iVar1 = (int)pUVar6->_padding_;
        if ((iVar1 <= *(int *)(this_01->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
            &pUVar6->_padding_)) {
          if ((GRHIGlobals.MaxTextureDimensions.Value / (this->NumCells).field0_0x0._s_0.Y) *
              (GRHIGlobals.MaxTextureDimensions.Value / (this->NumCells).field0_0x0._s_0.X) <
              this->NumAttributes) {
            this->TargetTexture = (UTextureRenderTarget *)0x0;
          }
          else {
            FNiagaraGrid2DLegacyTiled2DInfo::FNiagaraGrid2DLegacyTiled2DInfo
                      (&local_28,&this->NumCells,this->NumAttributes);
            FNiagaraUtilities::BufferFormatToRenderTargetFormat
                      ((ENiagaraGpuBufferFormat)&local_res8,(uint)param_1);
            uVar4 = _UNK_151d9b508;
            uVar3 = ___xmm_0000000000000000000000003f000000;
            if (((char)local_res8.Number != '\0') &&
               (((this_01->SizeX != local_28.Size.field0_0x0._s_0.X ||
                 (this_01->SizeY != local_28.Size.field0_0x0._s_0.Y)) ||
                ((uint)(this_01->RenderTargetFormat).Value != local_res8.ComparisonIndex.Value.Value
                )))) {
              this_01->bAutoGenerateMips = '\0';
              *(undefined8 *)&(this_01->ClearColor).field0_0x0 = uVar3;
              *(undefined8 *)((longlong)&(this_01->ClearColor).field0_0x0 + 8) = uVar4;
              (this_01->RenderTargetFormat).Value = (uchar)local_res8.ComparisonIndex.Value;
              UTextureRenderTarget2D::InitAutoFormat
                        (this_01,local_28.Size.field0_0x0._s_0.X,local_28.Size.field0_0x0._s_0.Y);
              UTextureRenderTarget2D::UpdateResourceImmediate(this_01,true);
              return true;
            }
          }
        }
      }
    }
    else {
      FNiagaraUtilities::BufferFormatToPixelFormat
                ((ENiagaraGpuBufferFormat)&local_res8,(uint)param_1,0x600004);
      uVar3 = _UNK_151d9b508;
      if ((local_res8.ComparisonIndex.Value._1_1_ != '\0') &&
         (((this_00->SizeX != (this->NumCells).field0_0x0._s_0.X ||
           (this_00->SizeY != (this->NumCells).field0_0x0._s_0.Y)) ||
          ((this_00->Slices != this->NumAttributes ||
           ((this_00->OverrideFormat).Value != (uchar)local_res8.ComparisonIndex.Value)))))) {
        *(undefined8 *)&(this_00->ClearColor).field0_0x0 = ___xmm_0000000000000000000000003f000000;
        *(undefined8 *)((longlong)&(this_00->ClearColor).field0_0x0 + 8) = uVar3;
        (this_00->OverrideFormat).Value = (uchar)local_res8.ComparisonIndex.Value;
        UTextureRenderTarget2DArray::InitAutoFormat
                  (this_00,(this->NumCells).field0_0x0._s_0.X,(this->NumCells).field0_0x0._s_0.Y,
                   this->NumAttributes);
        UTextureRenderTarget2DArray::UpdateResourceImmediate(this_00,true);
        return true;
      }
    }
  }
  return false;
}

