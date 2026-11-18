// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 1

// Bind @ 145e8f8a0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FShaderParameterStructBindingContext::Bind
          (FShaderParameterStructBindingContext *this,FShaderParametersMetadata *param_1,
          wchar_t *param_2,uint param_3)

{
  int *piVar1;
  FScriptContainerElement FVar2;
  FShaderParametersMetadata *pFVar3;
  FShaderParameterBindings *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  uint uVar12;
  undefined4 uVar13;
  ForAnyElementType FVar14;
  ForAnyElementType FVar15;
  byte bVar16;
  int iVar17;
  ulonglong uVar18;
  TArray<FShaderParameterBindings::FResourceParameter,TMemoryImageAllocator<0>_> *pTVar19;
  TArray<FShaderParameterBindings::FBindlessResourceParameter,TMemoryImageAllocator<0>_> *pTVar20;
  ForAnyElementType *pFVar21;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  *this_00;
  bool bVar22;
  uint uVar23;
  FScriptContainerElement *pFVar24;
  int iVar25;
  FString *pFVar26;
  ForAnyElementType FVar27;
  ForAnyElementType FVar28;
  ushort uVar29;
  FScriptContainerElement *pFVar30;
  FScriptContainerElement *pFVar31;
  TOptional<FParameterAllocation> local_150;
  undefined4 local_140;
  undefined1 local_13c [4];
  undefined4 local_138;
  FScriptContainerElement *local_130;
  FString local_128;
  undefined4 local_118;
  undefined2 local_114;
  uint local_110;
  FString local_108;
  ushort local_f8;
  ushort local_f0;
  ushort uStack_ee;
  ushort uStack_ec;
  ushort uStack_ea;
  FScriptContainerElement *local_e8;
  FString local_e0;
  uint local_d0;
  uint local_cc;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  *local_c8;
  uint local_c0;
  FString local_b8;
  undefined1 local_a8 [16];
  int local_98;
  FString local_90;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FString *local_68;
  FString *local_60;
  TStringView<wchar_t> local_58;
  
  pFVar30 = (param_1->Members).AllocatorInstance.Data;
  local_c0 = (param_1->Members).ArrayNum;
  uVar18 = (ulonglong)(int)local_c0;
  pFVar24 = pFVar30 + uVar18 * 0x30;
  local_130 = pFVar24;
  do {
    while( true ) {
      while( true ) {
        local_e8 = pFVar30;
        if ((param_1->Members).ArrayNum != (int)uVar18) {
          local_13c[0] = 0;
          `TCheckedPointerIterator<FShaderParametersMetadata::FMember_const_,int,0>::operator!='::
          __l2::<lambda_1>::operator()(local_13c);
        }
        if (pFVar30 == pFVar24) {
          return;
        }
        FVar2 = pFVar30[0x18];
        ::FString::PrintfImpl(&local_108,L"%s::%s");
        if (FVar2 != (FScriptContainerElement)0x17) break;
        if (1 < (this->RenderTargetBindingSlotCppName).Data.ArrayNum) {
          UE::Logging::Private::BasicFatalLog
                    (&`public:_void___cdecl_FShaderParameterStructBindingContext::Bind(FShaderParametersMetadata_const&___ptr64,wchar_t_const*___ptr64,unsigned_int)___ptr64'
                      ::__l13::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        iVar25 = local_108.Data.ArrayNum + -1;
        if (local_108.Data.ArrayNum == 0) {
          iVar25 = 0;
        }
        ::FString::AssignRange
                  (&this->RenderTargetBindingSlotCppName,
                   (wchar_t *)local_108.Data.AllocatorInstance.Data,iVar25);
        if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_108.Data.AllocatorInstance.Data);
        }
        pFVar30 = pFVar30 + 0x30;
        uVar18 = (ulonglong)local_c0;
      }
      if (((byte)((char)FVar2 - 10U) < 2) || ((byte)((char)FVar2 - 0xfU) < 2)) break;
      ::FString::PrintfImpl(&local_e0,L"%s%s");
      uVar29 = (short)param_3 + *(short *)(pFVar30 + 0x14);
      local_f8 = uVar29;
      if (((uint)uVar29 != param_3 + *(int *)(pFVar30 + 0x14)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("uint32(ByteOffset) == GeneralByteOffset + Member.GetOffset()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterStruct.cpp"
                             ,0x51,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar31 = local_e8;
      uVar23 = *(uint *)(pFVar30 + 0x24);
      bVar9 = (byte)((char)FVar2 - 5U) < 4;
      if (((byte)FVar2 < 0x14) && ((0xe7200U >> ((byte)FVar2 & 0x1f) & 1) != 0)) {
        bVar22 = true;
      }
      else {
        bVar22 = false;
      }
      if ((pFVar30[0x18] == (FScriptContainerElement)0x2) || ((byte)((char)pFVar30[0x18] - 3U) < 2))
      {
        bVar6 = true;
      }
      else {
        bVar6 = false;
      }
      local_d0 = uVar23;
      if (FVar2 == (FScriptContainerElement)0x1) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("BaseType != UBMT_BOOL",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterStruct.cpp"
                            ,0x60,
                            L"Should have failed in FShaderParametersMetadata::InitializeLayout()");
        if (bVar10) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
LAB_145e8fc3c:
        if ((this->bUseRootShaderParameters == false) || (!bVar6)) {
LAB_145e8fcb4:
          if ((uVar23 == 0) || ((!bVar9 && (!bVar22)))) {
            bVar10 = false;
            local_cc = 1;
          }
          else {
            bVar10 = true;
            local_cc = uVar23;
          }
          this_00 = (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                     *)&this->ShaderGlobalScopeBindings;
          local_110 = 0;
          local_c8 = this_00;
          do {
            uVar23 = local_110;
            local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_128.Data.ArrayNum = 0;
            local_128.Data.ArrayMax = 0;
            if (bVar10) {
              ::FString::PrintfImpl(&local_b8,L"%s_%d");
              if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_128.Data.AllocatorInstance.Data);
              }
              uVar7 = local_b8.Data._8_8_;
              iVar25 = local_b8.Data.ArrayNum;
              local_128.Data.AllocatorInstance.Data = local_b8.Data.AllocatorInstance.Data;
              local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_b8.Data.ArrayNum = 0;
              local_b8.Data.ArrayMax = 0;
              uVar8 = local_b8.Data._8_8_;
              local_b8.Data.ArrayNum = (int)uVar7;
              local_b8.Data.ArrayMax = SUB84(uVar7,4);
              local_128.Data.ArrayNum = local_b8.Data.ArrayNum;
              local_128.Data.ArrayMax = local_b8.Data.ArrayMax;
              local_b8.Data._8_8_ = uVar8;
            }
            else {
              iVar25 = local_e0.Data.ArrayNum + -1;
              if (local_e0.Data.ArrayNum == 0) {
                iVar25 = 0;
              }
              ::FString::AssignRange
                        (&local_128,(wchar_t *)local_e0.Data.AllocatorInstance.Data,iVar25);
              iVar25 = local_128.Data.ArrayNum;
            }
            iVar17 = iVar25 + -1;
            FVar27.Data = local_128.Data.AllocatorInstance.Data;
            if (iVar25 == 0) {
              iVar17 = 0;
              FVar27.Data = (FScriptContainerElement *)L"";
            }
            uVar12 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar17,(wchar_t *)FVar27.Data);
            iVar25 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                     ::FindIndexByHash<FString>(this_00,uVar12,&local_128);
            if (iVar25 != -1) {
              iVar25 = local_e0.Data.ArrayNum + -1;
              FVar27.Data = local_e0.Data.AllocatorInstance.Data;
              if (local_e0.Data.ArrayNum == 0) {
                iVar25 = 0;
                FVar27.Data = (FScriptContainerElement *)L"";
              }
              uVar12 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar25,(wchar_t *)FVar27.Data);
              TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              ::FindIndexByHash<FString>(this_00,uVar12,&local_e0);
              UE::Logging::Private::BasicFatalLog
                        (&`public:_void___cdecl_FShaderParameterStructBindingContext::Bind(FShaderParametersMetadata_const&___ptr64,wchar_t_const*___ptr64,unsigned_int)___ptr64'
                          ::__l102::LOG_Static,(FLogCategoryBase *)&LogShaders);
            }
            local_78 = local_128.Data.AllocatorInstance.Data;
            iStack_70 = local_128.Data.ArrayNum + -1;
            if (local_128.Data.ArrayNum == 0) {
              iStack_70 = 0;
            }
            local_58._12_4_ = uStack_6c;
            local_58.Size = iStack_70;
            local_58.DataPtr = (wchar_t *)local_128.Data.AllocatorInstance.Data;
            FShaderParameterMap::FindParameterAllocation(this->ParametersMap,&local_150,&local_58);
            if (local_150.bIsSet == false) {
              if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_128.Data.AllocatorInstance.Data);
              }
            }
            else {
              local_68 = &local_128;
              local_60 = &local_108;
              TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              ::Emplace<TPairInitializer<FString_const_&,FString_const_&>_>
                        (this_00,(TPairInitializer<FString_const_&,FString_const_&> *)local_a8,
                         (bool *)&local_68);
              if (bVar6) {
                if ((uVar23 != 0) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("ArrayElementId == 0",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterStruct.cpp"
                                        ,0xae,
                                        L"The entire array should be bound instead for RHI parameter submission performance."
                                       ), bVar11)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                if (((pFVar30[0x18] != (FScriptContainerElement)0x2) &&
                    (1 < (byte)((char)pFVar30[0x18] - 3U))) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsVariableNativeType()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                                        ,0xf8,L""), bVar11)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                uVar12 = *(int *)(pFVar30 + 0x20) * *(int *)(local_e8 + 0x1c) * 4;
                if (*(int *)(local_e8 + 0x24) != 0) {
                  uVar12 = (uVar12 + 0xf & 0xfffffff0) * *(int *)(local_e8 + 0x24);
                }
                if ((local_150.bIsSet == false) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsSet()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                        ,0x1bd,
                                        L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                       ), bVar11)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                local_f0 = local_150.TypedValue.BufferIndex;
                if ((local_150.bIsSet == false) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsSet()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                        ,0x1bd,
                                        L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                       ), bVar11)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                uStack_ee = local_150.TypedValue.BaseIndex;
                uStack_ec = uVar29;
                if ((local_150.bIsSet == false) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsSet()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                        ,0x1bd,
                                        L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                       ), bVar11)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                uStack_ea = local_150.TypedValue.Size;
                if ((local_150.bIsSet == false) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsSet()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                        ,0x1bd,
                                        L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                       ), bVar11)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                if (uVar12 < local_150.TypedValue.Size) {
                  if ((local_150.bIsSet == false) &&
                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsSet()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                          ,0x1bd,
                                          L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                         ), bVar11)) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  if (((*(byte *)&(this->Shader->Type).field0_0x0 & 1) != 0) &&
                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                         ("!IsFrozen()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\MemoryImage.h"
                                          ,0x46c,L""), bVar11)) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  UE::Logging::Private::BasicFatalLog
                            ((FStaticBasicLogRecord *)
                             &`public:_void___cdecl_FShaderParameterStructBindingContext::Bind(FShaderParametersMetadata_const&___ptr64,wchar_t_const*___ptr64,unsigned_int)___ptr64'
                              ::K::LOG_Static,(FLogCategoryBase *)&LogShaders);
                  uVar23 = local_110;
                  uVar29 = local_f8;
                }
                pFVar4 = this->Bindings;
                FVar14 = (pFVar4->Parameters).AllocatorInstance;
                FVar15 = (ForAnyElementType)
                         ((longlong)&(pFVar4->Parameters).AllocatorInstance.field_0x0 +
                         ((longlong)FVar14 >> 0x18));
                if (((ulonglong)FVar14 & 1) == 0) {
                  FVar15 = FVar14;
                }
                if ((ulonglong)FVar15 <= &local_f0) {
                  if (((ulonglong)FVar14 & 1) != 0) {
                    FVar14 = (ForAnyElementType)
                             ((longlong)&(pFVar4->Parameters).AllocatorInstance.field_0x0 +
                             ((longlong)FVar14 >> 0x18));
                  }
                  if ((&local_f0 <
                       (ushort *)((longlong)FVar14 + (longlong)(pFVar4->Parameters).ArrayMax * 8))
                     && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x7a5,
                                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                            ), bVar11)) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                }
                iVar25 = (pFVar4->Parameters).ArrayNum;
                piVar1 = &(pFVar4->Parameters).ArrayMax;
                if (iVar25 == *piVar1) {
                  iVar25 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<1,TMemoryImageAllocator<0>::ForAnyElementType>
                                     (0x208,(ForAnyElementType *)pFVar4,piVar1);
                }
                (pFVar4->Parameters).ArrayNum = iVar25 + 1;
                FVar14 = (pFVar4->Parameters).AllocatorInstance;
                if (((ulonglong)FVar14 & 1) != 0) {
                  FVar14 = (ForAnyElementType)
                           ((longlong)&(pFVar4->Parameters).AllocatorInstance.field_0x0 +
                           ((longlong)FVar14 >> 0x18));
                }
                *(ulonglong *)((longlong)FVar14 + (longlong)iVar25 * 8) =
                     CONCAT26(uStack_ea,CONCAT24(uStack_ec,CONCAT22(uStack_ee,local_f0)));
                this_00 = local_c8;
              }
              else if ((FVar2 == (FScriptContainerElement)0x16) ||
                      (FVar2 == (FScriptContainerElement)0x13)) {
                if ((local_d0 != 0) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("!bIsArray",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterStruct.cpp"
                                        ,0xc2,L""), bVar11)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                if ((local_150.bIsSet == false) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsSet()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                        ,0x1bd,
                                        L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                       ), bVar11)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                pFVar4 = this->Bindings;
                local_140 = CONCAT22(uVar29,local_150.TypedValue.BufferIndex);
                if (FVar2 == (FScriptContainerElement)0x16) {
                  FVar14 = (pFVar4->ParameterReferences).AllocatorInstance;
                  pFVar21 = &(pFVar4->ParameterReferences).AllocatorInstance;
                  bVar16 = FVar14._0_1_;
                  FVar15 = (ForAnyElementType)
                           ((longlong)
                            &(((TArray<FShaderParameterBindings::FParameterStructReference,TMemoryImageAllocator<0>_>
                                *)pFVar21)->AllocatorInstance).field_0x0 +
                           ((longlong)FVar14 >> 0x18));
                  if (((ulonglong)FVar14 & 1) == 0) {
                    FVar15 = FVar14;
                  }
                  FVar28 = (ForAnyElementType)
                           ((longlong)
                            &(((TArray<FShaderParameterBindings::FParameterStructReference,TMemoryImageAllocator<0>_>
                                *)pFVar21)->AllocatorInstance).field_0x0 +
                           ((longlong)FVar14 >> 0x18));
                }
                else {
                  FVar14 = (pFVar4->GraphUniformBuffers).AllocatorInstance;
                  pFVar21 = &(pFVar4->GraphUniformBuffers).AllocatorInstance;
                  bVar16 = FVar14._0_1_;
                  FVar15 = (ForAnyElementType)
                           ((longlong)
                            &(((TArray<FShaderParameterBindings::FParameterStructReference,TMemoryImageAllocator<0>_>
                                *)pFVar21)->AllocatorInstance).field_0x0 +
                           ((longlong)FVar14 >> 0x18));
                  if (((ulonglong)FVar14 & 1) == 0) {
                    FVar15 = FVar14;
                  }
                  FVar28 = (ForAnyElementType)
                           ((longlong)
                            &(((TArray<FShaderParameterBindings::FParameterStructReference,TMemoryImageAllocator<0>_>
                                *)pFVar21)->AllocatorInstance).field_0x0 +
                           ((longlong)FVar14 >> 0x18));
                }
                if ((ulonglong)FVar15 <= &local_140) {
                  if ((bVar16 & 1) != 0) {
                    FVar14 = FVar28;
                  }
                  if ((&local_140 <
                       (undefined4 *)
                       ((longlong)FVar14 + (longlong)*(int *)&pFVar21[1].field_0x4 * 4)) &&
                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar11)) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                }
                iVar25 = *(int *)(pFVar21 + 1);
                if (iVar25 == *(int *)&pFVar21[1].field_0x4) {
                  iVar25 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<1,TMemoryImageAllocator<0>::ForAnyElementType>
                                     (0x204,pFVar21,(int *)&pFVar21[1].field_0x4);
                }
                *(int *)(pFVar21 + 1) = iVar25 + 1;
                FVar14 = *pFVar21;
                uVar13 = local_140;
                if (((ulonglong)FVar14 & 1) != 0) {
                  FVar14 = (ForAnyElementType)
                           ((longlong)&pFVar21->field_0x0 + ((longlong)FVar14 >> 0x18));
                }
LAB_145e907ad:
                *(undefined4 *)((longlong)FVar14 + (longlong)iVar25 * 4) = uVar13;
                this_00 = local_c8;
              }
              else if ((bVar9) || (bVar22)) {
                if ((local_150.bIsSet == false) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsSet()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                        ,0x1bd,
                                        L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                       ), bVar11)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                if (2 < (byte)(local_150.TypedValue.Type - BindlessSampler)) {
                  if ((local_150.bIsSet == false) &&
                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsSet()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                          ,0x1bd,
                                          L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                         ), bVar11)) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  if ((0xff < local_150.TypedValue.BaseIndex) &&
                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                         ("ParameterAllocation->BaseIndex < 256",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterStruct.cpp"
                                          ,0xdd,
                                          L"BaseIndex does not fit into uint8. Change FResourceParameter::BaseIndex type to uint16"
                                         ), bVar11)) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  if ((local_150.bIsSet == false) &&
                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsSet()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                          ,0x1bd,
                                          L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                         ), bVar11)) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  local_138 = CONCAT22(CONCAT11(FVar2,(undefined1)local_150.TypedValue.BaseIndex),
                                       (short)uVar23 * 8 + uVar29);
                  if ((local_150.bIsSet == false) &&
                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsSet()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                          ,0x1bd,
                                          L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                         ), bVar11)) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  if (local_150.TypedValue.Size != 1) {
                    if ((local_150.bIsSet == false) &&
                       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                           ("IsSet()",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                            ,0x1bd,
                                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                           ), bVar11)) {
                      pcVar5 = (code *)swi(3);
                      (*pcVar5)();
                      return;
                    }
                    if (((*(byte *)&(this->Shader->Type).field0_0x0 & 1) != 0) &&
                       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                           ("!IsFrozen()",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\MemoryImage.h"
                                            ,0x46c,L""), bVar11)) {
                      pcVar5 = (code *)swi(3);
                      (*pcVar5)();
                      return;
                    }
                    UE::Logging::Private::BasicFatalLog
                              (&`public:_void___cdecl_FShaderParameterStructBindingContext::Bind(FShaderParametersMetadata_const&___ptr64,wchar_t_const*___ptr64,unsigned_int)___ptr64'
                                ::__l193::LOG_Static,(FLogCategoryBase *)&LogShaders);
                    uVar23 = local_110;
                  }
                  pFVar4 = this->Bindings;
                  pTVar19 = &pFVar4->ResourceParameters;
                  FVar14 = pTVar19->AllocatorInstance;
                  FVar15 = (ForAnyElementType)
                           ((longlong)&(pTVar19->AllocatorInstance).field_0x0 +
                           ((longlong)FVar14 >> 0x18));
                  if (((ulonglong)FVar14 & 1) == 0) {
                    FVar15 = FVar14;
                  }
                  if ((ulonglong)FVar15 <= &local_138) {
                    if (((ulonglong)FVar14 & 1) != 0) {
                      FVar14 = (ForAnyElementType)
                               ((longlong)&(pTVar19->AllocatorInstance).field_0x0 +
                               ((longlong)FVar14 >> 0x18));
                    }
                    if ((&local_138 <
                         (undefined4 *)
                         ((longlong)FVar14 + (longlong)(pFVar4->ResourceParameters).ArrayMax * 4))
                       && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                               ,0x7a5,
                                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                              ), bVar11)) {
                      pcVar5 = (code *)swi(3);
                      (*pcVar5)();
                      return;
                    }
                  }
                  iVar25 = (pFVar4->ResourceParameters).ArrayNum;
                  piVar1 = &(pFVar4->ResourceParameters).ArrayMax;
                  if (iVar25 == *piVar1) {
                    iVar25 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<1,TMemoryImageAllocator<0>::ForAnyElementType>
                                       (0x204,&pTVar19->AllocatorInstance,piVar1);
                  }
                  (pFVar4->ResourceParameters).ArrayNum = iVar25 + 1;
                  FVar14 = pTVar19->AllocatorInstance;
                  uVar13 = local_138;
                  if (((ulonglong)FVar14 & 1) != 0) {
                    FVar14 = (ForAnyElementType)
                             ((longlong)&(pTVar19->AllocatorInstance).field_0x0 +
                             ((longlong)FVar14 >> 0x18));
                  }
                  goto LAB_145e907ad;
                }
                if ((local_150.bIsSet == false) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsSet()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                        ,0x1bd,
                                        L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                       ), bVar11)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                pFVar4 = this->Bindings;
                pTVar20 = &pFVar4->BindlessResourceParameters;
                local_114 = CONCAT11(local_114._1_1_,FVar2);
                local_118 = CONCAT22(local_150.TypedValue.BaseIndex,(short)uVar23 * 8 + uVar29);
                FVar14 = pTVar20->AllocatorInstance;
                FVar15 = (ForAnyElementType)
                         ((longlong)&(pTVar20->AllocatorInstance).field_0x0 +
                         ((longlong)FVar14 >> 0x18));
                if (((ulonglong)FVar14 & 1) == 0) {
                  FVar15 = FVar14;
                }
                if ((ulonglong)FVar15 <= &local_118) {
                  if (((ulonglong)FVar14 & 1) != 0) {
                    FVar14 = (ForAnyElementType)
                             ((longlong)&(pTVar20->AllocatorInstance).field_0x0 +
                             ((longlong)FVar14 >> 0x18));
                  }
                  if ((&local_118 <
                       (undefined4 *)
                       ((longlong)FVar14 +
                       (longlong)(pFVar4->BindlessResourceParameters).ArrayMax * 6)) &&
                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar11)) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                }
                iVar25 = (pFVar4->BindlessResourceParameters).ArrayNum;
                piVar1 = &(pFVar4->BindlessResourceParameters).ArrayMax;
                if (iVar25 == *piVar1) {
                  iVar25 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<1,TMemoryImageAllocator<0>::ForAnyElementType>
                                     (0x206,&pTVar20->AllocatorInstance,piVar1);
                }
                (pFVar4->BindlessResourceParameters).ArrayNum = iVar25 + 1;
                FVar14 = pTVar20->AllocatorInstance;
                if (((ulonglong)FVar14 & 1) != 0) {
                  FVar14 = (ForAnyElementType)
                           ((longlong)&(pTVar20->AllocatorInstance).field_0x0 +
                           ((longlong)FVar14 >> 0x18));
                }
                *(undefined4 *)((longlong)FVar14 + (longlong)iVar25 * 6) = local_118;
                *(undefined2 *)((undefined1 *)((longlong)FVar14 + 4) + (longlong)iVar25 * 6) =
                     local_114;
                this_00 = local_c8;
              }
              else {
                bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterStruct.cpp"
                                    ,0xf3,
                                    L"Unexpected base type for a shader parameter struct member.");
                if (bVar11) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
              }
              pFVar30 = local_e8;
              if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_128.Data.AllocatorInstance.Data);
                pFVar30 = local_e8;
              }
            }
            local_110 = uVar23 + 1;
          } while (local_110 < local_cc);
        }
        if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e0.Data.AllocatorInstance.Data);
        }
        pFVar24 = local_130;
        pFVar31 = pFVar30;
        if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_108.Data.AllocatorInstance.Data);
          pFVar24 = local_130;
        }
      }
      else {
        if (FVar2 == (FScriptContainerElement)0x15) {
          if ((uVar23 != 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("!bIsArray",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterStruct.cpp"
                                 ,100,L"Array of included structure is impossible."), bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          Bind(this,*(FShaderParametersMetadata **)(pFVar30 + 0x28),param_2,(uint)uVar29);
        }
        else {
          if (FVar2 != (FScriptContainerElement)0x14) {
            if ((FVar2 != (FScriptContainerElement)0x16) && (FVar2 != (FScriptContainerElement)0x13)
               ) goto LAB_145e8fc3c;
            if ((uVar23 != 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("!bIsArray",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterStruct.cpp"
                                    ,0x84,
                                    L"Array of referenced structure is not supported, because the structure is globally uniquely named."
                                   ), bVar10)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            ::FString::operator=(&local_e0,*(wchar_t **)(*(longlong *)(pFVar30 + 0x28) + 0x18));
            goto LAB_145e8fcb4;
          }
          if (uVar23 != 0) {
            pFVar3 = *(FShaderParametersMetadata **)(pFVar30 + 0x28);
            uVar12 = 0;
            iVar25 = 0;
            uVar23 = pFVar3->Size;
            do {
              ::FString::PrintfImpl((FString *)(local_a8 + 8),L"%s%s_%d_");
              pFVar26 = (FString *)L"";
              if (local_98 != 0) {
                pFVar26 = (FString *)local_a8._8_8_;
              }
              Bind(this,pFVar3,(wchar_t *)pFVar26,iVar25 + (uint)uVar29);
              if ((FString *)local_a8._8_8_ != (FString *)0x0) {
                FMemory::Free((void *)local_a8._8_8_);
              }
              uVar12 = uVar12 + 1;
              iVar25 = iVar25 + uVar23;
            } while (uVar12 < local_d0);
            if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_e0.Data.AllocatorInstance.Data);
            }
            pFVar24 = local_130;
            if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_108.Data.AllocatorInstance.Data);
              pFVar24 = local_130;
            }
            goto LAB_145e8fbca;
          }
          ::FString::PrintfImpl(&local_90,L"%s%s_");
          FVar27.Data = (FScriptContainerElement *)L"";
          if (local_90.Data.ArrayNum != 0) {
            FVar27.Data = local_90.Data.AllocatorInstance.Data;
          }
          Bind(this,*(FShaderParametersMetadata **)(pFVar30 + 0x28),(wchar_t *)FVar27.Data,
               (uint)uVar29);
          if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_90.Data.AllocatorInstance.Data);
          }
        }
        if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e0.Data.AllocatorInstance.Data);
        }
        pFVar24 = local_130;
        pFVar31 = pFVar30;
        if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_108.Data.AllocatorInstance.Data);
          pFVar24 = local_130;
        }
      }
LAB_145e8fbca:
      pFVar30 = pFVar31 + 0x30;
      uVar18 = (ulonglong)local_c0;
    }
    pFVar31 = pFVar30;
    if (local_108.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) goto LAB_145e8fbca;
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
    pFVar30 = pFVar30 + 0x30;
    uVar18 = (ulonglong)local_c0;
  } while( true );
}

