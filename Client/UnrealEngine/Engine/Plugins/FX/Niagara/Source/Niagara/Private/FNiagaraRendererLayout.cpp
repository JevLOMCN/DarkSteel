// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 5

// Finalize @ 1493465b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FNiagaraRendererLayout::Finalize(FNiagaraRendererLayout *this)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  FCommandList *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FRenderCommandList *this_00;
  FRenderCommandTag *pFVar8;
  code **ppcVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined1 auStackY_f8 [32];
  ForAnyElementType local_b0;
  undefined8 local_a8;
  ushort local_a0;
  ushort local_9e;
  code *local_98 [2];
  code *local_88 [3];
  code **local_70;
  undefined1 local_68 [40];
  code **local_40;
  byte local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  iVar3 = (this->VFVariables_GT).ArrayNum;
  uVar1 = this->TotalHalfComponents_GT;
  uVar2 = this->TotalFloatComponents_GT;
  _Src = (this->VFVariables_GT).AllocatorInstance.Data;
  local_b0.Data = (FScriptContainerElement *)0x0;
  local_a8 = CONCAT44(local_a8._4_4_,iVar3);
  if (iVar3 == 0) {
    local_a8 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,2,iVar3,0,&local_b0,iVar3,(int *)((longlong)&local_a8 + 4));
    memcpy(local_b0.Data,_Src,(longlong)iVar3 << 3);
  }
  local_98[0] = (code *)0x0;
  local_a0 = uVar2;
  local_9e = uVar1;
  local_70 = FMemory::Malloc(0x28,8);
  *local_70 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`FNiagaraRendererLayout::Finalize'::`2'::<lambda_1>,1,1>
                       ::_vftable_;
  local_70[2] = (code *)0x0;
  local_70[1] = (code *)this;
  local_70[2] = (code *)local_b0.Data;
  local_b0.Data = (FScriptContainerElement *)0x0;
  *(undefined4 *)(local_70 + 3) = (undefined4)local_a8;
  *(undefined4 *)((longlong)local_70 + 0x1c) = local_a8._4_4_;
  local_a8 = 0;
  *(ushort *)(local_70 + 4) = local_a0;
  *(ushort *)((longlong)local_70 + 0x22) = local_9e;
  if (local_70 + 1 != (code **)0x0) {
    local_98[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FNiagaraRendererLayout::Finalize'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
  }
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FNiagaraRendererLayout::Finalize_::__l2::TSTR_NiagaraFinalizeLayout261>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_98);
  }
  else {
    if (this_00->bInitialized == 0) {
      FRenderCommandList::Init(this_00);
    }
    iVar3 = (this_00->CommandLists).ArrayNum;
    uVar10 = iVar3 - 1;
    uVar7 = 0;
    if ((int)uVar10 < iVar3) {
      uVar7 = ~uVar10 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar3 = (this_00->CommandLists).ArrayNum;
    local_68._16_8_ = local_88[0];
    local_68._24_8_ = local_88[1];
    local_68._32_8_ = local_88[2];
    local_38 = 2;
    pFVar4 = (this_00->CommandLists).AllocatorInstance.Data;
    local_68._0_8_ = local_98[0];
    local_40 = local_70;
    local_70 = (code **)0x0;
    local_98[0] = (code *)0x0;
    pFVar8 = (FRenderCommandTag *)
             TRenderCommandTag<`FNiagaraRendererLayout::Finalize'::__l2::TSTR_NiagaraFinalizeLayout261>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (pFVar4 + (iVar3 + -1),
               (TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                *)local_68,pFVar8);
    uVar11 = (ulonglong)local_38;
    if (2 < uVar11) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar11] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_68._0_8_ != (code *)0x0) {
        ppcVar9 = (code **)(local_68 + 0x10);
        if (local_40 != (code **)0x0) {
          ppcVar9 = local_40;
        }
        (**(code **)(*ppcVar9 + 0x10))();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar11])(local_68);
    }
  }
  if (local_98[0] != (code *)0x0) {
    ppcVar9 = local_98 + 2;
    if (local_70 != (code **)0x0) {
      ppcVar9 = local_70;
    }
    (**(code **)(*ppcVar9 + 0x10))();
  }
  if (local_b0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Data);
  }
  return;
}

// GetVFVariables_RenderThread @ 149357060

TArrayView<FNiagaraRendererVariableInfo_const_,int> * __thiscall
FNiagaraRendererLayout::GetVFVariables_RenderThread
          (FNiagaraRendererLayout *this,
          TArrayView<FNiagaraRendererVariableInfo_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FNiagaraRendererVariableInfo_const_,int> *pTVar4;
  
  bVar3 = IsInParallelRenderingThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInParallelRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraRendererProperties.h"
                       ,0x9b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<FNiagaraRendererVariableInfo_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  iVar1 = (this->VFVariables_RT).ArrayNum;
  __return_storage_ptr__->DataPtr =
       (FNiagaraRendererVariableInfo *)(this->VFVariables_RT).AllocatorInstance.Data;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<FNiagaraRendererVariableInfo_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// Initialize @ 149358250

void __thiscall FNiagaraRendererLayout::Initialize(FNiagaraRendererLayout *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  if (-1 < param_1) {
    piVar1 = &(this->VFVariables_GT).ArrayMax;
    piVar2 = &(this->VFVariables_GT).ArrayNum;
    *piVar2 = 0;
    if ((this->VFVariables_GT).ArrayMax < param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,2,param_1,(ForAnyElementType *)this,0,piVar1);
    }
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,2,param_1,(ForAnyElementType *)this,piVar2,piVar1);
    DefaultConstructItems<FNiagaraRendererVariableInfo,int>
              ((this->VFVariables_GT).AllocatorInstance.Data + (longlong)iVar3 * 8,param_1);
    this->TotalFloatComponents_GT = 0;
    this->TotalHalfComponents_GT = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// SetVariable @ 14936b220

bool __thiscall
FNiagaraRendererLayout::SetVariable
          (FNiagaraRendererLayout *this,FNiagaraDataSetCompiledData *param_1,
          FNiagaraVariableBase *param_2,int param_3)

{
  FName *pFVar1;
  ushort *puVar2;
  ushort uVar3;
  FName *pFVar4;
  TObjectPtr<UObject>_u_0 TVar5;
  code *pcVar6;
  short sVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  int iVar11;
  FNiagaraTypeDefinition *pFVar12;
  FName *pFVar13;
  FScriptContainerElement *pFVar14;
  longlong lVar15;
  uint uVar16;
  FScriptContainerElement FVar17;
  uint uVar18;
  FScriptContainerElement *pFVar19;
  FNiagaraTypeDefinitionHandle local_68 [2];
  void *local_60;
  undefined8 local_58;
  FName local_50;
  uint local_48;
  
  if (param_1 == (FNiagaraDataSetCompiledData *)0x0) {
    return false;
  }
  pFVar4 = (FName *)(param_1->Variables).AllocatorInstance.Data;
  iVar11 = (param_1->Variables).ArrayNum;
  pFVar1 = (FName *)((longlong)pFVar4 + (longlong)iVar11 * 0xc);
  if (pFVar4 != pFVar1) {
    pFVar13 = pFVar4;
    do {
      local_50 = *pFVar13;
      local_48 = pFVar13[1].ComparisonIndex.Value;
      if (local_50 == param_2->Name) {
        lVar15 = ((longlong)pFVar13 - (longlong)pFVar4) / 6 +
                 ((longlong)pFVar13 - (longlong)pFVar4 >> 0x3f);
        uVar16 = (int)(lVar15 >> 1) - (int)(lVar15 >> 0x3f);
        if (uVar16 != 0xffffffff) {
          uVar18 = 0;
          if ((int)uVar16 < iVar11) {
            uVar18 = ~uVar16 >> 0x1f;
          }
          if ((uVar18 == 0) &&
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
          local_68[0].RegisteredTypeIndex =
               *(int *)((param_1->Variables).AllocatorInstance.Data +
                       (longlong)(int)uVar16 * 0xc + 8);
          local_60 = (void *)0x0;
          local_58 = 0;
          pFVar12 = FNiagaraTypeDefinitionHandle::Resolve(local_68);
          TVar5.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar12->ClassStructOrEnum).field0_0x0.DebugPtr;
          if (((((((TObjectPtr<UObject>_u_0)TVar5.DebugPtr ==
                   FNiagaraTypeDefinition::HalfDef.ClassStructOrEnum.field0_0x0) &&
                 (pFVar12->UnderlyingType == FNiagaraTypeDefinition::HalfDef.UnderlyingType)) &&
                (pFVar12->Flags == FNiagaraTypeDefinition::HalfDef.Flags)) ||
               ((((TObjectPtr<UObject>_u_0)TVar5.DebugPtr ==
                  FNiagaraTypeDefinition::HalfVec2Def.ClassStructOrEnum.field0_0x0 &&
                 (pFVar12->UnderlyingType == FNiagaraTypeDefinition::HalfVec2Def.UnderlyingType)) &&
                (pFVar12->Flags == FNiagaraTypeDefinition::HalfVec2Def.Flags)))) ||
              ((((TObjectPtr<UObject>_u_0)TVar5.DebugPtr ==
                 FNiagaraTypeDefinition::HalfVec3Def.ClassStructOrEnum.field0_0x0 &&
                (pFVar12->UnderlyingType == FNiagaraTypeDefinition::HalfVec3Def.UnderlyingType)) &&
               (pFVar12->Flags == FNiagaraTypeDefinition::HalfVec3Def.Flags)))) ||
             ((((TObjectPtr<UObject>_u_0)TVar5.DebugPtr ==
                FNiagaraTypeDefinition::HalfVec4Def.ClassStructOrEnum.field0_0x0 &&
               (pFVar12->UnderlyingType == FNiagaraTypeDefinition::HalfVec4Def.UnderlyingType)) &&
              (pFVar12->Flags == FNiagaraTypeDefinition::HalfVec4Def.Flags)))) {
            uVar18 = 1;
          }
          else {
            uVar18 = 0;
          }
          uVar10 = 0;
          if ((int)uVar16 < (param_1->VariableLayouts).ArrayNum) {
            uVar10 = ~uVar16 >> 0x1f;
          }
          if ((uVar10 == 0) &&
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
          pFVar19 = (param_1->VariableLayouts).AllocatorInstance.Data + (longlong)(int)uVar16 * 0x20
          ;
          pFVar12 = FNiagaraTypeDefinitionHandle::Resolve(local_68);
          iVar11 = FNiagaraTypeDefinition::GetSize(pFVar12);
          FVar17 = SUB41(uVar18,0);
          lVar15 = (longlong)iVar11 / (longlong)(int)((uVar18 ^ 1) * 2 + 2);
          iVar11 = (int)lVar15;
          sVar7 = (short)lVar15;
          if (FVar17 == (FScriptContainerElement)0x0) {
            uVar3 = *(ushort *)pFVar19;
            lVar15 = 0x20;
          }
          else {
            uVar3 = *(ushort *)(pFVar19 + 4);
            lVar15 = 0x22;
          }
          uVar16 = (uint)uVar3;
          puVar2 = (ushort *)((longlong)&(this->VFVariables_GT).AllocatorInstance.Data + lVar15);
          pFVar14 = (this->VFVariables_GT).AllocatorInstance.Data;
          pFVar19 = pFVar14 + (longlong)(this->VFVariables_GT).ArrayNum * 8;
          goto joined_r0x00014936b50d;
        }
        break;
      }
      pFVar13 = (FName *)&pFVar13[1].Number;
    } while (pFVar13 != pFVar1);
  }
  uVar16 = 0;
  if (param_3 < (this->VFVariables_GT).ArrayNum) {
    uVar16 = (uint)~param_3 >> 0x1f;
  }
  if ((uVar16 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar6 = (code *)swi(3);
    uVar9 = (*pcVar6)();
    return (bool)uVar9;
  }
  *(undefined8 *)((this->VFVariables_GT).AllocatorInstance.Data + (longlong)param_3 * 8) =
       0xffffffff;
  return false;
joined_r0x00014936b50d:
  if (pFVar14 == pFVar19) {
    uVar18 = uVar16;
    if (param_1->SimTarget == CPUSim) {
      uVar18 = (uint)*puVar2;
    }
    if ((0xffff < (int)((uint)*puVar2 + iVar11)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("static_cast<int32>(TotalVFComponents) + NumComponents <= TNumericLimits<uint16>::Max()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRendererProperties.cpp"
                           ,0xef,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      uVar9 = (*pcVar6)();
      return (bool)uVar9;
    }
    uVar9 = 1;
    *puVar2 = *puVar2 + sVar7;
LAB_14936b589:
    if ((0xfffe < uVar16) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("int32(InDataOffset) < TNumericLimits<uint16>::Max()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraRendererProperties.h"
                           ,0x79,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      uVar9 = (*pcVar6)();
      return (bool)uVar9;
    }
    if ((0xfffe < uVar18) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("int32(InGPUBufferOffset) < TNumericLimits<uint16>::Max()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraRendererProperties.h"
                           ,0x7a,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      uVar9 = (*pcVar6)();
      return (bool)uVar9;
    }
    if ((0xffff < iVar11) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("int32(InNumComponents) <= TNumericLimits<uint16>::Max()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraRendererProperties.h"
                           ,0x7b,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      uVar9 = (*pcVar6)();
      return (bool)uVar9;
    }
    uVar10 = 0;
    if (param_3 < (this->VFVariables_GT).ArrayNum) {
      uVar10 = (uint)~param_3 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar6 = (code *)swi(3);
      uVar9 = (*pcVar6)();
      return (bool)uVar9;
    }
    *(ulonglong *)((this->VFVariables_GT).AllocatorInstance.Data + (longlong)param_3 * 8) =
         CONCAT17(FVar17,CONCAT16(uVar9,CONCAT24(sVar7,CONCAT22((short)uVar18,uVar3))));
    if (local_60 != (void *)0x0) {
      FMemory::Free(local_60);
    }
    return uVar16 != 0xffffffff;
  }
  if ((*(ushort *)pFVar14 == uVar16) && (pFVar14[7] == FVar17)) {
    uVar18 = (uint)*(ushort *)(pFVar14 + 2);
    uVar9 = 0;
    goto LAB_14936b589;
  }
  pFVar14 = pFVar14 + 8;
  goto joined_r0x00014936b50d;
}

// SetVariableFromBinding @ 14936bbe0

bool __thiscall
FNiagaraRendererLayout::SetVariableFromBinding
          (FNiagaraRendererLayout *this,FNiagaraDataSetCompiledData *param_1,
          FNiagaraVariableAttributeBinding *param_2,int param_3)

{
  bool bVar1;
  FNiagaraTypeDefinition *pFVar2;
  FNiagaraVariableBase local_18;
  
  if (param_2->bIsCachedParticleValue == '\0') {
    bVar1 = false;
  }
  else {
    pFVar2 = FNiagaraTypeDefinitionHandle::Resolve(&(param_2->ParamMapVariable).TypeDefHandle);
    local_18.Name = param_2->DataSetName;
    local_18.TypeDefHandle.RegisteredTypeIndex =
         FNiagaraTypeDefinitionHandle::Register(&local_18.TypeDefHandle,pFVar2);
    bVar1 = SetVariable(this,param_1,&local_18,param_3);
  }
  return bVar1;
}

