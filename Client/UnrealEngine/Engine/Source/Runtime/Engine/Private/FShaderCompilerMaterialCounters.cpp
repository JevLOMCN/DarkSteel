// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// StaticStruct @ 1485054b0

UScriptStruct * __cdecl FShaderCompilerMaterialCounters::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FShaderCompilerMaterialCounters.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FShaderCompilerMaterialCounters.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FShaderCompilerMaterialCounters,(UObject *)pUVar1
                         ,L"ShaderCompilerMaterialCounters");
  }
  return Z_Registration_Info_UScriptStruct_FShaderCompilerMaterialCounters.OuterSingleton;
}

// GatherAnalytics @ 148527240

void __thiscall
FShaderCompilerMaterialCounters::GatherAnalytics
          (FShaderCompilerMaterialCounters *this,
          TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FString *pFVar3;
  FString local_18;
  
  iVar2 = param_1->ArrayNum;
  if (iVar2 == param_1->ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar2 + 1;
  pFVar1 = (param_1->AllocatorInstance).Data;
  pFVar3 = ::FString::FString(&local_18,L"Material_NumMaterialsCooked");
  FAnalyticsEventAttribute::FAnalyticsEventAttribute<int_&>
            ((FAnalyticsEventAttribute *)(pFVar1 + (longlong)iVar2 * 0x30),pFVar3,
             &this->NumMaterialsCooked);
  iVar2 = param_1->ArrayNum;
  if (iVar2 == param_1->ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar2 + 1;
  pFVar1 = (param_1->AllocatorInstance).Data;
  pFVar3 = ::FString::FString(&local_18,L"Material_MaterialTranslateCalls");
  FAnalyticsEventAttribute::FAnalyticsEventAttribute<int_&>
            ((FAnalyticsEventAttribute *)(pFVar1 + (longlong)iVar2 * 0x30),pFVar3,
             &this->MaterialTranslateCalls);
  iVar2 = param_1->ArrayNum;
  if (iVar2 == param_1->ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar2 + 1;
  pFVar1 = (param_1->AllocatorInstance).Data;
  pFVar3 = ::FString::FString(&local_18,L"Material_MaterialTranslateTimeSec");
  FAnalyticsEventAttribute::FAnalyticsEventAttribute<double_&>
            ((FAnalyticsEventAttribute *)(pFVar1 + (longlong)iVar2 * 0x30),pFVar3,
             &this->MaterialTranslateTotalTimeSec);
  iVar2 = param_1->ArrayNum;
  if (iVar2 == param_1->ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar2 + 1;
  pFVar1 = (param_1->AllocatorInstance).Data;
  pFVar3 = ::FString::FString(&local_18,L"Material_MaterialTranslateTranslationOnlyTimeSec");
  FAnalyticsEventAttribute::FAnalyticsEventAttribute<double_&>
            ((FAnalyticsEventAttribute *)(pFVar1 + (longlong)iVar2 * 0x30),pFVar3,
             &this->MaterialTranslateTranslationOnlyTimeSec);
  iVar2 = param_1->ArrayNum;
  if (iVar2 == param_1->ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar2 + 1;
  pFVar1 = (param_1->AllocatorInstance).Data;
  pFVar3 = ::FString::FString(&local_18,L"Material_MaterialTranslateSerializationOnlyTimeSec");
  FAnalyticsEventAttribute::FAnalyticsEventAttribute<double_&>
            ((FAnalyticsEventAttribute *)(pFVar1 + (longlong)iVar2 * 0x30),pFVar3,
             &this->MaterialTranslateSerializationOnlyTimeSec);
  iVar2 = param_1->ArrayNum;
  if (iVar2 == param_1->ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar2 + 1;
  pFVar1 = (param_1->AllocatorInstance).Data;
  pFVar3 = ::FString::FString(&local_18,L"Material_MaterialCacheHits");
  FAnalyticsEventAttribute::FAnalyticsEventAttribute<int_&>
            ((FAnalyticsEventAttribute *)(pFVar1 + (longlong)iVar2 * 0x30),pFVar3,
             &this->MaterialCacheHits);
  return;
}

// WriteStatSummary @ 14854e840

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FShaderCompilerMaterialCounters::WriteStatSummary
          (FShaderCompilerMaterialCounters *this,wchar_t *param_1)

{
  double dVar1;
  
  if ((((3 < (byte)LogShaderCompilers._0_1_) &&
       (UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogShaderCompilers),
       3 < (byte)LogShaderCompilers._0_1_)) &&
      (UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogShaderCompilers),
      3 < (byte)LogShaderCompilers._0_1_)) &&
     ((UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogShaderCompilers),
      3 < (byte)LogShaderCompilers._0_1_ &&
      (UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogShaderCompilers),
      3 < (byte)LogShaderCompilers._0_1_)))) {
    dVar1 = this->MaterialTranslateTotalTimeSec;
    if (this->MaterialTranslateTotalTimeSec <= __real_3eb0c6f7a0b5ed8d) {
      dVar1 = __real_3eb0c6f7a0b5ed8d;
    }
    round((this->MaterialTranslateTranslationOnlyTimeSec / dVar1) * __real_4059000000000000);
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogShaderCompilers);
    if (3 < (byte)LogShaderCompilers._0_1_) {
      dVar1 = this->MaterialTranslateTotalTimeSec;
      if (this->MaterialTranslateTotalTimeSec <= __real_3eb0c6f7a0b5ed8d) {
        dVar1 = __real_3eb0c6f7a0b5ed8d;
      }
      round((this->MaterialTranslateSerializationOnlyTimeSec / dVar1) * __real_4059000000000000);
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogShaderCompilers);
    }
  }
  if (this->MaterialTranslateCalls != 0) {
    roundf(((float)this->MaterialCacheHits / (float)this->MaterialTranslateCalls) * __real_42c80000)
    ;
  }
  if ((byte)LogShaderCompilers._0_1_ < 4) {
    return;
  }
  UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogShaderCompilers);
  return;
}

