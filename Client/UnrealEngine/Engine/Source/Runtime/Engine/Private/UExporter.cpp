// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 36

// StaticClass @ 14727aae0

UClass * __cdecl UExporter::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UExporter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"Exporter",&Z_Registration_Info_UClass_UExporter.InnerSingleton,
               StaticRegisterNativesUExporter,0x78,8,CLASS_Intrinsic|CLASS_Transient|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UExporter>,
               InternalVTableHelperCtorCaller<UExporter>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UExporter.InnerSingleton;
}

// UExporter @ 14727f750

UExporter * __thiscall UExporter::UExporter(UExporter *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UExporter__6B_;
  (this->SupportedClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->ExportRootScope).field0_0x0.DebugPtr = (UObject *)0x0;
  (this->FormatExtension).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FormatExtension).ArrayNum = 0;
  (this->FormatExtension).ArrayMax = 0;
  (this->FormatDescription).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FormatDescription).ArrayNum = 0;
  (this->FormatDescription).ArrayMax = 0;
  (this->ExportTask).field0_0x0.DebugPtr = (UAssetExportTask *)0x0;
  return this;
}

// ~UExporter @ 14727fc60

void __thiscall UExporter::~UExporter(UExporter *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UExporter__6B_;
  DestructItems<FString,int>
            ((FString *)(this->FormatDescription).AllocatorInstance.Data,
             (this->FormatDescription).ArrayNum);
  pFVar1 = (this->FormatDescription).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->FormatExtension).AllocatorInstance.Data,
             (this->FormatExtension).ArrayNum);
  pFVar1 = (this->FormatExtension).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// ExportBinary @ 147280760

bool __thiscall
UExporter::ExportBinary
          (UExporter *this,UObject *param_1,wchar_t *param_2,FArchive *param_3,
          FFeedbackContext *param_4,int param_5,uint param_6)

{
  return false;
}

// ExportComponentExtra @ 147280770

void __thiscall
UExporter::ExportComponentExtra
          (UExporter *this,FExportObjectInnerContext *param_1,
          TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> *param_2,FOutputDevice *param_3,
          uint param_4)

{
  return;
}

// ExportPackageInners @ 147280780

void __thiscall UExporter::ExportPackageInners(UExporter *this,FExportPackageParams *param_1)

{
  return;
}

// ExportPackageObject @ 147280790

void __thiscall UExporter::ExportPackageObject(UExporter *this,FExportPackageParams *param_1)

{
  return;
}

// ExportText @ 1472807a0

bool __thiscall
UExporter::ExportText
          (UExporter *this,FExportObjectInnerContext *param_1,UObject *param_2,wchar_t *param_3,
          FOutputDevice *param_4,FFeedbackContext *param_5,uint param_6)

{
  return false;
}

// GetFileCount @ 1472807d0

int __thiscall UExporter::GetFileCount(UExporter *this,UObject *param_1)

{
  return 1;
}

// GetPrivateStaticClass @ 147280a20

UClass * __cdecl UExporter::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UExporter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"Exporter",&Z_Registration_Info_UClass_UExporter.InnerSingleton,
               StaticRegisterNativesUExporter,0x78,8,CLASS_Intrinsic|CLASS_Transient|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UExporter>,
               InternalVTableHelperCtorCaller<UExporter>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UExporter.InnerSingleton;
}

// GetUniqueFilename @ 1472812e0

FString * __thiscall
UExporter::GetUniqueFilename
          (UExporter *this,FString *__return_storage_ptr__,UObject *param_1,wchar_t *param_2,
          int param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  
  if ((param_3 != 0) || (param_4 != 1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FileIndex == 0 && FileCount == 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Exporters\\Exporter.h"
                       ,0x92,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
  }
  ::FString::FString(__return_storage_ptr__,param_2);
  return __return_storage_ptr__;
}

// ScriptRunAssetExportTask @ 147281360

bool __thiscall UExporter::ScriptRunAssetExportTask(UExporter *this,UAssetExportTask *param_1)

{
  UFunction *pUVar1;
  UAssetExportTask *local_18;
  char local_10;
  
  local_10 = '\0';
  local_18 = param_1;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UExporter_ScriptRunAssetExportTask);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_18);
  return local_10 != '\0';
}

// Serialize @ 1472813b0

void __thiscall UExporter::Serialize(UExporter *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// StaticRegisterNativesUExporter @ 1472814b0

void __cdecl UExporter::StaticRegisterNativesUExporter(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UExporter_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execRunAssetExportTask @ 147283a40

void __cdecl UExporter::execRunAssetExportTask(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  UAssetExportTask *local_res10;
  
  local_res10 = (UAssetExportTask *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = RunAssetExportTask(local_res10);
  *(bool *)param_3 = bVar2;
  return;
}

// execRunAssetExportTasks @ 147283ad0

void __cdecl UExporter::execRunAssetExportTasks(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  TArray<UAssetExportTask_*,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<UAssetExportTask_*,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pTVar3 = &local_18;
  if ((TArray<UAssetExportTask_*,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress
      != (TArray<UAssetExportTask_*,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar3 = (TArray<UAssetExportTask_*,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = RunAssetExportTasks(pTVar3);
  *(bool *)param_3 = bVar2;
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// UExporter @ 14890ad90

UExporter * __thiscall UExporter::UExporter(UExporter *this,FObjectInitializer *param_1)

{
  int iVar1;
  FWeakObjectPtr FVar2;
  bool bVar3;
  ForElementType<FSetElementId> FVar4;
  FWeakObjectPtr *this_00;
  longlong lVar5;
  FWeakObjectPtr local_res8 [2];
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UExporter__6B_;
  (this->SupportedClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->ExportRootScope).field0_0x0.DebugPtr = (UObject *)0x0;
  (this->FormatExtension).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FormatExtension).ArrayNum = 0;
  (this->FormatExtension).ArrayMax = 0;
  (this->FormatDescription).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FormatDescription).ArrayNum = 0;
  (this->FormatDescription).ArrayMax = 0;
  (this->ExportTask).field0_0x0.DebugPtr = (UAssetExportTask *)0x0;
  if ((this->_padding_ & 0x10) != 0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    local_res18.ObjectIndex = 0;
    local_res18.ObjectSerialNumber = 0;
    local_res8[0] = (FWeakObjectPtr)this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)local_res8);
    FVar2 = local_res18;
    if (RegisteredExporters.Elements._8_4_ != RegisteredExporters.Elements._52_4_) {
      FVar4 = (ForElementType<FSetElementId>)0x154c6d3e8;
      if (RegisteredExporters.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FVar4 = RegisteredExporters.Hash.SecondaryData;
      }
      iVar1 = *(int *)((longlong)FVar4 +
                      (ulonglong)
                      (RegisteredExporters.HashSize - 1U &
                      (local_res18.ObjectSerialNumber ^ local_res18.ObjectIndex)) * 4);
      while (iVar1 != -1) {
        lVar5 = (longlong)iVar1 * 0x10;
        local_res8[0] = FVar2;
        local_res20 = *(FWeakObjectPtr *)(lVar5 + RegisteredExporters.Elements._0_8_);
        bVar3 = TWeakObjectPtr<UExporter_const_,FWeakObjectPtr>::UEOpEquals<UExporter_const_,bool>
                          ((TWeakObjectPtr<UExporter_const_,FWeakObjectPtr> *)&local_res20,
                           (TWeakObjectPtr<UExporter_const_,FWeakObjectPtr> *)local_res8);
        if (bVar3) {
          this_00 = (FWeakObjectPtr *)(RegisteredExporters.Elements._0_8_ + lVar5);
          if (this_00 != (FWeakObjectPtr *)0x0) {
            bVar3 = FWeakObjectPtr::IsValid(this_00);
            if (bVar3) goto LAB_14890af12;
            local_res8[0] = *this_00;
            if (RegisteredExporters.Elements._8_4_ != RegisteredExporters.Elements._52_4_) {
              TSet<TWeakObjectPtr<UExporter,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UExporter,FWeakObjectPtr>,0>,FDefaultSetAllocator>
              ::RemoveImpl<TWeakObjectPtr<UExporter_const_,FWeakObjectPtr>_>
                        (&RegisteredExporters,
                         local_res8[0].ObjectSerialNumber ^ local_res8[0].ObjectIndex,
                         (TWeakObjectPtr<UExporter_const_,FWeakObjectPtr> *)local_res8);
            }
          }
          break;
        }
        iVar1 = *(int *)(lVar5 + 8 + RegisteredExporters.Elements._0_8_);
      }
    }
    TSet<TWeakObjectPtr<UExporter,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UExporter,FWeakObjectPtr>,0>,FDefaultSetAllocator>
    ::Emplace<TWeakObjectPtr<UExporter,FWeakObjectPtr>_const_&>
              (&RegisteredExporters,(TWeakObjectPtr<UExporter,FWeakObjectPtr> *)local_res8,
               (bool *)&local_res18);
  }
LAB_14890af12:
  this->BatchExportMode = false;
  this->ShowExportOption = true;
  this->CancelBatch = false;
  return this;
}

// operator() @ 148911ae0

bool __thiscall
`UExporter::ExportObjectInner'::__l10::<lambda_1>::operator()
          (void *this,UObject *param_1,UObject *param_2)

{
  int iVar1;
  ForAnyElementType FVar2;
  ForAnyElementType FVar3;
  FName local_res10 [3];
  FString local_28;
  FString local_18;
  
  local_res10[0].ComparisonIndex.Value = *(uint *)&param_2->field_0x18;
  local_res10[0].Number = *(uint *)&param_2->field_0x1c;
  ::FName::ToString(local_res10,&local_18);
  local_res10[0].ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
  local_res10[0].Number = *(uint *)&param_1->field_0x1c;
  ::FName::ToString(local_res10,&local_28);
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar3.Data = local_18.Data.AllocatorInstance.Data;
  }
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar2.Data = local_28.Data.AllocatorInstance.Data;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar2.Data,(wchar_t *)FVar3.Data);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return SUB41((uint)iVar1 >> 0x1f,0);
}

// EmitBeginObject @ 148939010

void __thiscall
UExporter::EmitBeginObject(UExporter *this,FOutputDevice *param_1,UObject *param_2,uint param_3)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  EOverriddenPropertyOperation EVar4;
  UObject *pUVar5;
  FOverriddenPropertySet *this_00;
  FName local_res8;
  TObjectPtr<UObject_const_>_u_0 local_res18 [2];
  TObjectPtr<UObject_const_>_u_0 local_88;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  FString local_40;
  
  if ((param_2 == (UObject *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Obj",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UnrealExporter.cpp"
                         ,0x1c7,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (((*(uint *)&param_2->field_0x8 & 0x10) == 0) &&
     (pUVar5 = UObject::GetArchetype(param_2), (*(uint *)&pUVar5->field_0x8 & 0x10) == 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (((this->TextIndent < 0) || (0xff < this->TextIndent)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumSpaces >= 0 && NumSpaces <= TCStringSpcHelper<T>::MAX_SPACES",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\CString.h"
                         ,0x272,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FOutputDevice::LogfImpl(param_1,L"%sBegin Object");
  if ((param_3 & 0x1000000) == 0) {
    UObjectBaseUtility::GetPathName
              (*(UObjectBaseUtility **)&param_2->field_0x10,&local_70,(UObject *)0x0);
    FOutputDevice::LogfImpl(param_1,L" Class=%s");
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
  }
  local_res8.ComparisonIndex.Value = *(uint *)&param_2->field_0x18;
  local_res8.Number = *(uint *)&param_2->field_0x1c;
  ::FName::ToString(&local_res8,&local_80);
  FOutputDevice::LogfImpl(param_1,L" Name=\"%s\"");
  if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.Data.AllocatorInstance.Data);
  }
  if ((param_3 & 0x1000000) == 0) {
    if (!bVar2) {
      local_res18[0].DebugPtr = UObject::GetArchetype(param_2);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_res18[0].DebugPtr != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_res18[0].DebugPtr);
      }
      FObjectPropertyBase::GetExportPath
                (&local_60,(TObjectPtr<UObject_const_> *)&local_res18[0].ObjectPtr,(UObject *)0x0,
                 (UObject *)0x0,param_3 & 0xfffffffb | 1);
      FOutputDevice::LogfImpl(param_1,L" Archetype=%s");
      if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Data.AllocatorInstance.Data);
      }
    }
    this_00 = UnrealExporterPrivate::GetOverriddenProperties((TNotNull<UObject_*>)param_2);
    if (this_00 != (FOverriddenPropertySet *)0x0) {
      EVar4 = FOverriddenPropertySet::GetOverriddenPropertyOperation
                        (this_00,(FArchiveSerializedPropertyChain *)0x0,(FProperty *)0x0);
      GetOverriddenOperationString(&local_50,EVar4);
      FOutputDevice::LogfImpl(param_1,L" OverriddenOperation=%s");
      if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
    }
  }
  if ((param_3 >> 0xe & 1) == 0) {
    local_88.DebugPtr = param_2;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(param_2);
    }
    FObjectPropertyBase::GetExportPath
              (&local_40,(TObjectPtr<UObject_const_> *)&local_88.ObjectPtr,(UObject *)0x0,
               (UObject *)0x0,param_3 & 0xfffffffb | 1);
    FOutputDevice::LogfImpl(param_1,L" ExportPath=%s");
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
  }
  FOutputDevice::Log(param_1,L"\r\n");
  return;
}

// EmitEndObject @ 1489392e0

void __thiscall UExporter::EmitEndObject(UExporter *this,FOutputDevice *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->TextIndent < 0) || (0xff < this->TextIndent)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumSpaces >= 0 && NumSpaces <= TCStringSpcHelper<T>::MAX_SPACES",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\CString.h"
                       ,0x272,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FOutputDevice::LogfImpl(param_1,L"%sEnd Object\r\n");
  return;
}

// ExportObjectInner @ 14893e640

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UExporter::ExportObjectInner
          (UExporter *this,FExportObjectInnerContext *param_1,UObject *param_2,
          FOutputDevice *param_3,uint param_4)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  UObjectBase *pUVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  AActor *this_00;
  FOutputDevice *pFVar7;
  bool bVar8;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *pTVar9;
  UClass *pUVar10;
  AActor *pAVar11;
  UClass *pUVar12;
  UClass *pUVar13;
  wchar_t *pwVar14;
  longlong lVar15;
  FScriptContainerElement *pFVar16;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *pTVar17;
  FScriptContainerElement *local_res8;
  UClass *local_res10;
  AActor *local_res18;
  FOutputDevice *local_res20;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *local_78;
  undefined8 local_70;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_68;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_58;
  
  this->TextIndent = this->TextIndent + 3;
  pTVar9 = (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)0x0;
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  local_res10 = (UClass *)param_1;
  local_res18 = (AActor *)param_2;
  local_res20 = param_3;
  if (param_1 == (FExportObjectInnerContext *)0x0) {
    GetObjectsWithOuter((UObjectBase *)param_2,&local_58,false,RF_NoFlags,Garbage);
  }
  else {
    pTVar9 = TMapBase<UObject_*,TArray<UObject_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,TArray<UObject_*,TSizedDefaultAllocator<32>_>,0>_>
             ::Find((TMapBase<UObject_*,TArray<UObject_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,TArray<UObject_*,TSizedDefaultAllocator<32>_>,0>_>
                     *)&param_1->ObjectToInnerMap,param_2);
  }
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayMax = 0;
  pTVar17 = &local_58;
  if (pTVar9 != (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar17 = pTVar9;
  }
  local_68.ArrayNum = 0;
  if ((param_4 & 0x200000) != 0) {
    if (&local_68 != pTVar17) {
      local_68.ArrayNum = pTVar17->ArrayNum;
      lVar15 = (longlong)local_68.ArrayNum;
      local_res8 = (pTVar17->AllocatorInstance).Data;
      if (local_68.ArrayNum != 0) {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,local_68.ArrayNum,0,&local_68.AllocatorInstance,local_68.ArrayNum,
                   &local_68.ArrayMax);
        memcpy(local_68.AllocatorInstance.Data,local_res8,lVar15 << 3);
      }
    }
    AlgoImpl::
    IntroSortInternal<UObject_*,int,FIdentityFunctor,TDereferenceWrapper<UObject_*,_UExporter::ExportObjectInner_::__l10::<lambda_1>_>_>
              ((UObject **)local_68.AllocatorInstance.Data,local_68.ArrayNum,param_4._0_1_,
               (<lambda_1> *)&local_res8);
  }
  pUVar10 = local_res10;
  local_78 = &local_68;
  if ((param_4 & 0x200000) == 0) {
    local_78 = pTVar17;
  }
  piVar1 = &local_78->ArrayNum;
  if ((param_4 >> 0x18 & 1) == 0) {
    pFVar16 = (local_78->AllocatorInstance).Data;
    iVar3 = *piVar1;
    pFVar2 = pFVar16 + (longlong)iVar3 * 8;
    while( true ) {
      if (*piVar1 != iVar3) {
        `TCheckedPointerIterator<UObject_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_res8);
      }
      if (pFVar16 == pFVar2) break;
      if ((*(uint *)&(*(UObject **)pFVar16)->field_0x8 >> 0x14 & 1) == 0) {
        pwVar14 = L"T3D";
        if ((param_4 >> 0xb & 1) != 0) {
          pwVar14 = L"Copy";
        }
        ExportToOutputDevice
                  ((FExportObjectInnerContext *)pUVar10,*(UObject **)pFVar16,(UExporter *)0x0,
                   local_res20,pwVar14,this->TextIndent,param_4 | 0x800000,false,
                   (this->ExportRootScope).field0_0x0.DebugPtr);
      }
      pFVar16 = pFVar16 + 8;
    }
  }
  if ((param_4 >> 0x17 & 1) != 0) goto LAB_14893ea45;
  pFVar16 = (local_78->AllocatorInstance).Data;
  iVar3 = *piVar1;
  pFVar2 = pFVar16 + (longlong)iVar3 * 8;
  while( true ) {
    if (*piVar1 != iVar3) {
      `TCheckedPointerIterator<UObject_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res8);
    }
    this_00 = local_res18;
    if (pFVar16 == pFVar2) break;
    pUVar4 = *(UObjectBase **)pFVar16;
    if (((pUVar4->ObjectFlags >> 0x14 & 1) == 0) &&
       (pUVar10 = Z_Construct_UClass_UModel_NoRegister(),
       (pUVar4->ClassPrivate).ObjectPtr.field0_0x0.DebugPtr != pUVar10)) {
      pwVar14 = L"T3D";
      if ((param_4 >> 0xb & 1) != 0) {
        pwVar14 = L"Copy";
      }
      ExportToOutputDevice
                ((FExportObjectInnerContext *)local_res10,(UObject *)pUVar4,(UExporter *)0x0,
                 local_res20,pwVar14,this->TextIndent,param_4 | 0x1000000,false,
                 (this->ExportRootScope).field0_0x0.DebugPtr);
      MarkObject(pUVar4,OBJECTMARK_TagImp);
    }
    pFVar16 = pFVar16 + 8;
  }
  pAVar11 = local_res18;
  if (((uint)local_res18->_padding_ >> 4 & 1) == 0) {
    pAVar11 = (AActor *)UObject::GetArchetype((UObject *)local_res18);
  }
  pUVar5 = (this->ExportRootScope).field0_0x0.DebugPtr;
  pUVar10 = (UClass *)this_00->_padding_;
  iVar3 = this->TextIndent;
  bVar8 = FOverridableSerializationLogic::HasCapabilities(T3DSerialization);
  pFVar7 = local_res20;
  pUVar6 = local_res10;
  if (bVar8) {
    ExportProperties_Overrides
              ((FExportObjectInnerContext *)local_res10,local_res20,pUVar10,(uchar *)this_00,iVar3,
               pUVar10,(uchar *)pAVar11,(UObject *)this_00,param_4,pUVar5);
  }
  else {
    ExportProperties_NoOverrides
              ((FExportObjectInnerContext *)local_res10,local_res20,pUVar10,(uchar *)this_00,iVar3,
               pUVar10,(uchar *)pAVar11,(UObject *)this_00,param_4,pUVar5);
  }
  pUVar12 = Z_Construct_UClass_AActor_NoRegister();
  pUVar10 = (UClass *)0x0;
  iVar3 = (int)pUVar12->_padding_;
  if (((*(int *)(this_00->_padding_ + 0x38) < iVar3) ||
      ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar3 * 8)
       != &pUVar12->_padding_)) || (this_00 == (AActor *)0x0)) goto LAB_14893ea45;
  local_78 = (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)0x0;
  local_70 = 0;
  pUVar12 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar12 != (UClass *)0x0) goto LAB_14893e98f;
  }
  else if (pUVar12 != (UClass *)0x0) {
    UE::GC::MarkAsReachable((UObject *)pUVar12);
LAB_14893e98f:
    pUVar13 = Z_Construct_UClass_UActorComponent_NoRegister();
    if (pUVar13 != (UClass *)0x0) {
      iVar3 = (int)pUVar13->_padding_;
      if (((int)pUVar12->_padding_ < iVar3) ||
         ((longlong *)*(undefined1 **)(pUVar12->_padding_ + (longlong)iVar3 * 8) !=
          &pUVar13->_padding_)) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      if (bVar8) {
        pUVar10 = pUVar12;
      }
    }
  }
  pUVar13 = Z_Construct_UClass_UActorComponent_NoRegister();
  local_res10 = pUVar12;
  if (pUVar10 == pUVar13) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar12);
    }
    AActor::
    ForEachComponent_Internal<UActorComponent,1,0,_AActor::GetComponents<TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
              (this_00,(TSubclassOf<UActorComponent>)&local_res10,
               (TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> *)&local_78);
  }
  else {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar12);
    }
    AActor::
    ForEachComponent_Internal<UActorComponent,0,0,_AActor::GetComponents<TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
              (this_00,(TSubclassOf<UActorComponent>)&local_res10,
               (TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> *)&local_78);
  }
  (**(code **)(this->_padding_ + 0x318))(this,pUVar6,&local_78,pFVar7,param_4);
  if (local_78 != (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_78);
  }
LAB_14893ea45:
  this->TextIndent = this->TextIndent + -3;
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  return;
}

// ExportToArchive @ 1489424b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
UExporter::ExportToArchive
          (UObject *param_1,UExporter *param_2,FArchive *param_3,wchar_t *param_4,int param_5)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UClass *local_res8;
  FString local_28;
  
  if ((param_1 == (UObject *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UnrealExporter.cpp"
                         ,0xa8,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if ((param_2 == (UExporter *)0x0) &&
     (param_2 = FindExporter(param_1,param_4), param_2 == (UExporter *)0x0)) {
    if (2 < (byte)LogExporter._0_1_) {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_1,&local_28,(UObject *)0x0,None);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogExporter);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    uVar3 = 0;
  }
  else {
    local_res8 = (param_2->SupportedClass).Class.field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    bVar2 = UObjectBaseUtility::IsA<TSubclassOf<UObject>_>
                      ((UObjectBaseUtility *)param_1,(TSubclassOf<UObject>)&local_res8);
    if ((!bVar2) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Object->IsA( Exporter->SupportedClass )",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UnrealExporter.cpp"
                           ,0xb3,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    uVar3 = (**(code **)(param_2->_padding_ + 0x2d0))
                      (param_2,param_1,param_4,param_3,GWarn,param_5,0);
  }
  return (bool)uVar3;
}

// ExportToFile @ 148942610

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

int __cdecl
UExporter::ExportToFile
          (UObject *param_1,UExporter *param_2,wchar_t *param_3,bool param_4,bool param_5,
          bool param_6)

{
  bool bVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  UAssetExportTask *pUVar4;
  longlong *plVar5;
  undefined1 auStack_f8 [32];
  FGCObject local_d8;
  UAssetExportTask *local_c8;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  pUVar2 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar2,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar3 = Z_Construct_UClass_UAssetExportTask_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar3);
  local_b8._8_8_ = pUVar2;
  pUVar4 = (UAssetExportTask *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar5 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar5 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  local_d8.bCanMakeInitialReferences = false;
  local_d8.bReferenceAdded = false;
  local_d8._padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::RegisterGCObject(&local_d8);
  local_d8._padding_ = (longlong)&___7__TGCObjectScopeGuard___CBVUObject____6B_;
  local_c8 = pUVar4;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar4 != (UAssetExportTask *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(param_1);
    }
  }
  (pUVar4->Object).field0_0x0.DebugPtr = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UExporter *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  (pUVar4->Exporter).field0_0x0.DebugPtr = param_2;
  ::FString::operator=(&pUVar4->Filename,param_3);
  pUVar4->bSelected = param_4;
  pUVar4->bReplaceIdentical = !param_5;
  pUVar4->bPrompt = param_6;
  pUVar4->bUseFileArchive = false;
  pUVar4->bWriteEmptyFiles = false;
  pUVar4->bAutomated = false;
  bVar1 = RunAssetExportTask(pUVar4);
  local_d8._padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject(&local_d8);
  return (uint)bVar1;
}

// ExportToOutputDevice @ 1489427a0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
UExporter::ExportToOutputDevice
          (FExportObjectInnerContext *param_1,UObject *param_2,UExporter *param_3,
          FOutputDevice *param_4,wchar_t *param_5,int param_6,uint param_7,bool param_8,
          UObject *param_9)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  UClass *local_res10;
  FString local_38;
  
  if ((param_2 == (UObject *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UnrealExporter.cpp"
                         ,0xba,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  if ((param_3 == (UExporter *)0x0) &&
     (param_3 = FindExporter(param_2,param_5), param_3 == (UExporter *)0x0)) {
    if (2 < (byte)LogExporter._0_1_) {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_2,&local_38,(UObject *)0x0,None);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogExporter);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    uVar5 = 0;
  }
  else {
    local_res10 = (param_3->SupportedClass).Class.field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res10);
    }
    bVar4 = UObjectBaseUtility::IsA<TSubclassOf<UObject>_>
                      ((UObjectBaseUtility *)param_2,(TSubclassOf<UObject>)&local_res10);
    if ((!bVar4) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Object->IsA(Exporter->SupportedClass)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UnrealExporter.cpp"
                           ,0xc5,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    param_3->bSelectedOnly = 0;
    iVar1 = param_3->TextIndent;
    param_3->TextIndent = param_6;
    *(uint *)&param_3->field_0x60 = *(uint *)&param_3->field_0x60 | (uint)param_8 * 2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_9 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(param_9);
    }
    (param_3->ExportRootScope).field0_0x0.DebugPtr = param_9;
    uVar3 = param_7 | 0x500;
    if ((param_7 & 0x80) != 0) {
      uVar3 = param_7;
    }
    iVar6 = FGenericPlatformStricmp::Stricmp(param_5,L"COPY");
    uVar7 = uVar3 | 0x800;
    if (iVar6 != 0) {
      uVar7 = uVar3;
    }
    uVar5 = (**(code **)(param_3->_padding_ + 0x2b8))
                      (param_3,param_1,param_2,param_5,param_4,GWarn,uVar7);
    param_3->TextIndent = iVar1;
  }
  return (bool)uVar5;
}

// FindExporter @ 1489445a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UExporter * __cdecl UExporter::FindExporter(UObject *param_1,wchar_t *param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  UExporter *pUVar9;
  UPackage *pUVar10;
  UObject *pUVar11;
  UClass *pUVar12;
  UExporter *pUVar13;
  UClass *pUVar14;
  uint uVar15;
  wchar_t *pwVar16;
  longlong *plVar17;
  ForElementType<FSetElementId> FVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  uint *puVar22;
  undefined1 auStack_208 [32];
  ulonglong local_1e8;
  longlong local_1e0;
  undefined8 local_1d8;
  int local_1d0;
  undefined1 local_1cc [12];
  undefined8 local_1c0;
  undefined8 local_1b8;
  UObject *local_1b0;
  TSet<TWeakObjectPtr<UExporter,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UExporter,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *local_1a8;
  uint uStack_1a0;
  uint uStack_19c;
  undefined8 local_198;
  undefined4 uStack_190;
  uint uStack_18c;
  uint local_188;
  undefined4 uStack_184;
  TSet<TWeakObjectPtr<UExporter,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UExporter,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *local_178;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_170;
  TSet<TWeakObjectPtr<UExporter,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UExporter,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *local_150;
  undefined8 *local_148;
  undefined8 *local_140;
  undefined4 local_11c;
  undefined1 local_118 [128];
  TSet<TTuple<UClass_*,UClass_*>,TDefaultMapHashableKeyFuncs<UClass_*,UClass_*,0>,FDefaultSetAllocator>
  local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_208;
  local_1cc._4_8_ = param_2;
  local_1b0 = param_1;
  if ((param_1 == (UObject *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UnrealExporter.cpp"
                         ,0x77,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pUVar9 = (UExporter *)(*pcVar2)();
    return pUVar9;
  }
  pUVar10 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)param_1);
  if (((uint)pUVar10->PackageFlagsPrivate >> 0x16 & 1) == 0) {
    uStack_19c = 1;
    uVar19 = 0;
    local_98.Elements._0_8_ = 0;
    uStack_1a0 = 0;
    local_98.Elements._8_8_ = 0;
    local_98.Elements._32_8_ = 0;
    local_188 = 0;
    local_98.Elements._40_4_ = 0;
    local_98.Elements._44_4_ = 0x80;
    local_98.Elements._48_4_ = 0xffffffff;
    local_98.Elements._52_4_ = 0;
    local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_98.HashSize = 0;
    uVar15 = RegisteredExporters.Elements._40_4_;
    uVar20 = uVar19;
    if (uVar15 != 0) {
      uVar20 = RegisteredExporters.Elements._40_8_ & 0xffffffff;
      puVar22 = (uint *)&RegisteredExporters.Elements.field_0x10;
      if (RegisteredExporters.Elements._32_8_ != 0) {
        puVar22 = (uint *)RegisteredExporters.Elements._32_8_;
      }
      uVar6 = *puVar22;
      uVar21 = uVar19;
      local_188 = 0;
      uStack_1a0 = 0;
      while (uVar6 == 0) {
        iVar7 = (int)uVar19;
        local_188 = (int)uVar21 + 0x20;
        uVar21 = (ulonglong)local_188;
        uStack_1a0 = iVar7 + 1;
        uVar19 = (ulonglong)uStack_1a0;
        if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_1a0)
        goto LAB_1489446fe;
        uVar6 = puVar22[(longlong)iVar7 + 1];
      }
      uStack_19c = -uVar6 & uVar6;
      uVar19 = (ulonglong)uStack_19c * 2 + 1;
      lVar1 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      local_1d0 = (int)lVar1;
      uVar6 = (local_188 - 1) + local_1d0;
      if ((int)uVar15 < (int)uVar6) {
        uVar6 = uVar15;
      }
      uVar20 = (ulonglong)uVar6;
    }
LAB_1489446fe:
    local_1a8 = &RegisteredExporters;
    local_198 = 0x154c6d3c0;
    uStack_190 = 0xffffffff;
    uStack_18c = (uint)uVar20;
    uStack_184 = local_11c;
    local_150 = &RegisteredExporters;
    TStack_170._padding_ = CONCAT44(uStack_19c,uStack_1a0);
    TStack_170.UnvisitedBitMask = 0xffffffff;
    local_178 = &RegisteredExporters;
    TStack_170._28_4_ = local_11c;
    TStack_170.BaseBitIndex = local_188;
    TStack_170.Array =
         (TBitArray<FDefaultBitArrayAllocator> *)&RegisteredExporters.Elements.field_0x10;
    TStack_170.CurrentBitIndex = uStack_18c;
    if ((int)uStack_18c < (int)uVar15) {
      do {
        uVar19 = 0;
        pUVar11 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                      ((longlong)(int)uVar20 * 0x10 +
                                      *(longlong *)&local_178->Elements));
        if ((pUVar11 != (UObject *)0x0) &&
           ((*(uint *)(*(longlong *)&pUVar11->field_0x10 + 0xd4) & 0x82000001) == 0)) {
          if ((*(int *)&pUVar11[1].field_0x18 != *(int *)(pUVar11 + 2)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Default->FormatExtension.Num() == Default->FormatDescription.Num()"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UnrealExporter.cpp"
                                 ,0x85,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            pUVar9 = (UExporter *)(*pcVar2)();
            return pUVar9;
          }
          cVar5 = (**(code **)(*(longlong *)pUVar11 + 0x2b0))(pUVar11,param_1);
          uVar3 = local_1cc._4_8_;
          if ((cVar5 != '\0') &&
             (uVar20 = uVar19, uVar21 = uVar19, 0 < *(int *)&pUVar11[1].field_0x18)) {
            do {
              uVar6 = (uint)uVar19;
              uVar15 = 0;
              if ((int)uVar6 < *(int *)&pUVar11[1].field_0x18) {
                uVar15 = ~uVar6 >> 0x1f;
              }
              if (uVar15 == 0) {
                local_1e8 = (ulonglong)(int)uVar6;
                local_1e0 = (longlong)*(int *)&pUVar11[1].field_0x18;
                bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar4) {
                  pcVar2 = (code *)swi(3);
                  pUVar9 = (UExporter *)(*pcVar2)();
                  return pUVar9;
                }
              }
              if (*(int *)(*(longlong *)&pUVar11[1].field_0x10 + 8 + uVar21) == 0) {
                pwVar16 = L"";
              }
              else {
                pwVar16 = *(wchar_t **)(*(longlong *)&pUVar11[1].field_0x10 + uVar21);
              }
              iVar7 = FGenericPlatformStricmp::Stricmp(pwVar16,(wchar_t *)uVar3);
              uVar15 = 0;
              if ((int)uVar6 < *(int *)&pUVar11[1].field_0x18) {
                uVar15 = ~uVar6 >> 0x1f;
              }
              if ((uVar15 == 0) &&
                 (local_1e8 = uVar20, local_1e0 = (longlong)*(int *)&pUVar11[1].field_0x18,
                 bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar2 = (code *)swi(3);
                pUVar9 = (UExporter *)(*pcVar2)();
                return pUVar9;
              }
              if (*(int *)(*(longlong *)&pUVar11[1].field_0x10 + 8 + uVar21) == 0) {
                pwVar16 = L"";
              }
              else {
                pwVar16 = *(wchar_t **)(*(longlong *)&pUVar11[1].field_0x10 + uVar21);
              }
              iVar8 = FGenericPlatformStricmp::Stricmp(pwVar16,L"*");
              if ((iVar7 == 0) || (iVar8 == 0)) {
                lVar1 = *(longlong *)(pUVar11 + 1);
                local_1b8 = *(undefined8 *)&pUVar11->field_0x10;
                if ((lVar1 == 0) ||
                   (pUVar12 = Z_Construct_UClass_UObject_NoRegister(), pUVar12 == (UClass *)0x0)) {
LAB_148944924:
                  local_1c0 = 0;
                }
                else {
                  iVar7 = (int)pUVar12->_padding_;
                  if ((*(int *)(lVar1 + 0x38) < iVar7) ||
                     ((longlong *)
                      *(undefined1 **)(*(longlong *)(lVar1 + 0x30) + (longlong)iVar7 * 8) !=
                      &pUVar12->_padding_)) {
                    bVar4 = false;
                  }
                  else {
                    bVar4 = true;
                  }
                  if (!bVar4) goto LAB_148944924;
                  local_1c0 = *(undefined8 *)(pUVar11 + 1);
                }
                local_148 = &local_1c0;
                local_140 = &local_1b8;
                TSet<TTuple<UClass_*,UClass_*>,TDefaultMapHashableKeyFuncs<UClass_*,UClass_*,0>,FDefaultSetAllocator>
                ::Emplace<TPairInitializer<UClass_*_&&,UClass_*_&&>_>
                          (&local_98,(TPairInitializer<UClass_*_&&,UClass_*_&&> *)local_1cc,
                           (bool *)&local_148);
              }
              uVar19 = (ulonglong)(uVar6 + 1);
              uVar20 = uVar20 + 1;
              param_1 = local_1b0;
              uVar21 = uVar21 + 0x10;
            } while ((int)(uVar6 + 1) < *(int *)&pUVar11[1].field_0x18);
          }
        }
        TStack_170.UnvisitedBitMask = TStack_170.UnvisitedBitMask & ~TStack_170._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_170);
        uVar20 = (ulonglong)(uint)TStack_170.CurrentBitIndex;
      } while (TStack_170.CurrentBitIndex < (TStack_170.Array)->NumBits);
    }
    pUVar9 = (UExporter *)0x0;
    pUVar10 = GetTransientPackage();
    uVar19 = *(ulonglong *)&param_1->field_0x10;
    if (uVar19 != 0) {
      do {
        uVar15 = ((uint)(uVar19 >> 0x14) & 0xffff ^ (uint)(uVar19 >> 4)) * -0x7a143595;
        uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
        if (local_98.Elements._8_4_ != local_98.Elements._52_4_) {
          FVar18 = (ForElementType<FSetElementId>)&local_98.Hash;
          if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar18 = local_98.Hash.SecondaryData;
          }
          iVar7 = *(int *)((longlong)FVar18 +
                          (ulonglong)(local_98.HashSize - 1U & (uVar15 >> 0x10 ^ uVar15)) * 4);
          while (iVar7 != -1) {
            lVar1 = local_98.Elements._0_8_ + (longlong)iVar7 * 0x18;
            if (*(ulonglong *)(local_98.Elements._0_8_ + (longlong)iVar7 * 0x18) == uVar19) {
              pUVar13 = (UExporter *)(lVar1 + 8);
              if (lVar1 == 0) {
                pUVar13 = pUVar9;
              }
              if (pUVar13 != (UExporter *)0x0) {
                pUVar12 = (UClass *)pUVar13->_padding_;
                local_1d8 = 0;
                FObjectInitializer::AssertIfInConstructor
                          ((UObject *)pUVar10,
                           L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                          );
                pUVar14 = Z_Construct_UClass_UExporter_NoRegister();
                CheckIsClassChildOf_Internal(pUVar14,pUVar12);
                FStaticConstructObjectParameters::FStaticConstructObjectParameters
                          ((FStaticConstructObjectParameters *)local_118,pUVar12);
                local_118._48_8_ = (FObjectInstancingGraph *)0x0;
                local_118._56_8_ = (UPackage *)0x0;
                local_118._16_4_ = 0;
                local_118._20_4_ = 0;
                local_118._24_4_ = RF_NoFlags;
                local_118._40_8_ = (UObject *)0x0;
                local_118[0x20] = false;
                local_118._8_8_ = pUVar10;
                pUVar9 = (UExporter *)
                         StaticConstructObject_Internal
                                   ((FStaticConstructObjectParameters *)local_118);
                if (local_118._64_8_ != 0) {
                  plVar17 = (longlong *)(local_118 + 0x50);
                  if ((longlong *)local_118._104_8_ != (longlong *)0x0) {
                    plVar17 = (longlong *)local_118._104_8_;
                  }
                  (**(code **)(*plVar17 + 0x10))();
                }
                goto LAB_148944a5b;
              }
              break;
            }
            iVar7 = *(int *)(lVar1 + 0x10);
          }
        }
        uVar19 = *(ulonglong *)(uVar19 + 0x40);
      } while (uVar19 != 0);
    }
LAB_148944a5b:
    local_98.HashSize = 0;
    if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_98.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<UClass_*,UClass_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<UClass_*,UClass_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_98.Elements);
  }
  else {
    pUVar9 = (UExporter *)0x0;
  }
  return pUVar9;
}

// GetBatchMode @ 148955350

bool __thiscall UExporter::GetBatchMode(UExporter *this)

{
  return this->BatchExportMode;
}

// GetCancelBatch @ 1489563e0

bool __thiscall UExporter::GetCancelBatch(UExporter *this)

{
  return this->CancelBatch;
}

// GetShowExportOption @ 14895ce00

bool __thiscall UExporter::GetShowExportOption(UExporter *this)

{
  return this->ShowExportOption;
}

// IsObjectSelectedForExport @ 1489673f0

bool __cdecl
UExporter::IsObjectSelectedForExport(FExportObjectInnerContext *param_1,UObject *param_2)

{
  undefined1 uVar1;
  bool bVar2;
  
  if (param_1 != (FExportObjectInnerContext *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001489673f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1->_padding_ + 0x10))();
    return (bool)uVar1;
  }
  bVar2 = UObject::IsSelected(param_2);
  return bVar2;
}

// RunAssetExportTask @ 14897a470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014897a67f) */
/* WARNING: Removing unreachable block (ram,0x00014897b545) */
/* WARNING: Removing unreachable block (ram,0x00014897a93e) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __cdecl UExporter::RunAssetExportTask(UAssetExportTask *param_1)

{
  int *piVar1;
  bool bVar2;
  UObjectBaseUtility *pUVar3;
  code *pcVar4;
  ForAnyElementType _Buf2;
  long64 _Size;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  UExporter *this;
  IFileManager *pIVar11;
  FOutputDeviceFile *pFVar12;
  FText *pFVar13;
  FText *pFVar14;
  FTextFormat *pFVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  wchar_t *pwVar18;
  ForAnyElementType _Str2;
  ForAnyElementType FVar19;
  FOutputDeviceFile *pFVar20;
  FOutputDevice *pFVar21;
  uint uVar22;
  undefined1 auStackY_3b8 [32];
  int local_368;
  FString local_360;
  FString local_350;
  FString local_340;
  FString local_330;
  FString local_320;
  FString local_310;
  TSharedPtr<FOutputDevice,1> local_300;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_2f0;
  FString local_2e0;
  FString local_2d0;
  undefined8 local_2c0;
  UClass *local_2b8;
  FName local_2b0;
  FName local_2a8;
  TRawPtrProxy<FOutputDeviceFile> local_2a0;
  TRawPtrProxy<FStringOutputDevice> local_298;
  UClass *local_290;
  FString local_288;
  FString local_278;
  FString local_268;
  wchar_t *local_258;
  uint uStack_250;
  undefined4 uStack_24c;
  FArchiveState local_248;
  undefined8 local_1b8;
  TArray<unsigned_char,TSizedDefaultAllocator<64>_> *local_1b0;
  undefined8 local_1a8;
  TArray<unsigned_char,TSizedDefaultAllocator<64>_> local_1a0;
  FString local_188;
  FText local_178;
  FText local_168;
  TStringView<wchar_t> local_158;
  FString local_148;
  FText local_138;
  FText local_128;
  FString local_118;
  FText local_108;
  FTextFormat local_f8;
  FText local_e8;
  FTextFormat local_d8;
  TFunction<void___cdecl(wchar_t_const_*)> local_c8;
  undefined1 local_98 [72];
  void *local_50;
  undefined4 local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_3b8;
  if ((param_1 == (UAssetExportTask *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Task",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UnrealExporter.cpp"
                         ,0xfc,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  iVar9 = (param_1->Filename).Data.ArrayNum;
  pFVar20 = (FOutputDeviceFile *)0x0;
  uVar22 = 0;
  uVar16 = iVar9 - 1;
  if (iVar9 == 0) {
    uVar16 = uVar22;
  }
  ::FString::AssignRange
            (&CurrentFilename,(wchar_t *)(param_1->Filename).Data.AllocatorInstance.Data,uVar16);
  this = (param_1->Exporter).field0_0x0.DebugPtr;
  FPaths::GetExtension(&local_350,&param_1->Filename,false);
  pFVar12 = pFVar20;
  if (this == (UExporter *)0x0) {
    do {
      iVar9 = ::FString::Find(&CurrentFilename,L".",1,CaseSensitive,FromStart,(int)pFVar12);
      if (iVar9 == -1) {
        if (this == (UExporter *)0x0) {
          UObjectBaseUtility::GetFullName
                    ((UObjectBaseUtility *)(param_1->Object).field0_0x0.DebugPtr,&local_188,
                     (UObject *)0x0,None);
          ::FString::PrintfImpl(&local_320,L"No %s exporter found for %s");
          pFVar17 = (param_1->Errors).AllocatorInstance.Data;
          if (((pFVar17 <= (FScriptContainerElement *)&local_320) &&
              ((FScriptContainerElement *)&local_320 <
               pFVar17 + (longlong)(param_1->Errors).ArrayMax * 0x10)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          iVar9 = (param_1->Errors).ArrayNum;
          piVar1 = &(param_1->Errors).ArrayMax;
          if (iVar9 == *piVar1) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&(param_1->Errors).AllocatorInstance,piVar1);
          }
          (param_1->Errors).ArrayNum = iVar9 + 1;
          pFVar17 = (param_1->Errors).AllocatorInstance.Data + (longlong)iVar9 * 0x10;
          *(undefined8 *)pFVar17 = 0;
          *(FScriptContainerElement **)pFVar17 = local_320.Data.AllocatorInstance.Data;
          *(int *)(pFVar17 + 8) = local_320.Data.ArrayNum;
          *(int *)(pFVar17 + 0xc) = local_320.Data.ArrayMax;
          local_320.Data.ArrayNum = 0;
          local_320.Data.ArrayMax = 0;
          local_320.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_188.Data.AllocatorInstance.Data);
          }
          if (2 < (byte)LogExporter._0_1_) {
            iVar9 = (param_1->Errors).ArrayNum;
            uVar16 = iVar9 - 1;
            if ((int)uVar16 < iVar9) {
              uVar22 = ~uVar16 >> 0x1f;
            }
            if ((uVar22 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              uVar6 = (*pcVar4)();
              return (bool)uVar6;
            }
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogExporter);
          }
          goto LAB_14897a9dc;
        }
        break;
      }
      ::FString::RightChop(&CurrentFilename,&local_2d0,iVar9 + 1U);
      if (local_350.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_350.Data.AllocatorInstance.Data);
      }
      local_350.Data.ArrayNum = local_2d0.Data.ArrayNum;
      FVar19.Data = (FScriptContainerElement *)L"";
      if (local_2d0.Data.ArrayNum != 0) {
        FVar19.Data = local_2d0.Data.AllocatorInstance.Data;
      }
      local_350.Data.AllocatorInstance.Data = local_2d0.Data.AllocatorInstance.Data;
      local_2d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_350.Data.ArrayMax = local_2d0.Data.ArrayMax;
      local_2d0.Data.ArrayNum = 0;
      local_2d0.Data.ArrayMax = 0;
      this = FindExporter((param_1->Object).field0_0x0.DebugPtr,(wchar_t *)FVar19.Data);
      pFVar12 = (FOutputDeviceFile *)(ulonglong)(iVar9 + 1U);
    } while (this == (UExporter *)0x0);
  }
  else {
    pUVar3 = (UObjectBaseUtility *)(param_1->Object).field0_0x0.DebugPtr;
    if (pUVar3 != (UObjectBaseUtility *)0x0) {
      local_2b8 = (this->SupportedClass).Class.field0_0x0.DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_2b8 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_2b8);
      }
      bVar5 = UObjectBaseUtility::IsA<TSubclassOf<UObject>_>
                        (pUVar3,(TSubclassOf<UObject>)&local_2b8);
      if (!bVar5) {
        local_2b0 = *(FName *)(*(longlong *)&pUVar3->field_0x10 + 0x18);
        ::FName::ToString(&local_2b0,&local_278);
        local_2a8 = (FName)this->_padding_;
        ::FName::ToString(&local_2a8,&local_288);
        ::FString::PrintfImpl
                  (&local_330,
                   L"Chosen exporter \'%s\' does not support the exported object\'s class \'%s\'!");
        pFVar17 = (param_1->Errors).AllocatorInstance.Data;
        if (((pFVar17 <= (FScriptContainerElement *)&local_330) &&
            ((FScriptContainerElement *)&local_330 <
             pFVar17 + (longlong)(param_1->Errors).ArrayMax * 0x10)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        iVar9 = (param_1->Errors).ArrayNum;
        piVar1 = &(param_1->Errors).ArrayMax;
        if (iVar9 == *piVar1) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&(param_1->Errors).AllocatorInstance,piVar1);
        }
        (param_1->Errors).ArrayNum = iVar9 + 1;
        pFVar17 = (param_1->Errors).AllocatorInstance.Data + (longlong)iVar9 * 0x10;
        *(undefined8 *)pFVar17 = 0;
        *(FScriptContainerElement **)pFVar17 = local_330.Data.AllocatorInstance.Data;
        *(int *)(pFVar17 + 8) = local_330.Data.ArrayNum;
        *(int *)(pFVar17 + 0xc) = local_330.Data.ArrayMax;
        local_330.Data.ArrayNum = 0;
        local_330.Data.ArrayMax = 0;
        local_330.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_288.Data.AllocatorInstance.Data);
        }
        if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_278.Data.AllocatorInstance.Data);
        }
        if ((byte)LogExporter._0_1_ < 3) {
LAB_14897a9dc:
          bVar5 = false;
        }
        else {
          iVar9 = (param_1->Errors).ArrayNum;
          uVar16 = iVar9 - 1;
          uVar22 = 0;
          if ((int)uVar16 < iVar9) {
            uVar22 = ~uVar16 >> 0x1f;
          }
          if ((uVar22 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          if (*(int *)((param_1->Errors).AllocatorInstance.Data +
                      (longlong)(param_1->Errors).ArrayNum * 0x10 + -8) == 0) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogExporter);
            bVar5 = false;
          }
          else {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogExporter);
            bVar5 = false;
          }
        }
        goto LAB_14897b385;
      }
    }
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->ExportTask).field0_0x0.DebugPtr = param_1;
  *(uint *)&this->field_0x60 =
       *(uint *)&this->field_0x60 ^ ((uint)param_1->bSelected * 2 ^ *(uint *)&this->field_0x60) & 2;
  bVar5 = ScriptRunAssetExportTask(this,param_1);
  if (bVar5) {
    bVar5 = true;
    goto LAB_14897b385;
  }
  if (this->bText == 0) {
    iVar9 = (**(code **)(this->_padding_ + 0x2d8))(this,(param_1->Object).field0_0x0.DebugPtr);
    local_368 = 0;
    if (0 < iVar9) {
      local_2c0 = 0;
      do {
        local_248._padding_ = 0;
        local_248.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
        local_248.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
        local_248.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
        local_248.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
        local_248._40_8_ = 0;
        local_248.ArSerializingDefaults = 0;
        local_248.ArPortFlags = 0;
        local_248.ArMaxSerializeSize = 0;
        local_248.ArUEVer.FileVersionUE4 = 0;
        local_248.ArUEVer.FileVersionUE5 = 0;
        local_248.ArLicenseeUEVer = 0;
        local_248.ArEngineVer.Major = 0;
        local_248.ArEngineVer.Minor = 0;
        local_248.ArEngineVer.Patch = 0;
        local_248.ArEngineVer._6_2_ = 0;
        local_248.ArEngineVer.Changelist = 0;
        local_248.CustomVersionContainer = (FCustomVersionContainer *)0x0;
        local_248.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
        local_248.SavePackageData = (FArchiveSavePackageData *)0x0;
        local_248.SerializedProperty = (FProperty *)0x0;
        local_248.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
        local_248.bCustomVersionsAreReset = false;
        local_248._129_7_ = 0;
        local_248.NextProxy = (FArchiveState *)0x0;
        FArchiveState::FArchiveState(&local_248);
        local_1b0 = &local_1a0;
        local_1b8 = 0;
        local_248._padding_ =
             (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0EA_____6B_;
        local_1a8 = 0;
        FArchiveState::SetIsSaving(&local_248,true);
        (**(code **)(local_248._padding_ + 0x108))(&local_248,0);
        pUVar3 = (UObjectBaseUtility *)(param_1->Object).field0_0x0.DebugPtr;
        local_248._padding_ = (longlong)&___7FBufferArchive64__6B_;
        FVar19.Data = (FScriptContainerElement *)L"";
        if (local_350.Data.ArrayNum != 0) {
          FVar19.Data = local_350.Data.AllocatorInstance.Data;
        }
        local_1a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1a0.ArrayNum = 0;
        local_1a0.ArrayMax = 0;
        if ((pUVar3 == (UObjectBaseUtility *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Object",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UnrealExporter.cpp"
                               ,0xa8,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        local_290 = (this->SupportedClass).Class.field0_0x0.DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_290 != (UClass *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_290);
        }
        bVar5 = UObjectBaseUtility::IsA<TSubclassOf<UObject>_>
                          (pUVar3,(TSubclassOf<UObject>)&local_290);
        if ((!bVar5) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Object->IsA( Exporter->SupportedClass )",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UnrealExporter.cpp"
                               ,0xb3,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        cVar8 = (**(code **)(this->_padding_ + 0x2d0))(this,pUVar3,FVar19.Data,&local_248);
        if (cVar8 != '\0') {
          (**(code **)(this->_padding_ + 0x2e0))(this,&local_360);
          if (param_1->bReplaceIdentical == false) {
            local_2f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            FVar19.Data = (FScriptContainerElement *)L"";
            if (local_360.Data.ArrayNum != 0) {
              FVar19.Data = local_360.Data.AllocatorInstance.Data;
            }
            local_2f0.ArrayNum = 0;
            local_2f0.ArrayMax = 0;
            bVar5 = FFileHelper::LoadFileToArray(&local_2f0,(wchar_t *)FVar19.Data,0);
            _Size = local_1a0.ArrayNum;
            if ((!bVar5) || (local_2f0.ArrayNum != local_1a0.ArrayNum)) {
LAB_14897b23f:
              if (param_1->bPrompt != false) {
                pcVar4 = *(code **)(GWarn->_padding_ + 0x58);
                pFVar13 = FText::FromString(&local_e8,&local_360);
                pFVar14 = FText::AsLocalizable_Advanced_LocText
                                    (&local_128,L"Core",L"Overwrite",
                                     L"The file \'{0}\' needs to be updated.  Do you want to overwrite the existing version?"
                                    );
                pFVar15 = FTextFormat::FTextFormat(&local_d8,pFVar14,Default);
                pFVar13 = FText::Format<FText>(&local_138,pFVar15,pFVar13);
                cVar8 = (*pcVar4)(GWarn,pFVar13);
                if (local_138.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
                }
                if (local_128.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_128.TextData.Reference + 0x10))();
                }
                if (cVar8 == '\0') goto LAB_14897b419;
              }
              if (local_2f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_2f0.AllocatorInstance.Data);
              }
              goto LAB_14897b2fa;
            }
            if (local_1a0.ArrayNum < 1) {
              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar5) {
                pcVar4 = (code *)swi(3);
                uVar6 = (*pcVar4)();
                return (bool)uVar6;
              }
            }
            _Buf2.Data = local_1a0.AllocatorInstance.Data;
            if ((local_2f0.ArrayNum < 1) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              uVar6 = (*pcVar4)();
              return (bool)uVar6;
            }
            iVar10 = memcmp(local_2f0.AllocatorInstance.Data,_Buf2.Data,_Size);
            if (iVar10 != 0) goto LAB_14897b23f;
            if (4 < (byte)LogExporter._0_1_) {
              UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogExporter);
            }
LAB_14897b419:
            if (local_2f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_2f0.AllocatorInstance.Data);
            }
LAB_14897b427:
            bVar5 = true;
          }
          else {
LAB_14897b2fa:
            if ((param_1->bWriteEmptyFiles == false) && (local_1a0.ArrayNum == 0))
            goto LAB_14897b427;
            pIVar11 = IFileManager::Get();
            FVar19.Data = (FScriptContainerElement *)L"";
            if (local_360.Data.ArrayNum != 0) {
              FVar19.Data = local_360.Data.AllocatorInstance.Data;
            }
            bVar5 = FFileHelper::SaveArrayToFile(&local_1a0,(wchar_t *)FVar19.Data,pIVar11,0);
            if (bVar5) {
              if (local_360.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_360.Data.AllocatorInstance.Data);
              }
              goto LAB_14897b34d;
            }
            UObjectBaseUtility::GetFullName
                      ((UObjectBaseUtility *)(param_1->Object).field0_0x0.DebugPtr,&local_118,
                       (UObject *)0x0,None);
            ::FString::PrintfImpl(&local_340,L"Error exporting %s: couldn\'t open file \'%s\'");
            pFVar17 = (param_1->Errors).AllocatorInstance.Data;
            if (((pFVar17 <= (FScriptContainerElement *)&local_340) &&
                ((FScriptContainerElement *)&local_340 <
                 pFVar17 + (longlong)(param_1->Errors).ArrayMax * 0x10)) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar5)) {
              pcVar4 = (code *)swi(3);
              uVar6 = (*pcVar4)();
              return (bool)uVar6;
            }
            iVar9 = (param_1->Errors).ArrayNum;
            piVar1 = &(param_1->Errors).ArrayMax;
            if (iVar9 == *piVar1) {
              iVar9 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x810,&(param_1->Errors).AllocatorInstance,piVar1);
            }
            (param_1->Errors).ArrayNum = iVar9 + 1;
            pFVar17 = (param_1->Errors).AllocatorInstance.Data + (longlong)iVar9 * 0x10;
            *(undefined8 *)pFVar17 = 0;
            *(FScriptContainerElement **)pFVar17 = local_340.Data.AllocatorInstance.Data;
            *(int *)(pFVar17 + 8) = local_340.Data.ArrayNum;
            *(int *)(pFVar17 + 0xc) = local_340.Data.ArrayMax;
            local_340.Data.ArrayNum = 0;
            local_340.Data.ArrayMax = 0;
            local_340.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_118.Data.AllocatorInstance.Data);
            }
            if (1 < (byte)LogExporter._0_1_) {
              iVar9 = (param_1->Errors).ArrayNum;
              uVar16 = iVar9 - 1;
              if ((int)uVar16 < iVar9) {
                uVar22 = ~uVar16 >> 0x1f;
              }
              if ((uVar22 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar4 = (code *)swi(3);
                uVar6 = (*pcVar4)();
                return (bool)uVar6;
              }
              UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogExporter);
            }
            bVar5 = false;
          }
          if (local_360.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_360.Data.AllocatorInstance.Data);
          }
          if (local_1a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1a0.AllocatorInstance.Data);
          }
          FArchive::~FArchive((FArchive *)&local_248);
          goto LAB_14897b385;
        }
LAB_14897b34d:
        if (local_1a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a0.AllocatorInstance.Data);
        }
        FArchive::~FArchive((FArchive *)&local_248);
        local_368 = local_368 + 1;
      } while (local_368 < iVar9);
    }
    bVar5 = true;
    goto LAB_14897b385;
  }
  local_300.Object = (FOutputDevice *)0x0;
  local_300.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FPaths::GetPath(&local_310,&param_1->Filename);
  bVar5 = false;
  if ((this->bForceFileOperations == 0) && (param_1->bUseFileArchive == false)) {
LAB_14897ab28:
    pFVar12 = ::operator_new(0x20);
    if (pFVar12 != (FOutputDeviceFile *)0x0) {
      ::FString::FString((FString *)&pFVar12->AsyncWriter,L"");
      FOutputDevice::FOutputDevice((FOutputDevice *)pFVar12);
      *(undefined1 *)((longlong)&pFVar12->_padding_ + 1) = 0;
      pFVar12->_padding_ = (longlong)&___7FStringOutputDevice__6B_;
      pFVar20 = pFVar12;
    }
    local_298.Object = (FStringOutputDevice *)pFVar20;
    TSharedPtr<FOutputDevice,1>::operator=<FStringOutputDevice>(&local_300,&local_298);
    pFVar21 = local_300.Object;
  }
  else {
    pIVar11 = IFileManager::Get();
    FVar19.Data = (FScriptContainerElement *)L"";
    if (local_310.Data.ArrayNum != 0) {
      FVar19.Data = local_310.Data.AllocatorInstance.Data;
    }
    (**(code **)((longlong)*pIVar11 + 0x60))(pIVar11,FVar19.Data,0);
    ::FString::AppendChars(&local_310,L"/UnrealExportFile.tmp",0x15);
    pFVar12 = ::operator_new(0x860);
    local_2a0.Object = pFVar20;
    if (pFVar12 != (FOutputDeviceFile *)0x0) {
      FVar19.Data = (FScriptContainerElement *)L"";
      if (local_310.Data.ArrayNum != 0) {
        FVar19.Data = local_310.Data.AllocatorInstance.Data;
      }
      local_c8._0_8_ = 0;
      local_c8._40_8_ = 0;
      local_2a0.Object =
           FOutputDeviceFile::FOutputDeviceFile
                     (pFVar12,(wchar_t *)FVar19.Data,false,false,true,&local_c8);
    }
    TSharedPtr<FOutputDevice,1>::operator=<FOutputDeviceFile>(&local_300,&local_2a0);
    pFVar21 = local_300.Object;
    if (local_300.Object == (FOutputDevice *)0x0) {
      if ((param_1->bUseFileArchive != false) && (2 < (byte)LogExporter._0_1_)) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogExporter);
      }
      goto LAB_14897ab28;
    }
    if ((local_300.Object == (FOutputDevice *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    pFVar21->bSuppressEventTag = true;
    pFVar21->bAutoEmitLineTerminator = false;
    bVar5 = true;
  }
  FExportObjectInnerContext::FExportObjectInnerContext
            ((FExportObjectInnerContext *)local_98,
             (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)&param_1->IgnoreObjectList);
  bVar2 = param_1->bSelected;
  FVar19.Data = (FScriptContainerElement *)L"";
  if (local_350.Data.ArrayNum != 0) {
    FVar19.Data = local_350.Data.AllocatorInstance.Data;
  }
  if ((pFVar21 == (FOutputDevice *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  ExportToOutputDevice
            ((FExportObjectInnerContext *)local_98,(param_1->Object).field0_0x0.DebugPtr,this,
             pFVar21,(wchar_t *)FVar19.Data,0,4,bVar2,(UObject *)0x0);
  if (bVar5) {
    if ((pFVar21 == (FOutputDevice *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    (**(code **)(pFVar21->_padding_ + 0x28))(pFVar21);
    pIVar11 = IFileManager::Get();
    FVar19.Data = (FScriptContainerElement *)L"";
    if (local_310.Data.ArrayNum != 0) {
      FVar19.Data = local_310.Data.AllocatorInstance.Data;
    }
    if ((param_1->Filename).Data.ArrayNum == 0) {
      pwVar18 = L"";
    }
    else {
      pwVar18 = (wchar_t *)(param_1->Filename).Data.AllocatorInstance.Data;
    }
    (**(code **)((longlong)*pIVar11 + 0x48))(pIVar11,pwVar18,FVar19.Data,1);
    local_48 = 0;
    if (local_50 != (void *)0x0) {
      FMemory::Free(local_50);
    }
    TSparseArray<TSparseSetElement<TTuple<UObject_*,TArray<UObject_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<UObject_*,TArray<UObject_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<UObject_*,TArray<UObject_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)(local_98 + 8));
    if (local_310.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_310.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_300.SharedReferenceCount.ReferenceController);
    bVar5 = false;
    goto LAB_14897b385;
  }
  uVar16 = *(int *)&pFVar21[1].bSuppressEventTag - 1;
  if (*(int *)&pFVar21[1].bSuppressEventTag == 0) {
    uVar16 = uVar22;
  }
  if (uVar16 == 0) {
LAB_14897ae3d:
    bVar5 = true;
  }
  else {
    if (param_1->bReplaceIdentical == false) {
      local_2e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2e0.Data.ArrayNum = 0;
      local_2e0.Data.ArrayMax = 0;
      if ((param_1->Filename).Data.ArrayNum == 0) {
        pwVar18 = L"";
      }
      else {
        pwVar18 = (wchar_t *)(param_1->Filename).Data.AllocatorInstance.Data;
      }
      bVar5 = FFileHelper::LoadFileToString(&local_2e0,pwVar18,None,0);
      FVar19.Data = local_2e0.Data.AllocatorInstance.Data;
      if (bVar5) {
        _Str2.Data = (FScriptContainerElement *)L"";
        if (local_2e0.Data.ArrayNum != 0) {
          _Str2.Data = local_2e0.Data.AllocatorInstance.Data;
        }
        iVar9._0_1_ = pFVar21[1].bSuppressEventTag;
        iVar9._1_1_ = pFVar21[1].bAutoEmitLineTerminator;
        iVar9._2_2_ = *(undefined2 *)&pFVar21[1].field_0xa;
        if (iVar9 == 0) {
          pwVar18 = L"";
        }
        else {
          pwVar18 = (wchar_t *)pFVar21[1]._padding_;
        }
        iVar9 = wcscmp(pwVar18,(wchar_t *)_Str2.Data);
        if (iVar9 != 0) goto LAB_14897ad7f;
        if (4 < (byte)LogExporter._0_1_) {
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogExporter);
          FVar19.Data = local_2e0.Data.AllocatorInstance.Data;
        }
LAB_14897ae30:
        if (FVar19.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar19.Data);
        }
        goto LAB_14897ae3d;
      }
LAB_14897ad7f:
      if (param_1->bPrompt != false) {
        pcVar4 = *(code **)(GWarn->_padding_ + 0x58);
        pFVar13 = FText::FromString(&local_108,&param_1->Filename);
        pFVar14 = FText::AsLocalizable_Advanced_LocText
                            (&local_168,L"Core",L"Overwrite",
                             L"The file \'{0}\' needs to be updated.  Do you want to overwrite the existing version?"
                            );
        pFVar15 = FTextFormat::FTextFormat(&local_f8,pFVar14,Default);
        pFVar13 = FText::Format<FText>(&local_178,pFVar15,pFVar13);
        cVar8 = (*pcVar4)(GWarn,pFVar13);
        if (local_178.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_178.TextData.Reference + 0x10))
                    (local_178.TextData.Reference);
        }
        if (local_168.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_168.TextData.Reference + 0x10))();
        }
        FVar19.Data = local_2e0.Data.AllocatorInstance.Data;
        if (cVar8 == '\0') goto LAB_14897ae30;
      }
      if (FVar19.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar19.Data);
      }
    }
    pIVar11 = IFileManager::Get();
    if ((param_1->Filename).Data.ArrayNum == 0) {
      pwVar18 = L"";
    }
    else {
      pwVar18 = (wchar_t *)(param_1->Filename).Data.AllocatorInstance.Data;
    }
    local_258 = (wchar_t *)pFVar21[1]._padding_;
    uStack_250 = *(int *)&pFVar21[1].bSuppressEventTag - 1;
    if (*(int *)&pFVar21[1].bSuppressEventTag == 0) {
      uStack_250 = uVar22;
    }
    local_158._12_4_ = uStack_24c;
    local_158.Size = uStack_250;
    local_158.DataPtr = local_258;
    bVar5 = FFileHelper::SaveStringToFile(&local_158,pwVar18,AutoDetect,pIVar11,0);
    if (bVar5) goto LAB_14897ae3d;
    if (1 < (byte)LogExporter._0_1_) {
      UObjectBaseUtility::GetFullName
                ((UObjectBaseUtility *)(param_1->Object).field0_0x0.DebugPtr,&local_148,
                 (UObject *)0x0,None);
      ::FString::PrintfImpl(&local_268,L"Error exporting %s: couldn\'t open file \'%s\'");
      UE::Logging::Private::BasicLog<2>
                ((FStaticBasicLogRecord *)&PTR_u__s_151bddb28,(FLogCategoryBase *)&LogExporter);
      if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_268.Data.AllocatorInstance.Data);
      }
      if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_148.Data.AllocatorInstance.Data);
      }
    }
    bVar5 = false;
  }
  local_48 = 0;
  if (local_50 != (void *)0x0) {
    FMemory::Free(local_50);
  }
  TSparseArray<TSparseSetElement<TTuple<UObject_*,TArray<UObject_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UObject_*,TArray<UObject_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UObject_*,TArray<UObject_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_98 + 8));
  if (local_310.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_310.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_300.SharedReferenceCount.ReferenceController);
LAB_14897b385:
  if (local_350.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_350.Data.AllocatorInstance.Data);
  }
  ::FString::operator=(&CurrentFilename,L"");
  return bVar5;
}

// RunAssetExportTasks @ 14897b620

bool __cdecl
UExporter::RunAssetExportTasks(TArray<UAssetExportTask_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  undefined1 local_res8 [8];
  
  pFVar5 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar5 + (longlong)iVar2 * 8;
  bVar6 = true;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<UAssetExportTask_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar5 == pFVar1) break;
    bVar3 = RunAssetExportTask(*(UAssetExportTask **)pFVar5);
    bVar4 = false;
    if (bVar3) {
      bVar4 = bVar6;
    }
    pFVar5 = pFVar5 + 8;
    bVar6 = bVar4;
  }
  return bVar6;
}

// Serialize @ 14897d260

void __thiscall UExporter::Serialize(UExporter *this,FArchive *param_1)

{
  int *piVar1;
  int *piVar2;
  FArchive *pFVar3;
  
  UObject::Serialize((UObject *)this,param_1);
  (**(code **)(*(longlong *)param_1 + 0x150))(param_1,&this->SupportedClass);
  pFVar3 = TArrayPrivateFriend::Serialize<FString,TSizedDefaultAllocator<32>_>
                     (param_1,&this->FormatExtension);
  TArrayPrivateFriend::Serialize<FString,TSizedDefaultAllocator<32>_>
            (pFVar3,&this->FormatDescription);
  piVar1 = &this->PreferredFormatIndex;
  piVar2 = (int *)**(undefined8 **)&param_1->field_0x8;
  if (piVar2 + 1 <= (int *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *piVar1 = *piVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return;
  }
  if ((param_1->field_0x2a & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014897d2e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    return;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
  return;
}

// SetBatchMode @ 14897ded0

void __thiscall UExporter::SetBatchMode(UExporter *this,bool param_1)

{
  this->BatchExportMode = param_1;
  return;
}

// SetCancelBatch @ 14897e6a0

void __thiscall UExporter::SetCancelBatch(UExporter *this,bool param_1)

{
  this->CancelBatch = param_1;
  return;
}

// SetShowExportOption @ 14897fc00

void __thiscall UExporter::SetShowExportOption(UExporter *this,bool param_1)

{
  this->ShowExportOption = param_1;
  return;
}

// SupportsObject @ 1489837e0

bool __thiscall UExporter::SupportsObject(UExporter *this,UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  bool bVar3;
  UClass *pUVar4;
  UClass *local_res8;
  
  pUVar2 = (this->SupportedClass).Class.field0_0x0.DebugPtr;
  if (pUVar2 != (UClass *)0x0) {
    pUVar4 = Z_Construct_UClass_UObject_NoRegister();
    if (pUVar4 != (UClass *)0x0) {
      iVar1 = (int)pUVar4->_padding_;
      if (((int)pUVar2->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if ((bVar3) &&
         (local_res8 = (this->SupportedClass).Class.field0_0x0.DebugPtr, local_res8 != (UClass *)0x0
         )) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)local_res8);
        }
        bVar3 = UObjectBaseUtility::IsA<TSubclassOf<UObject>_>
                          ((UObjectBaseUtility *)param_1,(TSubclassOf<UObject>)&local_res8);
        if (bVar3) {
          return true;
        }
      }
    }
  }
  return false;
}

