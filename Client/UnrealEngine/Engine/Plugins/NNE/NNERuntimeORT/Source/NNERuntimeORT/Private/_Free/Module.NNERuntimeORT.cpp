// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NNERuntimeORT
// Functions: 200

// `dynamic_initializer_for_'CVarNNERuntimeORTEnableProfiling'' @ 141449650

void __cdecl _dynamic_initializer_for__CVarNNERuntimeORTEnableProfiling__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = false;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarNNERuntimeORTEnableProfiling,L"nne.ort.enableprofiling",local_res8,
             L"True if NNERuntimeORT plugin should create ORT sessions with profiling enabled.\nWhen profiling is enabled ORT will create standard performance tracing json files next to the editor executable.\nThe files will be prefixed by \'NNERuntimeORTProfile_\' and can be loaded for example using chrome://tracing.\nMore information can be found at https://onnxruntime.ai/docs/performance/tune-performance/profiling-tools.html\n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarNNERuntimeORTEnableProfiling__);
  return;
}

// `dynamic_initializer_for_'GPUStat_FNNERuntimeORTDmlRDG'' @ 1414496a0

void __cdecl _dynamic_initializer_for__GPUStat_FNNERuntimeORTDmlRDG__(void)

{
  atexit(_dynamic_atexit_destructor_for__GPUStat_FNNERuntimeORTDmlRDG__);
  return;
}

// `dynamic_initializer_for_'LogNNEOnnxruntime'' @ 1414496c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogNNEOnnxruntime__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogNNEOnnxruntime,L"LogNNEOnnxruntime",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogNNEOnnxruntime__);
  return;
}

// `dynamic_initializer_for_'LogNNERuntimeORT'' @ 141449700

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogNNERuntimeORT__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogNNERuntimeORT,L"LogNNERuntimeORT",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogNNERuntimeORT__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantNNERuntimeORT'' @ 141449740

void __cdecl _dynamic_initializer_for__ModuleRegistrantNNERuntimeORT__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "NNERuntimeORT";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"NNERuntimeORT",0xd);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FNNERuntimeORTModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'OnnxExternalDataBytesKey'' @ 141449790

void __cdecl
UE::NNERuntimeORT::Private::Details::_dynamic_initializer_for__OnnxExternalDataBytesKey__(void)

{
  ::FString::FString(&OnnxExternalDataBytesKey,L"OnnxExternalDataBytes");
  atexit(_dynamic_atexit_destructor_for__OnnxExternalDataBytesKey__);
  return;
}

// `dynamic_initializer_for_'OnnxExternalDataDescriptorKey'' @ 1414497c0

void __cdecl
UE::NNERuntimeORT::Private::Details::_dynamic_initializer_for__OnnxExternalDataDescriptorKey__(void)

{
  ::FString::FString(&OnnxExternalDataDescriptorKey,L"OnnxExternalDataDescriptor");
  atexit(_dynamic_atexit_destructor_for__OnnxExternalDataDescriptorKey__);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_NNE_NNERuntimeORT_Source_NNERuntimeORT_Private_NNERuntimeORTSettings_h__Script_NNERuntimeORT_513873623'' @ 1414497f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_NNE_NNERuntimeORT_Source_NNERuntimeORT_Private_NNERuntimeORTSettings_h__Script_NNERuntimeORT_513873623__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/NNERuntimeORT",
             Z_CompiledInDeferFile_FID_Engine_Plugins_NNE_NNERuntimeORT_Source_NNERuntimeORT_Private_NNERuntimeORTSettings_h__Script_NNERuntimeORT_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_NNE_NNERuntimeORT_Source_NNERuntimeORT_Private_NNERuntimeORTSettings_h__Script_NNERuntimeORT_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_NNE_NNERuntimeORT_Source_NNERuntimeORT_Private_NNERuntimeORTSettings_h__Script_NNERuntimeORT_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_NNE_NNERuntimeORT_Source_NNERuntimeORT_Private_NNERuntimeORT_h__Script_NNERuntimeORT_28951812'' @ 141449840

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_NNE_NNERuntimeORT_Source_NNERuntimeORT_Private_NNERuntimeORT_h__Script_NNERuntimeORT_28951812__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/NNERuntimeORT",
             Z_CompiledInDeferFile_FID_Engine_Plugins_NNE_NNERuntimeORT_Source_NNERuntimeORT_Private_NNERuntimeORT_h__Script_NNERuntimeORT_Statics
             ::ClassInfo,9,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_NNERuntimeORT'' @ 141449880

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_NNERuntimeORT__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x9a1d50b2;
  local_res8[0].DeclarationsHash = 0x863ce65c;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_NNERuntimeORT,L"/Script/NNERuntimeORT",
             &Z_Registration_Info_UPackage__Script_NNERuntimeORT,local_res8);
  return;
}

// `scalar_deleting_destructor' @ 14eb01430

void * __thiscall
FNNERuntimeORTModule::_scalar_deleting_destructor_(FNNERuntimeORTModule *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Environment).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->DllHandles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// Z_Construct_UClass_UNNERuntimeORTSettings @ 14eb01490

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNNERuntimeORTSettings(void)

{
  if (Z_Registration_Info_UClass_UNNERuntimeORTSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNNERuntimeORTSettings.OuterSingleton,
               &Z_Construct_UClass_UNNERuntimeORTSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNNERuntimeORTSettings.OuterSingleton;
}

// Z_Construct_UEnum_NNERuntimeORT_EExecutionMode @ 14eb014d0

UEnum * __cdecl Z_Construct_UEnum_NNERuntimeORT_EExecutionMode(void)

{
  if (Z_Registration_Info_UEnum_EExecutionMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EExecutionMode.InnerSingleton,
               &Z_Construct_UEnum_NNERuntimeORT_EExecutionMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EExecutionMode.InnerSingleton;
}

// Z_Construct_UScriptStruct_FThreadingOptions @ 14eb01510

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FThreadingOptions(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FThreadingOptions.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FThreadingOptions.InnerSingleton,
               &Z_Construct_UScriptStruct_FThreadingOptions_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FThreadingOptions.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FThreadingOptions.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// EExecutionMode_StaticEnum @ 14eb01590

UEnum * __cdecl EExecutionMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EExecutionMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_NNERuntimeORT();
    Z_Registration_Info_UEnum_EExecutionMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_NNERuntimeORT_EExecutionMode,(UObject *)pUVar1,
                       L"EExecutionMode");
  }
  return Z_Registration_Info_UEnum_EExecutionMode.OuterSingleton;
}

// NewProp_bUseGlobalThreadPool_SetBit @ 14eb015d0

void __cdecl
Z_Construct_UScriptStruct_FThreadingOptions_Statics::NewProp_bUseGlobalThreadPool_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewStructOps @ 14eb015e0

void * __cdecl Z_Construct_UScriptStruct_FThreadingOptions_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FThreadingOptions,&UE::CoreUObject::Private::Construct<FThreadingOptions>,&UE::CoreUObject::Private::ConstructForTests<FThreadingOptions>,&UE::CoreUObject::Private::Destruct<FThreadingOptions>,&UE::CoreUObject::Private::Copy<FThreadingOptions>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UPackage__Script_NNERuntimeORT @ 14eb01650

UPackage * __cdecl Z_Construct_UPackage__Script_NNERuntimeORT(void)

{
  if (Z_Registration_Info_UPackage__Script_NNERuntimeORT.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_NNERuntimeORT.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_NNERuntimeORT.OuterSingleton;
}

// Z_Construct_UClass_UNNERuntimeORTCpu @ 14eb019f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNNERuntimeORTCpu(void)

{
  if (Z_Registration_Info_UClass_UNNERuntimeORTCpu.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNNERuntimeORTCpu.OuterSingleton,
               &Z_Construct_UClass_UNNERuntimeORTCpu_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNNERuntimeORTCpu.OuterSingleton;
}

// Z_Construct_UClass_UNNERuntimeORTDml_GPU @ 14eb01a30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNNERuntimeORTDml_GPU(void)

{
  if (Z_Registration_Info_UClass_UNNERuntimeORTDml_GPU.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNNERuntimeORTDml_GPU.OuterSingleton,
               &Z_Construct_UClass_UNNERuntimeORTDml_GPU_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNNERuntimeORTDml_GPU.OuterSingleton;
}

// Z_Construct_UClass_UNNERuntimeORTDml_GPU_NPU @ 14eb01a70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNNERuntimeORTDml_GPU_NPU(void)

{
  if (Z_Registration_Info_UClass_UNNERuntimeORTDml_GPU_NPU.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNNERuntimeORTDml_GPU_NPU.OuterSingleton,
               &Z_Construct_UClass_UNNERuntimeORTDml_GPU_NPU_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNNERuntimeORTDml_GPU_NPU.OuterSingleton;
}

// Z_Construct_UClass_UNNERuntimeORTDml_GPU_RDG @ 14eb01ab0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNNERuntimeORTDml_GPU_RDG(void)

{
  if (Z_Registration_Info_UClass_UNNERuntimeORTDml_GPU_RDG.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNNERuntimeORTDml_GPU_RDG.OuterSingleton,
               &Z_Construct_UClass_UNNERuntimeORTDml_GPU_RDG_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNNERuntimeORTDml_GPU_RDG.OuterSingleton;
}

// Z_Construct_UClass_UNNERuntimeORTDml_GPU_RDG_NPU @ 14eb01af0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNNERuntimeORTDml_GPU_RDG_NPU(void)

{
  if (Z_Registration_Info_UClass_UNNERuntimeORTDml_GPU_RDG_NPU.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNNERuntimeORTDml_GPU_RDG_NPU.OuterSingleton,
               &Z_Construct_UClass_UNNERuntimeORTDml_GPU_RDG_NPU_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNNERuntimeORTDml_GPU_RDG_NPU.OuterSingleton;
}

// Z_Construct_UClass_UNNERuntimeORTDml_NPU @ 14eb01b30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNNERuntimeORTDml_NPU(void)

{
  if (Z_Registration_Info_UClass_UNNERuntimeORTDml_NPU.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNNERuntimeORTDml_NPU.OuterSingleton,
               &Z_Construct_UClass_UNNERuntimeORTDml_NPU_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNNERuntimeORTDml_NPU.OuterSingleton;
}

// Z_Construct_UClass_UNNERuntimeORTDml_RDG @ 14eb01b70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNNERuntimeORTDml_RDG(void)

{
  if (Z_Registration_Info_UClass_UNNERuntimeORTDml_RDG.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNNERuntimeORTDml_RDG.OuterSingleton,
               &Z_Construct_UClass_UNNERuntimeORTDml_RDG_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNNERuntimeORTDml_RDG.OuterSingleton;
}

// Z_Construct_UClass_UNNERuntimeORTDml_RDG_NPU @ 14eb01bb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNNERuntimeORTDml_RDG_NPU(void)

{
  if (Z_Registration_Info_UClass_UNNERuntimeORTDml_RDG_NPU.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNNERuntimeORTDml_RDG_NPU.OuterSingleton,
               &Z_Construct_UClass_UNNERuntimeORTDml_RDG_NPU_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNNERuntimeORTDml_RDG_NPU.OuterSingleton;
}

// Z_Construct_UClass_UNNERuntimeORTDmlProxy @ 14eb01bf0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNNERuntimeORTDmlProxy(void)

{
  if (Z_Registration_Info_UClass_UNNERuntimeORTDmlProxy.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNNERuntimeORTDmlProxy.OuterSingleton,
               &Z_Construct_UClass_UNNERuntimeORTDmlProxy_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNNERuntimeORTDmlProxy.OuterSingleton;
}

// operator<<<TTuple<FString,__int64>,TDefaultMapHashableKeyFuncs<FString,__int64,0>,FDefaultSetAllocator> @ 14eb02430

FArchive * __cdecl
operator<<<TTuple<FString,__int64>,TDefaultMapHashableKeyFuncs<FString,__int64,0>,FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<TTuple<FString,__int64>,TDefaultMapHashableKeyFuncs<FString,__int64,0>,FDefaultSetAllocator>
          *param_2)

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  ForElementType<FSetElementId> FVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  wchar_t *pwVar10;
  undefined8 *puVar11;
  uint uVar12;
  ulonglong uVar13;
  uint *puVar14;
  uint uStack_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  
  operator<<<TSparseSetElement<TTuple<FString,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1,&param_2->Elements);
  if (((param_1->field_0x28 & 1) == 0) &&
     (((param_1->field_0x2b & 2) == 0 || ((param_1->field_0x28 & 4) != 0)))) {
    return param_1;
  }
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar7 = 0;
  param_2->HashSize = 0;
  piVar1 = &param_2->HashSize;
  uVar12 = 1;
  uVar8 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  if (3 < uVar8) {
    uVar9 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar12 = 1 << ((byte)lVar3 & 0x1f);
  }
  if ((int)uVar8 < 1) {
    return param_1;
  }
  if ((int)uVar12 < 1) {
    return param_1;
  }
  *piVar1 = uVar12;
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar8 = uVar12;
  if (uVar12 < 2) {
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_14eb04e2c;
    uVar8 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar8,4);
LAB_14eb04e2c:
  uVar13 = (ulonglong)uVar12;
  uVar9 = uVar7;
  do {
    FVar2 = (param_2->Hash).SecondaryData;
    FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FVar6 = FVar2;
    }
    uVar4 = uVar9 & (longlong)(int)uVar12 - 1U;
    uVar9 = uVar9 + 1;
    *(undefined4 *)((longlong)FVar6 + uVar4 * 4) = 0xffffffff;
    uVar13 = uVar13 - 1;
  } while (uVar13 != 0);
  if (*piVar1 != 0) {
    uVar8 = *(uint *)&(param_2->Elements).field_0x28;
    TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
    uStack_74 = 1;
    uStack_78 = 0;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar8 != 0) {
      puVar14 = *(uint **)&(param_2->Elements).field_0x20;
      if (puVar14 == (uint *)0x0) {
        puVar14 = (uint *)TStack_50.Array;
      }
      uVar12 = *puVar14;
      uVar9 = uVar7;
      while (uVar12 == 0) {
        uStack_60 = (int)uVar9 + 0x20;
        uVar9 = (ulonglong)uStack_60;
        iVar5 = (int)uVar7;
        uStack_78 = iVar5 + 1;
        uVar7 = (ulonglong)uStack_78;
        if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_78)
        goto LAB_14eb04f07;
        uVar12 = puVar14[(longlong)iVar5 + 1];
      }
      uStack_74 = -uVar12 & uVar12;
      uVar7 = (ulonglong)uStack_74 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uStack_64 = (int)lVar3 + -1 + uStack_60;
      uVar7 = (ulonglong)uStack_64;
      if ((int)uVar8 < (int)uStack_64) {
LAB_14eb04f07:
        uVar7 = (ulonglong)uVar8;
        uStack_64 = uVar8;
      }
    }
    TStack_50._padding_._0_4_ = uStack_78;
    TStack_50._padding_._4_4_ = uStack_74;
    TStack_50.UnvisitedBitMask = 0xffffffff;
    TStack_50.CurrentBitIndex = uStack_64;
    TStack_50._28_4_ = uStack_5c;
    TStack_50.BaseBitIndex = uStack_60;
    if ((int)uVar7 < (int)uVar8) {
      do {
        puVar11 = (undefined8 *)(*(longlong *)&param_2->Elements + (longlong)(int)uVar7 * 0x20);
        if (*(int *)(puVar11 + 1) == 0) {
          pwVar10 = L"";
          iVar5 = 0;
        }
        else {
          pwVar10 = (wchar_t *)*puVar11;
          iVar5 = *(int *)(puVar11 + 1) + -1;
        }
        uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar10);
        uVar8 = *piVar1 - 1U & uVar8;
        *(uint *)((longlong)puVar11 + 0x1c) = uVar8;
        FVar2 = (param_2->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar2;
        }
        uVar9 = (longlong)*piVar1 - 1U & (longlong)(int)uVar8;
        *(undefined4 *)(puVar11 + 3) = *(undefined4 *)((longlong)FVar6 + uVar9 * 4);
        *(int *)((longlong)FVar6 + uVar9 * 4) = (int)uVar7;
        TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
        uVar7 = (ulonglong)(uint)TStack_50.CurrentBitIndex;
      } while (TStack_50.CurrentBitIndex < (TStack_50.Array)->NumBits);
    }
  }
  return param_1;
}

// FOnnxAdditionalDataDescriptor,TSizedDefaultAllocator<32>_> @ 14eb02440

FArchive * __cdecl
operator<<<UE::NNERuntimeORT::Private::FOnnxAdditionalDataDescriptor_TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<UE::NNERuntimeORT::Private::FOnnxAdditionalDataDescriptor,TSizedDefaultAllocator<32>_>
          *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  ulong64 *puVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FArchive *pFVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  ulonglong uVar14;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 5);
  uVar11 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  if (auStackX_8[0] == 0) {
    if ((param_1->field_0x28 & 1) != 0) {
      DestructItems<UE::NNERuntimeORT::Private::FOnnxAdditionalDataDescriptor,int>
                ((FOnnxAdditionalDataDescriptor *)(param_2->AllocatorInstance).Data,
                 param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x80001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar14 = uVar11;
          uVar10 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar12 = (uint)uVar11;
              uVar8 = 0;
              if ((int)uVar12 < (int)uVar10) {
                uVar8 = ~uVar12 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                pFVar9 = (FArchive *)(*pcVar5)();
                return pFVar9;
              }
              pFVar13 = (param_2->AllocatorInstance).Data + uVar14;
              ::operator<<(param_1,(FString *)pFVar13);
              pFVar2 = pFVar13 + 0x10;
              puVar4 = (ulong64 *)**(undefined8 **)&param_1->field_0x8;
              if ((ulong64 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
                if ((param_1->field_0x2a & 1) == 0) {
                  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar2,8);
                }
                else {
                  FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)pFVar2);
                }
              }
              else {
                *(ulong64 *)&pFVar2->field_0x0 = *puVar4;
                **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
              }
              pFVar13 = pFVar13 + 0x18;
              puVar4 = (ulong64 *)**(longlong **)&param_1->field_0x8;
              if ((ulong64 *)(*(longlong **)&param_1->field_0x8)[1] < puVar4 + 1) {
                if ((param_1->field_0x2a & 1) == 0) {
                  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar13,8);
                }
                else {
                  FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)pFVar13);
                }
              }
              else {
                *(ulong64 *)pFVar13 = *puVar4;
                **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
              }
              uVar11 = (ulonglong)(uVar12 + 1);
              uVar14 = uVar14 + 0x20;
              uVar10 = param_2->ArrayNum;
            } while ((int)(uVar12 + 1) < param_2->ArrayNum);
          }
        }
        else {
          TArray<UE::NNERuntimeORT::Private::FOnnxAdditionalDataDescriptor,TSizedDefaultAllocator<32>_>
          ::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar7 = param_2->ArrayNum;
              if (iVar7 == *piVar1) {
                iVar7 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x820,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar7 + 1;
              pFVar13 = (param_2->AllocatorInstance).Data + (longlong)iVar7 * 0x20;
              DefaultConstructItems<UE::NNERuntimeORT::Private::FOnnxAdditionalDataDescriptor,int>
                        (pFVar13,1);
              ::operator<<(param_1,(FString *)pFVar13);
              pFVar2 = pFVar13 + 0x10;
              puVar4 = (ulong64 *)**(undefined8 **)&param_1->field_0x8;
              if ((ulong64 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
                if ((param_1->field_0x2a & 1) == 0) {
                  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar2,8);
                }
                else {
                  FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)pFVar2);
                }
              }
              else {
                *(ulong64 *)&pFVar2->field_0x0 = *puVar4;
                **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
              }
              pFVar13 = pFVar13 + 0x18;
              puVar4 = (ulong64 *)**(longlong **)&param_1->field_0x8;
              if ((ulong64 *)(*(longlong **)&param_1->field_0x8)[1] < puVar4 + 1) {
                if ((param_1->field_0x2a & 1) == 0) {
                  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar13,8);
                }
                else {
                  FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)pFVar13);
                }
              }
              else {
                *(ulong64 *)pFVar13 = *puVar4;
                **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
              }
              uVar10 = (int)uVar11 + 1;
              uVar11 = (ulonglong)uVar10;
            } while ((int)uVar10 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar9 = (FArchive *)(*pcVar5)();
        return pFVar9;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// operator<<<TSparseSetElement<TTuple<FString,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14eb02450

FArchive * __cdecl
operator<<<TSparseSetElement<TTuple<FString,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (FArchive *param_1,
          TSparseArray<TSparseSetElement<TTuple<FString,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  TTuple<FString,__int64> *pTVar7;
  longlong lVar8;
  uint *puVar9;
  uint uVar10;
  ulonglong uVar11;
  TTuple<FString,__int64> *pTVar12;
  uint local_res8 [2];
  FSparseArrayAllocationInfo local_78;
  undefined4 local_68;
  int iStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  TSparseArray<TSparseSetElement<TTuple<FString,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  puVar2 = &param_2->field_0x8;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)*(int *)puVar2 << 5,(longlong)*(int *)&param_2->field_0xc << 5);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(ulonglong)(*(int *)&param_2->field_0x28 + 0x1fU >> 5) << 2,
             (ulonglong)(*(int *)&param_2->field_0x2c + 0x1fU >> 5) << 2);
  plVar4 = *(longlong **)&param_1->field_0x8;
  if ((param_1->field_0x28 & 1) == 0) {
    local_res8[0] = *(int *)puVar2 - *(int *)&param_2->field_0x34;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    iVar6 = *(int *)&param_2->field_0x28;
    local_78.Pointer = &param_2->field_0x10;
    local_78._4_4_ = 1;
    local_78.Index = 0;
    iStack_64 = 0;
    iStack_60 = 0;
    if (iVar6 != 0) {
      puVar9 = *(uint **)&param_2->field_0x20;
      if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
        puVar9 = local_78.Pointer;
      }
      uVar10 = *puVar9;
      iStack_60 = 0;
      local_78.Index = 0;
      while (uVar10 == 0) {
        lVar8 = (longlong)local_78.Index;
        iStack_60 = iStack_60 + 0x20;
        local_78.Index = local_78.Index + 1;
        if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < local_78.Index)
        goto LAB_14eb0275c;
        uVar10 = puVar9[lVar8 + 1];
      }
      local_78._4_4_ = -uVar10 & uVar10;
      uVar11 = (ulonglong)(uint)local_78._4_4_ * 2 + 1;
      lVar8 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iStack_64 = iStack_60 + -1 + (int)lVar8;
      if (iVar6 < iStack_64) {
LAB_14eb0275c:
        iStack_64 = iVar6;
      }
    }
    local_68 = 0xffffffff;
    local_50._padding_._0_4_ = local_78.Index;
    local_50._padding_._4_4_ = local_78._4_4_;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50.CurrentBitIndex = iStack_64;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = iStack_60;
    local_58 = param_2;
    local_50.Array = local_78.Pointer;
    if (iStack_64 < iVar6) {
      do {
        operator<<<FString,__int64>
                  (param_1,(TTuple<FString,__int64> *)
                           ((longlong)local_50.CurrentBitIndex * 0x20 + *(longlong *)local_58));
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
  else {
    local_res8[0] = 0;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    uVar10 = local_res8[0];
    uVar11 = (ulonglong)local_res8[0];
    TSparseArray<TSparseSetElement<TTuple<FString,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(param_2,0,*(int *)puVar2);
    if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar11);
    }
    *(undefined4 *)puVar2 = 0;
    if (*(uint *)&param_2->field_0xc != uVar10) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,uVar10,(ForAnyElementType *)param_2,0,(int *)&param_2->field_0xc);
    }
    *(undefined4 *)&param_2->field_0x30 = 0xffffffff;
    *(undefined4 *)&param_2->field_0x34 = 0;
    uVar10 = uVar10 + 0x1f & 0xffffffe0;
    *(undefined4 *)&param_2->field_0x28 = 0;
    if ((*(int *)&param_2->field_0x2c < (int)uVar10) || (0x80 < *(int *)&param_2->field_0x2c)) {
      uVar5 = 0x80;
      if (0x80 < (int)uVar10) {
        uVar5 = uVar10;
      }
      *(uint *)&param_2->field_0x2c = uVar5;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,0);
    }
    pTVar12 = (TTuple<FString,__int64> *)0x0;
    if (0 < (int)local_res8[0]) {
      do {
        if (*(int *)&param_2->field_0x34 == 0) {
          iVar6 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x20,8,1,(ForAnyElementType *)param_2,(int *)puVar2,
                             (int *)&param_2->field_0xc);
          TBitArray<FDefaultBitArrayAllocator>::Add
                    ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,false);
        }
        else {
          iVar6 = *(int *)&param_2->field_0x30;
          iVar3 = *(int *)((longlong)iVar6 * 0x20 + 4 + *(longlong *)param_2);
          iVar1 = *(int *)&param_2->field_0x34 + -1;
          *(int *)&param_2->field_0x30 = iVar3;
          *(int *)&param_2->field_0x34 = iVar1;
          if (iVar1 != 0) {
            *(undefined4 *)((longlong)iVar3 * 0x20 + *(longlong *)param_2) = 0xffffffff;
          }
        }
        TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)param_2,&local_78,iVar6);
        pTVar7 = (TTuple<FString,__int64> *)0x0;
        if (local_78.Pointer != (TTuple<FString,__int64> *)0x0) {
          *(undefined8 *)local_78.Pointer = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 8) = 0;
          *(undefined8 *)local_78.Pointer = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 8) = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 0x10) = 0;
          *(undefined4 *)((longlong)local_78.Pointer + 0x18) = 0xffffffff;
          pTVar7 = local_78.Pointer;
        }
        operator<<<FString,__int64>(param_1,pTVar7);
        uVar10 = (int)pTVar12 + 1;
        pTVar12 = (TTuple<FString,__int64> *)(ulonglong)uVar10;
      } while ((int)uVar10 < (int)local_res8[0]);
    }
  }
  return param_1;
}

// operator<<<FString,__int64> @ 14eb027d0

FArchive * __cdecl operator<<<FString,__int64>(FArchive *param_1,TTuple<FString,__int64> *param_2)

{
  undefined8 *puVar1;
  
  operator<<(param_1,(FString *)param_2);
  puVar1 = (undefined8 *)**(longlong **)&param_1->field_0x8;
  if (puVar1 + 1 <= (undefined8 *)(*(longlong **)&param_1->field_0x8)[1]) {
    *(undefined8 *)&param_2->field_0x10 = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->field_0x10,8);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)&param_2->field_0x10);
  return param_1;
}

// AddPassInternal<FORTModelInstanceRDGParameters,`UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::EnqueueRDG'::__l2::<lambda_2>_> @ 14eb02860

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGPass * __thiscall
FRDGBuilder::
AddPassInternal<FORTModelInstanceRDGParameters,_UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::EnqueueRDG_::__l2::<lambda_2>_>
          (FRDGBuilder *this,FRDGEventName *param_1,FShaderParametersMetadata *param_2,
          FORTModelInstanceRDGParameters *param_3,ERDGPassFlags param_4,<lambda_2> *param_5)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  ERDGPassFlags EVar4;
  int iVar5;
  wchar_t *pwVar6;
  FRDGPass *pFVar7;
  FRDGParameterStruct local_38;
  
  FRDGUserValidation::ValidateAddPass(&this->UserValidation,param_3,param_2,param_1,param_4);
  FlushAccessModeQueue(this);
  pwVar6 = FRDGEventName::GetTCHAR(param_1);
  EVar4 = OverridePassFlags(this,pwVar6,param_4);
  pFVar7 = FMemStackBase::Alloc((FMemStackBase *)&this->_padding_,0x1b0,8);
  local_38.Contents = (uchar *)param_3;
  if ((param_2->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsLayoutInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x17c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FRDGPass *)(*pcVar2)();
      return pFVar7;
    }
  }
  local_38.Layout.Reference = (param_2->Layout).Reference;
  if (local_38.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_38.Layout.Reference);
  }
  local_38.Metadata = param_2;
  FRDGPass::FRDGPass(pFVar7,param_1,&local_38,EVar4,Inline);
  pFVar7->_padding_ =
       (longlong)
       &TRDGLambdaPass<FORTModelInstanceRDGParameters,`UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::EnqueueRDG'::`2'::<lambda_2>_>
        ::_vftable_;
  pFVar7[1]._padding_ = (longlong)(param_5->Proxy).Object;
  pFVar7[1].FullPathIfDebug.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)(param_5->Proxy).SharedReferenceCount.ReferenceController;
  (param_5->Proxy).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (param_5->Proxy).Object = (FProxy *)0x0;
  pFVar7[1].FullPathIfDebug.Data.ArrayNum = 0;
  pFVar7[1].FullPathIfDebug.Data.ArrayMax = 0;
  *(FScriptContainerElement **)&pFVar7[1].FullPathIfDebug.Data.ArrayNum =
       (param_5->InputTensors).AllocatorInstance.Data;
  (param_5->InputTensors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)&pFVar7[1].Name.EventFormat = (param_5->InputTensors).ArrayNum;
  *(int *)((longlong)&pFVar7[1].Name.EventFormat + 4) = (param_5->InputTensors).ArrayMax;
  (param_5->InputTensors).ArrayNum = 0;
  (param_5->InputTensors).ArrayMax = 0;
  pFVar7[1].Name.FormattedEventName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)param_5->PassParameters;
  *(FORTModelInstanceRDGParameters **)&pFVar7[1].Name.FormattedEventName.Data.ArrayNum = param_3;
  ClobberPassOutputs(this,pFVar7);
  iVar5 = (this->Passes).Array.ArrayNum;
  piVar1 = &(this->Passes).Array.ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                      (0x808,(ForElementType<FRDGPass_*> *)&this->Passes,piVar1);
  }
  (this->Passes).Array.ArrayNum = iVar5 + 1;
  (this->Passes).Array.AllocatorInstance.Data[iVar5] = pFVar7;
  (pFVar7->Handle).Index = (this->Passes).Array.ArrayNum - 1;
  SetupParameterPass(this,pFVar7);
  return pFVar7;
}

// ConstructItems<UE::NNERuntimeORT::Private::FTensor,UE::NNERuntimeORT::Private::FTensor,int> @ 14eb02b60

void __cdecl
ConstructItems<UE::NNERuntimeORT::Private::FTensor,UE::NNERuntimeORT::Private::FTensor,int>
          (void *param_1,FTensor *param_2,int param_3)

{
  ulong64 *puVar1;
  FTensorShape *this;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      this = (FTensorShape *)(lVar2 + (longlong)param_2);
      UE::NNE::FTensorShape::FTensorShape(this,&param_2->Shape);
      puVar1 = &param_2->DataSize;
      param_2 = param_2 + 1;
      *(ulong64 *)this[1].Data.AllocatorInstance.InlineData = *puVar1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<UE::NNE::FTensorDesc,UE::NNE::FTensorDesc,int> @ 14eb02bd0

void __cdecl
ConstructItems<UE::NNE::FTensorDesc,UE::NNE::FTensorDesc,int>
          (void *param_1,FTensorDesc *param_2,int param_3)

{
  int iVar1;
  ForElementType<int> *_Dst;
  int *piVar2;
  ForElementType<int> *pFVar3;
  ForElementType<int> _Src;
  
  if (param_3 != 0) {
    piVar2 = (int *)((longlong)param_1 + 0x44);
    pFVar3 = &(param_2->Shape).Data.AllocatorInstance.SecondaryData;
    do {
      FString::FString((FString *)(piVar2 + -0x11),
                       (FString *)
                       ((longlong)param_2 + (-0x44 - (longlong)param_1) + (longlong)piVar2));
      *(undefined1 *)(piVar2 + -0xd) = *(undefined1 *)(pFVar3 + -5);
      piVar2[-3] = 0;
      piVar2[-2] = 0;
      _Src = *pFVar3;
      iVar1 = *(int *)(pFVar3 + 1);
      piVar2[-1] = iVar1;
      if (_Src == (ForElementType<int>)0x0) {
        _Src = (ForElementType<int>)(pFVar3 + -4);
      }
      if (iVar1 == 0) {
        *piVar2 = 8;
      }
      else {
        UE::Core::Private::
        ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                  (4,4,iVar1,0,(ForElementType<int> *)(piVar2 + -0xb),iVar1,piVar2);
        _Dst = *(ForElementType<int> **)(piVar2 + -3);
        if (*(ForElementType<int> **)(piVar2 + -3) == (ForElementType<int> *)0x0) {
          _Dst = (ForElementType<int> *)(piVar2 + -0xb);
        }
        memcpy(_Dst,(void *)_Src,(longlong)iVar1 << 2);
      }
      piVar2 = piVar2 + 0x12;
      pFVar3 = pFVar3 + 9;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<UE::NNERuntimeORT::Private::FOnnxAdditionalDataDescriptor,int> @ 14eb02e90

void __cdecl
DefaultConstructItems<UE::NNERuntimeORT::Private::FOnnxAdditionalDataDescriptor,int>
          (void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      lVar1 = lVar1 + 0x20;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::NNERuntimeORT::Private::FOnnxAdditionalDataDescriptor,int> @ 14eb02ec0

void __cdecl
DestructItems<UE::NNERuntimeORT::Private::FOnnxAdditionalDataDescriptor,int>
          (FOnnxAdditionalDataDescriptor *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->Path).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<Ort::Value,int> @ 14eb02f00

/* WARNING: Enum "OrtMemType": Some values do not have unique names */

void __cdecl DestructItems<Ort::Value,int>(Value *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    (*Ort::Global<void>::api_->ReleaseValue)((OrtValue *)*param_1);
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<std::unique_ptr<char,Ort::detail::AllocatedFree>,int> @ 14eb02f50

void __cdecl
DestructItems<std::unique_ptr<char,Ort::detail::AllocatedFree>,int>
          (unique_ptr<char,Ort::detail::AllocatedFree> *param_1,int param_2)

{
  char *pcVar1;
  OrtAllocator *pOVar2;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pcVar1 = (param_1->_Mypair)._Myval2;
    if (pcVar1 != (char *)0x0) {
      pOVar2 = (param_1->_Mypair)._Myval1.allocator_;
      (*pOVar2->Free)(pOVar2,pcVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<std::unique_ptr<void,void_(__cdecl*)(void_*)>,int> @ 14eb02f90

void __cdecl
DestructItems<std::unique_ptr<void,void_(__cdecl*)(void_*)>,int>
          (unique_ptr<void,void_(__cdecl*)(void_*)> *param_1,int param_2)

{
  void *pvVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pvVar1 = (param_1->_Mypair)._Myval2;
    if (pvVar1 != (void *)0x0) {
      (*(param_1->_Mypair)._Myval1)(pvVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<UE::NNERuntimeORT::Private::FTensor,int> @ 14eb02fd0

void __cdecl DestructItems<UE::NNERuntimeORT::Private::FTensor,int>(FTensor *param_1,int param_2)

{
  ForElementType<unsigned_int> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->Shape).Data.AllocatorInstance.SecondaryData;
    do {
      if (*pFVar1 != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)*pFVar1);
      }
      pFVar1 = pFVar1 + 7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::NNE::FTensorDesc,int> @ 14eb03010

void __cdecl DestructItems<UE::NNE::FTensorDesc,int>(FTensorDesc *param_1,int param_2)

{
  ForElementType<int> FVar1;
  FScriptContainerElement *pFVar2;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FVar1 = (param_1->Shape).Data.AllocatorInstance.SecondaryData;
    if (FVar1 != (ForElementType<int>)0x0) {
      FMemory::Free((void *)FVar1);
    }
    pFVar2 = (param_1->Name).Data.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// Enqueue<TRenderCommandTag<`UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::SetInputTensorShapes'::__l7::TSTR_FModelInstanceORTDmlRDG_SetInputTensorShapes814>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 14eb03060

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::SetInputTensorShapes_::__l7::TSTR_FModelInstanceORTDmlRDG_SetInputTensorShapes814>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::SetInputTensorShapes'::__l7::TSTR_FModelInstanceORTDmlRDG_SetInputTensorShapes814>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_14eb031b1;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_14eb033a5;
  }
LAB_14eb031b1:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_14eb0328f:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14eb0328f;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_14eb033a5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// GetTensorData<void> @ 14eb033e0

/* WARNING: Enum "OrtMemType": Some values do not have unique names */

void * __thiscall
Ort::detail::ConstValueImpl<OrtValue>::GetTensorData<void>(ConstValueImpl<OrtValue> *this)

{
  OrtStatus *pOVar1;
  void *local_res8 [4];
  
  pOVar1 = (*Global<void>::api_->GetTensorMutableData)((OrtValue *)*this,local_res8);
  ThrowOnError(pOVar1);
  return local_res8[0];
}

// IID_PPV_ARGS_Helper<IDMLDevice> @ 14eb03580

void ** __cdecl IID_PPV_ARGS_Helper<IDMLDevice>(IDMLDevice **param_1)

{
  return param_1;
}

// IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<ID3D12Device1>_> @ 14eb03590

void ** __cdecl
IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<ID3D12Device1>_>
          (ComPtrRef<Microsoft::WRL::ComPtr<ID3D12Device1>_> param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)param_1;
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)param_1 = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  return (void **)param_1;
}

// IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IDMLDevice>_> @ 14eb035c0

void ** __cdecl
IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IDMLDevice>_>
          (ComPtrRef<Microsoft::WRL::ComPtr<IDMLDevice>_> param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)param_1;
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)param_1 = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  return (void **)param_1;
}

// IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IDXCoreAdapter>_> @ 14eb035f0

void ** __cdecl
IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IDXCoreAdapter>_>
          (ComPtrRef<Microsoft::WRL::ComPtr<IDXCoreAdapter>_> param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)param_1;
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)param_1 = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  return (void **)param_1;
}

// IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IDXCoreAdapterFactory>_> @ 14eb03620

void ** __cdecl
IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IDXCoreAdapterFactory>_>
          (ComPtrRef<Microsoft::WRL::ComPtr<IDXCoreAdapterFactory>_> param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)param_1;
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)param_1 = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  return (void **)param_1;
}

// IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IDXCoreAdapterList>_> @ 14eb03650

void ** __cdecl
IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IDXCoreAdapterList>_>
          (ComPtrRef<Microsoft::WRL::ComPtr<IDXCoreAdapterList>_> param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)param_1;
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)param_1 = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  return (void **)param_1;
}

// InternalConstructor<UNNERuntimeORTCpu> @ 14eb03680

void __cdecl InternalConstructor<UNNERuntimeORTCpu>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &UNNERuntimeORTCpu::_vftable__for__UObject__;
    *(undefined ***)(this + 1) = &UNNERuntimeORTCpu::_vftable__for__INNERuntime__;
    *(undefined ***)&this[1].field_0x8 = &UNNERuntimeORTCpu::_vftable__for__INNERuntimeCPU__;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
  }
  return;
}

// InternalConstructor<UNNERuntimeORTDmlProxy> @ 14eb036d0

void __cdecl InternalConstructor<UNNERuntimeORTDmlProxy>(FObjectInitializer *param_1)

{
  UObject *this;
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    puVar2 = (undefined8 *)0x0;
    *(undefined ***)this = &UNNERuntimeORTDmlProxy::_vftable__for__UObject__;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined ***)(this + 1) = &UNNERuntimeORTDmlProxy::_vftable__for__INNERuntime__;
    puVar1 = operator_new(0x38);
    if (puVar1 != (undefined8 *)0x0) {
      *(undefined4 *)((longlong)puVar1 + 0x33) = 0;
      *(undefined1 *)((longlong)puVar1 + 0x37) = 0;
      *puVar1 = &FNNERuntimeORTDmlImpl::_vftable__for__INNERuntime__;
      puVar1[1] = &FNNERuntimeORTDmlImpl::_vftable__for__INNERuntimeGPU__;
      puVar1[2] = &FNNERuntimeORTDmlImpl::_vftable__for__INNERuntimeRDG__;
      puVar1[3] = &FNNERuntimeORTDmlImpl::_vftable__for__INNERuntimeNPU__;
      puVar1[4] = 0;
      puVar1[5] = 0;
      *(undefined2 *)(puVar1 + 6) = 0;
      *(undefined1 *)((longlong)puVar1 + 0x32) = 0;
      puVar2 = puVar1;
    }
    puVar1 = *(undefined8 **)&this[1].field_0x8;
    *(undefined8 **)&this[1].field_0x8 = puVar2;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    return;
  }
  return;
}

// InternalConstructor<UNNERuntimeORTDml_GPU> @ 14eb036f0

void __cdecl InternalConstructor<UNNERuntimeORTDml_GPU>(FObjectInitializer *param_1)

{
  UNNERuntimeORTDmlProxy *this;
  
  this = (UNNERuntimeORTDmlProxy *)param_1->Obj;
  if (this != (UNNERuntimeORTDmlProxy *)0x0) {
    UNNERuntimeORTDmlProxy::UNNERuntimeORTDmlProxy(this);
    this->_padding_ = (longlong)&UNNERuntimeORTDml_GPU::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UNNERuntimeORTDml_GPU::_vftable__for__INNERuntime__;
    this[1]._padding_ = (longlong)&___7UNNERuntimeORTDml_GPU__6B_;
  }
  return;
}

// InternalConstructor<UNNERuntimeORTDml_GPU_NPU> @ 14eb03740

void __cdecl InternalConstructor<UNNERuntimeORTDml_GPU_NPU>(FObjectInitializer *param_1)

{
  UNNERuntimeORTDmlProxy *this;
  
  this = (UNNERuntimeORTDmlProxy *)param_1->Obj;
  if (this != (UNNERuntimeORTDmlProxy *)0x0) {
    UNNERuntimeORTDmlProxy::UNNERuntimeORTDmlProxy(this);
    this->_padding_ = (longlong)&UNNERuntimeORTDml_GPU_NPU::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UNNERuntimeORTDml_GPU_NPU::_vftable__for__INNERuntime__;
    this[1]._padding_ = (longlong)&UNNERuntimeORTDml_GPU_NPU::_vftable__for__INNERuntimeGPU__;
    this[1]._padding_ = (longlong)&UNNERuntimeORTDml_GPU_NPU::_vftable__for__INNERuntimeNPU__;
  }
  return;
}

// InternalConstructor<UNNERuntimeORTDml_GPU_RDG> @ 14eb03790

void __cdecl InternalConstructor<UNNERuntimeORTDml_GPU_RDG>(FObjectInitializer *param_1)

{
  UNNERuntimeORTDmlProxy *this;
  
  this = (UNNERuntimeORTDmlProxy *)param_1->Obj;
  if (this != (UNNERuntimeORTDmlProxy *)0x0) {
    UNNERuntimeORTDmlProxy::UNNERuntimeORTDmlProxy(this);
    this->_padding_ = (longlong)&UNNERuntimeORTDml_GPU_RDG::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UNNERuntimeORTDml_GPU_RDG::_vftable__for__INNERuntime__;
    this[1]._padding_ = (longlong)&UNNERuntimeORTDml_GPU_RDG::_vftable__for__INNERuntimeGPU__;
    this[1]._padding_ = (longlong)&UNNERuntimeORTDml_GPU_RDG::_vftable__for__INNERuntimeRDG__;
  }
  return;
}

// InternalConstructor<UNNERuntimeORTDml_GPU_RDG_NPU> @ 14eb037e0

void __cdecl InternalConstructor<UNNERuntimeORTDml_GPU_RDG_NPU>(FObjectInitializer *param_1)

{
  UNNERuntimeORTDmlProxy *this;
  
  this = (UNNERuntimeORTDmlProxy *)param_1->Obj;
  if (this != (UNNERuntimeORTDmlProxy *)0x0) {
    UNNERuntimeORTDmlProxy::UNNERuntimeORTDmlProxy(this);
    this->_padding_ = (longlong)&UNNERuntimeORTDml_GPU_RDG_NPU::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UNNERuntimeORTDml_GPU_RDG_NPU::_vftable__for__INNERuntime__;
    this[1]._padding_ = (longlong)&UNNERuntimeORTDml_GPU_RDG_NPU::_vftable__for__INNERuntimeGPU__;
    this[1]._padding_ = (longlong)&UNNERuntimeORTDml_GPU_RDG_NPU::_vftable__for__INNERuntimeRDG__;
    this[1]._padding_ = (longlong)&UNNERuntimeORTDml_GPU_RDG_NPU::_vftable__for__INNERuntimeNPU__;
  }
  return;
}

// InternalConstructor<UNNERuntimeORTDml_NPU> @ 14eb03840

void __cdecl InternalConstructor<UNNERuntimeORTDml_NPU>(FObjectInitializer *param_1)

{
  UNNERuntimeORTDmlProxy *this;
  
  this = (UNNERuntimeORTDmlProxy *)param_1->Obj;
  if (this != (UNNERuntimeORTDmlProxy *)0x0) {
    UNNERuntimeORTDmlProxy::UNNERuntimeORTDmlProxy(this);
    this->_padding_ = (longlong)&UNNERuntimeORTDml_NPU::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UNNERuntimeORTDml_NPU::_vftable__for__INNERuntime__;
    this[1]._padding_ = (longlong)&___7UNNERuntimeORTDml_NPU__6B_;
  }
  return;
}

// InternalConstructor<UNNERuntimeORTDml_RDG> @ 14eb03890

void __cdecl InternalConstructor<UNNERuntimeORTDml_RDG>(FObjectInitializer *param_1)

{
  UNNERuntimeORTDmlProxy *this;
  
  this = (UNNERuntimeORTDmlProxy *)param_1->Obj;
  if (this != (UNNERuntimeORTDmlProxy *)0x0) {
    UNNERuntimeORTDmlProxy::UNNERuntimeORTDmlProxy(this);
    this->_padding_ = (longlong)&UNNERuntimeORTDml_RDG::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UNNERuntimeORTDml_RDG::_vftable__for__INNERuntime__;
    this[1]._padding_ = (longlong)&___7UNNERuntimeORTDml_RDG__6B_;
  }
  return;
}

// InternalConstructor<UNNERuntimeORTDml_RDG_NPU> @ 14eb038e0

void __cdecl InternalConstructor<UNNERuntimeORTDml_RDG_NPU>(FObjectInitializer *param_1)

{
  UNNERuntimeORTDmlProxy *this;
  
  this = (UNNERuntimeORTDmlProxy *)param_1->Obj;
  if (this != (UNNERuntimeORTDmlProxy *)0x0) {
    UNNERuntimeORTDmlProxy::UNNERuntimeORTDmlProxy(this);
    this->_padding_ = (longlong)&UNNERuntimeORTDml_RDG_NPU::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UNNERuntimeORTDml_RDG_NPU::_vftable__for__INNERuntime__;
    this[1]._padding_ = (longlong)&UNNERuntimeORTDml_RDG_NPU::_vftable__for__INNERuntimeRDG__;
    this[1]._padding_ = (longlong)&UNNERuntimeORTDml_RDG_NPU::_vftable__for__INNERuntimeNPU__;
  }
  return;
}

// InternalConstructor<UNNERuntimeORTSettings> @ 14eb03930

void __cdecl InternalConstructor<UNNERuntimeORTSettings>(FObjectInitializer *param_1)

{
  UDeveloperSettings *this;
  
  this = (UDeveloperSettings *)param_1->Obj;
  if (this != (UDeveloperSettings *)0x0) {
    UDeveloperSettings::UDeveloperSettings(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7UNNERuntimeORTSettings__6B_;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 1;
    *(undefined4 *)&this[1]._padding_ = 1;
  }
  return;
}

// InternalVTableHelperCtorCaller<UNNERuntimeORTCpu> @ 14eb03980

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNNERuntimeORTCpu>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNNERuntimeORTCpu::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined ***)pUVar1 = &UNNERuntimeORTCpu::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) = &UNNERuntimeORTCpu::_vftable__for__INNERuntime__;
    *(undefined ***)&pUVar1[1].field_0x8 = &UNNERuntimeORTCpu::_vftable__for__INNERuntimeCPU__;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNNERuntimeORTDmlProxy> @ 14eb03a50

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNNERuntimeORTDmlProxy>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNNERuntimeORTDmlProxy::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined ***)pUVar1 = &UNNERuntimeORTDmlProxy::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) = &UNNERuntimeORTDmlProxy::_vftable__for__INNERuntime__;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNNERuntimeORTDml_GPU> @ 14eb03b10

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNNERuntimeORTDml_GPU>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNNERuntimeORTDml_GPU::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined ***)pUVar1 = &UNNERuntimeORTDml_GPU::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) = &UNNERuntimeORTDml_GPU::_vftable__for__INNERuntime__;
    *(undefined ***)&pUVar1[1].field_0x10 = &___7UNNERuntimeORTDml_GPU__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNNERuntimeORTDml_GPU_NPU> @ 14eb03be0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNNERuntimeORTDml_GPU_NPU>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNNERuntimeORTDml_GPU_NPU::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined ***)pUVar1 = &UNNERuntimeORTDml_GPU_NPU::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) = &UNNERuntimeORTDml_GPU_NPU::_vftable__for__INNERuntime__;
    *(undefined ***)&pUVar1[1].field_0x10 =
         &UNNERuntimeORTDml_GPU_NPU::_vftable__for__INNERuntimeGPU__;
    *(undefined ***)&pUVar1[1].field_0x18 =
         &UNNERuntimeORTDml_GPU_NPU::_vftable__for__INNERuntimeNPU__;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNNERuntimeORTDml_GPU_RDG> @ 14eb03cb0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNNERuntimeORTDml_GPU_RDG>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNNERuntimeORTDml_GPU_RDG::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined ***)pUVar1 = &UNNERuntimeORTDml_GPU_RDG::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) = &UNNERuntimeORTDml_GPU_RDG::_vftable__for__INNERuntime__;
    *(undefined ***)&pUVar1[1].field_0x10 =
         &UNNERuntimeORTDml_GPU_RDG::_vftable__for__INNERuntimeGPU__;
    *(undefined ***)&pUVar1[1].field_0x18 =
         &UNNERuntimeORTDml_GPU_RDG::_vftable__for__INNERuntimeRDG__;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNNERuntimeORTDml_GPU_RDG_NPU> @ 14eb03d80

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNNERuntimeORTDml_GPU_RDG_NPU>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNNERuntimeORTDml_GPU_RDG_NPU::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined ***)pUVar1 = &UNNERuntimeORTDml_GPU_RDG_NPU::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) = &UNNERuntimeORTDml_GPU_RDG_NPU::_vftable__for__INNERuntime__;
    *(undefined ***)&pUVar1[1].field_0x10 =
         &UNNERuntimeORTDml_GPU_RDG_NPU::_vftable__for__INNERuntimeGPU__;
    *(undefined ***)&pUVar1[1].field_0x18 =
         &UNNERuntimeORTDml_GPU_RDG_NPU::_vftable__for__INNERuntimeRDG__;
    *(undefined ***)&pUVar1[1].field_0x20 =
         &UNNERuntimeORTDml_GPU_RDG_NPU::_vftable__for__INNERuntimeNPU__;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNNERuntimeORTDml_NPU> @ 14eb03e60

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNNERuntimeORTDml_NPU>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNNERuntimeORTDml_NPU::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined ***)pUVar1 = &UNNERuntimeORTDml_NPU::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) = &UNNERuntimeORTDml_NPU::_vftable__for__INNERuntime__;
    *(undefined ***)&pUVar1[1].field_0x10 = &___7UNNERuntimeORTDml_NPU__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNNERuntimeORTDml_RDG> @ 14eb03f30

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNNERuntimeORTDml_RDG>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNNERuntimeORTDml_RDG::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined ***)pUVar1 = &UNNERuntimeORTDml_RDG::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) = &UNNERuntimeORTDml_RDG::_vftable__for__INNERuntime__;
    *(undefined ***)&pUVar1[1].field_0x10 = &___7UNNERuntimeORTDml_RDG__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNNERuntimeORTDml_RDG_NPU> @ 14eb04000

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNNERuntimeORTDml_RDG_NPU>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNNERuntimeORTDml_RDG_NPU::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined ***)pUVar1 = &UNNERuntimeORTDml_RDG_NPU::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) = &UNNERuntimeORTDml_RDG_NPU::_vftable__for__INNERuntime__;
    *(undefined ***)&pUVar1[1].field_0x10 =
         &UNNERuntimeORTDml_RDG_NPU::_vftable__for__INNERuntimeRDG__;
    *(undefined ***)&pUVar1[1].field_0x18 =
         &UNNERuntimeORTDml_RDG_NPU::_vftable__for__INNERuntimeNPU__;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNNERuntimeORTSettings> @ 14eb040d0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNNERuntimeORTSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDeveloperSettings *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNNERuntimeORTSettings::GetPrivateStaticClass();
  this = (UDeveloperSettings *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDeveloperSettings *)0x0) {
    UDeveloperSettings::UDeveloperSettings(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 1;
    this->_padding_ = (longlong)&___7UNNERuntimeORTSettings__6B_;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined8 *)((longlong)&this[1]._padding_ + 4) = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 1;
    *(undefined4 *)&this[1]._padding_ = 1;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// MakeShared<UE::NNERuntimeORT::Private::FModelInstanceORTCpu,1,UE::NNERuntimeORT::Private::FRuntimeConf_const_&,TSharedRef<UE::NNERuntimeORT::Private::FEnvironment,1>_&> @ 14eb041a0

TSharedRef<UE::NNERuntimeORT::Private::FModelInstanceORTCpu,1> * __cdecl
MakeShared<UE::NNERuntimeORT::Private::FModelInstanceORTCpu,1,UE::NNERuntimeORT::Private::FRuntimeConf_const_&,TSharedRef<UE::NNERuntimeORT::Private::FEnvironment,1>_&>
          (TSharedRef<UE::NNERuntimeORT::Private::FModelInstanceORTCpu,1> *__return_storage_ptr__,
          FRuntimeConf *param_1,TSharedRef<UE::NNERuntimeORT::Private::FEnvironment,1> *param_2)

{
  FEnvironment *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TReferenceControllerBase<1> *pTVar5;
  TSharedRef<UE::NNERuntimeORT::Private::FModelInstanceORTCpu,1> *pTVar6;
  atomic<int> *paVar7;
  
  pTVar5 = operator_new(0x120);
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FModelInstanceORTCpu *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFModelInstanceORTCpu_Private_NNERuntimeORT_UE___00_SharedPointerInternals__6B_
    ;
    pFVar1 = param_2->Object;
    pTVar2 = (param_2->SharedReferenceCount).ReferenceController;
    if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
      paVar7 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar7 = &pTVar2->SharedReferenceCount;
      LOCK();
      *paVar7 = (atomic<int>)((int)*paVar7 + 1);
      UNLOCK();
      LOCK();
      *paVar7 = (atomic<int>)((int)*paVar7 + 1);
      UNLOCK();
    }
    pTVar5[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[2]._padding_ = 0;
    pTVar5[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[3]._padding_ = 0;
    pTVar5[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[4]._padding_ = 0;
    pTVar5[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[5]._padding_ = 0;
    pTVar5[1]._padding_ =
         (longlong)
         &
         ___7__FModelInstanceORTRunSync_VIModelInstanceCPU_NNE_UE__UFTensorBindingCPU_23__Private_NNERuntimeORT_UE__6B_
    ;
    pTVar5[5].SharedReferenceCount = (atomic<int>)param_1->ExecutionMode;
    pTVar5[6]._padding_ = 0;
    pTVar5[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[6].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[7]._padding_ = (longlong)pFVar1;
    *(TReferenceControllerBase<1> **)&pTVar5[7].SharedReferenceCount = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar7 = (atomic<int>)((int)*paVar7 + 1);
      UNLOCK();
    }
    pTVar5[8]._padding_ = 0;
    pTVar5[8].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[8].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[9]._padding_ = 0;
    pTVar5[9].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[9].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[10]._padding_ = 0;
    pTVar5[10].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[10].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[0xb]._padding_ = 0;
    pTVar5[0xb].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[0xb].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[0xc]._padding_ = 0;
    pTVar5[0xc].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[0xc].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[0xd]._padding_ = 0;
    pTVar5[0xd].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[0xd].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[0xe]._padding_ = 0;
    pTVar5[0xe].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[0xe].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[0xf]._padding_ = 0;
    pTVar5[0xf].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[0xf].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[0x10]._padding_ = 0;
    pTVar5[0x10].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[0x10].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[0x11]._padding_ = 0;
    pTVar5[0x11].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[0x11].WeakReferenceCount = (atomic<int>)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pTVar5[1]._padding_ = (longlong)&___7FModelInstanceORTCpu_Private_NNERuntimeORT_UE__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar5;
    __return_storage_ptr__->Object = (FModelInstanceORTCpu *)(pTVar5 + 1);
    if ((FModelInstanceORTCpu *)(pTVar5 + 1) == (FModelInstanceORTCpu *)0x0) {
      bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TSharedRef<UE::NNERuntimeORT::Private::FModelInstanceORTCpu,1> *)(*pcVar3)();
        return pTVar6;
      }
    }
  }
  return __return_storage_ptr__;
}

// MakeShared<UE::NNERuntimeORT::Private::FModelInstanceORTDmlGPU,1,UE::NNERuntimeORT::Private::FRuntimeConf_const_&,TSharedRef<UE::NNERuntimeORT::Private::FEnvironment,1>_&> @ 14eb04360

TSharedRef<UE::NNERuntimeORT::Private::FModelInstanceORTDmlGPU,1> * __cdecl
MakeShared<UE::NNERuntimeORT::Private::FModelInstanceORTDmlGPU,1,UE::NNERuntimeORT::Private::FRuntimeConf_const_&,TSharedRef<UE::NNERuntimeORT::Private::FEnvironment,1>_&>
          (TSharedRef<UE::NNERuntimeORT::Private::FModelInstanceORTDmlGPU,1> *__return_storage_ptr__
          ,FRuntimeConf *param_1,TSharedRef<UE::NNERuntimeORT::Private::FEnvironment,1> *param_2)

{
  FEnvironment *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TReferenceControllerBase<1> *pTVar5;
  TSharedRef<UE::NNERuntimeORT::Private::FModelInstanceORTDmlGPU,1> *pTVar6;
  atomic<int> *paVar7;
  
  pTVar5 = operator_new(0x120);
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FModelInstanceORTDmlGPU *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFModelInstanceORTDmlGPU_Private_NNERuntimeORT_UE___00_SharedPointerInternals__6B_
    ;
    pFVar1 = param_2->Object;
    pTVar2 = (param_2->SharedReferenceCount).ReferenceController;
    if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
      paVar7 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar7 = &pTVar2->SharedReferenceCount;
      LOCK();
      *paVar7 = (atomic<int>)((int)*paVar7 + 1);
      UNLOCK();
      LOCK();
      *paVar7 = (atomic<int>)((int)*paVar7 + 1);
      UNLOCK();
    }
    pTVar5[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[2]._padding_ = 0;
    pTVar5[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[3]._padding_ = 0;
    pTVar5[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[4]._padding_ = 0;
    pTVar5[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[5]._padding_ = 0;
    pTVar5[1]._padding_ =
         (longlong)
         &
         ___7__FModelInstanceORTRunSync_VIModelInstanceGPU_NNE_UE__UFTensorBindingCPU_23__Private_NNERuntimeORT_UE__6B_
    ;
    pTVar5[5].SharedReferenceCount = (atomic<int>)param_1->ExecutionMode;
    pTVar5[6]._padding_ = 0;
    pTVar5[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[6].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[7]._padding_ = (longlong)pFVar1;
    *(TReferenceControllerBase<1> **)&pTVar5[7].SharedReferenceCount = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar7 = (atomic<int>)((int)*paVar7 + 1);
      UNLOCK();
    }
    pTVar5[8]._padding_ = 0;
    pTVar5[8].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[8].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[9]._padding_ = 0;
    pTVar5[9].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[9].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[10]._padding_ = 0;
    pTVar5[10].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[10].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[0xb]._padding_ = 0;
    pTVar5[0xb].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[0xb].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[0xc]._padding_ = 0;
    pTVar5[0xc].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[0xc].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[0xd]._padding_ = 0;
    pTVar5[0xd].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[0xd].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[0xe]._padding_ = 0;
    pTVar5[0xe].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[0xe].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[0xf]._padding_ = 0;
    pTVar5[0xf].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[0xf].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[0x10]._padding_ = 0;
    pTVar5[0x10].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[0x10].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[0x11]._padding_ = 0;
    pTVar5[0x11].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[0x11].WeakReferenceCount = (atomic<int>)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pTVar5[1]._padding_ = (longlong)&___7FModelInstanceORTDmlGPU_Private_NNERuntimeORT_UE__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar5;
    __return_storage_ptr__->Object = (FModelInstanceORTDmlGPU *)(pTVar5 + 1);
    if ((FModelInstanceORTDmlGPU *)(pTVar5 + 1) == (FModelInstanceORTDmlGPU *)0x0) {
      bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TSharedRef<UE::NNERuntimeORT::Private::FModelInstanceORTDmlGPU,1> *)(*pcVar3)();
        return pTVar6;
      }
    }
  }
  return __return_storage_ptr__;
}

// MakeShared<UE::NNERuntimeORT::Private::FModelInstanceORTNpu,1,UE::NNERuntimeORT::Private::FRuntimeConf_const_&,TSharedRef<UE::NNERuntimeORT::Private::FEnvironment,1>_&> @ 14eb04520

TSharedRef<UE::NNERuntimeORT::Private::FModelInstanceORTNpu,1> * __cdecl
MakeShared<UE::NNERuntimeORT::Private::FModelInstanceORTNpu,1,UE::NNERuntimeORT::Private::FRuntimeConf_const_&,TSharedRef<UE::NNERuntimeORT::Private::FEnvironment,1>_&>
          (TSharedRef<UE::NNERuntimeORT::Private::FModelInstanceORTNpu,1> *__return_storage_ptr__,
          FRuntimeConf *param_1,TSharedRef<UE::NNERuntimeORT::Private::FEnvironment,1> *param_2)

{
  FEnvironment *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TReferenceControllerBase<1> *pTVar5;
  TSharedRef<UE::NNERuntimeORT::Private::FModelInstanceORTNpu,1> *pTVar6;
  atomic<int> *paVar7;
  
  pTVar5 = operator_new(0x120);
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FModelInstanceORTNpu *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFModelInstanceORTNpu_Private_NNERuntimeORT_UE___00_SharedPointerInternals__6B_
    ;
    pFVar1 = param_2->Object;
    pTVar2 = (param_2->SharedReferenceCount).ReferenceController;
    if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
      paVar7 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar7 = &pTVar2->SharedReferenceCount;
      LOCK();
      *paVar7 = (atomic<int>)((int)*paVar7 + 1);
      UNLOCK();
      LOCK();
      *paVar7 = (atomic<int>)((int)*paVar7 + 1);
      UNLOCK();
    }
    pTVar5[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[2]._padding_ = 0;
    pTVar5[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[3]._padding_ = 0;
    pTVar5[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[4]._padding_ = 0;
    pTVar5[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[5]._padding_ = 0;
    pTVar5[1]._padding_ =
         (longlong)
         &
         ___7__FModelInstanceORTRunSync_VIModelInstanceNPU_NNE_UE__UFTensorBindingCPU_23__Private_NNERuntimeORT_UE__6B_
    ;
    pTVar5[5].SharedReferenceCount = (atomic<int>)param_1->ExecutionMode;
    pTVar5[6]._padding_ = 0;
    pTVar5[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[6].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[7]._padding_ = (longlong)pFVar1;
    *(TReferenceControllerBase<1> **)&pTVar5[7].SharedReferenceCount = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar7 = (atomic<int>)((int)*paVar7 + 1);
      UNLOCK();
    }
    pTVar5[8]._padding_ = 0;
    pTVar5[8].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[8].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[9]._padding_ = 0;
    pTVar5[9].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[9].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[10]._padding_ = 0;
    pTVar5[10].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[10].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[0xb]._padding_ = 0;
    pTVar5[0xb].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[0xb].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[0xc]._padding_ = 0;
    pTVar5[0xc].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[0xc].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[0xd]._padding_ = 0;
    pTVar5[0xd].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[0xd].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[0xe]._padding_ = 0;
    pTVar5[0xe].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[0xe].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[0xf]._padding_ = 0;
    pTVar5[0xf].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[0xf].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[0x10]._padding_ = 0;
    pTVar5[0x10].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[0x10].WeakReferenceCount = (atomic<int>)0x0;
    pTVar5[0x11]._padding_ = 0;
    pTVar5[0x11].SharedReferenceCount = (atomic<int>)0x0;
    pTVar5[0x11].WeakReferenceCount = (atomic<int>)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pTVar5[1]._padding_ = (longlong)&___7FModelInstanceORTNpu_Private_NNERuntimeORT_UE__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar5;
    __return_storage_ptr__->Object = (FModelInstanceORTNpu *)(pTVar5 + 1);
    if ((FModelInstanceORTNpu *)(pTVar5 + 1) == (FModelInstanceORTNpu *)0x0) {
      bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TSharedRef<UE::NNERuntimeORT::Private::FModelInstanceORTNpu,1> *)(*pcVar3)();
        return pTVar6;
      }
    }
  }
  return __return_storage_ptr__;
}

// NewObject<UNNERuntimeORTCpu> @ 14eb046e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UNNERuntimeORTCpu * __cdecl NewObject<UNNERuntimeORTCpu>(UObject *param_1)

{
  UClass *pUVar1;
  UNNERuntimeORTCpu *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UNNERuntimeORTCpu::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UNNERuntimeORTCpu *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UNNERuntimeORTDml_GPU> @ 14eb04780

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UNNERuntimeORTDml_GPU * __cdecl NewObject<UNNERuntimeORTDml_GPU>(UObject *param_1)

{
  UClass *pUVar1;
  UNNERuntimeORTDml_GPU *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UNNERuntimeORTDml_GPU::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UNNERuntimeORTDml_GPU *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UNNERuntimeORTDml_GPU_NPU> @ 14eb04820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UNNERuntimeORTDml_GPU_NPU * __cdecl NewObject<UNNERuntimeORTDml_GPU_NPU>(UObject *param_1)

{
  UClass *pUVar1;
  UNNERuntimeORTDml_GPU_NPU *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UNNERuntimeORTDml_GPU_NPU::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UNNERuntimeORTDml_GPU_NPU *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UNNERuntimeORTDml_GPU_RDG> @ 14eb048c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UNNERuntimeORTDml_GPU_RDG * __cdecl NewObject<UNNERuntimeORTDml_GPU_RDG>(UObject *param_1)

{
  UClass *pUVar1;
  UNNERuntimeORTDml_GPU_RDG *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UNNERuntimeORTDml_GPU_RDG::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UNNERuntimeORTDml_GPU_RDG *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UNNERuntimeORTDml_GPU_RDG_NPU> @ 14eb04960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UNNERuntimeORTDml_GPU_RDG_NPU * __cdecl NewObject<UNNERuntimeORTDml_GPU_RDG_NPU>(UObject *param_1)

{
  UClass *pUVar1;
  UNNERuntimeORTDml_GPU_RDG_NPU *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UNNERuntimeORTDml_GPU_RDG_NPU::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UNNERuntimeORTDml_GPU_RDG_NPU *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UNNERuntimeORTDml_NPU> @ 14eb04a00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UNNERuntimeORTDml_NPU * __cdecl NewObject<UNNERuntimeORTDml_NPU>(UObject *param_1)

{
  UClass *pUVar1;
  UNNERuntimeORTDml_NPU *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UNNERuntimeORTDml_NPU::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UNNERuntimeORTDml_NPU *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UNNERuntimeORTDml_RDG> @ 14eb04aa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UNNERuntimeORTDml_RDG * __cdecl NewObject<UNNERuntimeORTDml_RDG>(UObject *param_1)

{
  UClass *pUVar1;
  UNNERuntimeORTDml_RDG *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UNNERuntimeORTDml_RDG::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UNNERuntimeORTDml_RDG *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UNNERuntimeORTDml_RDG_NPU> @ 14eb04b40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UNNERuntimeORTDml_RDG_NPU * __cdecl NewObject<UNNERuntimeORTDml_RDG_NPU>(UObject *param_1)

{
  UClass *pUVar1;
  UNNERuntimeORTDml_RDG_NPU *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UNNERuntimeORTDml_RDG_NPU::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UNNERuntimeORTDml_RDG_NPU *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// StaticEnum<enum_EExecutionMode> @ 14eb05370

UEnum * __cdecl StaticEnum<enum_EExecutionMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EExecutionMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_NNERuntimeORT();
    Z_Registration_Info_UEnum_EExecutionMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_NNERuntimeORT_EExecutionMode,(UObject *)pUVar1,
                       L"EExecutionMode");
  }
  return Z_Registration_Info_UEnum_EExecutionMode.OuterSingleton;
}

// _Fill_zero_memset<__int64_*> @ 14eb053b0

void __cdecl std::_Fill_zero_memset<__int64_*>(long64 *param_1,ulong64 param_2)

{
  memset(param_1,0,param_2 * 8);
  return;
}

// _Is_all_bits_zero<__int64> @ 14eb053d0

bool __cdecl std::_Is_all_bits_zero<__int64>(long64 *param_1)

{
  return *param_1 == 0;
}

// <lambda_1> @ 14eb053e0

<lambda_1> * __thiscall
```UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::EnqueueRDG'::__l2::<lambda_2>::operator()'::
__l2::<lambda_1>::operator()'::__l2::<lambda_1>::<lambda_1>(void *this,<lambda_1> *param_1)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  FTensor *pFVar4;
  FScriptContainerElement *pFVar5;
  
  *(FProxy **)this = (param_1->Proxy).Object;
  pTVar3 = (param_1->Proxy).SharedReferenceCount.ReferenceController;
  *(TReferenceControllerBase<1> **)((longlong)this + 8) = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar1 = (ForAnyElementType *)((longlong)this + 0x10);
  pFVar1->Data = (FScriptContainerElement *)0x0;
  iVar2 = (param_1->InputTensors).ArrayNum;
  pFVar4 = (FTensor *)(param_1->InputTensors).AllocatorInstance.Data;
  *(int *)((longlong)this + 0x18) = iVar2;
  if (iVar2 == 0) {
    *(int *)((longlong)this + 0x1c) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,iVar2,0,pFVar1,iVar2,(int *)((longlong)this + 0x1c));
    ConstructItems<UE::NNERuntimeORT::Private::FTensor,UE::NNERuntimeORT::Private::FTensor,int>
              (pFVar1->Data,pFVar4,iVar2);
  }
  pFVar1 = (ForAnyElementType *)((longlong)this + 0x20);
  pFVar1->Data = (FScriptContainerElement *)0x0;
  iVar2 = (param_1->InputBuffers).ArrayNum;
  pFVar5 = (param_1->InputBuffers).AllocatorInstance.Data;
  *(int *)((longlong)this + 0x28) = iVar2;
  if (iVar2 == 0) {
    *(int *)((longlong)this + 0x2c) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar2,0,pFVar1,iVar2,(int *)((longlong)this + 0x2c));
    memcpy(pFVar1->Data,pFVar5,(longlong)iVar2 << 3);
  }
  pFVar1 = (ForAnyElementType *)((longlong)this + 0x30);
  pFVar1->Data = (FScriptContainerElement *)0x0;
  iVar2 = (param_1->OutputBuffers).ArrayNum;
  pFVar5 = (param_1->OutputBuffers).AllocatorInstance.Data;
  *(int *)((longlong)this + 0x38) = iVar2;
  if (iVar2 == 0) {
    *(int *)((longlong)this + 0x3c) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar2,0,pFVar1,iVar2,(int *)((longlong)this + 0x3c));
    memcpy(pFVar1->Data,pFVar5,(longlong)iVar2 << 3);
  }
  return this;
}

// <lambda_1> @ 14eb05530

<lambda_1> * __thiscall
``UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::SetInputTensorShapes_RenderThread'::__l2::
<lambda_1>::operator()'::__l2::<lambda_1>::<lambda_1>(void *this,<lambda_1> *param_1)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  FScriptContainerElement *pFVar4;
  
  *(FProxy **)this = (param_1->Proxy).Object;
  pTVar3 = (param_1->Proxy).SharedReferenceCount.ReferenceController;
  *(TReferenceControllerBase<1> **)((longlong)this + 8) = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar1 = (ForAnyElementType *)((longlong)this + 0x10);
  pFVar1->Data = (FScriptContainerElement *)0x0;
  iVar2 = (param_1->InputTensorShapes).ArrayNum;
  pFVar4 = (param_1->InputTensorShapes).AllocatorInstance.Data;
  *(int *)((longlong)this + 0x18) = iVar2;
  if (iVar2 == 0) {
    *(int *)((longlong)this + 0x1c) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,iVar2,0,pFVar1,iVar2,(int *)((longlong)this + 0x1c));
    ConstructItems<UE::NNE::FTensorShape,UE::NNE::FTensorShape,int>
              (pFVar1->Data,(FTensorShape *)pFVar4,iVar2);
  }
  return this;
}

// ~TFunction_OwnedObject<```UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::EnqueueRDG'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,1> @ 14eb06ba0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::EnqueueRDG'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<___UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::EnqueueRDG_::__l2::<lambda_2>::operator()_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<```UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::EnqueueRDG'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  if (*(void **)((longlong)this + 0x38) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x38));
  }
  if (*(void **)((longlong)this + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x28));
  }
  DestructItems<UE::NNERuntimeORT::Private::FTensor,int>
            (*(FTensor **)((longlong)this + 0x18),*(int *)((longlong)this + 0x20));
  if (*(void **)((longlong)this + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x18));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<``UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::SetInputTensorShapes_RenderThread'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,1> @ 14eb06c00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::SetInputTensorShapes_RenderThread'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,1>
::
~TFunction_OwnedObject<__UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::SetInputTensorShapes_RenderThread_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::SetInputTensorShapes_RenderThread'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  DestructItems<UE::NNE::FTensorShape,int>
            (*(FTensorShape **)((longlong)this + 0x18),*(int *)((longlong)this + 0x20));
  if (*(void **)((longlong)this + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x18));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::SetInputTensorShapes'::__l7::<lambda_1>,1,1> @ 14eb06c50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::SetInputTensorShapes'::__l7::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::SetInputTensorShapes_::__l7::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::SetInputTensorShapes'::`7'::<lambda_1>,1,1>
        ::_vftable_;
  return;
}

// operator() @ 14eb07770

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "OrtMemType": Some values do not have unique names */

void __thiscall
```UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::EnqueueRDG'::__l2::<lambda_2>::operator()'::
__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()(void *this,ID3D12CommandQueue *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  char **ppcVar5;
  code *pcVar6;
  ForAnyElementType FVar7;
  ForAnyElementType FVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  OrtStatus *pOVar13;
  Value VVar14;
  longlong lVar15;
  FStaticBasicLogRecord *pFVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  bool bVar21;
  OrtMemoryInfo *local_res8;
  longlong local_res18;
  longlong local_res20;
  ForAnyElementType in_stack_ffffffffffffff50;
  longlong local_88;
  MemoryInfo *local_80;
  undefined1 local_78 [16];
  ForAnyElementType local_68;
  undefined8 local_60;
  ForAnyElementType local_58;
  undefined8 local_50;
  unique_ptr<void,void_(__cdecl*)(void_*)> *local_48;
  undefined8 local_40;
  
  FGenericPlatformMisc::BeginNamedEvent
            (&FColor::Magenta,"FModelInstanceORTDmlRDG::EnqueueRDG.AddPass RHIRunOnQueue");
  bVar21 = -1 < CpuChannel->Enabled;
  if (bVar21) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1093,
               "FModelInstanceORTDmlRDG::EnqueueRDG.AddPass RHIRunOnQueue",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNERuntimeORT\\Source\\NNERuntimeORT\\Private\\NNERuntimeORTModel.cpp"
               ,0x445);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1093);
  }
  if ((*(longlong *)this == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (*(longlong *)(*(longlong *)this + 0x38) == 0) {
    if (1 < (byte)LogNNERuntimeORT._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNNERuntimeORT);
    }
  }
  else {
    pOVar13 = (*Ort::Global<void>::api_->GetExecutionProviderApi)("DML",0x14,&local_80);
    Ort::ThrowOnError(pOVar13);
    uVar18 = 0;
    local_res8 = (OrtMemoryInfo *)0x0;
    pOVar13 = (*Ort::Global<void>::api_->CreateMemoryInfo)
                        ("DML",OrtDeviceAllocator,0,OrtMemTypeDefault,&local_res8);
    Ort::ThrowOnError(pOVar13);
    local_48 = (unique_ptr<void,void_(__cdecl*)(void_*)> *)0x0;
    local_40 = 0;
    local_58.Data = (FScriptContainerElement *)0x0;
    local_50 = (_func___cdecl_OrtStatus_ptr_OrtSessionOptions_ptr_OrtDmlDeviceOptions_ptr *)0x0;
    local_68.Data = (FScriptContainerElement *)0x0;
    local_60 = (_func___cdecl_OrtStatus_ptr_void_ptr *)0x0;
    if (0 < *(int *)((longlong)this + 0x28)) {
      local_88 = 0;
      local_res18 = 0;
      local_res20 = 0;
      uVar17 = uVar18;
      do {
        iVar12 = SUB84(in_stack_ffffffffffffff50.Data,4);
        uVar19 = ~uVar17 >> 0x1f;
        uVar10 = 0;
        uVar20 = uVar10;
        if ((int)uVar17 < *(int *)((longlong)this + 0x18)) {
          uVar20 = uVar19;
        }
        if ((uVar20 == 0) &&
           (iVar12 = *(int *)((longlong)this + 0x18) >> 0x1f,
           bVar9 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar15 = *(longlong *)(*(longlong *)((longlong)this + 0x10) + 0x30 + local_res20);
        uVar20 = uVar10;
        if ((int)uVar17 < *(int *)((longlong)this + 0x28)) {
          uVar20 = uVar19;
        }
        if ((uVar20 == 0) &&
           (iVar12 = *(int *)((longlong)this + 0x28) >> 0x1f,
           bVar9 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar20 = 0;
        if (*(longlong *)(local_88 + *(longlong *)((longlong)this + 0x20)) != 0) {
          uVar11 = uVar20;
          if ((int)uVar17 < *(int *)((longlong)this + 0x28)) {
            uVar11 = uVar19;
          }
          if ((uVar11 == 0) &&
             (iVar12 = *(int *)((longlong)this + 0x28) >> 0x1f,
             bVar9 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if ((ulonglong)
              *(uint *)(*(longlong *)(*(longlong *)((longlong)this + 0x20) + local_88) + 0xd8) <
              (lVar15 + 3U & 0xfffffffffffffffc)) {
            if ((byte)LogNNERuntimeORT._0_1_ < 2) goto LAB_14eb082f7;
            if ((int)uVar17 < *(int *)((longlong)this + 0x18)) {
              uVar20 = uVar19;
            }
            if ((uVar20 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            uVar18 = 0;
            if ((int)uVar17 < *(int *)((longlong)this + 0x28)) {
              uVar18 = uVar19;
            }
            if ((uVar18 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pFVar16 = &::LOG_Static;
            goto LAB_14eb0849b;
          }
        }
        if ((*(longlong *)this == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar15 = *(longlong *)this;
        iVar1 = *(int *)(lVar15 + 0x78);
        if ((int)uVar17 < iVar1) {
          uVar20 = uVar19;
        }
        if ((uVar20 == 0) &&
           (iVar12 = iVar1 >> 0x1f,
           bVar9 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar2 = *(undefined4 *)(local_res18 + *(longlong *)(lVar15 + 0x70));
        uVar20 = uVar10;
        if ((int)uVar17 < *(int *)((longlong)this + 0x18)) {
          uVar20 = uVar19;
        }
        if ((uVar20 == 0) &&
           (iVar12 = *(int *)((longlong)this + 0x18) >> 0x1f,
           bVar9 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar3 = *(undefined8 *)((longlong)this + 0x10);
        if ((int)uVar17 < *(int *)((longlong)this + 0x28)) {
          uVar10 = uVar19;
        }
        if ((uVar10 == 0) &&
           (iVar12 = *(int *)((longlong)this + 0x28) >> 0x1f,
           bVar9 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        in_stack_ffffffffffffff50.Data._4_4_ = iVar12;
        in_stack_ffffffffffffff50.Data._0_4_ = uVar2;
        VVar14 = UE::NNERuntimeORT::Private::CreateTensor
                           ((OrtDmlApi *)local_78,local_80,(FRHIBuffer *)&local_res8,
                            *(FTensor **)(*(longlong *)((longlong)this + 0x20) + local_88),
                            uVar17 * 0x38 + (int)uVar3,
                            (TArray<std::unique_ptr<void,void_(__cdecl*)(void_*)>,TSizedDefaultAllocator<32>_>
                             *)in_stack_ffffffffffffff50.Data);
        if (((local_58.Data <= (ulonglong)VVar14) &&
            ((ulonglong)VVar14 < (ulonglong)((longlong)local_58.Data + (longlong)local_50._4_4_ * 8)
            )) && (in_stack_ffffffffffffff50.Data = local_58.Data,
                  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar12 = (int)local_50;
        if ((int)local_50 == local_50._4_4_) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&local_58,(int *)((longlong)&local_50 + 4));
        }
        local_50 = (_func___cdecl_OrtStatus_ptr_OrtSessionOptions_ptr_OrtDmlDeviceOptions_ptr *)
                   CONCAT44(local_50._4_4_,iVar12 + 1);
        *(undefined8 *)(local_58.Data + (longlong)iVar12 * 8) = *(undefined8 *)VVar14;
        *(undefined8 *)VVar14 = 0;
        (*Ort::Global<void>::api_->ReleaseValue)((OrtValue *)local_78._0_8_);
        local_88 = local_88 + 8;
        local_res18 = local_res18 + 4;
        local_res20 = local_res20 + 0x38;
        uVar17 = uVar17 + 1;
      } while ((int)uVar17 < *(int *)((longlong)this + 0x28));
    }
    if (0 < *(int *)((longlong)this + 0x38)) {
      local_88 = 0;
      local_res20 = 0;
      local_res18 = 0;
      do {
        if ((*(longlong *)this == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar15 = *(longlong *)this;
        uVar20 = ~uVar18 >> 0x1f;
        iVar12 = *(int *)(lVar15 + 0xf8);
        VVar14 = (Value)(longlong)iVar12;
        uVar17 = 0;
        if ((int)uVar18 < iVar12) {
          uVar17 = uVar20;
        }
        if ((uVar17 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , in_stack_ffffffffffffff50.Data = (FScriptContainerElement *)VVar14, bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        VVar14 = (Value)(longlong)*(int *)((longlong)this + 0x38);
        lVar15 = *(longlong *)(*(longlong *)(lVar15 + 0xf0) + 0x30 + local_res18);
        uVar17 = 0;
        if ((int)uVar18 < *(int *)((longlong)this + 0x38)) {
          uVar17 = uVar20;
        }
        if ((uVar17 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , in_stack_ffffffffffffff50.Data = (FScriptContainerElement *)VVar14, bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar17 = 0;
        if (*(longlong *)(local_88 + *(longlong *)((longlong)this + 0x30)) != 0) {
          VVar14 = (Value)(longlong)*(int *)((longlong)this + 0x38);
          uVar10 = uVar17;
          if ((int)uVar18 < *(int *)((longlong)this + 0x38)) {
            uVar10 = uVar20;
          }
          if ((uVar10 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             in_stack_ffffffffffffff50.Data = (FScriptContainerElement *)VVar14, bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if ((ulonglong)
              *(uint *)(*(longlong *)(*(longlong *)((longlong)this + 0x30) + local_88) + 0xd8) <
              (lVar15 + 3U & 0xfffffffffffffffc)) {
            if (1 < (byte)LogNNERuntimeORT._0_1_) {
              if ((*(longlong *)this == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar9)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              uVar17 = 0;
              if ((int)uVar18 < *(int *)(*(longlong *)this + 0xf8)) {
                uVar17 = uVar20;
              }
              if ((uVar17 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              uVar17 = 0;
              if ((int)uVar18 < *(int *)((longlong)this + 0x38)) {
                uVar17 = uVar20;
              }
              if ((uVar17 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              pFVar16 = &::LOG_Static;
LAB_14eb0849b:
              UE::Logging::Private::BasicLog<2>(pFVar16,(FLogCategoryBase *)&LogNNERuntimeORT);
            }
            goto LAB_14eb082f7;
          }
        }
        VVar14 = (Value)(longlong)*(int *)((longlong)this + 0x38);
        uVar10 = uVar17;
        if ((int)uVar18 < *(int *)((longlong)this + 0x38)) {
          uVar10 = uVar20;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , in_stack_ffffffffffffff50.Data = (FScriptContainerElement *)VVar14, bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar12 = SUB84(in_stack_ffffffffffffff50.Data,4);
        if (*(longlong *)(local_88 + *(longlong *)((longlong)this + 0x30)) == 0) {
          if ((int)local_60 == local_60._4_4_) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&local_68,(int *)((longlong)&local_60 + 4));
            local_60 = (_func___cdecl_OrtStatus_ptr_void_ptr *)CONCAT44(local_60._4_4_,iVar12);
          }
          lVar15 = (longlong)(int)local_60;
          local_60 = (_func___cdecl_OrtStatus_ptr_void_ptr *)
                     CONCAT44(local_60._4_4_,(int)local_60 + 1);
          *(undefined8 *)(local_68.Data + lVar15 * 8) = 0;
        }
        else {
          if ((*(longlong *)this == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          lVar15 = *(longlong *)this;
          iVar1 = *(int *)(lVar15 + 0x88);
          if ((int)uVar18 < iVar1) {
            uVar17 = uVar20;
          }
          if ((uVar17 == 0) &&
             (iVar12 = iVar1 >> 0x1f,
             bVar9 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar2 = *(undefined4 *)(local_res20 + *(longlong *)(lVar15 + 0x80));
          if ((*(longlong *)this == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          lVar15 = *(longlong *)this;
          iVar1 = *(int *)(lVar15 + 0xf8);
          uVar17 = 0;
          if ((int)uVar18 < iVar1) {
            uVar17 = uVar20;
          }
          if ((uVar17 == 0) &&
             (iVar12 = iVar1 >> 0x1f,
             bVar9 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar3 = *(undefined8 *)(lVar15 + 0xf0);
          uVar17 = 0;
          if ((int)uVar18 < *(int *)((longlong)this + 0x38)) {
            uVar17 = uVar20;
          }
          if ((uVar17 == 0) &&
             (iVar12 = *(int *)((longlong)this + 0x38) >> 0x1f,
             bVar9 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          in_stack_ffffffffffffff50.Data._4_4_ = iVar12;
          in_stack_ffffffffffffff50.Data._0_4_ = uVar2;
          VVar14 = UE::NNERuntimeORT::Private::CreateTensor
                             ((OrtDmlApi *)(local_78 + 8),local_80,(FRHIBuffer *)&local_res8,
                              *(FTensor **)(*(longlong *)((longlong)this + 0x30) + local_88),
                              uVar18 * 0x38 + (int)uVar3,
                              (TArray<std::unique_ptr<void,void_(__cdecl*)(void_*)>,TSizedDefaultAllocator<32>_>
                               *)in_stack_ffffffffffffff50.Data);
          if (((local_68.Data <= (ulonglong)VVar14) &&
              ((ulonglong)VVar14 <
               (ulonglong)((longlong)local_68.Data + (longlong)local_60._4_4_ * 8))) &&
             (in_stack_ffffffffffffff50.Data = local_68.Data,
             bVar9 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar12 = (int)local_60;
          if ((int)local_60 == local_60._4_4_) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&local_68,(int *)((longlong)&local_60 + 4));
          }
          local_60 = (_func___cdecl_OrtStatus_ptr_void_ptr *)CONCAT44(local_60._4_4_,iVar12 + 1);
          *(undefined8 *)(local_68.Data + (longlong)iVar12 * 8) = *(undefined8 *)VVar14;
          *(undefined8 *)VVar14 = 0;
          (*Ort::Global<void>::api_->ReleaseValue)((OrtValue *)local_78._8_8_);
        }
        local_res18 = local_res18 + 0x38;
        local_88 = local_88 + 8;
        local_res20 = local_res20 + 4;
        uVar18 = uVar18 + 1;
      } while ((int)uVar18 < *(int *)((longlong)this + 0x38));
    }
    if ((*(longlong *)this == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    puVar4 = *(undefined8 **)(*(longlong *)this + 0x38);
    if ((*(longlong *)this == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar12 = *(int *)(*(longlong *)this + 200);
    if (((int)local_60 < 1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    FVar7.Data = local_68.Data;
    if ((*(longlong *)this == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    ppcVar5 = *(char ***)(*(longlong *)this + 0xc0);
    if ((*(longlong *)this == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar1 = *(int *)(*(longlong *)this + 0xb8);
    if (((int)local_50 < 1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    FVar8.Data = local_58.Data;
    if ((*(longlong *)this == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pOVar13 = (*Ort::Global<void>::api_->Run)
                        ((OrtSession *)*puVar4,(OrtRunOptions *)0x0,
                         *(char ***)(*(longlong *)this + 0xb0),(OrtValue **)FVar8.Data,
                         (longlong)iVar1,ppcVar5,(longlong)iVar12,(OrtValue **)FVar7.Data);
    Ort::ThrowOnError(pOVar13);
    (*Ort::Global<void>::api_->ReleaseRunOptions)((OrtRunOptions *)0x0);
LAB_14eb082f7:
    DestructItems<Ort::Value,int>((Value *)local_68.Data,(int)local_60);
    if ((Value)local_68.Data != (Value)0x0) {
      FMemory::Free(local_68.Data);
    }
    DestructItems<Ort::Value,int>((Value *)local_58.Data,(int)local_50);
    if ((Value)local_58.Data != (Value)0x0) {
      FMemory::Free(local_58.Data);
    }
    DestructItems<std::unique_ptr<void,void_(__cdecl*)(void_*)>,int>(local_48,(int)local_40);
    if (local_48 != (unique_ptr<void,void_(__cdecl*)(void_*)> *)0x0) {
      FMemory::Free(local_48);
    }
    (*Ort::Global<void>::api_->ReleaseMemoryInfo)(local_res8);
  }
  if (bVar21) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// operator() @ 14eb084c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "OrtMemType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
``UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::SetInputTensorShapes_RenderThread'::__l2::
<lambda_1>::operator()'::__l2::<lambda_1>::operator()(void *this,ID3D12CommandQueue *param_1)

{
  uchar *puVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  wchar_t wVar2;
  SessionOptions SVar3;
  longlong lVar4;
  FEnvironment *pFVar5;
  int *piVar6;
  code *pcVar7;
  longlong lVar8;
  ENNETensorDataType EVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  TUniquePtr<Ort::SessionOptions,TDefaultDelete<Ort::SessionOptions>_> TVar13;
  OrtStatus *pOVar14;
  size_t sVar15;
  TArrayView<unsigned_char_const_,__int64> *pTVar16;
  FTensorShape *pFVar17;
  ulong64 uVar18;
  uint *puVar19;
  SessionOptions *pSVar20;
  uint uVar21;
  ForElementType<int> FVar22;
  longlong lVar23;
  longlong *plVar24;
  ForAnyElementType *pFVar25;
  uint uVar26;
  uint uVar27;
  ForElementType<int> FVar28;
  ForAnyElementType FVar29;
  FString *pFVar30;
  int *piVar31;
  ForElementType<unsigned_int> FVar32;
  FScriptContainerElement *pFVar33;
  longlong lVar34;
  ulonglong uVar35;
  wchar_t *_Str;
  ForElementType<unsigned_int> FVar36;
  ulonglong uVar37;
  bool bVar38;
  undefined1 auStackY_328 [32];
  ForAnyElementType local_2e0;
  undefined8 local_2d8;
  uint local_2d0;
  longlong local_2c8;
  longlong local_2c0;
  longlong local_2b8;
  longlong local_2b0;
  longlong *local_2a8;
  int local_2a0;
  uint local_29c;
  uint local_298;
  longlong local_290;
  longlong local_288;
  TSharedRef<UE::NNERuntimeORT::Private::FEnvironment,1> local_280;
  _func___cdecl_OrtStatus_ptr_OrtSessionOptions_ptr_char_ptr_long64 *local_270;
  TArrayView<unsigned_char_const_,__int64> local_268;
  TArrayView<unsigned_char_const_,__int64> local_258;
  FString local_248;
  ENNETensorDataType local_238;
  FSymbolicTensorShape local_230;
  FString local_1f8;
  ENNETensorDataType local_1e8;
  FSymbolicTensorShape local_1e0;
  FTensorShape local_1a8;
  longlong local_178;
  FTensorShape local_170;
  longlong local_140;
  FScriptContainerElement local_138 [128];
  ForAnyElementType local_b8;
  FScriptContainerElement *local_b0;
  int local_a8;
  FTensorShape local_98;
  FTensorShape local_68;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_328;
  local_2a8 = this;
  FGenericPlatformMisc::BeginNamedEvent
            (&FColor::Magenta,"FModelInstanceORTDmlRDG::SetInputTensorShapes RHIRunOnQueue");
  bVar38 = -1 < CpuChannel->Enabled;
  if (bVar38) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId864,
               "FModelInstanceORTDmlRDG::SetInputTensorShapes RHIRunOnQueue",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNERuntimeORT\\Source\\NNERuntimeORT\\Private\\NNERuntimeORTModel.cpp"
               ,0x360);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId864);
  }
  if ((*(longlong *)this == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  TArray<UE::NNERuntimeORT::Private::FTensor,TSizedDefaultAllocator<32>_>::Reset
            ((TArray<UE::NNERuntimeORT::Private::FTensor,TSizedDefaultAllocator<32>_> *)
             (*(longlong *)this + 0xf0),0);
  uVar26 = 0;
  local_2e0.Data = (FScriptContainerElement *)0x0;
  local_2d8 = 0;
  while( true ) {
    if ((*(longlong *)this == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if (*(int *)(*(longlong *)this + 0x58) <= (int)uVar26) {
      uVar35 = 0;
      uVar37 = uVar35;
      goto LAB_14eb09561;
    }
    if ((*(longlong *)this == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    lVar34 = *(longlong *)this;
    uVar27 = 0;
    if ((int)uVar26 < *(int *)(lVar34 + 0x58)) {
      uVar27 = ~uVar26 >> 0x1f;
    }
    if ((uVar27 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    bVar10 = UE::NNE::FSymbolicTensorShape::IsConcrete
                       ((FSymbolicTensorShape *)
                        (*(longlong *)(lVar34 + 0x50) + ((longlong)(int)uVar26 * 9 + 3) * 8));
    if (!bVar10) break;
    uVar26 = uVar26 + 1;
  }
  if ((*(longlong *)this == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  TVar13 = UE::NNERuntimeORT::Private::CreateSessionOptionsForDirectML
                     (&local_280,(bool)((char)*(undefined8 *)this + '('));
  if ((*(longlong *)this == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pSVar20 = (SessionOptions *)(*(longlong *)this + 0x40);
  if (pSVar20 != TVar13.Ptr) {
    SVar3 = *pSVar20;
    *pSVar20 = *TVar13.Ptr;
    *TVar13.Ptr = (SessionOptions)0x0;
    if (SVar3 != (SessionOptions)0x0) {
      (*Ort::Global<void>::api_->ReleaseSessionOptions)(*(OrtSessionOptions **)SVar3);
      ::operator_delete((void *)SVar3,8);
    }
  }
  if (local_280.Object != (FEnvironment *)0x0) {
    (*Ort::Global<void>::api_->ReleaseSessionOptions)
              (*(OrtSessionOptions **)&(local_280.Object)->Config);
    ::operator_delete(local_280.Object,8);
  }
  if ((*(longlong *)this == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (*(longlong *)(*(longlong *)this + 0x40) == 0) {
    if (1 < (byte)LogNNERuntimeORT._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNNERuntimeORT);
    }
  }
  else {
    if ((*(longlong *)this == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pOVar14 = (*Ort::Global<void>::api_->SetSessionGraphOptimizationLevel)
                        ((OrtSessionOptions *)**(undefined8 **)(*(longlong *)this + 0x40),
                         ORT_ENABLE_ALL);
    Ort::ThrowOnError(pOVar14);
    lVar34 = 0;
    uVar26 = 0;
    local_2c8 = 0;
    local_2c0 = 0;
    local_2b8 = 0;
    while( true ) {
      lVar8 = local_2b8;
      lVar23 = local_2c0;
      local_2d0 = uVar26;
      local_2b0 = lVar34;
      if ((*(longlong *)this == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar4 = *(longlong *)this;
      if (*(int *)(lVar4 + 0x58) <= (int)uVar26) break;
      if ((lVar4 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar4 = *(longlong *)this;
      uVar21 = ~uVar26 >> 0x1f;
      uVar27 = 0;
      if ((int)uVar26 < *(int *)(lVar4 + 0x58)) {
        uVar27 = uVar21;
      }
      local_29c = uVar21;
      if ((uVar27 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      FVar28 = (ForElementType<int>)(*(longlong *)(lVar4 + 0x50) + 0x18 + lVar8);
      bVar10 = UE::NNE::FSymbolicTensorShape::IsConcrete((FSymbolicTensorShape *)FVar28);
      if (!bVar10) {
        uVar27 = 0;
        if ((int)uVar26 < *(int *)((longlong)this + 0x18)) {
          uVar27 = uVar21;
        }
        if ((uVar27 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        bVar10 = UE::NNE::FTensorShape::IsCompatibleWith
                           ((FTensorShape *)(*(longlong *)((longlong)this + 0x10) + lVar23),
                            (FSymbolicTensorShape *)FVar28);
        if ((!bVar10) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("InputTensorShapes[i].IsCompatibleWith(SymbolicInputShape)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNERuntimeORT\\Source\\NNERuntimeORT\\Private\\NNERuntimeORTModel.cpp"
                                ,0x39c,L""), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        FVar22 = FVar28;
        if (*(ForElementType<int> *)((longlong)FVar28 + 0x20) != (ForElementType<int>)0x0) {
          FVar22 = *(ForElementType<int> *)((longlong)FVar28 + 0x20);
        }
        local_2a0 = *(int *)((longlong)FVar28 + 0x28);
        if ((local_2a0 < 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar27 = 0;
        if ((int)uVar26 < *(int *)((longlong)this + 0x18)) {
          uVar27 = uVar21;
        }
        if ((uVar27 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        puVar19 = (uint *)(*(longlong *)((longlong)this + 0x10) + lVar23);
        uVar27 = puVar19[10];
        if (*(uint **)(puVar19 + 8) != (uint *)0x0) {
          puVar19 = *(uint **)(puVar19 + 8);
        }
        local_298 = uVar27;
        if (((int)uVar27 < 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar21 = 0;
        lVar34 = local_2b0;
        if (0 < (int)uVar27) {
          lVar23 = (longlong)FVar22 - (longlong)puVar19;
          local_290 = 0;
          local_288 = lVar23;
          do {
            lVar34 = local_290;
            uVar26 = 0;
            if ((int)uVar21 < local_2a0) {
              uVar26 = ~uVar21 >> 0x1f;
            }
            if ((uVar26 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar10)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            if (*(int *)(lVar23 + (longlong)puVar19) < 0) {
              local_270 = Ort::Global<void>::api_->AddFreeDimensionOverrideByName;
              local_280.SharedReferenceCount.ReferenceController =
                   (TReferenceControllerBase<1> *)(ulonglong)*puVar19;
              if ((*(longlong *)this == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar10)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              lVar23 = *(longlong *)this;
              uVar26 = 0;
              if ((int)local_2d0 < *(int *)(lVar23 + 0xd8)) {
                uVar26 = local_29c;
              }
              if ((uVar26 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              plVar24 = (longlong *)(*(longlong *)(lVar23 + 0xd0) + local_2c8);
              uVar26 = 0;
              if ((int)uVar21 < (int)plVar24[1]) {
                uVar26 = ~uVar21 >> 0x1f;
              }
              if ((uVar26 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              lVar23 = *plVar24;
              if (*(int *)(lVar23 + 8 + lVar34) == 0) {
                _Str = L"";
LAB_14eb08bd4:
                local_b8.Data = (FScriptContainerElement *)0x0;
                sVar15 = wcslen(_Str);
                local_a8 = (int)sVar15;
                uVar26 = local_a8 + 1;
                FVar29.Data = (FScriptContainerElement *)0x0;
                if (0x80 < uVar26) {
                  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                            (&local_b8,0,uVar26,1);
                  FVar29.Data = local_b8.Data;
                }
                lVar34 = (longlong)(int)uVar26;
                pFVar33 = local_138;
                if (FVar29.Data != (FScriptContainerElement *)0x0) {
                  pFVar33 = FVar29.Data;
                }
                bVar10 = false;
                lVar23 = 0;
                local_b0 = pFVar33;
                if (0 < (int)uVar26) {
                  do {
                    wVar2 = _Str[lVar23];
                    pFVar33[lVar23] = SUB21(wVar2,0);
                    lVar23 = lVar23 + 1;
                    bVar10 = (bool)(bVar10 | 0x7f < (ushort)wVar2);
                  } while (lVar23 < lVar34);
                  if (bVar10) {
                    lVar23 = 0;
                    do {
                      if (0x7f < (ushort)_Str[lVar23]) {
                        pFVar33[lVar23] = (FScriptContainerElement)0x3f;
                      }
                      lVar23 = lVar23 + 1;
                    } while (lVar23 < lVar34);
                  }
                }
                if ((pFVar33 + lVar34 == (FScriptContainerElement *)0x0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Result",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                                        ,0x25,L""), bVar10)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
              }
              else {
                _Str = *(wchar_t **)(lVar23 + lVar34);
                local_b8.Data = (FScriptContainerElement *)0x0;
                if (_Str != (wchar_t *)0x0) goto LAB_14eb08bd4;
                local_b0 = (FScriptContainerElement *)0x0;
                local_a8 = 0;
              }
              pFVar33 = local_b0;
              if ((*(longlong *)this == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar10)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              (*local_270)((OrtSessionOptions *)**(undefined8 **)(*(longlong *)this + 0x40),
                           (char *)pFVar33,
                           (long64)local_280.SharedReferenceCount.ReferenceController);
              lVar23 = local_288;
              lVar34 = local_290;
              if (local_b8.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_b8.Data);
                lVar23 = local_288;
                lVar34 = local_290;
              }
            }
            local_290 = lVar34 + 0x10;
            uVar21 = uVar21 + 1;
            puVar19 = puVar19 + 1;
            lVar34 = local_2b0;
            uVar26 = local_2d0;
          } while ((int)uVar21 < (int)local_298);
        }
      }
      local_2b8 = local_2b8 + 0x48;
      uVar26 = uVar26 + 1;
      local_2c0 = local_2c0 + 0x30;
      lVar34 = lVar34 + 1;
      local_2c8 = local_2c8 + 0x10;
    }
    if ((lVar4 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    lVar34 = *(longlong *)this;
    if ((lVar34 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    lVar23 = *(longlong *)this;
    if ((lVar23 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar5 = *(FEnvironment **)(*(longlong *)this + 0x28);
    if ((*(longlong *)this == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    plVar24 = local_2a8;
    pSVar20 = *(SessionOptions **)(*local_2a8 + 0x40);
    if ((*local_2a8 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pTVar16 = UE::NNE::FSharedModelData::GetView(*(FSharedModelData **)*plVar24,&local_258);
    local_268.DataPtr = pTVar16->DataPtr;
    local_268.ArrayNum = pTVar16->ArrayNum;
    bVar10 = UE::NNERuntimeORT::Private::Detail::CreateSession
                       (&local_268,pSVar20,pFVar5,
                        (TUniquePtr<Ort::Session,TDefaultDelete<Ort::Session>_> *)(lVar23 + 0x38),
                        (FString *)(lVar34 + 0x18));
    if (bVar10) {
      if ((*plVar24 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      bVar10 = UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::FProxy::ConfigureTensors
                         ((FProxy *)*plVar24,false);
      if (bVar10) {
        uVar26 = 0;
        local_2b8 = 0;
        lVar34 = 0;
        while( true ) {
          if ((*plVar24 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          lVar23 = *plVar24;
          if (*(int *)(lVar23 + 0x68) <= (int)uVar26) break;
          if ((lVar23 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          lVar23 = *plVar24;
          uVar21 = ~uVar26 >> 0x1f;
          uVar27 = 0;
          if ((int)uVar26 < *(int *)(lVar23 + 0x68)) {
            uVar27 = uVar21;
          }
          if ((uVar27 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar30 = (FString *)(*(longlong *)(lVar23 + 0x60) + lVar34);
          ::FString::FString(&local_248,pFVar30);
          local_238 = *(ENNETensorDataType *)&pFVar30[1].Data.AllocatorInstance.Data;
          local_230.Data.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
          piVar6 = *(int **)&pFVar30[3].Data.ArrayNum;
          local_230.Data.ArrayNum = *(int *)&pFVar30[4].Data.AllocatorInstance.Data;
          lVar23 = (longlong)local_230.Data.ArrayNum;
          piVar31 = &pFVar30[1].Data.ArrayNum;
          if (piVar6 != (int *)0x0) {
            piVar31 = piVar6;
          }
          if (local_230.Data.ArrayNum == 0) {
            local_230.Data.ArrayMax = 8;
          }
          else {
            UE::Core::Private::
            ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                      (4,4,local_230.Data.ArrayNum,0,(ForElementType<int> *)&local_230,
                       local_230.Data.ArrayNum,&local_230.Data.ArrayMax);
            FVar28 = (ForElementType<int>)&local_230;
            if (local_230.Data.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
              FVar28 = local_230.Data.AllocatorInstance.SecondaryData;
            }
            memcpy((void *)FVar28,piVar31,lVar23 << 2);
          }
          bVar10 = UE::NNE::FSymbolicTensorShape::IsConcrete(&local_230);
          EVar9 = local_238;
          lVar23 = local_2b8;
          if (!bVar10) {
            uVar27 = 0;
            if (0 < local_230.Data.ArrayNum) {
              local_2c8 = 0;
              local_2c0 = 0;
              do {
                iVar11 = local_230.Data.ArrayNum;
                FVar28 = (ForElementType<int>)&local_230;
                if (local_230.Data.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
                  FVar28 = local_230.Data.AllocatorInstance.SecondaryData;
                }
                if ((local_230.Data.ArrayNum < 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("InCount >= 0",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0xeb,L""), bVar10)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                uVar12 = 0;
                if ((int)uVar27 < iVar11) {
                  uVar12 = ~uVar27 >> 0x1f;
                }
                if ((uVar12 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0x14f,
                                        L"Array index out of bounds: %lld from an array of size %lld"
                                       ), bVar10)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                plVar24 = local_2a8;
                if ((*(int *)((longlong)FVar28 + local_2c0) < 0) &&
                   (2 < (byte)LogNNERuntimeORT._0_1_)) {
                  if ((*local_2a8 == 0) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsValid()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                          ,0x458,L""), bVar10)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  lVar34 = *plVar24;
                  uVar12 = 0;
                  if ((int)uVar26 < *(int *)(lVar34 + 0xe8)) {
                    uVar12 = uVar21;
                  }
                  if ((uVar12 == 0) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar10)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  uVar12 = 0;
                  if ((int)uVar27 < *(int *)(*(longlong *)(lVar34 + 0xe0) + lVar23 * 0x10 + 8)) {
                    uVar12 = ~uVar27 >> 0x1f;
                  }
                  if ((uVar12 == 0) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar10)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  if ((*plVar24 == 0) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsValid()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                          ,0x458,L""), bVar10)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  uVar12 = 0;
                  if ((int)uVar26 < *(int *)(*plVar24 + 200)) {
                    uVar12 = uVar21;
                  }
                  if ((uVar12 == 0) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar10)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  UE::Logging::Private::BasicLog<3>
                            (&::LOG_Static,(FLogCategoryBase *)&LogNNERuntimeORT);
                }
                local_2c8 = local_2c8 + 0x10;
                local_2c0 = local_2c0 + 4;
                uVar27 = uVar27 + 1;
              } while ((int)uVar27 < local_230.Data.ArrayNum);
            }
            if (1 < (byte)LogNNERuntimeORT._0_1_) {
              UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNNERuntimeORT)
              ;
            }
            if (local_230.Data.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
              FMemory::Free((void *)local_230.Data.AllocatorInstance.SecondaryData);
            }
            if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_248.Data.AllocatorInstance.Data);
            }
            goto LAB_14eb099dd;
          }
          pFVar17 = UE::NNE::FTensorShape::MakeFromSymbolic(&local_98,&local_230);
          uVar18 = UE::NNE::FTensorShape::Volume(pFVar17);
          if ((0xffffffff < uVar18) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InShape.Volume() <= TNumericLimits<uint32>::Max()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNERuntimeORT\\Source\\NNERuntimeORT\\Private\\NNERuntimeORTTensor.h"
                                  ,0x1e,L""), bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          local_1a8.Data.ArrayMax = 8;
          local_1a8.Data.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
          local_1a8.Data.ArrayNum = 0;
          local_178 = 0;
          UE::NNE::FTensorShape::operator=(&local_1a8,pFVar17);
          iVar11 = UE::NNE::GetTensorDataTypeSizeInBytes(EVar9);
          uVar18 = UE::NNE::FTensorShape::Volume(pFVar17);
          local_178 = uVar18 * (longlong)iVar11;
          if (local_98.Data.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FMemory::Free((void *)local_98.Data.AllocatorInstance.SecondaryData);
          }
          plVar24 = local_2a8;
          if ((*local_2a8 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          lVar23 = *plVar24;
          iVar11 = *(int *)(lVar23 + 0xf8);
          if (iVar11 == *(int *)(lVar23 + 0xfc)) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x838,(ForAnyElementType *)(lVar23 + 0xf0),(int *)(lVar23 + 0xfc));
          }
          *(int *)(lVar23 + 0xf8) = iVar11 + 1;
          pFVar17 = (FTensorShape *)(*(longlong *)(lVar23 + 0xf0) + (longlong)iVar11 * 0x38);
          UE::NNE::FTensorShape::FTensorShape(pFVar17,&local_1a8);
          *(longlong *)pFVar17[1].Data.AllocatorInstance.InlineData = local_178;
          iVar11 = (int)local_2d8;
          if ((int)local_2d8 == local_2d8._4_4_) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x830,&local_2e0,(int *)((longlong)&local_2d8 + 4));
          }
          local_2d8 = CONCAT44(local_2d8._4_4_,iVar11 + 1);
          FVar32 = (ForElementType<unsigned_int>)
                   ((longlong)iVar11 * 0x30 + (longlong)local_2e0.Data);
          *(ForElementType<unsigned_int> *)((longlong)FVar32 + 0x20) =
               (ForElementType<unsigned_int>)0x0;
          lVar23 = (longlong)local_1a8.Data.ArrayNum;
          *(int *)((ForElementType<unsigned_int> *)((longlong)FVar32 + 0x28))->InlineData =
               local_1a8.Data.ArrayNum;
          FVar36 = (ForElementType<unsigned_int>)&local_1a8;
          if (local_1a8.Data.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FVar36 = local_1a8.Data.AllocatorInstance.SecondaryData;
          }
          puVar1 = (uchar *)((longlong)FVar32 + 0x2c);
          if (local_1a8.Data.ArrayNum == 0) {
            puVar1[0] = '\b';
            puVar1[1] = '\0';
            puVar1[2] = '\0';
            puVar1[3] = '\0';
          }
          else {
            UE::Core::Private::
            ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                      (4,4,local_1a8.Data.ArrayNum,0,(ForElementType<unsigned_int> *)FVar32,
                       local_1a8.Data.ArrayNum,(int *)puVar1);
            if (*(ForElementType<unsigned_int> *)((longlong)FVar32 + 0x20) !=
                (ForElementType<unsigned_int>)0x0) {
              FVar32 = *(ForElementType<unsigned_int> *)((longlong)FVar32 + 0x20);
            }
            memcpy((void *)FVar32,(void *)FVar36,lVar23 << 2);
          }
          if (local_1a8.Data.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FMemory::Free((void *)local_1a8.Data.AllocatorInstance.SecondaryData);
          }
          if (local_230.Data.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
            FMemory::Free((void *)local_230.Data.AllocatorInstance.SecondaryData);
          }
          if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_248.Data.AllocatorInstance.Data);
          }
          local_2b8 = local_2b8 + 1;
          uVar26 = uVar26 + 1;
          lVar34 = lVar34 + 0x48;
        }
        if ((lVar23 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar34 = *plVar24;
LAB_14eb0992f:
        FVar29.Data = local_2e0.Data;
        iVar11 = (int)local_2d8;
        if (((int)local_2d8 < 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lpCriticalSection = (LPCRITICAL_SECTION)(lVar34 + 0x100);
        if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection(lpCriticalSection);
        pFVar25 = (ForAnyElementType *)(lVar34 + 0x128);
        DestructItems<UE::NNE::FTensorShape,int>
                  ((FTensorShape *)pFVar25->Data,*(int *)(lVar34 + 0x130));
        *(int *)(lVar34 + 0x130) = iVar11;
        if ((iVar11 == 0) && (*(int *)(lVar34 + 0x134) == 0)) {
          *(int *)(lVar34 + 0x134) = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x30,8,iVar11,*(int *)(lVar34 + 0x134),pFVar25,iVar11,(int *)(lVar34 + 0x134));
          ConstructItems<UE::NNE::FTensorShape,UE::NNE::FTensorShape,int>
                    (pFVar25->Data,(FTensorShape *)FVar29.Data,iVar11);
        }
        LeaveCriticalSection(lpCriticalSection);
      }
      else if (1 < (byte)LogNNERuntimeORT._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNNERuntimeORT);
      }
    }
    else if (1 < (byte)LogNNERuntimeORT._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNNERuntimeORT);
    }
  }
LAB_14eb099dd:
  DestructItems<UE::NNE::FTensorShape,int>((FTensorShape *)local_2e0.Data,(int)local_2d8);
  if (local_2e0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2e0.Data);
  }
  if (bVar38) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
LAB_14eb09561:
  if ((*(longlong *)this == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  lVar34 = *(longlong *)this;
  uVar26 = (uint)uVar37;
  if (*(int *)(lVar34 + 0x68) <= (int)uVar26) {
    if ((lVar34 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    lVar34 = *(longlong *)this;
    goto LAB_14eb0992f;
  }
  if ((lVar34 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  lVar34 = *(longlong *)this;
  uVar27 = 0;
  if ((int)uVar26 < *(int *)(lVar34 + 0x68)) {
    uVar27 = ~uVar26 >> 0x1f;
  }
  if ((uVar27 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar30 = (FString *)(*(longlong *)(lVar34 + 0x60) + uVar35);
  ::FString::FString(&local_1f8,pFVar30);
  local_1e8 = *(ENNETensorDataType *)&pFVar30[1].Data.AllocatorInstance.Data;
  local_1e0.Data.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  piVar6 = *(int **)&pFVar30[3].Data.ArrayNum;
  local_1e0.Data.ArrayNum = *(int *)&pFVar30[4].Data.AllocatorInstance.Data;
  lVar34 = (longlong)local_1e0.Data.ArrayNum;
  piVar31 = &pFVar30[1].Data.ArrayNum;
  if (piVar6 != (int *)0x0) {
    piVar31 = piVar6;
  }
  if (local_1e0.Data.ArrayNum == 0) {
    local_1e0.Data.ArrayMax = 8;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
              (4,4,local_1e0.Data.ArrayNum,0,(ForElementType<int> *)&local_1e0,
               local_1e0.Data.ArrayNum,&local_1e0.Data.ArrayMax);
    FVar28 = (ForElementType<int>)&local_1e0;
    if (local_1e0.Data.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
      FVar28 = local_1e0.Data.AllocatorInstance.SecondaryData;
    }
    memcpy((void *)FVar28,piVar31,lVar34 << 2);
  }
  bVar10 = UE::NNE::FSymbolicTensorShape::IsConcrete(&local_1e0);
  EVar9 = local_1e8;
  if (!bVar10) {
    if (2 < (byte)LogNNERuntimeORT._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNNERuntimeORT);
    }
    if (local_1e0.Data.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
      FMemory::Free((void *)local_1e0.Data.AllocatorInstance.SecondaryData);
    }
    if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
    }
    goto LAB_14eb099dd;
  }
  pFVar17 = UE::NNE::FTensorShape::MakeFromSymbolic(&local_68,&local_1e0);
  uVar18 = UE::NNE::FTensorShape::Volume(pFVar17);
  if ((0xffffffff < uVar18) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InShape.Volume() <= TNumericLimits<uint32>::Max()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNERuntimeORT\\Source\\NNERuntimeORT\\Private\\NNERuntimeORTTensor.h"
                          ,0x1e,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_170.Data.ArrayMax = 8;
  local_170.Data.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_170.Data.ArrayNum = 0;
  local_140 = 0;
  UE::NNE::FTensorShape::operator=(&local_170,pFVar17);
  iVar11 = UE::NNE::GetTensorDataTypeSizeInBytes(EVar9);
  uVar18 = UE::NNE::FTensorShape::Volume(pFVar17);
  local_140 = uVar18 * (longlong)iVar11;
  if (local_68.Data.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_68.Data.AllocatorInstance.SecondaryData);
  }
  if ((*(longlong *)this == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  lVar34 = *(longlong *)this;
  iVar11 = *(int *)(lVar34 + 0xf8);
  if (iVar11 == *(int *)(lVar34 + 0xfc)) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x838,(ForAnyElementType *)(lVar34 + 0xf0),(int *)(lVar34 + 0xfc));
  }
  *(int *)(lVar34 + 0xf8) = iVar11 + 1;
  pFVar17 = (FTensorShape *)(*(longlong *)(lVar34 + 0xf0) + (longlong)iVar11 * 0x38);
  UE::NNE::FTensorShape::FTensorShape(pFVar17,&local_170);
  *(longlong *)pFVar17[1].Data.AllocatorInstance.InlineData = local_140;
  iVar11 = (int)local_2d8;
  if ((int)local_2d8 == local_2d8._4_4_) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x830,&local_2e0,(int *)((longlong)&local_2d8 + 4));
  }
  local_2d8 = CONCAT44(local_2d8._4_4_,iVar11 + 1);
  FVar32 = (ForElementType<unsigned_int>)((longlong)iVar11 * 0x30 + (longlong)local_2e0.Data);
  *(ForElementType<unsigned_int> *)((longlong)FVar32 + 0x20) = (ForElementType<unsigned_int>)0x0;
  lVar34 = (longlong)local_170.Data.ArrayNum;
  *(int *)((ForElementType<unsigned_int> *)((longlong)FVar32 + 0x28))->InlineData =
       local_170.Data.ArrayNum;
  FVar36 = (ForElementType<unsigned_int>)&local_170;
  if (local_170.Data.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar36 = local_170.Data.AllocatorInstance.SecondaryData;
  }
  puVar1 = (uchar *)((longlong)FVar32 + 0x2c);
  if (local_170.Data.ArrayNum == 0) {
    puVar1[0] = '\b';
    puVar1[1] = '\0';
    puVar1[2] = '\0';
    puVar1[3] = '\0';
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
              (4,4,local_170.Data.ArrayNum,0,(ForElementType<unsigned_int> *)FVar32,
               local_170.Data.ArrayNum,(int *)puVar1);
    if (*(ForElementType<unsigned_int> *)((longlong)FVar32 + 0x20) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar32 = *(ForElementType<unsigned_int> *)((longlong)FVar32 + 0x20);
    }
    memcpy((void *)FVar32,(void *)FVar36,lVar34 << 2);
  }
  if (local_170.Data.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_170.Data.AllocatorInstance.SecondaryData);
  }
  if (local_1e0.Data.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
    FMemory::Free((void *)local_1e0.Data.AllocatorInstance.SecondaryData);
  }
  if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
  }
  uVar37 = (ulonglong)(uVar26 + 1);
  uVar35 = uVar35 + 0x48;
  this = local_2a8;
  goto LAB_14eb09561;
}

// operator() @ 14eb09a50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
``UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::EnqueueRDG'::__l2::<lambda_2>::operator()'::
__l2::<lambda_1>::operator()(void *this,FRHICommandListImmediate *param_1)

{
  longlong lVar1;
  longlong lVar2;
  FTensor *pFVar3;
  void *pvVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  longlong *plVar8;
  undefined1 auStackY_e8 [32];
  ForAnyElementType local_98;
  undefined8 local_90;
  ForAnyElementType local_88;
  undefined8 local_80;
  ForAnyElementType local_78;
  undefined8 local_70;
  code *local_68 [2];
  longlong local_58 [3];
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  iVar7 = (**(code **)(GDynamicRHI->_padding_ + 0x28))();
  if (iVar7 != 3) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("GDynamicRHI->GetInterfaceType() == ERHIInterfaceType::D3D12",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Public\\ID3D12DynamicRHI.h"
                       ,0x53,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  plVar8 = (longlong *)(**(code **)(GDynamicRHI->_padding_ + 0x30))();
  pcVar5 = *(code **)(*plVar8 + 0x588);
  lVar1 = *(longlong *)this;
  lVar2 = *(longlong *)((longlong)this + 8);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  iVar7 = *(int *)((longlong)this + 0x18);
  pFVar3 = *(FTensor **)((longlong)this + 0x10);
  local_98.Data = (FScriptContainerElement *)0x0;
  local_90 = CONCAT44(local_90._4_4_,iVar7);
  if (iVar7 == 0) {
    local_90 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,iVar7,0,&local_98,iVar7,(int *)((longlong)&local_90 + 4));
    ConstructItems<UE::NNERuntimeORT::Private::FTensor,UE::NNERuntimeORT::Private::FTensor,int>
              (local_98.Data,pFVar3,iVar7);
  }
  iVar7 = *(int *)((longlong)this + 0x28);
  pvVar4 = *(void **)((longlong)this + 0x20);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = CONCAT44(local_80._4_4_,iVar7);
  if (iVar7 == 0) {
    local_80 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar7,0,&local_88,iVar7,(int *)((longlong)&local_80 + 4));
    memcpy(local_88.Data,pvVar4,(longlong)iVar7 << 3);
  }
  iVar7 = *(int *)((longlong)this + 0x38);
  pvVar4 = *(void **)((longlong)this + 0x30);
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70 = CONCAT44(local_70._4_4_,iVar7);
  if (iVar7 == 0) {
    local_70 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar7,0,&local_78,iVar7,(int *)((longlong)&local_70 + 4));
    memcpy(local_78.Data,pvVar4,(longlong)iVar7 << 3);
  }
  local_68[0] = (code *)0x0;
  local_40 = FMemory::Malloc(0x48,8);
  *local_40 = (longlong)
              &UE::Core::Private::Function::
               TFunction_OwnedObject<```UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::EnqueueRDG'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>,0,1>
               ::_vftable_;
  local_40[1] = lVar1;
  local_40[2] = lVar2;
  local_40[3] = 0;
  local_40[3] = (longlong)local_98.Data;
  local_98.Data = (FScriptContainerElement *)0x0;
  *(int *)(local_40 + 4) = (int)local_90;
  *(undefined4 *)((longlong)local_40 + 0x24) = local_90._4_4_;
  local_90 = 0;
  local_40[5] = 0;
  local_40[5] = (longlong)local_88.Data;
  local_88.Data = (FScriptContainerElement *)0x0;
  *(undefined4 *)(local_40 + 6) = (undefined4)local_80;
  *(undefined4 *)((longlong)local_40 + 0x34) = local_80._4_4_;
  local_80 = 0;
  local_40[7] = 0;
  local_40[7] = (longlong)local_78.Data;
  local_78.Data = (FScriptContainerElement *)0x0;
  *(undefined4 *)(local_40 + 8) = (undefined4)local_70;
  *(undefined4 *)((longlong)local_40 + 0x44) = local_70._4_4_;
  if (local_40 + 1 != (longlong *)0x0) {
    local_68[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<```UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::EnqueueRDG'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void,ID3D12CommandQueue_*>
                  ::Call;
  }
  local_70 = 0;
  (*pcVar5)(plVar8,0,local_68,0);
  if (local_68[0] != (code *)0x0) {
    plVar8 = local_58;
    if (local_40 != (longlong *)0x0) {
      plVar8 = local_40;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  DestructItems<UE::NNERuntimeORT::Private::FTensor,int>((FTensor *)local_98.Data,(int)local_90);
  if ((FTensor *)local_98.Data != (FTensor *)0x0) {
    FMemory::Free(local_98.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14eb0a960

/* [thunk]:public: virtual void * __ptr64 __cdecl FNNERuntimeORTDmlImpl::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
FNNERuntimeORTDmlImpl::_vector_deleting_destructor__adjustor_8__
          (FNNERuntimeORTDmlImpl *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FNNERuntimeORTDmlImpl *)&this[-1].bIsAvailableGPU,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{16}' @ 14eb0a970

/* [thunk]:public: virtual void * __ptr64 __cdecl FNNERuntimeORTDmlImpl::`vector deleting
   destructor'`adjustor{16}' (unsigned int) __ptr64 */

void * __thiscall
FNNERuntimeORTDmlImpl::_vector_deleting_destructor__adjustor_16__
          (FNNERuntimeORTDmlImpl *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FNNERuntimeORTDmlImpl *)&this[-1].Environment.SharedReferenceCount,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{24}' @ 14eb0a980

/* [thunk]:public: virtual void * __ptr64 __cdecl FNNERuntimeORTDmlImpl::`vector deleting
   destructor'`adjustor{24}' (unsigned int) __ptr64 */

void * __thiscall
FNNERuntimeORTDmlImpl::_vector_deleting_destructor__adjustor_24__
          (FNNERuntimeORTDmlImpl *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FNNERuntimeORTDmlImpl *)&this[-1].Environment,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14eb0a990

/* [thunk]:public: virtual void * __ptr64 __cdecl INNERuntimeORTDmlImpl::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
INNERuntimeORTDmlImpl::_vector_deleting_destructor__adjustor_8__
          (INNERuntimeORTDmlImpl *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((INNERuntimeORTDmlImpl *)&this[-1].field_0x18,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{16}' @ 14eb0a9a0

/* [thunk]:public: virtual void * __ptr64 __cdecl INNERuntimeORTDmlImpl::`vector deleting
   destructor'`adjustor{16}' (unsigned int) __ptr64 */

void * __thiscall
INNERuntimeORTDmlImpl::_vector_deleting_destructor__adjustor_16__
          (INNERuntimeORTDmlImpl *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((INNERuntimeORTDmlImpl *)&this[-1].field_0x10,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{24}' @ 14eb0a9b0

/* [thunk]:public: virtual void * __ptr64 __cdecl INNERuntimeORTDmlImpl::`vector deleting
   destructor'`adjustor{24}' (unsigned int) __ptr64 */

void * __thiscall
INNERuntimeORTDmlImpl::_vector_deleting_destructor__adjustor_24__
          (INNERuntimeORTDmlImpl *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((INNERuntimeORTDmlImpl *)&this[-1].field_0x8,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14eb0a9c0

/* [thunk]:public: virtual void * __ptr64 __cdecl UNNERuntimeORTCpu::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UNNERuntimeORTCpu::_vector_deleting_destructor__adjustor_40__(UNNERuntimeORTCpu *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UNNERuntimeORTCpu *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{48}' @ 14eb0a9d0

/* [thunk]:public: virtual void * __ptr64 __cdecl UNNERuntimeORTCpu::`vector deleting
   destructor'`adjustor{48}' (unsigned int) __ptr64 */

void * __thiscall
UNNERuntimeORTCpu::_vector_deleting_destructor__adjustor_48__(UNNERuntimeORTCpu *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UNNERuntimeORTCpu *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14eb0a9e0

/* [thunk]:public: virtual void * __ptr64 __cdecl UNNERuntimeORTDmlProxy::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UNNERuntimeORTDmlProxy::_vector_deleting_destructor__adjustor_40__
          (UNNERuntimeORTDmlProxy *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UNNERuntimeORTDmlProxy *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14eb0a9f0

/* [thunk]:public: virtual void * __ptr64 __cdecl UNNERuntimeORTDml_GPU::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UNNERuntimeORTDml_GPU::_vector_deleting_destructor__adjustor_40__
          (UNNERuntimeORTDml_GPU *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UNNERuntimeORTDml_GPU *)&this[-1].field_0x18,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{56}' @ 14eb0aa00

/* [thunk]:public: virtual void * __ptr64 __cdecl UNNERuntimeORTDml_GPU::`vector deleting
   destructor'`adjustor{56}' (unsigned int) __ptr64 */

void * __thiscall
UNNERuntimeORTDml_GPU::_vector_deleting_destructor__adjustor_56__
          (UNNERuntimeORTDml_GPU *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UNNERuntimeORTDml_GPU *)&this[-1].field_0x8,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14eb0aa10

/* [thunk]:public: virtual void * __ptr64 __cdecl UNNERuntimeORTDml_GPU_NPU::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UNNERuntimeORTDml_GPU_NPU::_vector_deleting_destructor__adjustor_40__
          (UNNERuntimeORTDml_GPU_NPU *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UNNERuntimeORTDml_GPU_NPU *)&this[-1].field_0x20,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{56}' @ 14eb0aa20

/* [thunk]:public: virtual void * __ptr64 __cdecl UNNERuntimeORTDml_GPU_NPU::`vector deleting
   destructor'`adjustor{56}' (unsigned int) __ptr64 */

void * __thiscall
UNNERuntimeORTDml_GPU_NPU::_vector_deleting_destructor__adjustor_56__
          (UNNERuntimeORTDml_GPU_NPU *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UNNERuntimeORTDml_GPU_NPU *)&this[-1].field_0x10,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{64}' @ 14eb0aa30

/* [thunk]:public: virtual void * __ptr64 __cdecl UNNERuntimeORTDml_GPU_NPU::`vector deleting
   destructor'`adjustor{64}' (unsigned int) __ptr64 */

void * __thiscall
UNNERuntimeORTDml_GPU_NPU::_vector_deleting_destructor__adjustor_64__
          (UNNERuntimeORTDml_GPU_NPU *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UNNERuntimeORTDml_GPU_NPU *)&this[-1].field_0x8,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14eb0aa40

/* [thunk]:public: virtual void * __ptr64 __cdecl UNNERuntimeORTDml_GPU_RDG::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UNNERuntimeORTDml_GPU_RDG::_vector_deleting_destructor__adjustor_40__
          (UNNERuntimeORTDml_GPU_RDG *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UNNERuntimeORTDml_GPU_RDG *)&this[-1].field_0x20,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{56}' @ 14eb0aa50

/* [thunk]:public: virtual void * __ptr64 __cdecl UNNERuntimeORTDml_GPU_RDG::`vector deleting
   destructor'`adjustor{56}' (unsigned int) __ptr64 */

void * __thiscall
UNNERuntimeORTDml_GPU_RDG::_vector_deleting_destructor__adjustor_56__
          (UNNERuntimeORTDml_GPU_RDG *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UNNERuntimeORTDml_GPU_RDG *)&this[-1].field_0x10,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{64}' @ 14eb0aa60

/* [thunk]:public: virtual void * __ptr64 __cdecl UNNERuntimeORTDml_GPU_RDG::`vector deleting
   destructor'`adjustor{64}' (unsigned int) __ptr64 */

void * __thiscall
UNNERuntimeORTDml_GPU_RDG::_vector_deleting_destructor__adjustor_64__
          (UNNERuntimeORTDml_GPU_RDG *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UNNERuntimeORTDml_GPU_RDG *)&this[-1].field_0x8,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14eb0aa70

/* [thunk]:public: virtual void * __ptr64 __cdecl UNNERuntimeORTDml_GPU_RDG_NPU::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UNNERuntimeORTDml_GPU_RDG_NPU::_vector_deleting_destructor__adjustor_40__
          (UNNERuntimeORTDml_GPU_RDG_NPU *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UNNERuntimeORTDml_GPU_RDG_NPU *)&this[-1].field_0x28,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{56}' @ 14eb0aa80

/* [thunk]:public: virtual void * __ptr64 __cdecl UNNERuntimeORTDml_GPU_RDG_NPU::`vector deleting
   destructor'`adjustor{56}' (unsigned int) __ptr64 */

void * __thiscall
UNNERuntimeORTDml_GPU_RDG_NPU::_vector_deleting_destructor__adjustor_56__
          (UNNERuntimeORTDml_GPU_RDG_NPU *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UNNERuntimeORTDml_GPU_RDG_NPU *)&this[-1].field_0x18,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{64}' @ 14eb0aa90

/* [thunk]:public: virtual void * __ptr64 __cdecl UNNERuntimeORTDml_GPU_RDG_NPU::`vector deleting
   destructor'`adjustor{64}' (unsigned int) __ptr64 */

void * __thiscall
UNNERuntimeORTDml_GPU_RDG_NPU::_vector_deleting_destructor__adjustor_64__
          (UNNERuntimeORTDml_GPU_RDG_NPU *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UNNERuntimeORTDml_GPU_RDG_NPU *)&this[-1].field_0x10,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{72}' @ 14eb0aaa0

/* [thunk]:public: virtual void * __ptr64 __cdecl UNNERuntimeORTDml_GPU_RDG_NPU::`vector deleting
   destructor'`adjustor{72}' (unsigned int) __ptr64 */

void * __thiscall
UNNERuntimeORTDml_GPU_RDG_NPU::_vector_deleting_destructor__adjustor_72__
          (UNNERuntimeORTDml_GPU_RDG_NPU *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UNNERuntimeORTDml_GPU_RDG_NPU *)&this[-1].field_0x8,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14eb0aab0

/* [thunk]:public: virtual void * __ptr64 __cdecl UNNERuntimeORTDml_NPU::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UNNERuntimeORTDml_NPU::_vector_deleting_destructor__adjustor_40__
          (UNNERuntimeORTDml_NPU *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UNNERuntimeORTDml_NPU *)&this[-1].field_0x18,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{56}' @ 14eb0aac0

/* [thunk]:public: virtual void * __ptr64 __cdecl UNNERuntimeORTDml_NPU::`vector deleting
   destructor'`adjustor{56}' (unsigned int) __ptr64 */

void * __thiscall
UNNERuntimeORTDml_NPU::_vector_deleting_destructor__adjustor_56__
          (UNNERuntimeORTDml_NPU *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UNNERuntimeORTDml_NPU *)&this[-1].field_0x8,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14eb0aad0

/* [thunk]:public: virtual void * __ptr64 __cdecl UNNERuntimeORTDml_RDG::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UNNERuntimeORTDml_RDG::_vector_deleting_destructor__adjustor_40__
          (UNNERuntimeORTDml_RDG *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UNNERuntimeORTDml_RDG *)&this[-1].field_0x18,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{56}' @ 14eb0aae0

/* [thunk]:public: virtual void * __ptr64 __cdecl UNNERuntimeORTDml_RDG::`vector deleting
   destructor'`adjustor{56}' (unsigned int) __ptr64 */

void * __thiscall
UNNERuntimeORTDml_RDG::_vector_deleting_destructor__adjustor_56__
          (UNNERuntimeORTDml_RDG *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UNNERuntimeORTDml_RDG *)&this[-1].field_0x8,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14eb0aaf0

/* [thunk]:public: virtual void * __ptr64 __cdecl UNNERuntimeORTDml_RDG_NPU::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UNNERuntimeORTDml_RDG_NPU::_vector_deleting_destructor__adjustor_40__
          (UNNERuntimeORTDml_RDG_NPU *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UNNERuntimeORTDml_RDG_NPU *)&this[-1].field_0x20,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{56}' @ 14eb0ab00

/* [thunk]:public: virtual void * __ptr64 __cdecl UNNERuntimeORTDml_RDG_NPU::`vector deleting
   destructor'`adjustor{56}' (unsigned int) __ptr64 */

void * __thiscall
UNNERuntimeORTDml_RDG_NPU::_vector_deleting_destructor__adjustor_56__
          (UNNERuntimeORTDml_RDG_NPU *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UNNERuntimeORTDml_RDG_NPU *)&this[-1].field_0x10,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{64}' @ 14eb0ab10

/* [thunk]:public: virtual void * __ptr64 __cdecl UNNERuntimeORTDml_RDG_NPU::`vector deleting
   destructor'`adjustor{64}' (unsigned int) __ptr64 */

void * __thiscall
UNNERuntimeORTDml_RDG_NPU::_vector_deleting_destructor__adjustor_64__
          (UNNERuntimeORTDml_RDG_NPU *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UNNERuntimeORTDml_RDG_NPU *)&this[-1].field_0x8,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14eb0ab20

void * __thiscall
UE::NNERuntimeORT::Private::FModelInstanceORTBase<UE::NNE::IModelInstanceCPU>::
_scalar_deleting_destructor_(FModelInstanceORTBase<UE::NNE::IModelInstanceCPU> *this,uint param_1)

{
  ~FModelInstanceORTBase<UE::NNE::IModelInstanceCPU>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eb0ab60

void * __thiscall
UE::NNERuntimeORT::Private::FModelInstanceORTBase<UE::NNE::IModelInstanceGPU>::
_scalar_deleting_destructor_(FModelInstanceORTBase<UE::NNE::IModelInstanceGPU> *this,uint param_1)

{
  ~FModelInstanceORTBase<UE::NNE::IModelInstanceGPU>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eb0aba0

void * __thiscall
UE::NNERuntimeORT::Private::FModelInstanceORTBase<UE::NNE::IModelInstanceNPU>::
_scalar_deleting_destructor_(FModelInstanceORTBase<UE::NNE::IModelInstanceNPU> *this,uint param_1)

{
  ~FModelInstanceORTBase<UE::NNE::IModelInstanceNPU>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eb0abe0

void * __thiscall
UE::NNERuntimeORT::Private::
FModelInstanceORTRunSync<UE::NNE::IModelInstanceCPU,UE::NNE::FTensorBindingCPU>::
_scalar_deleting_destructor_
          (FModelInstanceORTRunSync<UE::NNE::IModelInstanceCPU,UE::NNE::FTensorBindingCPU> *this,
          uint param_1)

{
  ~FModelInstanceORTRunSync<UE::NNE::IModelInstanceCPU,UE::NNE::FTensorBindingCPU>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x110);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eb0ac20

void * __thiscall
UE::NNERuntimeORT::Private::
FModelInstanceORTRunSync<UE::NNE::IModelInstanceGPU,UE::NNE::FTensorBindingCPU>::
_scalar_deleting_destructor_
          (FModelInstanceORTRunSync<UE::NNE::IModelInstanceGPU,UE::NNE::FTensorBindingCPU> *this,
          uint param_1)

{
  ~FModelInstanceORTRunSync<UE::NNE::IModelInstanceGPU,UE::NNE::FTensorBindingCPU>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x110);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eb0ac60

void * __thiscall
UE::NNERuntimeORT::Private::
FModelInstanceORTRunSync<UE::NNE::IModelInstanceNPU,UE::NNE::FTensorBindingCPU>::
_scalar_deleting_destructor_
          (FModelInstanceORTRunSync<UE::NNE::IModelInstanceNPU,UE::NNE::FTensorBindingCPU> *this,
          uint param_1)

{
  ~FModelInstanceORTRunSync<UE::NNE::IModelInstanceNPU,UE::NNE::FTensorBindingCPU>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x110);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eb0aca0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::EnqueueRDG'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<```UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::EnqueueRDG'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  if (*(void **)((longlong)this + 0x38) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x38));
  }
  if (*(void **)((longlong)this + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x28));
  }
  DestructItems<UE::NNERuntimeORT::Private::FTensor,int>
            (*(FTensor **)((longlong)this + 0x18),*(int *)((longlong)this + 0x20));
  if (*(void **)((longlong)this + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x18));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eb0ad20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::SetInputTensorShapes_RenderThread'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<``UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::SetInputTensorShapes_RenderThread'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>,0,1>
        ::_vftable_;
  DestructItems<UE::NNE::FTensorShape,int>
            (*(FTensorShape **)((longlong)this + 0x18),*(int *)((longlong)this + 0x20));
  if (*(void **)((longlong)this + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x18));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eb0ad90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::SetInputTensorShapes'::__l7::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::SetInputTensorShapes'::`7'::<lambda_1>,1,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eb0add0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::NNERuntimeORT::Private::FEnvironment,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::NNERuntimeORT::Private::FEnvironment,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eb0ae10

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::NNERuntimeORT::Private::FModelInstanceORTCpu,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::NNERuntimeORT::Private::FModelInstanceORTCpu,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x120);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eb0ae50

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::NNERuntimeORT::Private::FModelInstanceORTDmlGPU,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::NNERuntimeORT::Private::FModelInstanceORTDmlGPU,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x120);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eb0ae90

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eb0aed0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::NNERuntimeORT::Private::FModelInstanceORTNpu,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::NNERuntimeORT::Private::FModelInstanceORTNpu,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x120);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eb0af10

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::NNERuntimeORT::Private::FModelORTCpu,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::NNERuntimeORT::Private::FModelORTCpu,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eb0af50

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::NNERuntimeORT::Private::FModelORTDmlGPU,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::NNERuntimeORT::Private::FModelORTDmlGPU,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eb0af90

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::NNERuntimeORT::Private::FModelORTDmlRDG,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::NNERuntimeORT::Private::FModelORTDmlRDG,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eb0afd0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::NNERuntimeORT::Private::FModelORTNpu,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::NNERuntimeORT::Private::FModelORTNpu,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eb0b010

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::FProxy,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::FProxy,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x148);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eb0b050

void * __thiscall
FRDGAllocator::TObject<FORTModelInstanceRDGParameters>::_scalar_deleting_destructor_
          (TObject<FORTModelInstanceRDGParameters> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eb0b080

void * __thiscall
TRDGLambdaPass<FORTModelInstanceRDGParameters,`UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::EnqueueRDG'::__l2::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  DestructItems<UE::NNERuntimeORT::Private::FTensor,int>
            (*(FTensor **)((longlong)this + 400),*(int *)((longlong)this + 0x198));
  if (*(void **)((longlong)this + 400) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 400));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x188));
  if (*(FRHIResource **)((longlong)this + 0x38) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)((longlong)this + 0x38));
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1b0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eb0b110

void * __thiscall Ort::Exception::_scalar_deleting_destructor_(Exception *this,uint param_1)

{
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate
            (&this->message_);
  this->_padding_ = (longlong)&___7exception_stdext__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eb0b160

void * __thiscall
UE::NNERuntimeORT::Private::FModelInstanceORTCpu::_scalar_deleting_destructor_
          (FModelInstanceORTCpu *this,uint param_1)

{
  FModelInstanceORTRunSync<UE::NNE::IModelInstanceCPU,UE::NNE::FTensorBindingCPU>::
  ~FModelInstanceORTRunSync<UE::NNE::IModelInstanceCPU,UE::NNE::FTensorBindingCPU>
            ((FModelInstanceORTRunSync<UE::NNE::IModelInstanceCPU,UE::NNE::FTensorBindingCPU> *)this
            );
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x110);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eb0b1a0

void * __thiscall
UE::NNERuntimeORT::Private::FModelInstanceORTDmlGPU::_scalar_deleting_destructor_
          (FModelInstanceORTDmlGPU *this,uint param_1)

{
  FModelInstanceORTRunSync<UE::NNE::IModelInstanceGPU,UE::NNE::FTensorBindingCPU>::
  ~FModelInstanceORTRunSync<UE::NNE::IModelInstanceGPU,UE::NNE::FTensorBindingCPU>
            ((FModelInstanceORTRunSync<UE::NNE::IModelInstanceGPU,UE::NNE::FTensorBindingCPU> *)this
            );
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x110);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eb0b1e0

void * __thiscall
UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::_scalar_deleting_destructor_
          (FModelInstanceORTDmlRDG *this,uint param_1)

{
  ~FModelInstanceORTDmlRDG(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eb0b220

void * __thiscall
UE::NNERuntimeORT::Private::FModelInstanceORTNpu::_scalar_deleting_destructor_
          (FModelInstanceORTNpu *this,uint param_1)

{
  FModelInstanceORTRunSync<UE::NNE::IModelInstanceNPU,UE::NNE::FTensorBindingCPU>::
  ~FModelInstanceORTRunSync<UE::NNE::IModelInstanceNPU,UE::NNE::FTensorBindingCPU>
            ((FModelInstanceORTRunSync<UE::NNE::IModelInstanceNPU,UE::NNE::FTensorBindingCPU> *)this
            );
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x110);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eb0b260

void * __thiscall
UE::NNERuntimeORT::Private::FModelORTCpu::_scalar_deleting_destructor_
          (FModelORTCpu *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ModelData).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Environment).SharedReferenceCount.ReferenceController);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eb0b2b0

void * __thiscall
UE::NNERuntimeORT::Private::FModelORTDmlGPU::_scalar_deleting_destructor_
          (FModelORTDmlGPU *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ModelData).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Environment).SharedReferenceCount.ReferenceController);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eb0b300

void * __thiscall
UE::NNERuntimeORT::Private::FModelORTDmlRDG::_scalar_deleting_destructor_
          (FModelORTDmlRDG *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ModelData).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Environment).SharedReferenceCount.ReferenceController);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eb0b350

void * __thiscall
UE::NNERuntimeORT::Private::FModelORTNpu::_scalar_deleting_destructor_
          (FModelORTNpu *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ModelData).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Environment).SharedReferenceCount.ReferenceController);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eb0b3a0

void * __thiscall
FNNERuntimeORTDmlImpl::_scalar_deleting_destructor_(FNNERuntimeORTDmlImpl *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Environment).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7INNERuntimeNPU__6B_;
  this->_padding_ = (longlong)&___7INNERuntimeRDG__6B_;
  this->_padding_ = (longlong)&___7INNERuntimeGPU__6B_;
  this->_padding_ = (longlong)&___7INNERuntime__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eb0b410

void * __thiscall UE::NNE::IModelCPU::_scalar_deleting_destructor_(IModelCPU *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eb0b440

void * __thiscall UE::NNE::IModelGPU::_scalar_deleting_destructor_(IModelGPU *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eb0b470

void * __thiscall
UE::NNE::IModelInstanceCPU::_scalar_deleting_destructor_(IModelInstanceCPU *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eb0b4a0

void * __thiscall
UE::NNE::IModelInstanceGPU::_scalar_deleting_destructor_(IModelInstanceGPU *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eb0b4d0

void * __thiscall
UE::NNE::IModelInstanceNPU::_scalar_deleting_destructor_(IModelInstanceNPU *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eb0b500

void * __thiscall
UE::NNE::IModelInstanceRunSync::_scalar_deleting_destructor_
          (IModelInstanceRunSync *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eb0b530

void * __thiscall UE::NNE::IModelNPU::_scalar_deleting_destructor_(IModelNPU *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eb0b560

void * __thiscall UE::NNE::IModelRDG::_scalar_deleting_destructor_(IModelRDG *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eb0b590

void * __thiscall INNERuntime::_scalar_deleting_destructor_(INNERuntime *this,uint param_1)

{
  *this = (INNERuntime)&___7INNERuntime__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eb0b5d0

void * __thiscall INNERuntimeCPU::_scalar_deleting_destructor_(INNERuntimeCPU *this,uint param_1)

{
  *this = (INNERuntimeCPU)&___7INNERuntimeCPU__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eb0b610

void * __thiscall INNERuntimeGPU::_scalar_deleting_destructor_(INNERuntimeGPU *this,uint param_1)

{
  *this = (INNERuntimeGPU)&___7INNERuntimeGPU__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eb0b650

void * __thiscall INNERuntimeNPU::_scalar_deleting_destructor_(INNERuntimeNPU *this,uint param_1)

{
  *this = (INNERuntimeNPU)&___7INNERuntimeNPU__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eb0b690

void * __thiscall
INNERuntimeORTDmlImpl::_scalar_deleting_destructor_(INNERuntimeORTDmlImpl *this,uint param_1)

{
  *(undefined ***)&this->field_0x18 = &___7INNERuntimeNPU__6B_;
  *(undefined ***)&this->field_0x10 = &___7INNERuntimeRDG__6B_;
  *(undefined ***)&this->field_0x8 = &___7INNERuntimeGPU__6B_;
  *(undefined ***)this = &___7INNERuntime__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eb0b6f0

void * __thiscall INNERuntimeRDG::_scalar_deleting_destructor_(INNERuntimeRDG *this,uint param_1)

{
  *this = (INNERuntimeRDG)&___7INNERuntimeRDG__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eb0b730

void * __thiscall
UNNERuntimeORTCpu::_scalar_deleting_destructor_(UNNERuntimeORTCpu *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Environment).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7INNERuntimeCPU__6B_;
  this->_padding_ = (longlong)&___7INNERuntime__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eb0b7b0

void * __thiscall
UNNERuntimeORTDmlProxy::_scalar_deleting_destructor_(UNNERuntimeORTDmlProxy *this,uint param_1)

{
  INNERuntimeORTDmlImpl *pIVar1;
  
  pIVar1 = (this->Impl).Ptr;
  if (pIVar1 != (INNERuntimeORTDmlImpl *)0x0) {
    (*(code *)**(undefined8 **)pIVar1)(pIVar1,1);
  }
  this->_padding_ = (longlong)&___7INNERuntime__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eb0b830

void * __thiscall
UNNERuntimeORTDml_GPU::_scalar_deleting_destructor_(UNNERuntimeORTDml_GPU *this,uint param_1)

{
  undefined8 *puVar1;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INNERuntime__;
  *(undefined ***)&this->field_0x38 = &___7INNERuntimeGPU__6B_;
  puVar1 = *(undefined8 **)&this->field_0x30;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined ***)&this->field_0x28 = &___7INNERuntime__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eb0b8d0

void * __thiscall
UNNERuntimeORTDml_GPU_NPU::_scalar_deleting_destructor_
          (UNNERuntimeORTDml_GPU_NPU *this,uint param_1)

{
  undefined8 *puVar1;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INNERuntime__;
  *(undefined ***)&this->field_0x40 = &___7INNERuntimeNPU__6B_;
  *(undefined ***)&this->field_0x38 = &___7INNERuntimeGPU__6B_;
  puVar1 = *(undefined8 **)&this->field_0x30;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined ***)&this->field_0x28 = &___7INNERuntime__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eb0b970

void * __thiscall
UNNERuntimeORTDml_GPU_RDG::_scalar_deleting_destructor_
          (UNNERuntimeORTDml_GPU_RDG *this,uint param_1)

{
  undefined8 *puVar1;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INNERuntime__;
  *(undefined ***)&this->field_0x40 = &___7INNERuntimeRDG__6B_;
  *(undefined ***)&this->field_0x38 = &___7INNERuntimeGPU__6B_;
  puVar1 = *(undefined8 **)&this->field_0x30;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined ***)&this->field_0x28 = &___7INNERuntime__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eb0ba10

void * __thiscall
UNNERuntimeORTDml_GPU_RDG_NPU::_scalar_deleting_destructor_
          (UNNERuntimeORTDml_GPU_RDG_NPU *this,uint param_1)

{
  undefined8 *puVar1;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INNERuntime__;
  *(undefined ***)&this->field_0x48 = &___7INNERuntimeNPU__6B_;
  *(undefined ***)&this->field_0x40 = &___7INNERuntimeRDG__6B_;
  *(undefined ***)&this->field_0x38 = &___7INNERuntimeGPU__6B_;
  puVar1 = *(undefined8 **)&this->field_0x30;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined ***)&this->field_0x28 = &___7INNERuntime__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eb0bac0

void * __thiscall
UNNERuntimeORTDml_NPU::_scalar_deleting_destructor_(UNNERuntimeORTDml_NPU *this,uint param_1)

{
  undefined8 *puVar1;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INNERuntime__;
  *(undefined ***)&this->field_0x38 = &___7INNERuntimeNPU__6B_;
  puVar1 = *(undefined8 **)&this->field_0x30;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined ***)&this->field_0x28 = &___7INNERuntime__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eb0bb60

void * __thiscall
UNNERuntimeORTDml_RDG::_scalar_deleting_destructor_(UNNERuntimeORTDml_RDG *this,uint param_1)

{
  undefined8 *puVar1;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INNERuntime__;
  *(undefined ***)&this->field_0x38 = &___7INNERuntimeRDG__6B_;
  puVar1 = *(undefined8 **)&this->field_0x30;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined ***)&this->field_0x28 = &___7INNERuntime__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eb0bc00

void * __thiscall
UNNERuntimeORTDml_RDG_NPU::_scalar_deleting_destructor_
          (UNNERuntimeORTDml_RDG_NPU *this,uint param_1)

{
  undefined8 *puVar1;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INNERuntime__;
  *(undefined ***)&this->field_0x40 = &___7INNERuntimeNPU__6B_;
  *(undefined ***)&this->field_0x38 = &___7INNERuntimeRDG__6B_;
  puVar1 = *(undefined8 **)&this->field_0x30;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined ***)&this->field_0x28 = &___7INNERuntime__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14eb0bca0

void * __thiscall
UNNERuntimeORTSettings::_scalar_deleting_destructor_(UNNERuntimeORTSettings *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UNNERuntimeORTSettings__6B_;
  UDeveloperSettings::~UDeveloperSettings((UDeveloperSettings *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x58);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeNNERuntimeORT @ 14eb13930

void __cdecl EmptyLinkFunctionForGeneratedCodeNNERuntimeORT(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNNERuntimeORTSettings @ 14eb13940

void __cdecl EmptyLinkFunctionForGeneratedCodeNNERuntimeORTSettings(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNNERuntimeORT_init @ 14eb13950

void __cdecl EmptyLinkFunctionForGeneratedCodeNNERuntimeORT_init(void)

{
  return;
}

// GetID3D12DynamicRHI @ 14eb15310

ID3D12DynamicRHI * __cdecl GetID3D12DynamicRHI(void)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  ID3D12DynamicRHI *pIVar4;
  
  iVar3 = (**(code **)(GDynamicRHI->_padding_ + 0x28))();
  if (iVar3 != 3) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("GDynamicRHI->GetInterfaceType() == ERHIInterfaceType::D3D12",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Public\\ID3D12DynamicRHI.h"
                       ,0x48,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pIVar4 = (ID3D12DynamicRHI *)(*pcVar1)();
      return pIVar4;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014eb1535a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pIVar4 = (ID3D12DynamicRHI *)(**(code **)(GDynamicRHI->_padding_ + 0x30))();
  return pIVar4;
}

// ThrowOnError @ 14eb1df10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "OrtMemType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl Ort::ThrowOnError(OrtStatus *param_1)

{
  void *pvVar1;
  ulonglong uVar2;
  char *_Str;
  size_t sVar3;
  void *pvVar4;
  ulong64 uVar5;
  undefined1 auStackY_98 [32];
  undefined **local_68;
  char *local_60;
  _Bxty local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  OrtErrorCode local_38;
  _Bxty local_30;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  if (param_1 != (OrtStatus *)0x0) {
    local_10 = __security_cookie.value ^ (ulonglong)auStackY_98;
    _Str = (*Global<void>::api_->GetErrorMessage)(param_1);
    local_30._Ptr = (char *)0x0;
    local_30._8_8_ = 0;
    local_20 = 0;
    uStack_18 = 0;
    sVar3 = strlen(_Str);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Construct<1,char_const_*>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_30,_Str,
               sVar3);
    local_38 = (*Global<void>::api_->GetErrorCode)(param_1);
    local_60 = "unknown";
    local_68 = &___7Exception_Ort__6B_;
    local_58._0_4_ = local_30._0_4_;
    local_58._4_4_ = local_30._4_4_;
    local_58._8_4_ = local_30._8_4_;
    local_58._12_4_ = local_30._12_4_;
    local_48 = (undefined4)local_20;
    uStack_44 = local_20._4_4_;
    uStack_40 = (undefined4)uStack_18;
    uStack_3c = uStack_18._4_4_;
    if ((code *)PTR_what_153017ad8 == Exception::what) {
      std::_String_val<std::_Simple_types<char>_>::_Myptr
                ((_String_val<std::_Simple_types<char>_> *)&local_58);
    }
    else {
      (*(code *)PTR_what_153017ad8)(&local_68);
    }
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`void___cdecl_Ort::detail::ThrowStatus(Ort::Status_const&___ptr64)'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogNNEOnnxruntime);
    uVar2 = CONCAT44(uStack_3c,uStack_40);
    if (0xf < uVar2) {
      pvVar1 = (void *)CONCAT44(local_58._4_4_,local_58._0_4_);
      uVar5 = uVar2 + 1;
      pvVar4 = pvVar1;
      if (0xfff < uVar5) {
        pvVar4 = *(void **)((longlong)pvVar1 + -8);
        uVar5 = uVar2 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar4))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete(pvVar4,uVar5);
    }
    (*Global<void>::api_->ReleaseStatus)(param_1);
  }
  return;
}

// Z_Construct_UClass_UNNERuntimeORTCpu_NoRegister @ 14eb1e540

UClass * __cdecl Z_Construct_UClass_UNNERuntimeORTCpu_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNNERuntimeORTCpu.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NNERuntimeORT",L"NNERuntimeORTCpu",
               &Z_Registration_Info_UClass_UNNERuntimeORTCpu.InnerSingleton,
               UNNERuntimeORTCpu::StaticRegisterNativesUNNERuntimeORTCpu,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNNERuntimeORTCpu>,
               InternalVTableHelperCtorCaller<UNNERuntimeORTCpu>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNNERuntimeORTCpu.InnerSingleton;
}

// Z_Construct_UClass_UNNERuntimeORTDmlProxy_NoRegister @ 14eb1e5f0

UClass * __cdecl Z_Construct_UClass_UNNERuntimeORTDmlProxy_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNNERuntimeORTDmlProxy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NNERuntimeORT",L"NNERuntimeORTDmlProxy",
               &Z_Registration_Info_UClass_UNNERuntimeORTDmlProxy.InnerSingleton,
               UNNERuntimeORTDmlProxy::StaticRegisterNativesUNNERuntimeORTDmlProxy,0x38,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UNNERuntimeORTDmlProxy>,
               InternalVTableHelperCtorCaller<UNNERuntimeORTDmlProxy>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNNERuntimeORTDmlProxy.InnerSingleton;
}

// Z_Construct_UClass_UNNERuntimeORTDml_GPU_NPU_NoRegister @ 14eb1e6a0

UClass * __cdecl Z_Construct_UClass_UNNERuntimeORTDml_GPU_NPU_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNNERuntimeORTDml_GPU_NPU.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NNERuntimeORT",L"NNERuntimeORTDml_GPU_NPU",
               &Z_Registration_Info_UClass_UNNERuntimeORTDml_GPU_NPU.InnerSingleton,
               UNNERuntimeORTDml_GPU_NPU::StaticRegisterNativesUNNERuntimeORTDml_GPU_NPU,0x48,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNNERuntimeORTDml_GPU_NPU>,
               InternalVTableHelperCtorCaller<UNNERuntimeORTDml_GPU_NPU>,local_res8,
               UNNERuntimeORTDmlProxy::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNNERuntimeORTDml_GPU_NPU.InnerSingleton;
}

// Z_Construct_UClass_UNNERuntimeORTDml_GPU_NoRegister @ 14eb1e760

UClass * __cdecl Z_Construct_UClass_UNNERuntimeORTDml_GPU_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNNERuntimeORTDml_GPU.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NNERuntimeORT",L"NNERuntimeORTDml_GPU",
               &Z_Registration_Info_UClass_UNNERuntimeORTDml_GPU.InnerSingleton,
               UNNERuntimeORTDml_GPU::StaticRegisterNativesUNNERuntimeORTDml_GPU,0x40,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UNNERuntimeORTDml_GPU>,
               InternalVTableHelperCtorCaller<UNNERuntimeORTDml_GPU>,local_res8,
               UNNERuntimeORTDmlProxy::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNNERuntimeORTDml_GPU.InnerSingleton;
}

// Z_Construct_UClass_UNNERuntimeORTDml_GPU_RDG_NPU_NoRegister @ 14eb1e820

UClass * __cdecl Z_Construct_UClass_UNNERuntimeORTDml_GPU_RDG_NPU_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNNERuntimeORTDml_GPU_RDG_NPU.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NNERuntimeORT",L"NNERuntimeORTDml_GPU_RDG_NPU",
               &Z_Registration_Info_UClass_UNNERuntimeORTDml_GPU_RDG_NPU.InnerSingleton,
               UNNERuntimeORTDml_GPU_RDG_NPU::StaticRegisterNativesUNNERuntimeORTDml_GPU_RDG_NPU,
               0x50,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNNERuntimeORTDml_GPU_RDG_NPU>,
               InternalVTableHelperCtorCaller<UNNERuntimeORTDml_GPU_RDG_NPU>,local_res8,
               UNNERuntimeORTDmlProxy::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNNERuntimeORTDml_GPU_RDG_NPU.InnerSingleton;
}

// Z_Construct_UClass_UNNERuntimeORTDml_GPU_RDG_NoRegister @ 14eb1e8e0

UClass * __cdecl Z_Construct_UClass_UNNERuntimeORTDml_GPU_RDG_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNNERuntimeORTDml_GPU_RDG.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NNERuntimeORT",L"NNERuntimeORTDml_GPU_RDG",
               &Z_Registration_Info_UClass_UNNERuntimeORTDml_GPU_RDG.InnerSingleton,
               UNNERuntimeORTDml_GPU_RDG::StaticRegisterNativesUNNERuntimeORTDml_GPU_RDG,0x48,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNNERuntimeORTDml_GPU_RDG>,
               InternalVTableHelperCtorCaller<UNNERuntimeORTDml_GPU_RDG>,local_res8,
               UNNERuntimeORTDmlProxy::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNNERuntimeORTDml_GPU_RDG.InnerSingleton;
}

// Z_Construct_UClass_UNNERuntimeORTDml_NPU_NoRegister @ 14eb1e9a0

UClass * __cdecl Z_Construct_UClass_UNNERuntimeORTDml_NPU_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNNERuntimeORTDml_NPU.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NNERuntimeORT",L"NNERuntimeORTDml_NPU",
               &Z_Registration_Info_UClass_UNNERuntimeORTDml_NPU.InnerSingleton,
               UNNERuntimeORTDml_NPU::StaticRegisterNativesUNNERuntimeORTDml_NPU,0x40,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UNNERuntimeORTDml_NPU>,
               InternalVTableHelperCtorCaller<UNNERuntimeORTDml_NPU>,local_res8,
               UNNERuntimeORTDmlProxy::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNNERuntimeORTDml_NPU.InnerSingleton;
}

// Z_Construct_UClass_UNNERuntimeORTDml_RDG_NPU_NoRegister @ 14eb1ea60

UClass * __cdecl Z_Construct_UClass_UNNERuntimeORTDml_RDG_NPU_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNNERuntimeORTDml_RDG_NPU.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NNERuntimeORT",L"NNERuntimeORTDml_RDG_NPU",
               &Z_Registration_Info_UClass_UNNERuntimeORTDml_RDG_NPU.InnerSingleton,
               UNNERuntimeORTDml_RDG_NPU::StaticRegisterNativesUNNERuntimeORTDml_RDG_NPU,0x48,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UNNERuntimeORTDml_RDG_NPU>,
               InternalVTableHelperCtorCaller<UNNERuntimeORTDml_RDG_NPU>,local_res8,
               UNNERuntimeORTDmlProxy::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNNERuntimeORTDml_RDG_NPU.InnerSingleton;
}

// Z_Construct_UClass_UNNERuntimeORTDml_RDG_NoRegister @ 14eb1eb20

UClass * __cdecl Z_Construct_UClass_UNNERuntimeORTDml_RDG_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNNERuntimeORTDml_RDG.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NNERuntimeORT",L"NNERuntimeORTDml_RDG",
               &Z_Registration_Info_UClass_UNNERuntimeORTDml_RDG.InnerSingleton,
               UNNERuntimeORTDml_RDG::StaticRegisterNativesUNNERuntimeORTDml_RDG,0x40,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UNNERuntimeORTDml_RDG>,
               InternalVTableHelperCtorCaller<UNNERuntimeORTDml_RDG>,local_res8,
               UNNERuntimeORTDmlProxy::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNNERuntimeORTDml_RDG.InnerSingleton;
}

// Z_Construct_UClass_UNNERuntimeORTSettings_NoRegister @ 14eb1ebe0

UClass * __cdecl Z_Construct_UClass_UNNERuntimeORTSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNNERuntimeORTSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NNERuntimeORT",L"NNERuntimeORTSettings",
               &Z_Registration_Info_UClass_UNNERuntimeORTSettings.InnerSingleton,
               UNNERuntimeORTSettings::StaticRegisterNativesUNNERuntimeORTSettings,0x58,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UNNERuntimeORTSettings>,
               InternalVTableHelperCtorCaller<UNNERuntimeORTSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNNERuntimeORTSettings.InnerSingleton;
}

// _Myptr @ 14eb1eca0

char * __thiscall
std::_String_val<std::_Simple_types<char>_>::_Myptr(_String_val<std::_Simple_types<char>_> *this)

{
  if (0xf < this->_Myres) {
    return (this->_Bx)._Ptr;
  }
  return (char *)this;
}

// what @ 14eb1ee70

char * __thiscall Ort::Exception::what(Exception *this)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  
  pbVar1 = &this->message_;
  if (0xf < (this->message_)._Mypair._Myval2._Myres) {
    pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             (pbVar1->_Mypair)._Myval2._Bx._Ptr;
  }
  return (char *)pbVar1;
}

// IMPLEMENT_MODULE_NNERuntimeORT @ 14eb1f0e0

void __cdecl IMPLEMENT_MODULE_NNERuntimeORT(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'CVarNNERuntimeORTEnableProfiling'' @ 15046f670

void __cdecl _dynamic_atexit_destructor_for__CVarNNERuntimeORTEnableProfiling__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarNNERuntimeORTEnableProfiling);
  return;
}

// `dynamic_atexit_destructor_for_'Desc'' @ 15046f690

void __cdecl
```UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::EnqueueRDG'::__l95::Desc::operator()<>'::
__l3::<lambda_1>::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015046f697. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  return;
}

// `dynamic_atexit_destructor_for_'GPUStat_FNNERuntimeORTDmlRDG'' @ 15046f6b0

void __cdecl _dynamic_atexit_destructor_for__GPUStat_FNNERuntimeORTDmlRDG__(void)

{
  GPUStat_FNNERuntimeORTDmlRDG._104_4_ = 0;
  if (GPUStat_FNNERuntimeORTDmlRDG._96_8_ != 0) {
    FMemory::Free((void *)GPUStat_FNNERuntimeORTDmlRDG._96_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUStat::FStatInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GPUStat_FNNERuntimeORTDmlRDG.field_0x20);
  return;
}

// `dynamic_atexit_destructor_for_'LogNNEOnnxruntime'' @ 15046f6f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogNNEOnnxruntime__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogNNEOnnxruntime);
  return;
}

// `dynamic_atexit_destructor_for_'LogNNERuntimeORT'' @ 15046f710

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogNNERuntimeORT__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogNNERuntimeORT);
  return;
}

// `dynamic_atexit_destructor_for_'OnnxExternalDataBytesKey'' @ 15046f730

void __cdecl
UE::NNERuntimeORT::Private::Details::_dynamic_atexit_destructor_for__OnnxExternalDataBytesKey__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = OnnxExternalDataBytesKey.Data.AllocatorInstance.Data;
  if (OnnxExternalDataBytesKey.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (OnnxExternalDataBytesKey.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'OnnxExternalDataDescriptorKey'' @ 15046f750

void __cdecl
UE::NNERuntimeORT::Private::Details::_dynamic_atexit_destructor_for__OnnxExternalDataDescriptorKey__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = OnnxExternalDataDescriptorKey.Data.AllocatorInstance.Data;
  if (OnnxExternalDataDescriptorKey.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (OnnxExternalDataDescriptorKey.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'StaticStructMetadata'' @ 15046f770

void __cdecl
`FORTModelInstanceRDGParameters::FTypeInfo::GetStructMetadata'::__l2::
_dynamic_atexit_destructor_for__StaticStructMetadata__(void)

{
  FShaderParametersMetadata::~FShaderParametersMetadata
            (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FORTModelInstanceRDGParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata);
  return;
}

