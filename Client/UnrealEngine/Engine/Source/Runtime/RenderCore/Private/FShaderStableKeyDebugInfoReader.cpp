// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 4

// DumpPSOToLogIfConfigured @ 145e95070

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

void __thiscall
UE::ShaderUtils::FShaderStableKeyDebugInfoReader::DumpPSOToLogIfConfigured
          (FShaderStableKeyDebugInfoReader *this,FGraphicsPipelineStateInitializer *param_1)

{
  FString local_18;
  
  if (4 < (byte)LogInit._0_1_) {
    GetPSOStableNameOptions(this,&local_18,param_1,0x10);
    Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// GetPSOStableNameOptions @ 145e9e630

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

FString * __thiscall
UE::ShaderUtils::FShaderStableKeyDebugInfoReader::GetPSOStableNameOptions
          (FShaderStableKeyDebugInfoReader *this,FString *__return_storage_ptr__,
          FGraphicsPipelineStateInitializer *param_1,int param_2)

{
  FRHIVertexShader *pFVar1;
  FRHIMeshShader *pFVar2;
  FRHIAmplificationShader *pFVar3;
  FRHIPixelShader *pFVar4;
  FRHIGeometryShader *pFVar5;
  int iVar6;
  int iVar7;
  FString local_38;
  FString local_28;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  ::FString::PrintfImpl(&local_38,L"---- begin FGraphicsPipelineStateInitializer -----\n");
  iVar6 = 0;
  iVar7 = local_38.Data.ArrayNum + -1;
  if (local_38.Data.ArrayNum == 0) {
    iVar7 = iVar6;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar7);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  pFVar1 = (param_1->BoundShaderState).VertexShaderRHI;
  if (pFVar1 != (FRHIVertexShader *)0x0) {
    GetShaderStableNameOptions(this,&local_28,(FSHAHash *)&pFVar1->field_0xf0,param_2);
    ::FString::PrintfImpl(&local_38,L"%s: %s");
    iVar7 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar7 = iVar6;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar7);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  pFVar2 = (param_1->BoundShaderState).MeshShaderRHI;
  if (pFVar2 != (FRHIMeshShader *)0x0) {
    GetShaderStableNameOptions(this,&local_28,(FSHAHash *)&pFVar2->field_0xf0,param_2);
    ::FString::PrintfImpl(&local_38,L"%s: %s");
    iVar7 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar7 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar7);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  pFVar3 = (param_1->BoundShaderState).AmplificationShaderRHI;
  if (pFVar3 != (FRHIAmplificationShader *)0x0) {
    GetShaderStableNameOptions(this,&local_28,(FSHAHash *)&pFVar3->field_0xf0,param_2);
    ::FString::PrintfImpl(&local_38,L"%s: %s");
    iVar7 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar7 = iVar6;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar7);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = (param_1->BoundShaderState).PixelShaderRHI;
  if (pFVar4 != (FRHIPixelShader *)0x0) {
    GetShaderStableNameOptions(this,&local_28,(FSHAHash *)&pFVar4->field_0xf0,param_2);
    ::FString::PrintfImpl(&local_38,L"%s: %s");
    iVar7 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar7 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar7);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  pFVar5 = (param_1->BoundShaderState).GeometryShaderRHI;
  if (pFVar5 != (FRHIGeometryShader *)0x0) {
    GetShaderStableNameOptions(this,&local_28,(FSHAHash *)&pFVar5->field_0xf0,param_2);
    ::FString::PrintfImpl(&local_38,L"%s: %s");
    iVar7 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar7 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar7);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  ::FString::PrintfImpl(&local_38,L"----- end -----\n");
  iVar7 = local_38.Data.ArrayNum + -1;
  if (local_38.Data.ArrayNum == 0) {
    iVar7 = iVar6;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar7);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetShaderStableNameOptions @ 145ea0720

FString * __thiscall
UE::ShaderUtils::FShaderStableKeyDebugInfoReader::GetShaderStableNameOptions
          (FShaderStableKeyDebugInfoReader *this,FString *__return_storage_ptr__,FSHAHash *param_1,
          int param_2)

{
  ulonglong uVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FString *pFVar6;
  int iVar7;
  uint uVar8;
  longlong *plVar9;
  TBitArray<FDefaultBitArrayAllocator> *pTVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined1 local_res8 [8];
  int local_res10;
  FString local_108;
  FString local_f8;
  longlong *local_e8;
  int iStack_e0;
  uint uStack_dc;
  TBitArray<FDefaultBitArrayAllocator> *local_d8;
  undefined4 uStack_d0;
  int iStack_cc;
  int local_c8;
  int iStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  longlong *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  FString local_48;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  iVar5 = TSet<TTuple<FSHAHash,TSet<FStableShaderKeyAndValue,DefaultKeyFuncs<FStableShaderKeyAndValue,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FSHAHash,TSet<FStableShaderKeyAndValue,DefaultKeyFuncs<FStableShaderKeyAndValue,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FSHAHash>
                    ((TSet<TTuple<FSHAHash,TSet<FStableShaderKeyAndValue,DefaultKeyFuncs<FStableShaderKeyAndValue,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FSHAHash,TSet<FStableShaderKeyAndValue,DefaultKeyFuncs<FStableShaderKeyAndValue,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                      *)this,*(uint *)param_1->Hash,param_1);
  if (iVar5 != -1) {
    lVar13 = (longlong)iVar5 * 0x70 + *(longlong *)&this->ShaderHashesToSource;
    plVar14 = (longlong *)(lVar13 + 0x18);
    if (lVar13 == 0) {
      plVar14 = (longlong *)0x0;
    }
    if (plVar14 != (longlong *)0x0) {
      local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_108.Data.ArrayNum = 0;
      local_108.Data.ArrayMax = 0;
      BytesToHex(param_1->Hash,0x14,&local_108);
      ::FString::PrintfImpl(&local_b8,L"hash %s maps to %d shaders");
      iVar5 = local_b8.Data.ArrayNum + -1;
      if (local_b8.Data.ArrayNum == 0) {
        iVar5 = 0;
      }
      ::FString::AppendChars
                (__return_storage_ptr__,(wchar_t *)local_b8.Data.AllocatorInstance.Data,iVar5);
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
      if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.Data.AllocatorInstance.Data);
      }
      if (param_2 < (int)plVar14[1] - *(int *)((longlong)plVar14 + 0x34)) {
        ::FString::PrintfImpl(&local_a8,L", limiting output to %d");
        iVar5 = local_a8.Data.ArrayNum + -1;
        if (local_a8.Data.ArrayNum == 0) {
          iVar5 = 0;
        }
        ::FString::AppendChars
                  (__return_storage_ptr__,(wchar_t *)local_a8.Data.AllocatorInstance.Data,iVar5);
        if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        }
      }
      ::FString::AppendChars(__return_storage_ptr__,L":\n",2);
      local_d8 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar14 + 2);
      iStack_c0 = (int)plVar14[1] - *(int *)((longlong)plVar14 + 0x34);
      uStack_dc = 1;
      iVar5 = (int)plVar14[5];
      iVar11 = iStack_c0;
      if (param_2 < iStack_c0) {
        iVar11 = param_2;
      }
      iStack_e0 = 0;
      local_c8 = 0;
      iVar7 = 0;
      iStack_cc = 0;
      if (iVar5 != 0) {
        pTVar10 = (TBitArray<FDefaultBitArrayAllocator> *)plVar14[4];
        if ((TBitArray<FDefaultBitArrayAllocator> *)plVar14[4] ==
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar10 = local_d8;
        }
        uVar8 = *(uint *)(pTVar10->AllocatorInstance).InlineData;
        local_c8 = 0;
        while (uVar8 == 0) {
          lVar13 = (longlong)iStack_e0;
          local_c8 = local_c8 + 0x20;
          iStack_e0 = iStack_e0 + 1;
          if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_e0) {
            iVar7 = (int)plVar14[5];
            iStack_cc = iVar5;
            goto LAB_145ea08f4;
          }
          uVar8 = *(uint *)((pTVar10->AllocatorInstance).InlineData + lVar13 * 4 + 4);
        }
        iVar7 = (int)plVar14[5];
        uStack_dc = -uVar8 & uVar8;
        uVar1 = (ulonglong)uStack_dc * 2 + 1;
        lVar13 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        local_res10 = (int)lVar13;
        iStack_cc = local_c8 + -1 + local_res10;
        if (iVar7 < iStack_cc) {
          iStack_cc = iVar5;
        }
      }
LAB_145ea08f4:
      uVar8 = *(uint *)(plVar14 + 5);
      uStack_d0 = 0xffffffff;
      uVar12 = uVar8 & 0xffffffe0;
      TStack_70._padding_ = CONCAT44(uStack_dc,iStack_e0);
      TStack_70.CurrentBitIndex = iStack_cc;
      TStack_70.UnvisitedBitMask = 0xffffffff;
      TStack_70._28_4_ = iStack_cc;
      TStack_70.BaseBitIndex = local_c8;
      uStack_50 = CONCAT44(uStack_bc,iStack_c0);
      iVar5 = (int)uVar8 >> 5;
      local_e8 = plVar14;
      iStack_c4 = iStack_cc;
      local_78 = plVar14;
      TStack_70.Array = local_d8;
      if ((((int)uVar8 < 0) || (iVar7 < (int)uVar8)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FString *)(*pcVar3)();
        return pFVar6;
      }
      uVar2 = *(uint *)(plVar14 + 5);
      if (uVar8 != uVar2) {
        plVar9 = (longlong *)plVar14[4];
        if ((longlong *)plVar14[4] == (longlong *)0x0) {
          plVar9 = plVar14 + 2;
        }
        uVar8 = -1 << ((byte)uVar8 & 0x1f) & *(uint *)((longlong)plVar9 + (longlong)iVar5 * 4);
        while (uVar8 == 0) {
          lVar13 = (longlong)iVar5;
          uVar12 = uVar12 + 0x20;
          iVar5 = iVar5 + 1;
          uVar8 = uVar2;
          if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar5)
          goto LAB_145ea09f0;
          uVar8 = *(uint *)((longlong)plVar9 + lVar13 * 4 + 4);
        }
        uVar1 = (ulonglong)(-uVar8 & uVar8) * 2 + 1;
        lVar13 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        uVar8 = (int)lVar13 + -1 + uVar12;
        if ((int)uVar2 < (int)uVar8) {
          uVar8 = uVar2;
        }
      }
LAB_145ea09f0:
      while( true ) {
        plVar9 = local_78;
        if ((int)local_78[1] - *(int *)((longlong)local_78 + 0x34) != (int)uStack_50) {
          `TSparseArray<TSparseSetElement<FStableShaderKeyAndValue>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if (((TStack_70.CurrentBitIndex == uVar8) &&
            (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)(plVar14 + 2))) &&
           (plVar9 == plVar14)) break;
        iVar11 = iVar11 + -1;
        if (iVar11 < 0) {
          return __return_storage_ptr__;
        }
        FStableShaderKeyAndValue::ToString
                  ((FStableShaderKeyAndValue *)
                   ((longlong)TStack_70.CurrentBitIndex * 0x110 + *plVar9),&local_48);
        ::FString::PrintfImpl(&local_98,L"\t%s\n");
        iVar5 = local_98.Data.ArrayNum + -1;
        if (local_98.Data.ArrayNum == 0) {
          iVar5 = 0;
        }
        ::FString::AppendChars
                  (__return_storage_ptr__,(wchar_t *)local_98.Data.AllocatorInstance.Data,iVar5);
        if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
      }
      return __return_storage_ptr__;
    }
  }
  local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.Data.ArrayNum = 0;
  local_f8.Data.ArrayMax = 0;
  BytesToHex(param_1->Hash,0x14,&local_f8);
  ::FString::PrintfImpl
            (&local_88,
             L"hash %s not in the key file(s)! (were key file(s) produced in the same cook as this build?)\n"
            );
  iVar5 = local_88.Data.ArrayNum + -1;
  if (local_88.Data.ArrayNum == 0) {
    iVar5 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_88.Data.AllocatorInstance.Data,iVar5);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// Initialize @ 145ea39d0

bool __thiscall
UE::ShaderUtils::FShaderStableKeyDebugInfoReader::Initialize
          (FShaderStableKeyDebugInfoReader *this,FString *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  bool bVar3;
  TSet<FStableShaderKeyAndValue,DefaultKeyFuncs<FStableShaderKeyAndValue,0>,FDefaultSetAllocator>
  *this_00;
  FStableShaderKeyAndValue *pFVar4;
  bool bVar5;
  ForAnyElementType FVar6;
  undefined1 local_res10 [24];
  TArray<FStableShaderKeyAndValue,TSizedDefaultAllocator<32>_> local_38;
  TStringView<wchar_t> local_28;
  
  local_28.DataPtr = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  bVar5 = false;
  iVar2 = (param_1->Data).ArrayNum;
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  local_28.Size = iVar2 + -1;
  if (iVar2 == 0) {
    local_28.Size = 0;
  }
  bVar3 = PipelineCacheUtilities::LoadStableKeysFile(&local_28,&local_38);
  if (bVar3) {
    bVar5 = 1 < *(int *)&(this->ShaderHashesToSource).field_0x48;
    if (!bVar5) {
      TSet<TTuple<FSHAHash,TSet<FStableShaderKeyAndValue,DefaultKeyFuncs<FStableShaderKeyAndValue,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FSHAHash,TSet<FStableShaderKeyAndValue,DefaultKeyFuncs<FStableShaderKeyAndValue,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<FSHAHash,TSet<FStableShaderKeyAndValue,DefaultKeyFuncs<FStableShaderKeyAndValue,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FSHAHash,TSet<FStableShaderKeyAndValue,DefaultKeyFuncs<FStableShaderKeyAndValue,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                        *)this);
    }
    TSparseArray<TSparseSetElement<TTuple<FSHAHash,TSet<FStableShaderKeyAndValue,DefaultKeyFuncs<FStableShaderKeyAndValue,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FSHAHash,TSet<FStableShaderKeyAndValue,DefaultKeyFuncs<FStableShaderKeyAndValue,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)this,0,*(int *)&(this->ShaderHashesToSource).field_0x8);
    puVar1 = &(this->ShaderHashesToSource).field_0xc;
    *(undefined4 *)&(this->ShaderHashesToSource).field_0x8 = 0;
    if (*(int *)puVar1 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x70,8,0,(ForAnyElementType *)this,0,(int *)puVar1);
    }
    *(undefined4 *)&(this->ShaderHashesToSource).field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->ShaderHashesToSource).field_0x34 = 0;
    iVar2 = *(int *)&(this->ShaderHashesToSource).field_0x2c;
    *(undefined4 *)&(this->ShaderHashesToSource).field_0x28 = 0;
    if ((iVar2 < 0) || (0x80 < iVar2)) {
      *(undefined4 *)&(this->ShaderHashesToSource).field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&(this->ShaderHashesToSource).field_0x10,0)
      ;
    }
    if (bVar5) {
      *(undefined4 *)&(this->ShaderHashesToSource).field_0x48 = 1;
      TSet<TTuple<FSHAHash,TSet<FStableShaderKeyAndValue,DefaultKeyFuncs<FStableShaderKeyAndValue,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FSHAHash,TSet<FStableShaderKeyAndValue,DefaultKeyFuncs<FStableShaderKeyAndValue,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<FSHAHash,TSet<FStableShaderKeyAndValue,DefaultKeyFuncs<FStableShaderKeyAndValue,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FSHAHash,TSet<FStableShaderKeyAndValue,DefaultKeyFuncs<FStableShaderKeyAndValue,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
                *)this);
    }
    iVar2 = local_38.ArrayNum;
    pFVar4 = (FStableShaderKeyAndValue *)
             (local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 0x108);
    FVar6.Data = local_38.AllocatorInstance.Data;
    while( true ) {
      if (local_38.ArrayNum != iVar2) {
        `TCheckedPointerIterator<FStableShaderKeyAndValue,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if ((FStableShaderKeyAndValue *)FVar6.Data == pFVar4) break;
      this_00 = TMapBase<FSHAHash,TSet<FStableShaderKeyAndValue,DefaultKeyFuncs<FStableShaderKeyAndValue,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSHAHash,TSet<FStableShaderKeyAndValue,DefaultKeyFuncs<FStableShaderKeyAndValue,0>,FDefaultSetAllocator>,0>_>
                ::FindOrAddImpl<FSHAHash_const_&>
                          ((TMapBase<FSHAHash,TSet<FStableShaderKeyAndValue,DefaultKeyFuncs<FStableShaderKeyAndValue,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSHAHash,TSet<FStableShaderKeyAndValue,DefaultKeyFuncs<FStableShaderKeyAndValue,0>,FDefaultSetAllocator>,0>_>
                            *)this,*(uint *)(((FStableShaderKeyAndValue *)FVar6.Data)->OutputHash).
                                            Hash,
                           &((FStableShaderKeyAndValue *)FVar6.Data)->OutputHash);
      TSet<FStableShaderKeyAndValue,DefaultKeyFuncs<FStableShaderKeyAndValue,0>,FDefaultSetAllocator>
      ::Emplace<FStableShaderKeyAndValue_const_&>
                (this_00,(FStableShaderKeyAndValue *)(local_res10 + 8),(bool *)FVar6.Data);
      FVar6.Data = FVar6.Data + 0x108;
    }
    bVar5 = true;
  }
  DestructItems<FStableShaderKeyAndValue,int>
            ((FStableShaderKeyAndValue *)local_38.AllocatorInstance.Data,local_38.ArrayNum);
  if ((FStableShaderKeyAndValue *)local_38.AllocatorInstance.Data != (FStableShaderKeyAndValue *)0x0
     ) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return bVar5;
}

