// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 148074400

UClass * __cdecl UNetworkMetricsLog::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetworkMetricsLog.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NetworkMetricsLog",
               &Z_Registration_Info_UClass_UNetworkMetricsLog.InnerSingleton,
               StaticRegisterNativesUNetworkMetricsLog,0x40,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UNetworkMetricsLog>,
               InternalVTableHelperCtorCaller<UNetworkMetricsLog>,local_res8,
               UNetworkMetricsBaseListener::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetworkMetricsLog.InnerSingleton;
}

// UNetworkMetricsLog @ 14808be30

UNetworkMetricsLog * __thiscall
UNetworkMetricsLog::UNetworkMetricsLog(UNetworkMetricsLog *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined ***)this = &___7UNetworkMetricsLog__6B_;
  return this;
}

// UNetworkMetricsLog @ 14808be70

UNetworkMetricsLog * __thiscall UNetworkMetricsLog::UNetworkMetricsLog(UNetworkMetricsLog *this)

{
  UObject::UObject((UObject *)this);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined ***)this = &___7UNetworkMetricsLog__6B_;
  return this;
}

// ~UNetworkMetricsLog @ 14808f3d0

void __thiscall UNetworkMetricsLog::~UNetworkMetricsLog(UNetworkMetricsLog *this)

{
  *(undefined ***)this = &___7UNetworkMetricsBaseListener__6B_;
  DestructItems<TInstancedStruct<FNetworkMetricsMutator>,int>
            (*(TInstancedStruct<FNetworkMetricsMutator> **)&this->field_0x30,
             *(int *)&this->field_0x38);
  if (*(void **)&this->field_0x30 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x30);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1480a99b0

UClass * __cdecl UNetworkMetricsLog::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetworkMetricsLog.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NetworkMetricsLog",
               &Z_Registration_Info_UClass_UNetworkMetricsLog.InnerSingleton,
               StaticRegisterNativesUNetworkMetricsLog,0x40,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UNetworkMetricsLog>,
               InternalVTableHelperCtorCaller<UNetworkMetricsLog>,local_res8,
               UNetworkMetricsBaseListener::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetworkMetricsLog.InnerSingleton;
}

// Report @ 1480cab80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UNetworkMetricsLog::Report(UNetworkMetricsLog *this,FNetworkMetricSnapshot *param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  UPackage *pUVar6;
  FName *pFVar7;
  FName *pFVar8;
  longlong *plVar9;
  int iVar10;
  longlong *plVar11;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58 [2];
  
  pFVar7 = (FName *)(param_1->MetricInts).AllocatorInstance.Data;
  iVar1 = (param_1->MetricInts).ArrayNum;
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8 = pFVar7 + (longlong)iVar1 * 2;
  local_98.Data.ArrayNum = 0;
  local_98.Data.ArrayMax = 0;
  while( true ) {
    if ((param_1->MetricInts).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UE::Net::FNetworkMetric<__int64>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar8) break;
    ::FName::ToString(pFVar7,&local_68);
    ::FString::PrintfImpl(&local_88,L"%s=%d ");
    iVar10 = local_88.Data.ArrayNum + -1;
    if (local_88.Data.ArrayNum == 0) {
      iVar10 = 0;
    }
    ::FString::AppendChars(&local_98,(wchar_t *)local_88.Data.AllocatorInstance.Data,iVar10);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    pFVar7 = pFVar7 + 2;
  }
  iVar1 = (param_1->MetricFloats).ArrayNum;
  pFVar8 = (FName *)(param_1->MetricFloats).AllocatorInstance.Data;
  pFVar7 = (FName *)((longlong)pFVar8 + (longlong)iVar1 * 0xc);
  while( true ) {
    if ((param_1->MetricFloats).ArrayNum != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<UE::Net::FNetworkMetric<float>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar8 == pFVar7) break;
    ::FName::ToString(pFVar8,local_58);
    ::FString::PrintfImpl(&local_78,L"%s=%2.2f ");
    iVar10 = local_78.Data.ArrayNum + -1;
    if (local_78.Data.ArrayNum == 0) {
      iVar10 = 0;
    }
    ::FString::AppendChars(&local_98,(wchar_t *)local_78.Data.AllocatorInstance.Data,iVar10);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
    }
    pFVar8 = (FName *)&pFVar8[1].Number;
  }
  if ((4 < (byte)LogNetworkMetrics._0_1_) && (1 < local_98.Data.ArrayNum)) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNetworkMetrics);
  }
  iVar1 = *(int *)&this->field_0x38;
  plVar9 = *(longlong **)&this->field_0x30;
  plVar11 = plVar9 + (longlong)iVar1 * 2;
  do {
    if (*(int *)&this->field_0x38 != iVar1) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<TInstancedStruct<FNetworkMetricsMutator>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    if (plVar9 == plVar11) {
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      return;
    }
    plVar2 = (longlong *)plVar9[1];
    lVar3 = *plVar9;
    if ((plVar2 == (longlong *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Memory != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                           ,0xd1,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((lVar3 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Struct != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                           ,0xd2,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (Z_Registration_Info_UScriptStruct_FNetworkMetricsMutator.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_Engine();
      Z_Registration_Info_UScriptStruct_FNetworkMetricsMutator.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FNetworkMetricsMutator,(UObject *)pUVar6,
                           L"NetworkMetricsMutator");
      if (Z_Registration_Info_UScriptStruct_FNetworkMetricsMutator.OuterSingleton !=
          (UScriptStruct *)0x0) goto LAB_1480cadfc;
LAB_1480cae20:
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Struct->IsChildOf(TBaseStructure<T>::Get())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                         ,0xd3,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    else {
LAB_1480cadfc:
      iVar10 = (int)(Z_Registration_Info_UScriptStruct_FNetworkMetricsMutator.OuterSingleton)->
                    _padding_;
      if ((*(int *)(lVar3 + 0x38) < iVar10) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar10 * 8) !=
          &(Z_Registration_Info_UScriptStruct_FNetworkMetricsMutator.OuterSingleton)->_padding_)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (!bVar5) goto LAB_1480cae20;
    }
    (**(code **)(*plVar2 + 0x10))(plVar2);
    plVar9 = plVar9 + 2;
  } while( true );
}

// StaticRegisterNativesUNetworkMetricsLog @ 1480d5720

void __cdecl UNetworkMetricsLog::StaticRegisterNativesUNetworkMetricsLog(void)

{
  return;
}

