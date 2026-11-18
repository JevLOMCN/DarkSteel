// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeEngine
// Functions: 15

// StaticClass @ 14e4cc8d0

UClass * __cdecl UInterchangePipelineConfigurationBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangePipelineConfigurationBase.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeEngine",L"InterchangePipelineConfigurationBase",
               &Z_Registration_Info_UClass_UInterchangePipelineConfigurationBase.InnerSingleton,
               StaticRegisterNativesUInterchangePipelineConfigurationBase,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangePipelineConfigurationBase>,
               InternalVTableHelperCtorCaller<UInterchangePipelineConfigurationBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangePipelineConfigurationBase.InnerSingleton;
}

// UInterchangePipelineConfigurationBase @ 14e4d8d40

UInterchangePipelineConfigurationBase * __thiscall
UInterchangePipelineConfigurationBase::UInterchangePipelineConfigurationBase
          (UInterchangePipelineConfigurationBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UInterchangePipelineConfigurationBase__6B_;
  return this;
}

// UInterchangePipelineConfigurationBase @ 14e4d8d70

UInterchangePipelineConfigurationBase * __thiscall
UInterchangePipelineConfigurationBase::UInterchangePipelineConfigurationBase
          (UInterchangePipelineConfigurationBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UInterchangePipelineConfigurationBase__6B_;
  return this;
}

// ~UInterchangePipelineConfigurationBase @ 14e4db0b0

void __thiscall
UInterchangePipelineConfigurationBase::~UInterchangePipelineConfigurationBase
          (UInterchangePipelineConfigurationBase *this)

{
  *(undefined ***)this = &___7UInterchangePipelineConfigurationBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14e4f8080

UClass * __cdecl UInterchangePipelineConfigurationBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangePipelineConfigurationBase.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeEngine",L"InterchangePipelineConfigurationBase",
               &Z_Registration_Info_UClass_UInterchangePipelineConfigurationBase.InnerSingleton,
               StaticRegisterNativesUInterchangePipelineConfigurationBase,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangePipelineConfigurationBase>,
               InternalVTableHelperCtorCaller<UInterchangePipelineConfigurationBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangePipelineConfigurationBase.InnerSingleton;
}

// ScriptedShowPipelineConfigurationDialog @ 14e504490

EInterchangePipelineConfigurationDialogResult __thiscall
UInterchangePipelineConfigurationBase::ScriptedShowPipelineConfigurationDialog
          (UInterchangePipelineConfigurationBase *this,
          TArray<FInterchangeStackInfo,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UInterchangePipelineBase_*,TSizedDefaultAllocator<32>_> *param_2,
          UInterchangeSourceData *param_3,UInterchangeTranslatorBase *param_4,
          UInterchangeBaseNodeContainer *param_5)

{
  int *piVar1;
  int iVar2;
  FInterchangeStackInfo *pFVar3;
  FScriptContainerElement *_Src;
  ForAnyElementType FVar4;
  EInterchangePipelineConfigurationDialogResult EVar5;
  UClass *pUVar6;
  longlong lVar7;
  int iVar8;
  UFunction *local_b8 [2];
  TArray<FInterchangeStackInfo,TSizedDefaultAllocator<32>_> local_a8;
  TArray<UInterchangePipelineBase_*,TSizedDefaultAllocator<32>_> local_98;
  UInterchangeSourceData *local_88;
  UInterchangeTranslatorBase *local_80;
  UInterchangeBaseNodeContainer *local_78;
  EInterchangePipelineConfigurationDialogResult local_70;
  TArray<FInterchangeStackInfo,TSizedDefaultAllocator<32>_> *local_68;
  TArray<UInterchangePipelineBase_*,TSizedDefaultAllocator<32>_> *local_60;
  FWeakObjectPtr local_58;
  FWeakObjectPtr local_50;
  FWeakObjectPtr local_48;
  FWeakObjectPtr local_40;
  undefined2 local_38;
  undefined1 local_36;
  undefined1 local_34;
  undefined1 local_32;
  
  local_b8[0] = UObject::FindFunctionChecked
                          ((UObject *)this,
                           NAME_UInterchangePipelineConfigurationBase_ScriptedShowPipelineConfigurationDialog
                          );
  pUVar6 = UField::GetOwnerClass((UField *)local_b8[0]);
  if ((pUVar6->ClassFlags & CLASS_Native) == CLASS_None) {
    local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.ArrayNum = 0;
    local_a8.ArrayMax = 0;
    local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.ArrayNum = 0;
    local_98.ArrayMax = 0;
    local_70 = Cancel;
    iVar8 = 0;
    if (&local_a8 != param_1) {
      DestructItems<FInterchangeStackInfo,int>((FInterchangeStackInfo *)0x0,0);
      iVar8 = param_1->ArrayNum;
      pFVar3 = (FInterchangeStackInfo *)(param_1->AllocatorInstance).Data;
      local_a8.ArrayNum = iVar8;
      if ((iVar8 == 0) && (local_a8.ArrayMax == 0)) {
        local_a8.ArrayNum = 0;
        local_a8.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,iVar8,local_a8.ArrayMax,&local_a8.AllocatorInstance,iVar8,
                   &local_a8.ArrayMax);
        ConstructItems<FInterchangeStackInfo,FInterchangeStackInfo,int>
                  (local_a8.AllocatorInstance.Data,pFVar3,iVar8);
      }
      iVar8 = local_98.ArrayMax;
    }
    if (&local_98 != param_2) {
      iVar2 = param_2->ArrayNum;
      _Src = (param_2->AllocatorInstance).Data;
      local_98.ArrayNum = iVar2;
      if ((iVar2 == 0) && (iVar8 == 0)) {
        local_98.ArrayNum = 0;
        local_98.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,iVar2,iVar8,&local_98.AllocatorInstance,iVar2,&local_98.ArrayMax);
        if (iVar2 != 0) {
          memcpy(local_98.AllocatorInstance.Data,_Src,(longlong)iVar2 << 3);
        }
      }
    }
    local_80 = param_4;
    local_78 = param_5;
    local_88 = param_3;
    (**(code **)(*(longlong *)this + 0x260))(this,local_b8[0],&local_a8);
    if (param_1 != &local_a8) {
      DestructItems<FInterchangeStackInfo,int>
                ((FInterchangeStackInfo *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
      FVar4.Data = local_a8.AllocatorInstance.Data;
      iVar8 = local_a8.ArrayNum;
      piVar1 = &param_1->ArrayMax;
      param_1->ArrayNum = local_a8.ArrayNum;
      if ((local_a8.ArrayNum == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,local_a8.ArrayNum,*piVar1,&param_1->AllocatorInstance,local_a8.ArrayNum,
                   piVar1);
        ConstructItems<FInterchangeStackInfo,FInterchangeStackInfo,int>
                  ((param_1->AllocatorInstance).Data,(FInterchangeStackInfo *)FVar4.Data,iVar8);
      }
    }
    FVar4.Data = local_98.AllocatorInstance.Data;
    if (param_2 != &local_98) {
      iVar8 = local_98.ArrayNum;
      lVar7 = (longlong)local_98.ArrayNum;
      piVar1 = &param_2->ArrayMax;
      param_2->ArrayNum = local_98.ArrayNum;
      if ((local_98.ArrayNum == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,local_98.ArrayNum,*piVar1,&param_2->AllocatorInstance,local_98.ArrayNum,
                   piVar1);
        if (iVar8 != 0) {
          memcpy((param_2->AllocatorInstance).Data,FVar4.Data,lVar7 << 3);
        }
      }
    }
    EVar5 = local_70;
    if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.AllocatorInstance.Data);
    }
    DestructItems<FInterchangeStackInfo,int>
              ((FInterchangeStackInfo *)local_a8.AllocatorInstance.Data,local_a8.ArrayNum);
    if ((FInterchangeStackInfo *)local_a8.AllocatorInstance.Data != (FInterchangeStackInfo *)0x0) {
      FMemory::Free(local_a8.AllocatorInstance.Data);
    }
  }
  else {
    local_68 = param_1;
    local_60 = param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_3 != (UInterchangeSourceData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_3);
    }
    local_58.ObjectIndex = 0;
    local_58.ObjectSerialNumber = 0;
    local_b8[0] = (UFunction *)param_3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_3 != (UInterchangeSourceData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_3);
    }
    FWeakObjectPtr::operator=(&local_58,(FObjectPtr)local_b8);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_4 != (UInterchangeTranslatorBase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_4);
    }
    local_50.ObjectIndex = 0;
    local_50.ObjectSerialNumber = 0;
    local_b8[0] = (UFunction *)param_4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_4 != (UInterchangeTranslatorBase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_4);
    }
    FWeakObjectPtr::operator=(&local_50,(FObjectPtr)local_b8);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_5 != (UInterchangeBaseNodeContainer *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_5);
    }
    local_48.ObjectIndex = 0;
    local_48.ObjectSerialNumber = 0;
    local_b8[0] = (UFunction *)param_5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_5 != (UInterchangeBaseNodeContainer *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_5);
    }
    FWeakObjectPtr::operator=(&local_48,(FObjectPtr)local_b8);
    local_40.ObjectIndex = 0;
    local_40.ObjectSerialNumber = 0;
    local_b8[0] = (UFunction *)0x0;
    FWeakObjectPtr::operator=(&local_40,(FObjectPtr)local_b8);
    local_38 = 0;
    local_36 = 0;
    local_34 = 0;
    local_32 = 0;
    EVar5 = (**(code **)(*(longlong *)this + 0x2b0))(this,&local_68);
  }
  return EVar5;
}

// ScriptedShowReimportPipelineConfigurationDialog @ 14e504830

EInterchangePipelineConfigurationDialogResult __thiscall
UInterchangePipelineConfigurationBase::ScriptedShowReimportPipelineConfigurationDialog
          (UInterchangePipelineConfigurationBase *this,
          TArray<FInterchangeStackInfo,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UInterchangePipelineBase_*,TSizedDefaultAllocator<32>_> *param_2,
          UInterchangeSourceData *param_3,UInterchangeTranslatorBase *param_4,
          UInterchangeBaseNodeContainer *param_5,UObject *param_6,bool param_7)

{
  int *piVar1;
  int iVar2;
  FInterchangeStackInfo *pFVar3;
  FScriptContainerElement *_Src;
  ForAnyElementType FVar4;
  EInterchangePipelineConfigurationDialogResult EVar5;
  UClass *pUVar6;
  longlong lVar7;
  int iVar8;
  UFunction *local_c8 [2];
  TArray<FInterchangeStackInfo,TSizedDefaultAllocator<32>_> local_b8;
  TArray<UInterchangePipelineBase_*,TSizedDefaultAllocator<32>_> local_a8;
  UInterchangeSourceData *local_98;
  UInterchangeTranslatorBase *local_90;
  UInterchangeBaseNodeContainer *local_88;
  UObject *local_80;
  bool local_78;
  EInterchangePipelineConfigurationDialogResult local_77;
  TArray<FInterchangeStackInfo,TSizedDefaultAllocator<32>_> *local_68;
  TArray<UInterchangePipelineBase_*,TSizedDefaultAllocator<32>_> *local_60;
  FWeakObjectPtr local_58;
  FWeakObjectPtr local_50;
  FWeakObjectPtr local_48;
  FWeakObjectPtr local_40;
  undefined1 local_38;
  bool local_37;
  undefined1 local_36;
  undefined1 local_34;
  undefined1 local_32;
  
  local_c8[0] = UObject::FindFunctionChecked
                          ((UObject *)this,
                           NAME_UInterchangePipelineConfigurationBase_ScriptedShowReimportPipelineConfigurationDialog
                          );
  pUVar6 = UField::GetOwnerClass((UField *)local_c8[0]);
  if ((pUVar6->ClassFlags & CLASS_Native) == CLASS_None) {
    local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.ArrayNum = 0;
    local_b8.ArrayMax = 0;
    local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.ArrayNum = 0;
    local_a8.ArrayMax = 0;
    local_77 = Cancel;
    iVar8 = 0;
    if (&local_b8 != param_1) {
      DestructItems<FInterchangeStackInfo,int>((FInterchangeStackInfo *)0x0,0);
      iVar8 = param_1->ArrayNum;
      pFVar3 = (FInterchangeStackInfo *)(param_1->AllocatorInstance).Data;
      local_b8.ArrayNum = iVar8;
      if ((iVar8 == 0) && (local_b8.ArrayMax == 0)) {
        local_b8.ArrayNum = 0;
        local_b8.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,iVar8,local_b8.ArrayMax,&local_b8.AllocatorInstance,iVar8,
                   &local_b8.ArrayMax);
        ConstructItems<FInterchangeStackInfo,FInterchangeStackInfo,int>
                  (local_b8.AllocatorInstance.Data,pFVar3,iVar8);
      }
      iVar8 = local_a8.ArrayMax;
    }
    if (&local_a8 != param_2) {
      iVar2 = param_2->ArrayNum;
      _Src = (param_2->AllocatorInstance).Data;
      local_a8.ArrayNum = iVar2;
      if ((iVar2 == 0) && (iVar8 == 0)) {
        local_a8.ArrayNum = 0;
        local_a8.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,iVar2,iVar8,&local_a8.AllocatorInstance,iVar2,&local_a8.ArrayMax);
        if (iVar2 != 0) {
          memcpy(local_a8.AllocatorInstance.Data,_Src,(longlong)iVar2 << 3);
        }
      }
    }
    local_90 = param_4;
    local_88 = param_5;
    local_80 = param_6;
    local_78 = param_7;
    local_98 = param_3;
    (**(code **)(*(longlong *)this + 0x260))(this,local_c8[0],&local_b8);
    if (param_1 != &local_b8) {
      DestructItems<FInterchangeStackInfo,int>
                ((FInterchangeStackInfo *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
      FVar4.Data = local_b8.AllocatorInstance.Data;
      iVar8 = local_b8.ArrayNum;
      piVar1 = &param_1->ArrayMax;
      param_1->ArrayNum = local_b8.ArrayNum;
      if ((local_b8.ArrayNum == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,local_b8.ArrayNum,*piVar1,&param_1->AllocatorInstance,local_b8.ArrayNum,
                   piVar1);
        ConstructItems<FInterchangeStackInfo,FInterchangeStackInfo,int>
                  ((param_1->AllocatorInstance).Data,(FInterchangeStackInfo *)FVar4.Data,iVar8);
      }
    }
    FVar4.Data = local_a8.AllocatorInstance.Data;
    if (param_2 != &local_a8) {
      iVar8 = local_a8.ArrayNum;
      lVar7 = (longlong)local_a8.ArrayNum;
      piVar1 = &param_2->ArrayMax;
      param_2->ArrayNum = local_a8.ArrayNum;
      if ((local_a8.ArrayNum == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,local_a8.ArrayNum,*piVar1,&param_2->AllocatorInstance,local_a8.ArrayNum,
                   piVar1);
        if (iVar8 != 0) {
          memcpy((param_2->AllocatorInstance).Data,FVar4.Data,lVar7 << 3);
        }
      }
    }
    EVar5 = local_77;
    if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.AllocatorInstance.Data);
    }
    DestructItems<FInterchangeStackInfo,int>
              ((FInterchangeStackInfo *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
    if ((FInterchangeStackInfo *)local_b8.AllocatorInstance.Data != (FInterchangeStackInfo *)0x0) {
      FMemory::Free(local_b8.AllocatorInstance.Data);
    }
  }
  else {
    local_68 = param_1;
    local_60 = param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_3 != (UInterchangeSourceData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_3);
    }
    local_58.ObjectIndex = 0;
    local_58.ObjectSerialNumber = 0;
    local_c8[0] = (UFunction *)param_3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_3 != (UInterchangeSourceData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_3);
    }
    FWeakObjectPtr::operator=(&local_58,(FObjectPtr)local_c8);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_4 != (UInterchangeTranslatorBase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_4);
    }
    local_50.ObjectIndex = 0;
    local_50.ObjectSerialNumber = 0;
    local_c8[0] = (UFunction *)param_4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_4 != (UInterchangeTranslatorBase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_4);
    }
    FWeakObjectPtr::operator=(&local_50,(FObjectPtr)local_c8);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_5 != (UInterchangeBaseNodeContainer *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_5);
    }
    local_48.ObjectIndex = 0;
    local_48.ObjectSerialNumber = 0;
    local_c8[0] = (UFunction *)param_5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_5 != (UInterchangeBaseNodeContainer *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_5);
    }
    FWeakObjectPtr::operator=(&local_48,(FObjectPtr)local_c8);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_6 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(param_6);
    }
    local_40.ObjectIndex = 0;
    local_40.ObjectSerialNumber = 0;
    local_c8[0] = (UFunction *)param_6;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_6 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(param_6);
    }
    FWeakObjectPtr::operator=(&local_40,(FObjectPtr)local_c8);
    local_37 = param_7;
    local_38 = 1;
    local_36 = 0;
    local_34 = 0;
    local_32 = 0;
    EVar5 = (**(code **)(*(longlong *)this + 0x2b0))(this,&local_68);
  }
  return EVar5;
}

// ScriptedShowScenePipelineConfigurationDialog @ 14e504c30

EInterchangePipelineConfigurationDialogResult __thiscall
UInterchangePipelineConfigurationBase::ScriptedShowScenePipelineConfigurationDialog
          (UInterchangePipelineConfigurationBase *this,
          TArray<FInterchangeStackInfo,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UInterchangePipelineBase_*,TSizedDefaultAllocator<32>_> *param_2,
          UInterchangeSourceData *param_3,UInterchangeTranslatorBase *param_4,
          UInterchangeBaseNodeContainer *param_5)

{
  int *piVar1;
  int iVar2;
  FInterchangeStackInfo *pFVar3;
  FScriptContainerElement *_Src;
  ForAnyElementType FVar4;
  EInterchangePipelineConfigurationDialogResult EVar5;
  UClass *pUVar6;
  longlong lVar7;
  int iVar8;
  UFunction *local_b8 [2];
  TArray<FInterchangeStackInfo,TSizedDefaultAllocator<32>_> local_a8;
  TArray<UInterchangePipelineBase_*,TSizedDefaultAllocator<32>_> local_98;
  UInterchangeSourceData *local_88;
  UInterchangeTranslatorBase *local_80;
  UInterchangeBaseNodeContainer *local_78;
  EInterchangePipelineConfigurationDialogResult local_70;
  TArray<FInterchangeStackInfo,TSizedDefaultAllocator<32>_> *local_68;
  TArray<UInterchangePipelineBase_*,TSizedDefaultAllocator<32>_> *local_60;
  FWeakObjectPtr local_58;
  FWeakObjectPtr local_50;
  FWeakObjectPtr local_48;
  FWeakObjectPtr local_40;
  undefined2 local_38;
  undefined1 local_36;
  undefined1 local_34;
  undefined1 local_32;
  
  local_b8[0] = UObject::FindFunctionChecked
                          ((UObject *)this,
                           NAME_UInterchangePipelineConfigurationBase_ScriptedShowScenePipelineConfigurationDialog
                          );
  pUVar6 = UField::GetOwnerClass((UField *)local_b8[0]);
  if ((pUVar6->ClassFlags & CLASS_Native) == CLASS_None) {
    local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.ArrayNum = 0;
    local_a8.ArrayMax = 0;
    local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.ArrayNum = 0;
    local_98.ArrayMax = 0;
    local_70 = Cancel;
    iVar8 = 0;
    if (&local_a8 != param_1) {
      DestructItems<FInterchangeStackInfo,int>((FInterchangeStackInfo *)0x0,0);
      iVar8 = param_1->ArrayNum;
      pFVar3 = (FInterchangeStackInfo *)(param_1->AllocatorInstance).Data;
      local_a8.ArrayNum = iVar8;
      if ((iVar8 == 0) && (local_a8.ArrayMax == 0)) {
        local_a8.ArrayNum = 0;
        local_a8.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,iVar8,local_a8.ArrayMax,&local_a8.AllocatorInstance,iVar8,
                   &local_a8.ArrayMax);
        ConstructItems<FInterchangeStackInfo,FInterchangeStackInfo,int>
                  (local_a8.AllocatorInstance.Data,pFVar3,iVar8);
      }
      iVar8 = local_98.ArrayMax;
    }
    if (&local_98 != param_2) {
      iVar2 = param_2->ArrayNum;
      _Src = (param_2->AllocatorInstance).Data;
      local_98.ArrayNum = iVar2;
      if ((iVar2 == 0) && (iVar8 == 0)) {
        local_98.ArrayNum = 0;
        local_98.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,iVar2,iVar8,&local_98.AllocatorInstance,iVar2,&local_98.ArrayMax);
        if (iVar2 != 0) {
          memcpy(local_98.AllocatorInstance.Data,_Src,(longlong)iVar2 << 3);
        }
      }
    }
    local_80 = param_4;
    local_78 = param_5;
    local_88 = param_3;
    (**(code **)(*(longlong *)this + 0x260))(this,local_b8[0],&local_a8);
    if (param_1 != &local_a8) {
      DestructItems<FInterchangeStackInfo,int>
                ((FInterchangeStackInfo *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
      FVar4.Data = local_a8.AllocatorInstance.Data;
      iVar8 = local_a8.ArrayNum;
      piVar1 = &param_1->ArrayMax;
      param_1->ArrayNum = local_a8.ArrayNum;
      if ((local_a8.ArrayNum == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,local_a8.ArrayNum,*piVar1,&param_1->AllocatorInstance,local_a8.ArrayNum,
                   piVar1);
        ConstructItems<FInterchangeStackInfo,FInterchangeStackInfo,int>
                  ((param_1->AllocatorInstance).Data,(FInterchangeStackInfo *)FVar4.Data,iVar8);
      }
    }
    FVar4.Data = local_98.AllocatorInstance.Data;
    if (param_2 != &local_98) {
      iVar8 = local_98.ArrayNum;
      lVar7 = (longlong)local_98.ArrayNum;
      piVar1 = &param_2->ArrayMax;
      param_2->ArrayNum = local_98.ArrayNum;
      if ((local_98.ArrayNum == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,local_98.ArrayNum,*piVar1,&param_2->AllocatorInstance,local_98.ArrayNum,
                   piVar1);
        if (iVar8 != 0) {
          memcpy((param_2->AllocatorInstance).Data,FVar4.Data,lVar7 << 3);
        }
      }
    }
    EVar5 = local_70;
    if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.AllocatorInstance.Data);
    }
    DestructItems<FInterchangeStackInfo,int>
              ((FInterchangeStackInfo *)local_a8.AllocatorInstance.Data,local_a8.ArrayNum);
    if ((FInterchangeStackInfo *)local_a8.AllocatorInstance.Data != (FInterchangeStackInfo *)0x0) {
      FMemory::Free(local_a8.AllocatorInstance.Data);
    }
  }
  else {
    local_68 = param_1;
    local_60 = param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_3 != (UInterchangeSourceData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_3);
    }
    local_58.ObjectIndex = 0;
    local_58.ObjectSerialNumber = 0;
    local_b8[0] = (UFunction *)param_3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_3 != (UInterchangeSourceData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_3);
    }
    FWeakObjectPtr::operator=(&local_58,(FObjectPtr)local_b8);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_4 != (UInterchangeTranslatorBase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_4);
    }
    local_50.ObjectIndex = 0;
    local_50.ObjectSerialNumber = 0;
    local_b8[0] = (UFunction *)param_4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_4 != (UInterchangeTranslatorBase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_4);
    }
    FWeakObjectPtr::operator=(&local_50,(FObjectPtr)local_b8);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_5 != (UInterchangeBaseNodeContainer *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_5);
    }
    local_48.ObjectIndex = 0;
    local_48.ObjectSerialNumber = 0;
    local_b8[0] = (UFunction *)param_5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_5 != (UInterchangeBaseNodeContainer *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_5);
    }
    FWeakObjectPtr::operator=(&local_48,(FObjectPtr)local_b8);
    local_40.ObjectIndex = 0;
    local_40.ObjectSerialNumber = 0;
    local_b8[0] = (UFunction *)0x0;
    FWeakObjectPtr::operator=(&local_40,(FObjectPtr)local_b8);
    local_38 = 0x100;
    local_36 = 0;
    local_34 = 0;
    local_32 = 0;
    EVar5 = (**(code **)(*(longlong *)this + 0x2b0))(this,&local_68);
  }
  return EVar5;
}

// ScriptedShowTestPlanConfigurationDialog @ 14e504fe0

EInterchangePipelineConfigurationDialogResult __thiscall
UInterchangePipelineConfigurationBase::ScriptedShowTestPlanConfigurationDialog
          (UInterchangePipelineConfigurationBase *this,
          TArray<FInterchangeStackInfo,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UInterchangePipelineBase_*,TSizedDefaultAllocator<32>_> *param_2,
          UInterchangeSourceData *param_3,UInterchangeTranslatorBase *param_4,
          UInterchangeBaseNodeContainer *param_5,UObject *param_6,bool param_7,bool param_8)

{
  int *piVar1;
  int iVar2;
  FInterchangeStackInfo *pFVar3;
  FScriptContainerElement *_Src;
  ForAnyElementType FVar4;
  EInterchangePipelineConfigurationDialogResult EVar5;
  UClass *pUVar6;
  longlong lVar7;
  int iVar8;
  UFunction *local_c8 [2];
  TArray<FInterchangeStackInfo,TSizedDefaultAllocator<32>_> local_b8;
  TArray<UInterchangePipelineBase_*,TSizedDefaultAllocator<32>_> local_a8;
  UInterchangeSourceData *local_98;
  UInterchangeTranslatorBase *local_90;
  UInterchangeBaseNodeContainer *local_88;
  UObject *local_80;
  bool local_78;
  bool local_77;
  EInterchangePipelineConfigurationDialogResult local_76;
  TArray<FInterchangeStackInfo,TSizedDefaultAllocator<32>_> *local_68;
  TArray<UInterchangePipelineBase_*,TSizedDefaultAllocator<32>_> *local_60;
  FWeakObjectPtr local_58;
  FWeakObjectPtr local_50;
  FWeakObjectPtr local_48;
  FWeakObjectPtr local_40;
  bool local_38;
  bool local_37;
  undefined1 local_36;
  undefined1 local_34;
  undefined1 local_32;
  
  local_c8[0] = UObject::FindFunctionChecked
                          ((UObject *)this,
                           NAME_UInterchangePipelineConfigurationBase_ScriptedShowTestPlanConfigurationDialog
                          );
  pUVar6 = UField::GetOwnerClass((UField *)local_c8[0]);
  if ((pUVar6->ClassFlags & CLASS_Native) == CLASS_None) {
    local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.ArrayNum = 0;
    local_b8.ArrayMax = 0;
    local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.ArrayNum = 0;
    local_a8.ArrayMax = 0;
    local_76 = Cancel;
    iVar8 = 0;
    if (&local_b8 != param_1) {
      DestructItems<FInterchangeStackInfo,int>((FInterchangeStackInfo *)0x0,0);
      iVar8 = param_1->ArrayNum;
      pFVar3 = (FInterchangeStackInfo *)(param_1->AllocatorInstance).Data;
      local_b8.ArrayNum = iVar8;
      if ((iVar8 == 0) && (local_b8.ArrayMax == 0)) {
        local_b8.ArrayNum = 0;
        local_b8.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,iVar8,local_b8.ArrayMax,&local_b8.AllocatorInstance,iVar8,
                   &local_b8.ArrayMax);
        ConstructItems<FInterchangeStackInfo,FInterchangeStackInfo,int>
                  (local_b8.AllocatorInstance.Data,pFVar3,iVar8);
      }
      iVar8 = local_a8.ArrayMax;
    }
    if (&local_a8 != param_2) {
      iVar2 = param_2->ArrayNum;
      _Src = (param_2->AllocatorInstance).Data;
      local_a8.ArrayNum = iVar2;
      if ((iVar2 == 0) && (iVar8 == 0)) {
        local_a8.ArrayNum = 0;
        local_a8.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,iVar2,iVar8,&local_a8.AllocatorInstance,iVar2,&local_a8.ArrayMax);
        if (iVar2 != 0) {
          memcpy(local_a8.AllocatorInstance.Data,_Src,(longlong)iVar2 << 3);
        }
      }
    }
    local_90 = param_4;
    local_88 = param_5;
    local_80 = param_6;
    local_78 = param_7;
    local_77 = param_8;
    local_98 = param_3;
    (**(code **)(*(longlong *)this + 0x260))(this,local_c8[0],&local_b8);
    if (param_1 != &local_b8) {
      DestructItems<FInterchangeStackInfo,int>
                ((FInterchangeStackInfo *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
      FVar4.Data = local_b8.AllocatorInstance.Data;
      iVar8 = local_b8.ArrayNum;
      piVar1 = &param_1->ArrayMax;
      param_1->ArrayNum = local_b8.ArrayNum;
      if ((local_b8.ArrayNum == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,local_b8.ArrayNum,*piVar1,&param_1->AllocatorInstance,local_b8.ArrayNum,
                   piVar1);
        ConstructItems<FInterchangeStackInfo,FInterchangeStackInfo,int>
                  ((param_1->AllocatorInstance).Data,(FInterchangeStackInfo *)FVar4.Data,iVar8);
      }
    }
    FVar4.Data = local_a8.AllocatorInstance.Data;
    if (param_2 != &local_a8) {
      iVar8 = local_a8.ArrayNum;
      lVar7 = (longlong)local_a8.ArrayNum;
      piVar1 = &param_2->ArrayMax;
      param_2->ArrayNum = local_a8.ArrayNum;
      if ((local_a8.ArrayNum == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,local_a8.ArrayNum,*piVar1,&param_2->AllocatorInstance,local_a8.ArrayNum,
                   piVar1);
        if (iVar8 != 0) {
          memcpy((param_2->AllocatorInstance).Data,FVar4.Data,lVar7 << 3);
        }
      }
    }
    EVar5 = local_76;
    if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.AllocatorInstance.Data);
    }
    DestructItems<FInterchangeStackInfo,int>
              ((FInterchangeStackInfo *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
    if ((FInterchangeStackInfo *)local_b8.AllocatorInstance.Data != (FInterchangeStackInfo *)0x0) {
      FMemory::Free(local_b8.AllocatorInstance.Data);
    }
  }
  else {
    local_68 = param_1;
    local_60 = param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_3 != (UInterchangeSourceData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_3);
    }
    local_58.ObjectIndex = 0;
    local_58.ObjectSerialNumber = 0;
    local_c8[0] = (UFunction *)param_3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_3 != (UInterchangeSourceData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_3);
    }
    FWeakObjectPtr::operator=(&local_58,(FObjectPtr)local_c8);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_4 != (UInterchangeTranslatorBase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_4);
    }
    local_50.ObjectIndex = 0;
    local_50.ObjectSerialNumber = 0;
    local_c8[0] = (UFunction *)param_4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_4 != (UInterchangeTranslatorBase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_4);
    }
    FWeakObjectPtr::operator=(&local_50,(FObjectPtr)local_c8);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_5 != (UInterchangeBaseNodeContainer *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_5);
    }
    local_48.ObjectIndex = 0;
    local_48.ObjectSerialNumber = 0;
    local_c8[0] = (UFunction *)param_5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_5 != (UInterchangeBaseNodeContainer *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_5);
    }
    FWeakObjectPtr::operator=(&local_48,(FObjectPtr)local_c8);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_6 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(param_6);
    }
    local_40.ObjectIndex = 0;
    local_40.ObjectSerialNumber = 0;
    local_c8[0] = (UFunction *)param_6;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_6 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(param_6);
    }
    FWeakObjectPtr::operator=(&local_40,(FObjectPtr)local_c8);
    local_38 = param_8;
    local_37 = param_7;
    local_36 = 1;
    local_34 = 0;
    local_32 = 0;
    EVar5 = (**(code **)(*(longlong *)this + 0x2b0))(this,&local_68);
  }
  return EVar5;
}

// ShowPipelineDialog_Internal @ 14e509430

EInterchangePipelineConfigurationDialogResult __thiscall
UInterchangePipelineConfigurationBase::ShowPipelineDialog_Internal
          (UInterchangePipelineConfigurationBase *this,FPipelineConfigurationDialogParams *param_1)

{
  return Cancel;
}

// StaticRegisterNativesUInterchangePipelineConfigurationBase @ 14e50ab20

void __cdecl
UInterchangePipelineConfigurationBase::StaticRegisterNativesUInterchangePipelineConfigurationBase
          (void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UInterchangePipelineConfigurationBase_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execScriptedShowPipelineConfigurationDialog @ 14e5102f0

void __cdecl
UInterchangePipelineConfigurationBase::execScriptedShowPipelineConfigurationDialog
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  UObject *pUVar3;
  UObject *pUVar4;
  undefined1 uVar5;
  void **ppvVar6;
  FInterchangeStackInfo **ppFVar7;
  UObject *local_res8;
  UObject *local_res10;
  UObject *local_res18;
  UObject *local_res20;
  FInterchangeStackInfo *local_a8;
  undefined8 local_a0;
  void *local_98;
  undefined8 local_90;
  FInterchangeStackInfo **local_88;
  void **local_80;
  FWeakObjectPtr local_78;
  FWeakObjectPtr local_70;
  FWeakObjectPtr local_68;
  FWeakObjectPtr local_60;
  undefined2 local_58;
  undefined1 local_56;
  undefined1 local_54;
  undefined1 local_52;
  
  local_a8 = (FInterchangeStackInfo *)0x0;
  local_a0 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  local_98 = (void *)0x0;
  local_90 = 0;
  ppFVar7 = &local_a8;
  if ((FInterchangeStackInfo **)param_2->MostRecentPropertyAddress != (FInterchangeStackInfo **)0x0)
  {
    ppFVar7 = (FInterchangeStackInfo **)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  local_res18 = (UObject *)0x0;
  ppvVar6 = &local_98;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar6 = (void **)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pUVar4 = local_res18;
  pUVar3 = local_res10;
  pUVar2 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_88 = ppFVar7;
  local_80 = ppvVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res18);
  }
  local_res20 = pUVar4;
  local_78.ObjectIndex = 0;
  local_78.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&local_78,(FObjectPtr)&local_res20);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  local_70.ObjectIndex = 0;
  local_70.ObjectSerialNumber = 0;
  local_res20 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  FWeakObjectPtr::operator=(&local_70,(FObjectPtr)&local_res20);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  local_68.ObjectIndex = 0;
  local_68.ObjectSerialNumber = 0;
  local_res20 = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  FWeakObjectPtr::operator=(&local_68,(FObjectPtr)&local_res20);
  local_60.ObjectIndex = 0;
  local_60.ObjectSerialNumber = 0;
  local_res20 = (UObject *)0x0;
  FWeakObjectPtr::operator=(&local_60,(FObjectPtr)&local_res20);
  local_58 = 0;
  local_56 = 0;
  local_54 = 0;
  local_52 = 0;
  uVar5 = (**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,&local_88);
  *(undefined1 *)param_3 = uVar5;
  if (local_98 != (void *)0x0) {
    FMemory::Free(local_98);
  }
  DestructItems<FInterchangeStackInfo,int>(local_a8,(int)local_a0);
  if (local_a8 != (FInterchangeStackInfo *)0x0) {
    FMemory::Free(local_a8);
  }
  return;
}

// execScriptedShowReimportPipelineConfigurationDialog @ 14e5105f0

void __cdecl
UInterchangePipelineConfigurationBase::execScriptedShowReimportPipelineConfigurationDialog
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  UObject *pUVar3;
  UObject *pUVar4;
  UObject *pUVar5;
  undefined1 uVar6;
  FInterchangeStackInfo **ppFVar7;
  void **ppvVar8;
  bool bVar9;
  int local_res10 [2];
  undefined1 *local_res18;
  UObject *local_res20;
  UObject *local_c8;
  FInterchangeStackInfo *local_c0;
  undefined8 local_b8;
  UObject *local_b0;
  UObject *local_a8;
  UObject *local_a0;
  void *local_98;
  undefined8 local_90;
  FInterchangeStackInfo **local_88;
  void **local_80;
  FWeakObjectPtr local_78;
  FWeakObjectPtr local_70;
  FWeakObjectPtr local_68;
  FWeakObjectPtr local_60;
  undefined1 local_58;
  undefined1 local_57;
  undefined1 local_56;
  undefined1 local_54;
  undefined1 local_52;
  
  local_c0 = (FInterchangeStackInfo *)0x0;
  local_b8 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_res18 = param_3;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c0);
  }
  local_98 = (void *)0x0;
  local_90 = 0;
  ppFVar7 = &local_c0;
  if ((FInterchangeStackInfo **)param_2->MostRecentPropertyAddress != (FInterchangeStackInfo **)0x0)
  {
    ppFVar7 = (FInterchangeStackInfo **)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  local_a0 = (UObject *)0x0;
  ppvVar8 = &local_98;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar8 = (void **)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a0);
  }
  local_a8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  local_b0 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b0);
  }
  local_res20 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pUVar5 = local_a0;
  pUVar4 = local_a8;
  pUVar3 = local_b0;
  pUVar2 = local_res20;
  bVar9 = local_res10[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_88 = ppFVar7;
  local_80 = ppvVar8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_a0 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_a0);
  }
  local_c8 = pUVar5;
  local_78.ObjectIndex = 0;
  local_78.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  FWeakObjectPtr::operator=(&local_78,(FObjectPtr)&local_c8);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_70.ObjectIndex = 0;
  local_70.ObjectSerialNumber = 0;
  local_c8 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&local_70,(FObjectPtr)&local_c8);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  local_68.ObjectIndex = 0;
  local_68.ObjectSerialNumber = 0;
  local_c8 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  FWeakObjectPtr::operator=(&local_68,(FObjectPtr)&local_c8);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  local_60.ObjectIndex = 0;
  local_60.ObjectSerialNumber = 0;
  local_c8 = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  FWeakObjectPtr::operator=(&local_60,(FObjectPtr)&local_c8);
  local_58 = 1;
  local_56 = 0;
  local_54 = 0;
  local_52 = 0;
  local_57 = bVar9;
  uVar6 = (**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,&local_88);
  *local_res18 = uVar6;
  if (local_98 != (void *)0x0) {
    FMemory::Free(local_98);
  }
  DestructItems<FInterchangeStackInfo,int>(local_c0,(int)local_b8);
  if (local_c0 != (FInterchangeStackInfo *)0x0) {
    FMemory::Free(local_c0);
  }
  return;
}

// execScriptedShowScenePipelineConfigurationDialog @ 14e5109a0

void __cdecl
UInterchangePipelineConfigurationBase::execScriptedShowScenePipelineConfigurationDialog
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  UObject *pUVar3;
  UObject *pUVar4;
  undefined1 uVar5;
  void **ppvVar6;
  FInterchangeStackInfo **ppFVar7;
  UObject *local_res8;
  UObject *local_res10;
  UObject *local_res18;
  UObject *local_res20;
  FInterchangeStackInfo *local_a8;
  undefined8 local_a0;
  void *local_98;
  undefined8 local_90;
  FInterchangeStackInfo **local_88;
  void **local_80;
  FWeakObjectPtr local_78;
  FWeakObjectPtr local_70;
  FWeakObjectPtr local_68;
  FWeakObjectPtr local_60;
  undefined2 local_58;
  undefined1 local_56;
  undefined1 local_54;
  undefined1 local_52;
  
  local_a8 = (FInterchangeStackInfo *)0x0;
  local_a0 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  local_98 = (void *)0x0;
  local_90 = 0;
  ppFVar7 = &local_a8;
  if ((FInterchangeStackInfo **)param_2->MostRecentPropertyAddress != (FInterchangeStackInfo **)0x0)
  {
    ppFVar7 = (FInterchangeStackInfo **)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  local_res18 = (UObject *)0x0;
  ppvVar6 = &local_98;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar6 = (void **)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pUVar4 = local_res18;
  pUVar3 = local_res10;
  pUVar2 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_88 = ppFVar7;
  local_80 = ppvVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res18);
  }
  local_res20 = pUVar4;
  local_78.ObjectIndex = 0;
  local_78.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&local_78,(FObjectPtr)&local_res20);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  local_70.ObjectIndex = 0;
  local_70.ObjectSerialNumber = 0;
  local_res20 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  FWeakObjectPtr::operator=(&local_70,(FObjectPtr)&local_res20);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  local_68.ObjectIndex = 0;
  local_68.ObjectSerialNumber = 0;
  local_res20 = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  FWeakObjectPtr::operator=(&local_68,(FObjectPtr)&local_res20);
  local_60.ObjectIndex = 0;
  local_60.ObjectSerialNumber = 0;
  local_res20 = (UObject *)0x0;
  FWeakObjectPtr::operator=(&local_60,(FObjectPtr)&local_res20);
  local_58 = 0x100;
  local_56 = 0;
  local_54 = 0;
  local_52 = 0;
  uVar5 = (**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,&local_88);
  *(undefined1 *)param_3 = uVar5;
  if (local_98 != (void *)0x0) {
    FMemory::Free(local_98);
  }
  DestructItems<FInterchangeStackInfo,int>(local_a8,(int)local_a0);
  if (local_a8 != (FInterchangeStackInfo *)0x0) {
    FMemory::Free(local_a8);
  }
  return;
}

// execScriptedShowTestPlanConfigurationDialog @ 14e510ca0

void __cdecl
UInterchangePipelineConfigurationBase::execScriptedShowTestPlanConfigurationDialog
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  UObject *pUVar3;
  UObject *pUVar4;
  UObject *pUVar5;
  undefined1 uVar6;
  void **ppvVar7;
  bool bVar8;
  bool bVar9;
  int local_res10 [2];
  undefined1 *local_res18;
  int local_res20 [2];
  UObject *local_c8;
  FInterchangeStackInfo *local_c0;
  undefined8 local_b8;
  UObject *local_b0;
  UObject *local_a8;
  UObject *local_a0;
  UObject *local_98;
  void *local_90;
  undefined8 local_88;
  FInterchangeStackInfo **local_80;
  void **local_78;
  FWeakObjectPtr local_70;
  FWeakObjectPtr local_68;
  FWeakObjectPtr local_60;
  FWeakObjectPtr local_58;
  undefined1 local_50;
  undefined1 local_4f;
  undefined1 local_4e;
  undefined1 local_4c;
  undefined1 local_4a;
  
  local_c0 = (FInterchangeStackInfo *)0x0;
  local_b8 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_res18 = param_3;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c0);
  }
  local_90 = (void *)0x0;
  local_88 = 0;
  local_c8 = (UObject *)&local_c0;
  if ((FInterchangeStackInfo **)param_2->MostRecentPropertyAddress != (FInterchangeStackInfo **)0x0)
  {
    local_c8 = (UObject *)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_90,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_90);
  }
  local_98 = (UObject *)0x0;
  ppvVar7 = &local_90;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar7 = (void **)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  local_a0 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a0);
  }
  local_a8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  local_b0 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b0);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar8 = local_res10[0] != 0;
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  pUVar5 = local_98;
  pUVar4 = local_a0;
  pUVar3 = local_a8;
  pUVar2 = local_b0;
  bVar9 = local_res20[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_80 = (FInterchangeStackInfo **)local_c8;
  local_78 = ppvVar7;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_98 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_98);
  }
  local_c8 = pUVar5;
  local_70.ObjectIndex = 0;
  local_70.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  FWeakObjectPtr::operator=(&local_70,(FObjectPtr)&local_c8);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_68.ObjectIndex = 0;
  local_68.ObjectSerialNumber = 0;
  local_c8 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&local_68,(FObjectPtr)&local_c8);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  local_60.ObjectIndex = 0;
  local_60.ObjectSerialNumber = 0;
  local_c8 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  FWeakObjectPtr::operator=(&local_60,(FObjectPtr)&local_c8);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  local_58.ObjectIndex = 0;
  local_58.ObjectSerialNumber = 0;
  local_c8 = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  FWeakObjectPtr::operator=(&local_58,(FObjectPtr)&local_c8);
  local_4e = 1;
  local_4c = 0;
  local_4a = 0;
  local_50 = bVar9;
  local_4f = bVar8;
  uVar6 = (**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,&local_80);
  *local_res18 = uVar6;
  if (local_90 != (void *)0x0) {
    FMemory::Free(local_90);
  }
  DestructItems<FInterchangeStackInfo,int>(local_c0,(int)local_b8);
  if (local_c0 != (FInterchangeStackInfo *)0x0) {
    FMemory::Free(local_c0);
  }
  return;
}

