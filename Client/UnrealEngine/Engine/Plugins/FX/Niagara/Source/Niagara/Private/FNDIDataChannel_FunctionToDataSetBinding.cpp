// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 4

// FNDIDataChannel_FunctionToDataSetBinding @ 148e54190

FNDIDataChannel_FunctionToDataSetBinding * __thiscall
FNDIDataChannel_FunctionToDataSetBinding::FNDIDataChannel_FunctionToDataSetBinding
          (FNDIDataChannel_FunctionToDataSetBinding *this,FNDIDataChannelFunctionInfo *param_1,
          FNiagaraDataSetCompiledData *param_2,
          TArray<FNiagaraVariableBase,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  uint uVar2;
  FNiagaraDataSetCompiledData *local_48;
  TArray<FNiagaraVariableBase,TSizedDefaultAllocator<32>_> *local_40;
  FNDIDataChannel_FunctionToDataSetBinding *local_38;
  
  piVar1 = &(this->VMRegisterBindings).ArrayMax;
  (this->VMRegisterBindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VMRegisterBindings).ArrayNum = 0;
  *piVar1 = 0;
  this->DataSetLayoutHash = 0;
  (this->DebugFunctionInfo).FunctionName.ComparisonIndex = 0;
  (this->DebugFunctionInfo).FunctionName.Number = 0;
  (this->DebugFunctionInfo).Inputs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugFunctionInfo).Inputs.ArrayNum = 0;
  (this->DebugFunctionInfo).Inputs.ArrayMax = 0;
  (this->DebugFunctionInfo).Outputs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugFunctionInfo).Outputs.ArrayNum = 0;
  (this->DebugFunctionInfo).Outputs.ArrayMax = 0;
  this->NumFloatComponents = 0;
  this->NumInt32Components = 0;
  this->NumHalfComponents = 0;
  this->FunctionLayoutHash = 0;
  FNiagaraDataSetCompiledData::FNiagaraDataSetCompiledData(&this->DebugCompiledData);
  (this->DebugFunctionInfo).FunctionName = param_1->FunctionName;
  TArray<FNiagaraVariableBase,TSizedDefaultAllocator<32>_>::operator=
            (&(this->DebugFunctionInfo).Inputs,&param_1->Inputs);
  TArray<FNiagaraVariableBase,TSizedDefaultAllocator<32>_>::operator=
            (&(this->DebugFunctionInfo).Outputs,&param_1->Outputs);
  FNiagaraDataSetCompiledData::operator=(&this->DebugCompiledData,param_2);
  uVar2 = ::GetTypeHash(param_1);
  this->FunctionLayoutHash = uVar2;
  uVar2 = FNiagaraDataSetCompiledData::GetLayoutHash(param_2);
  this->DataSetLayoutHash = uVar2;
  (this->VMRegisterBindings).ArrayNum = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,(ForAnyElementType *)this,0,piVar1);
  }
  local_48 = param_2;
  local_40 = param_3;
  local_38 = this;
  `FNDIDataChannel_FunctionToDataSetBinding::FNDIDataChannel_FunctionToDataSetBinding'::__l2::
  <lambda_1>::operator()(&local_48,&param_1->Inputs);
  `FNDIDataChannel_FunctionToDataSetBinding::FNDIDataChannel_FunctionToDataSetBinding'::__l2::
  <lambda_1>::operator()(&local_48,&param_1->Outputs);
  return this;
}

// ~FNDIDataChannel_FunctionToDataSetBinding @ 148e56420

void __thiscall
FNDIDataChannel_FunctionToDataSetBinding::~FNDIDataChannel_FunctionToDataSetBinding
          (FNDIDataChannel_FunctionToDataSetBinding *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FNiagaraVariableLayoutInfo,int>
            ((FNiagaraVariableLayoutInfo *)
             (this->DebugCompiledData).VariableLayouts.AllocatorInstance.Data,
             (this->DebugCompiledData).VariableLayouts.ArrayNum);
  pFVar1 = (this->DebugCompiledData).VariableLayouts.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DebugCompiledData).Variables.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DebugFunctionInfo).Outputs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DebugFunctionInfo).Inputs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->VMRegisterBindings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator() @ 148e57560

void __thiscall
`FNDIDataChannel_FunctionToDataSetBinding::FNDIDataChannel_FunctionToDataSetBinding'::__l2::
<lambda_1>::operator()(void *this,TArray<FNiagaraVariableBase,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  FScriptContainerElement *pFVar3;
  FNDIDataChannel_FunctionToDataSetBinding *this_00;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FNiagaraVariableLayoutInfo *pFVar8;
  FNiagaraTypeDefinition *this_01;
  UClass *pUVar9;
  uint uVar10;
  FNiagaraVariableBase *pFVar11;
  UScriptStruct *pUVar12;
  longlong lVar13;
  uint local_res10 [2];
  uint local_res18 [2];
  uint local_res20 [2];
  
  iVar7 = param_1->ArrayNum;
  uVar10 = 0;
  if (0 < iVar7) {
    lVar13 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar10 < iVar7) {
        uVar6 = ~uVar10 >> 0x1f;
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
      pFVar11 = (FNiagaraVariableBase *)((param_1->AllocatorInstance).Data + lVar13);
      local_res20[0] = 0xffffffff;
      local_res18[0] = 0xffffffff;
      local_res10[0] = 0xffffffff;
      pFVar8 = FNiagaraDataSetCompiledData::FindVariableLayoutInfo
                         (*(FNiagaraDataSetCompiledData **)this,pFVar11);
      if (pFVar8 == (FNiagaraVariableLayoutInfo *)0x0) {
        pFVar2 = *(ForAnyElementType **)((longlong)this + 8);
        piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
        iVar7 = *(int *)&pFVar2[1].Data;
        if (iVar7 == *piVar1) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x40c,pFVar2,piVar1);
        }
        *(int *)&pFVar2[1].Data = iVar7 + 1;
        pFVar3 = pFVar2->Data;
        *(FName *)(pFVar3 + (longlong)iVar7 * 0xc) = pFVar11->Name;
        *(int *)(pFVar3 + (longlong)iVar7 * 0xc + 8) = (pFVar11->TypeDefHandle).RegisteredTypeIndex;
      }
      else {
        local_res20[0] = (uint)pFVar8->FloatComponentStart;
        local_res18[0] = (uint)pFVar8->Int32ComponentStart;
        local_res10[0] = (uint)pFVar8->HalfComponentStart;
      }
      this_00 = *(FNDIDataChannel_FunctionToDataSetBinding **)((longlong)this + 0x10);
      this_01 = FNiagaraTypeDefinitionHandle::Resolve(&pFVar11->TypeDefHandle);
      pUVar12 = FNiagaraTypeDefinition::IntStruct;
      if (this_01->UnderlyingType != 3) {
        if ((this_01->ClassStructOrEnum).field0_0x0.DebugPtr != (UObject *)0x0) {
          pUVar9 = Z_Construct_UClass_UStruct_NoRegister();
          bVar5 = FObjectPtr::IsA((FObjectPtr *)this_01,pUVar9);
          if (bVar5) {
            pUVar12 = (UScriptStruct *)(this_01->ClassStructOrEnum).field0_0x0.DebugPtr;
            goto LAB_148e576c3;
          }
        }
        pUVar12 = (UScriptStruct *)0x0;
      }
LAB_148e576c3:
      FNDIDataChannel_FunctionToDataSetBinding::GenVMBindings
                (this_00,pFVar11,(UStruct *)pUVar12,&this_00->NumFloatComponents,
                 &this_00->NumInt32Components,&this_00->NumHalfComponents,local_res20,local_res18,
                 local_res10);
      iVar7 = param_1->ArrayNum;
      uVar10 = uVar10 + 1;
      lVar13 = lVar13 + 0xc;
    } while ((int)uVar10 < iVar7);
  }
  return;
}

// GenVMBindings @ 148e66ce0

void __thiscall
FNDIDataChannel_FunctionToDataSetBinding::GenVMBindings
          (FNDIDataChannel_FunctionToDataSetBinding *this,FNiagaraVariableBase *param_1,
          UStruct *param_2,uint *param_3,uint *param_4,uint *param_5,uint *param_6,uint *param_7,
          uint *param_8)

{
  int *piVar1;
  uint uVar2;
  FFieldClass *pFVar3;
  FScriptContainerElement *pFVar4;
  FName this_00;
  code *pcVar5;
  FName FVar6;
  FField *pFVar7;
  bool bVar8;
  int iVar9;
  FFieldClass *pFVar10;
  FName FVar11;
  UScriptStruct *pUVar12;
  uint uVar13;
  FString local_78;
  FString local_68;
  TFieldIterator<FProperty> local_58;
  
  if (param_2 == (UStruct *)0x0) {
    local_58.Field = (FField *)0x0;
  }
  else {
    local_58.Field = param_2->ChildProperties;
  }
  local_58.InterfaceIndex = -1;
  local_58.bIncludeSuper = true;
  local_58.bIncludeDeprecated = true;
  local_58.bIncludeInterface = false;
  local_58.Struct = param_2;
  TFieldIterator<FProperty>::IterateToNext(&local_58);
  pFVar7 = local_58.Field;
  do {
    if (pFVar7 == (FField *)0x0) {
      return;
    }
    local_58.Field = pFVar7;
    pFVar10 = FFloatProperty::StaticClass();
    if ((pFVar10 == (FFieldClass *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("FieldType",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                           ,0x2dd,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar3 = pFVar7->ClassPrivate;
    if (pFVar10->Id == CASTCLASS_None) {
      for (; pFVar3 != (FFieldClass *)0x0; pFVar3 = pFVar3->SuperClass) {
        if (pFVar3 == pFVar10) {
          bVar8 = true;
          goto LAB_148e66e04;
        }
      }
      bVar8 = false;
    }
    else {
      bVar8 = (pFVar3->CastFlags & pFVar10->Id) != CASTCLASS_None;
    }
LAB_148e66e04:
    if (bVar8) {
      uVar13 = *param_6;
      if (uVar13 != 0xffffffff) {
        *param_6 = uVar13 + 1;
      }
      piVar1 = &(this->VMRegisterBindings).ArrayMax;
      uVar2 = *param_3;
      *param_3 = uVar2 + 1;
      iVar9 = (this->VMRegisterBindings).ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,(ForAnyElementType *)this,piVar1);
      }
      (this->VMRegisterBindings).ArrayNum = iVar9 + 1;
      pFVar4 = (this->VMRegisterBindings).AllocatorInstance.Data;
      *(uint *)(pFVar4 + (longlong)iVar9 * 8) = uVar13;
      *(uint *)(pFVar4 + (longlong)iVar9 * 8 + 4) = uVar2 & 0x3fffffff | 0x40000000;
    }
    else {
      pFVar10 = FUInt16Property::StaticClass();
      if ((pFVar10 == (FFieldClass *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("FieldType",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                             ,0x2dd,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar3 = pFVar7->ClassPrivate;
      if (pFVar10->Id == CASTCLASS_None) {
        for (; pFVar3 != (FFieldClass *)0x0; pFVar3 = pFVar3->SuperClass) {
          if (pFVar3 == pFVar10) {
            bVar8 = true;
            goto LAB_148e66ec0;
          }
        }
        bVar8 = false;
      }
      else {
        bVar8 = (pFVar3->CastFlags & pFVar10->Id) != CASTCLASS_None;
      }
LAB_148e66ec0:
      if (bVar8) {
        if (*param_8 == 0xffffffff) {
          uVar13 = 0xffffffff;
        }
        else {
          uVar13 = *param_7;
          *param_7 = uVar13 + 1;
        }
        piVar1 = &(this->VMRegisterBindings).ArrayMax;
        uVar2 = *param_5;
        *param_5 = uVar2 + 1;
        iVar9 = (this->VMRegisterBindings).ArrayNum;
        if (iVar9 == *piVar1) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,(ForAnyElementType *)this,piVar1);
        }
        (this->VMRegisterBindings).ArrayNum = iVar9 + 1;
        pFVar4 = (this->VMRegisterBindings).AllocatorInstance.Data;
        *(uint *)(pFVar4 + (longlong)iVar9 * 8) = uVar13;
        *(uint *)(pFVar4 + (longlong)iVar9 * 8 + 4) = uVar2 & 0x3fffffff;
      }
      else {
        pFVar10 = FIntProperty::StaticClass();
        if ((pFVar10 == (FFieldClass *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("FieldType",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                               ,0x2dd,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar3 = pFVar7->ClassPrivate;
        if (pFVar10->Id == CASTCLASS_None) {
          for (; pFVar3 != (FFieldClass *)0x0; pFVar3 = pFVar3->SuperClass) {
            if (pFVar3 == pFVar10) {
              bVar8 = true;
              goto LAB_148e66f80;
            }
          }
          bVar8 = false;
        }
        else {
          bVar8 = (pFVar3->CastFlags & pFVar10->Id) != CASTCLASS_None;
        }
LAB_148e66f80:
        if (bVar8) {
          uVar13 = *param_7;
          if (uVar13 != 0xffffffff) {
            *param_7 = uVar13 + 1;
          }
          uVar2 = *param_4;
          piVar1 = &(this->VMRegisterBindings).ArrayMax;
          *param_4 = uVar2 + 1;
          iVar9 = (this->VMRegisterBindings).ArrayNum;
          if (iVar9 == *piVar1) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x408,(ForAnyElementType *)this,piVar1);
          }
          (this->VMRegisterBindings).ArrayNum = iVar9 + 1;
          pFVar4 = (this->VMRegisterBindings).AllocatorInstance.Data;
          *(uint *)(pFVar4 + (longlong)iVar9 * 8) = uVar13;
          *(uint *)(pFVar4 + (longlong)iVar9 * 8 + 4) = uVar2 & 0x3fffffff | 0x80000000;
        }
        else {
          FVar11 = (FName)FBoolProperty::StaticClass();
          if ((FVar11 == (FName)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("FieldType",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                                 ,0x2dd,L""), bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          this_00 = (FName)pFVar7->ClassPrivate;
          FVar6 = this_00;
          if (*(ulonglong *)((longlong)FVar11 + 0x10) == 0) {
            for (; FVar6 != (FName)0x0; FVar6 = *(FName *)((longlong)FVar6 + 0x20)) {
              if (FVar6 == FVar11) {
                bVar8 = true;
                goto LAB_148e67040;
              }
            }
            bVar8 = false;
          }
          else {
            bVar8 = ((ulonglong)*(FName *)((longlong)this_00 + 0x18) &
                    *(ulonglong *)((longlong)FVar11 + 0x10)) != 0;
          }
LAB_148e67040:
          if (bVar8) {
            uVar13 = *param_7;
            if (uVar13 != 0xffffffff) {
              *param_7 = uVar13 + 1;
            }
            uVar2 = *param_4;
            piVar1 = &(this->VMRegisterBindings).ArrayMax;
            *param_4 = uVar2 + 1;
            iVar9 = (this->VMRegisterBindings).ArrayNum;
            if (iVar9 == *piVar1) {
              iVar9 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x408,(ForAnyElementType *)this,piVar1);
            }
            (this->VMRegisterBindings).ArrayNum = iVar9 + 1;
            pFVar4 = (this->VMRegisterBindings).AllocatorInstance.Data;
            *(uint *)(pFVar4 + (longlong)iVar9 * 8) = uVar13;
            *(uint *)(pFVar4 + (longlong)iVar9 * 8 + 4) = uVar2 | 0xc0000000;
          }
          else {
            if ((((((FName *)((longlong)this_00 + 0x18))->ComparisonIndex).Value >> 0x14 & 1) == 0)
               || (pFVar7 == (FField *)0x0)) {
              ::FName::ToString((FName *)this_00,&local_68);
              bVar8 = IsThisNotNull(pFVar7,"FField::GetName");
              if (bVar8) {
                ::FName::ToString(&pFVar7->NamePrivate,&local_78);
              }
              else {
                ::FString::FString(&local_78,L"None");
              }
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("false",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceDataChannelCommon.cpp"
                                 ,0x5d,L"Property(%s) Class(%s) is not a supported type");
              if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_78.Data.AllocatorInstance.Data);
              }
              if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_68.Data.AllocatorInstance.Data);
              }
              if (!bVar8) {
                this->DataSetLayoutHash = 0;
                return;
              }
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pUVar12 = FNiagaraTypeHelper::FindNiagaraFriendlyTopLevelStruct
                                ((UScriptStruct *)pFVar7[2].Owner.Container.Field,Simulation);
            GenVMBindings(this,param_1,(UStruct *)pUVar12,param_3,param_4,param_5,param_6,param_7,
                          param_8);
          }
        }
      }
    }
    local_58.Field = (local_58.Field)->Next;
    TFieldIterator<FProperty>::IterateToNext(&local_58);
    pFVar7 = local_58.Field;
  } while( true );
}

