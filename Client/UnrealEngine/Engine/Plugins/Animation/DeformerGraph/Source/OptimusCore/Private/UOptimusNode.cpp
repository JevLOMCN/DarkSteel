// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 75

// StaticClass @ 14e10c080

UClass * __cdecl UOptimusNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusNode",
               &Z_Registration_Info_UClass_UOptimusNode.InnerSingleton,
               StaticRegisterNativesUOptimusNode,0x108,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusNode>,
               InternalVTableHelperCtorCaller<UOptimusNode>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusNode.InnerSingleton;
}

// UOptimusNode @ 14e15a6b0

UOptimusNode * __thiscall UOptimusNode::UOptimusNode(UOptimusNode *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->bSendNotifications = true;
  this->_padding_ = (longlong)&___7UOptimusNode__6B_;
  FText::FText(&this->DisplayName);
  (this->Pins).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Pins).ArrayNum = 0;
  (this->Pins).ArrayMax = 0;
  *(undefined8 *)&(this->ExpandedPins).Elements = 0;
  *(undefined8 *)&(this->ExpandedPins).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ExpandedPins).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ExpandedPins).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ExpandedPins).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ExpandedPins).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->ExpandedPins).Elements.field_0x30 = 0xffffffff;
  (this->ExpandedPins).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ExpandedPins).HashSize = 0;
  this->DiagnosticLevel = None;
  this->bDynamicPins = false;
  this->bConstructingNode = false;
  *(undefined8 *)&this->CachedPinLookup = 0;
  *(undefined8 *)&(this->CachedPinLookup).field_0x8 = 0;
  *(undefined8 *)&(this->CachedPinLookup).field_0x20 = 0;
  *(undefined4 *)&(this->CachedPinLookup).field_0x28 = 0;
  *(undefined4 *)&(this->CachedPinLookup).field_0x2c = 0x80;
  *(undefined4 *)&(this->CachedPinLookup).field_0x34 = 0;
  *(undefined4 *)&(this->CachedPinLookup).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CachedPinLookup).field_0x40 = 0;
  *(undefined4 *)&(this->CachedPinLookup).field_0x48 = 0;
  return this;
}

// UOptimusNode @ 14e15a780

UOptimusNode * __thiscall UOptimusNode::UOptimusNode(UOptimusNode *this)

{
  UObject::UObject((UObject *)this);
  this->bSendNotifications = true;
  this->_padding_ = (longlong)&___7UOptimusNode__6B_;
  FText::FText(&this->DisplayName);
  (this->Pins).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Pins).ArrayNum = 0;
  (this->Pins).ArrayMax = 0;
  *(undefined8 *)&(this->ExpandedPins).Elements = 0;
  *(undefined8 *)&(this->ExpandedPins).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ExpandedPins).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ExpandedPins).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ExpandedPins).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ExpandedPins).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->ExpandedPins).Elements.field_0x30 = 0xffffffff;
  (this->ExpandedPins).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ExpandedPins).HashSize = 0;
  this->DiagnosticLevel = None;
  this->bDynamicPins = false;
  this->bConstructingNode = false;
  *(undefined8 *)&this->CachedPinLookup = 0;
  *(undefined8 *)&(this->CachedPinLookup).field_0x8 = 0;
  *(undefined8 *)&(this->CachedPinLookup).field_0x20 = 0;
  *(undefined4 *)&(this->CachedPinLookup).field_0x28 = 0;
  *(undefined4 *)&(this->CachedPinLookup).field_0x2c = 0x80;
  *(undefined4 *)&(this->CachedPinLookup).field_0x34 = 0;
  *(undefined4 *)&(this->CachedPinLookup).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CachedPinLookup).field_0x40 = 0;
  *(undefined4 *)&(this->CachedPinLookup).field_0x48 = 0;
  return this;
}

// ~UOptimusNode @ 14e162e60

void __thiscall UOptimusNode::~UOptimusNode(UOptimusNode *this)

{
  void *pvVar1;
  ForElementType<FSetElementId> FVar2;
  FScriptContainerElement *pFVar3;
  ITextData *pIVar4;
  
  this->_padding_ = (longlong)&___7UOptimusNode__6B_;
  *(undefined4 *)&(this->CachedPinLookup).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedPinLookup).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TArray<FName,TSizedDefaultAllocator<32>_>,UOptimusNodePin_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TArray<FName,TSizedDefaultAllocator<32>_>,UOptimusNodePin_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TArray<FName,TSizedDefaultAllocator<32>_>,UOptimusNodePin_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedPinLookup);
  (this->ExpandedPins).HashSize = 0;
  FVar2 = (this->ExpandedPins).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ExpandedPins).Elements);
  pFVar3 = (this->Pins).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pIVar4 = (this->DisplayName).TextData.Reference;
  if (pIVar4 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar4 + 0x10))();
  }
  UObject::~UObject((UObject *)this);
  return;
}

// AddGroupingPin @ 14e174c10

/* WARNING: Enum "Type": Some values do not have unique names */

UOptimusNodePin * __thiscall
UOptimusNode::AddGroupingPin
          (UOptimusNode *this,FName param_1,EOptimusNodePinDirection param_2,
          UOptimusNodePin *param_3)

{
  UObjectBaseUtility *this_00;
  bool bVar1;
  FString *pFVar2;
  UOptimusNode *pUVar3;
  UOptimusNodePin *pUVar4;
  FOptimusNodeAction_AddRemovePin *this_01;
  UOptimusActionStack *pUVar5;
  UClass *pUVar6;
  FOptimusNodeAction_AddRemovePin *pFVar7;
  FStaticBasicLogRecord *pFVar8;
  FOptimusNodeAction_AddRemovePin *pFVar9;
  FString local_28;
  
  if (this->bDynamicPins == false) {
    if ((byte)LogOptimusCore._0_1_ < 2) {
      return (UOptimusNodePin *)0x0;
    }
    pFVar2 = GetNodePath(this,&local_28);
    if ((pFVar2->Data).ArrayNum == 0) {
      pFVar8 = &::LOG_Static;
    }
    else {
      pFVar8 = &::LOG_Static;
    }
  }
  else {
    if (param_3 == (UOptimusNodePin *)0x0) {
LAB_14e174d31:
      this_01 = ::operator_new(0xb8);
      pFVar7 = (FOptimusNodeAction_AddRemovePin *)0x0;
      pFVar9 = pFVar7;
      if (this_01 != (FOptimusNodeAction_AddRemovePin *)0x0) {
        FOptimusNodeAction_AddRemovePin::FOptimusNodeAction_AddRemovePin
                  (this_01,this,param_1,param_2,param_3);
        this_01->_padding_ = (longlong)&___7FOptimusNodeAction_AddGroupingPin__6B_;
        pFVar9 = this_01;
      }
      pUVar5 = GetActionStack(this);
      bVar1 = UOptimusActionStack::RunAction(pUVar5,(FOptimusAction *)pFVar9);
      if (!bVar1) {
        return (UOptimusNodePin *)0x0;
      }
      pUVar5 = GetActionStack(this);
      this_00 = (UObjectBaseUtility *)pUVar5->_padding_;
      if (this_00 != (UObjectBaseUtility *)0x0) {
        pUVar6 = Z_Construct_UClass_UOptimusPathResolver_NoRegister();
        pFVar7 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar6);
      }
      pUVar4 = (UOptimusNodePin *)(**(code **)(pFVar7->_padding_ + 0x28))(pFVar7,&pFVar9->PinPath);
      return pUVar4;
    }
    pUVar3 = UOptimusNodePin::GetOwningNode(param_3);
    if (pUVar3 == this) {
      pUVar4 = UOptimusNodePin::GetParentPin(param_3);
      if (pUVar4 == (UOptimusNodePin *)0x0) goto LAB_14e174d31;
      if ((byte)LogOptimusCore._0_1_ < 2) {
        return (UOptimusNodePin *)0x0;
      }
      UOptimusNodePin::GetPinPath(param_3,&local_28);
      pFVar8 = &::LOG_Static;
    }
    else {
      if ((byte)LogOptimusCore._0_1_ < 2) {
        return (UOptimusNodePin *)0x0;
      }
      pFVar2 = UOptimusNodePin::GetPinPath(param_3,&local_28);
      if ((pFVar2->Data).ArrayNum == 0) {
        pFVar8 = &::LOG_Static;
      }
      else {
        pFVar8 = &::LOG_Static;
      }
    }
  }
  UE::Logging::Private::BasicLog<2>(pFVar8,(FLogCategoryBase *)&LogOptimusCore);
  if (local_28.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return (UOptimusNodePin *)0x0;
  }
  FMemory::Free(local_28.Data.AllocatorInstance.Data);
  return (UOptimusNodePin *)0x0;
}

// AddGroupingPinDirect @ 14e174de0

UOptimusNodePin * __thiscall
UOptimusNode::AddGroupingPinDirect
          (UOptimusNode *this,FName param_1,EOptimusNodePinDirection param_2,
          UOptimusNodePin *param_3)

{
  UOptimusNodePin *pUVar1;
  
  pUVar1 = NewObject<UOptimusNodePin>
                     ((UObject *)this,param_1,RF_NoFlags,(UObject *)0x0,false,
                      (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
  pUVar1->Direction = param_2;
  pUVar1->bIsGroupingPin = true;
  InsertPinIntoHierarchy(this,pUVar1,(UOptimusNodePin *)0x0,param_3);
  return pUVar1;
}

// AddPin @ 14e177140

UOptimusNodePin * __thiscall
UOptimusNode::AddPin
          (UOptimusNode *this,FOptimusParameterBinding *param_1,EOptimusNodePinDirection param_2,
          UOptimusNodePin *param_3)

{
  UOptimusNodePin *pUVar1;
  undefined1 local_38 [48];
  
  local_38._0_8_ = (param_1->DataType).TypeName;
  local_38._8_8_ = *(undefined8 *)&(param_1->DataType).TypeObject.SoftObjectPtr;
  FSoftObjectPath::FSoftObjectPath
            ((FSoftObjectPath *)(local_38 + 0x10),
             (FSoftObjectPath *)&(param_1->DataType).TypeObject.SoftObjectPtr.field_0x8);
  pUVar1 = AddPin(this,(param_1->Name).Name,param_2,&param_1->DataDomain,
                  (FOptimusDataTypeRef *)local_38,param_3,(UOptimusNodePin *)0x0);
  return pUVar1;
}

// AddPin @ 14e1771d0

/* WARNING: Enum "Type": Some values do not have unique names */

UOptimusNodePin * __thiscall
UOptimusNode::AddPin
          (UOptimusNode *this,FName param_1,EOptimusNodePinDirection param_2,
          FOptimusDataDomain *param_3,FOptimusDataTypeRef *param_4,UOptimusNodePin *param_5,
          UOptimusNodePin *param_6)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FName FVar3;
  undefined8 uVar4;
  UObjectBaseUtility *this_00;
  code *pcVar5;
  bool bVar6;
  UOptimusNode *pUVar7;
  UOptimusNodePin *pUVar8;
  FOptimusNodeAction_AddRemovePin *this_01;
  FOptimusDataDomain *pFVar9;
  UOptimusActionStack *pUVar10;
  UClass *pUVar11;
  longlong *plVar12;
  void *pvVar13;
  FScriptContainerElement *pFVar14;
  FSoftObjectPath local_108;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  undefined1 local_98 [48];
  FOptimusDataDomain local_68;
  
  if (this->bDynamicPins == false) {
    if (1 < (byte)LogOptimusCore._0_1_) {
      GetNodePath(this,&local_e8);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOptimusCore);
      goto LAB_14e177246;
    }
    goto LAB_14e177250;
  }
  if (param_5 == (UOptimusNodePin *)0x0) {
LAB_14e177347:
    if (param_6 == (UOptimusNodePin *)0x0) {
LAB_14e177469:
      this_01 = ::operator_new(0xb8);
      plVar12 = (longlong *)0x0;
      if (this_01 == (FOptimusNodeAction_AddRemovePin *)0x0) {
        this_01 = (FOptimusNodeAction_AddRemovePin *)0x0;
      }
      else {
        FVar3 = param_4->TypeName;
        uVar4 = *(undefined8 *)&(param_4->TypeObject).SoftObjectPtr;
        FSoftObjectPath::FSoftObjectPath
                  (&local_108,(FSoftObjectPath *)&(param_4->TypeObject).SoftObjectPtr.field_0x8);
        pFVar9 = FOptimusDataDomain::FOptimusDataDomain(&local_68,param_3);
        local_98._0_8_ = FVar3;
        local_98._8_8_ = uVar4;
        FSoftObjectPath::FSoftObjectPath((FSoftObjectPath *)(local_98 + 0x10),&local_108);
        FOptimusNodeAction_AddRemovePin::FOptimusNodeAction_AddRemovePin
                  (this_01,this,param_1,param_2,pFVar9,(FOptimusDataTypeRef *)local_98,param_5,
                   param_6);
        this_01->_padding_ = (longlong)&___7FOptimusNodeAction_AddPin__6B_;
        pFVar14 = (pFVar9->LevelNames_DEPRECATED).AllocatorInstance.Data;
        if (pFVar14 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar14);
        }
        pFVar14 = (pFVar9->Expression).Data.AllocatorInstance.Data;
        if (pFVar14 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar14);
        }
        pFVar14 = (pFVar9->DimensionNames).AllocatorInstance.Data;
        if (pFVar14 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar14);
        }
        if (local_108.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_108.SubPathString.Data.AllocatorInstance.Data);
        }
      }
      pUVar10 = GetActionStack(this);
      bVar6 = UOptimusActionStack::RunAction(pUVar10,(FOptimusAction *)this_01);
      if (bVar6) {
        pUVar10 = GetActionStack(this);
        this_00 = (UObjectBaseUtility *)pUVar10->_padding_;
        if (this_00 != (UObjectBaseUtility *)0x0) {
          pUVar11 = Z_Construct_UClass_UOptimusPathResolver_NoRegister();
          plVar12 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar11);
        }
        pUVar8 = (UOptimusNodePin *)(**(code **)(*plVar12 + 0x28))(plVar12,&this_01->PinPath);
        pvVar13 = *(void **)&(param_4->TypeObject).SoftObjectPtr.field_0x18;
        if (pvVar13 == (void *)0x0) {
          return pUVar8;
        }
        FMemory::Free(pvVar13);
        return pUVar8;
      }
      pvVar13 = *(void **)&(param_4->TypeObject).SoftObjectPtr.field_0x18;
      goto LAB_14e177581;
    }
    pUVar7 = UOptimusNodePin::GetOwningNode(param_6);
    if (pUVar7 == this) {
      if (param_5 == (UOptimusNodePin *)0x0) goto LAB_14e177469;
      iVar2 = (param_6->SubPins).ArrayNum;
      pFVar14 = (param_6->SubPins).AllocatorInstance.Data;
      if ((iVar2 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        pUVar8 = (UOptimusNodePin *)(*pcVar5)();
        return pUVar8;
      }
      pFVar1 = pFVar14 + (longlong)iVar2 * 8;
      for (; pFVar14 != pFVar1; pFVar14 = pFVar14 + 8) {
        if ((*(UOptimusNodePin **)pFVar14 != (UOptimusNodePin *)0x0) &&
           (*(UOptimusNodePin **)pFVar14 == param_5)) goto LAB_14e177469;
      }
      if (1 < (byte)LogOptimusCore._0_1_) {
        UOptimusNodePin::GetPinPath(param_5,&local_a8);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOptimusCore);
        local_e8.Data.AllocatorInstance.Data = local_a8.Data.AllocatorInstance.Data;
        goto LAB_14e177246;
      }
    }
    else if (1 < (byte)LogOptimusCore._0_1_) {
      UOptimusNodePin::GetPinPath(param_6,&local_b8);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOptimusCore);
      local_e8.Data.AllocatorInstance.Data = local_b8.Data.AllocatorInstance.Data;
LAB_14e177246:
      if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    pUVar7 = UOptimusNodePin::GetOwningNode(param_5);
    if (pUVar7 == this) {
      pUVar8 = UOptimusNodePin::GetParentPin(param_5);
      if ((pUVar8 == (UOptimusNodePin *)0x0) &&
         ((pUVar8 = UOptimusNodePin::GetParentPin(param_5), pUVar8 == (UOptimusNodePin *)0x0 ||
          (pUVar8 = UOptimusNodePin::GetParentPin(param_5), pUVar8->bIsGroupingPin != false))))
      goto LAB_14e177347;
      if (1 < (byte)LogOptimusCore._0_1_) {
        UOptimusNodePin::GetPinPath(param_5,&local_c8);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOptimusCore);
        local_e8.Data.AllocatorInstance.Data = local_c8.Data.AllocatorInstance.Data;
        goto LAB_14e177246;
      }
    }
    else if (1 < (byte)LogOptimusCore._0_1_) {
      UOptimusNodePin::GetPinPath(param_5,&local_d8);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOptimusCore);
      local_e8.Data.AllocatorInstance.Data = local_d8.Data.AllocatorInstance.Data;
      goto LAB_14e177246;
    }
  }
LAB_14e177250:
  pvVar13 = *(void **)&(param_4->TypeObject).SoftObjectPtr.field_0x18;
LAB_14e177581:
  if (pvVar13 != (void *)0x0) {
    FMemory::Free(pvVar13);
  }
  return (UOptimusNodePin *)0x0;
}

// AddPinDirect @ 14e177600

UOptimusNodePin * __thiscall
UOptimusNode::AddPinDirect
          (UOptimusNode *this,FOptimusParameterBinding *param_1,EOptimusNodePinDirection param_2,
          UOptimusNodePin *param_3)

{
  UOptimusNodePin *pUVar1;
  undefined1 local_38 [48];
  
  local_38._0_8_ = (param_1->DataType).TypeName;
  local_38._8_8_ = *(undefined8 *)&(param_1->DataType).TypeObject.SoftObjectPtr;
  FSoftObjectPath::FSoftObjectPath
            ((FSoftObjectPath *)(local_38 + 0x10),
             (FSoftObjectPath *)&(param_1->DataType).TypeObject.SoftObjectPtr.field_0x8);
  pUVar1 = AddPinDirect(this,(param_1->Name).Name,param_2,&param_1->DataDomain,
                        (FOptimusDataTypeRef *)local_38,param_3,(UOptimusNodePin *)0x0);
  return pUVar1;
}

// AddPinDirect @ 14e177690

UOptimusNodePin * __thiscall
UOptimusNode::AddPinDirect
          (UOptimusNode *this,FName param_1,EOptimusNodePinDirection param_2,
          FOptimusDataDomain *param_3,FOptimusDataTypeRef *param_4,UOptimusNodePin *param_5,
          UOptimusNodePin *param_6)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FOptimusDataType *pFVar3;
  void *pvVar4;
  UOptimusNodePin *pUVar5;
  FOptimusDataDomain *pFVar6;
  TSharedPtr<FOptimusDataType_const_,1> *pTVar7;
  UStruct *pUVar8;
  UClass *pUVar9;
  UOptimusNode *pUVar10;
  TSharedPtr<FOptimusDataType_const_,1> local_98;
  FName local_88;
  TPersistentObjectPtr<FSoftObjectPath> local_80;
  FOptimusDataDomain local_58;
  
  pUVar10 = (UOptimusNode *)param_6;
  if (param_6 == (UOptimusNodePin *)0x0) {
    pUVar10 = this;
  }
  pUVar5 = NewObject<UOptimusNodePin>
                     ((UObject *)pUVar10,param_1,RF_NoFlags,(UObject *)0x0,false,
                      (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
  local_88 = param_4->TypeName;
  local_80.WeakPtr.ObjectIndex = *(int *)&(param_4->TypeObject).SoftObjectPtr.field_0x0;
  local_80.WeakPtr.ObjectSerialNumber = *(int *)&(param_4->TypeObject).SoftObjectPtr.field_0x4;
  FSoftObjectPath::FSoftObjectPath
            (&local_80.ObjectID,(FSoftObjectPath *)&(param_4->TypeObject).SoftObjectPtr.field_0x8);
  pFVar6 = FOptimusDataDomain::FOptimusDataDomain(&local_58,param_3);
  pUVar5->Direction = param_2;
  (pUVar5->DataDomain).Type = pFVar6->Type;
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            (&(pUVar5->DataDomain).DimensionNames,&pFVar6->DimensionNames);
  (pUVar5->DataDomain).Multiplier = pFVar6->Multiplier;
  ::FString::operator=(&(pUVar5->DataDomain).Expression,&pFVar6->Expression);
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            (&(pUVar5->DataDomain).LevelNames_DEPRECATED,&pFVar6->LevelNames_DEPRECATED);
  (pUVar5->DataType).TypeName = local_88;
  TPersistentObjectPtr<FSoftObjectPath>::operator=
            ((TPersistentObjectPtr<FSoftObjectPath> *)&(pUVar5->DataType).TypeObject,&local_80);
  pFVar2 = (pFVar6->LevelNames_DEPRECATED).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (pFVar6->Expression).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (pFVar6->DimensionNames).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  if (local_80.ObjectID.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    FMemory::Free(local_80.ObjectID.SubPathString.Data.AllocatorInstance.Data);
  }
  if ((param_3->Type == Dimensional) && ((param_3->DimensionNames).ArrayNum == 0)) {
    pTVar7 = FOptimusDataTypeRef::Resolve(param_4,&local_98);
    pFVar3 = pTVar7->Object;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_98.SharedReferenceCount.ReferenceController);
    if ((pFVar3->TypeFlags & ShowElements) != None) {
      pTVar7 = FOptimusDataTypeRef::Resolve(param_4,&local_98);
      pFVar3 = pTVar7->Object;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_98.SharedReferenceCount.ReferenceController);
      pUVar8 = (UStruct *)FWeakObjectPtr::Get(&(pFVar3->TypeObject).WeakPtr);
      if (pUVar8 != (UStruct *)0x0) {
        pUVar9 = Z_Construct_UClass_UScriptStruct_NoRegister();
        iVar1 = (int)pUVar9->_padding_;
        if ((iVar1 <= *(int *)(pUVar8->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
            &pUVar9->_padding_)) {
          CreatePinsFromStructLayout(this,pUVar8,pUVar5);
        }
      }
    }
  }
  InsertPinIntoHierarchy(this,pUVar5,param_6,param_5);
  pvVar4 = *(void **)&(param_4->TypeObject).SoftObjectPtr.field_0x18;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  return pUVar5;
}

// CanConnectPinToNode @ 14e181700

bool __thiscall
UOptimusNode::CanConnectPinToNode
          (UOptimusNode *this,UOptimusNodePin *param_1,EOptimusNodePinDirection param_2,
          FString *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  UOptimusNode *pUVar5;
  UOptimusNodeGraph *pUVar6;
  UOptimusNodeGraph *pUVar7;
  UOptimusNode *pUVar8;
  wchar_t *pwVar9;
  FString local_38;
  FString local_28;
  
  if (param_1 == (UOptimusNodePin *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3307391251921240273>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusNode.cpp"
                       ,0xd1,"InOtherPin");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    if (param_3 != (FString *)0x0) {
      ::FString::operator=(param_3,L"No pin given.");
      return false;
    }
  }
  else if (param_2 == param_1->Direction) {
    if (param_3 != (FString *)0x0) {
      pwVar9 = L"output";
      if (param_2 == Input) {
        pwVar9 = L"input";
      }
      ::FString::FString(&local_28,pwVar9);
      ::FString::PrintfImpl(&local_38,L"Can\'t connect an %s pin to a %s");
      if (param_3 != &local_38) {
        pFVar1 = (param_3->Data).AllocatorInstance.Data;
        if (pFVar1 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar1);
        }
        (param_3->Data).AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
        (param_3->Data).ArrayNum = local_38.Data.ArrayNum;
        (param_3->Data).ArrayMax = local_38.Data.ArrayMax;
        local_38.Data.ArrayNum = 0;
        local_38.Data.ArrayMax = 0;
        local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
        return false;
      }
    }
  }
  else {
    pUVar5 = UOptimusNodePin::GetOwningNode(param_1);
    if (this == pUVar5) {
      if (param_3 != (FString *)0x0) {
        ::FString::operator=(param_3,L"Can\'t connect pins on the same node.");
        return false;
      }
    }
    else {
      pUVar5 = UOptimusNodePin::GetOwningNode(param_1);
      pUVar6 = GetOwningGraph(pUVar5);
      pUVar7 = GetOwningGraph(this);
      if (pUVar7 == pUVar6) {
        pUVar5 = this;
        if ((param_2 == Output) ||
           (pUVar5 = UOptimusNodePin::GetOwningNode(param_1), pUVar8 = this, param_2 != Input)) {
          pUVar8 = UOptimusNodePin::GetOwningNode(param_1);
        }
        pUVar6 = GetOwningGraph(this);
        bVar3 = UOptimusNodeGraph::DoesLinkFormCycle(pUVar6,pUVar5,pUVar8);
        if (!bVar3) {
          return true;
        }
        if (param_3 != (FString *)0x0) {
          ::FString::operator=(param_3,L"Connection results in a cycle.");
        }
      }
      else if (param_3 != (FString *)0x0) {
        ::FString::operator=(param_3,L"Pins belong to nodes from two different graphs.");
        return false;
      }
    }
  }
  return false;
}

// CanConnectPinToPin @ 14e181920

bool __thiscall
UOptimusNode::CanConnectPinToPin
          (UOptimusNode *this,UOptimusNodePin *param_1,UOptimusNodePin *param_2,FString *param_3)

{
  bool bVar1;
  char cVar2;
  UOptimusNode *pUVar3;
  
  bVar1 = CanConnectPinToNode(this,param_2,param_1->Direction,param_3);
  if ((bVar1) &&
     (cVar2 = (**(code **)(this->_padding_ + 0x308))(this,param_1,param_2,param_3), cVar2 != '\0'))
  {
    pUVar3 = UOptimusNodePin::GetOwningNode(param_2);
    cVar2 = (**(code **)(pUVar3->_padding_ + 0x308))(pUVar3,param_2,param_1,param_3);
    return cVar2 != '\0';
  }
  return false;
}

// CanUserDeleteNode @ 14e181bf0

bool __thiscall UOptimusNode::CanUserDeleteNode(UOptimusNode *this)

{
  return true;
}

// ConstructNode @ 14e192a20

void __thiscall UOptimusNode::ConstructNode(UOptimusNode *this)

{
  TFieldIterator<FProperty> local_38;
  TFieldIterator<FProperty> local_20;
  
  local_38.Struct = (UStruct *)this->_padding_;
  if (local_38.Struct == (UStruct *)0x0) {
    local_38.Field = (FField *)0x0;
  }
  else {
    local_38.Field = (local_38.Struct)->ChildProperties;
  }
  local_38.InterfaceIndex = -1;
  local_38.bIncludeSuper = true;
  local_38.bIncludeDeprecated = true;
  local_38.bIncludeInterface = false;
  TFieldIterator<FProperty>::IterateToNext(&local_38);
  local_20.bIncludeSuper = local_38.bIncludeSuper;
  local_20.bIncludeDeprecated = local_38.bIncludeDeprecated;
  local_20.InterfaceIndex = local_38.InterfaceIndex;
  local_20.bIncludeInterface = local_38.bIncludeInterface;
  local_20._23_1_ = local_38._23_1_;
  local_20.Struct = local_38.Struct;
  local_20.Field = local_38.Field;
  while (local_20.Field != (FField *)0x0) {
    local_20.Field = (local_20.Field)->Next;
    TFieldIterator<FProperty>::IterateToNext(&local_20);
  }
  return;
}

// CreatePinFromProperty @ 14e19fa40

/* WARNING: Enum "Type": Some values do not have unique names */

UOptimusNodePin * __thiscall
UOptimusNode::CreatePinFromProperty
          (UOptimusNode *this,EOptimusNodePinDirection param_1,FProperty *param_2,
          UOptimusNodePin *param_3)

{
  code *pcVar1;
  bool bVar2;
  UOptimusNodePin *pUVar3;
  FOptimusDataTypeRegistry *this_00;
  FOptimusDataTypeRef *pFVar4;
  FName FVar5;
  FString local_b8;
  TSharedPtr<FOptimusDataType_const_,1> local_a8;
  FOptimusDataDomain local_98;
  TSharedPtr<FOptimusDataType_const_,1> local_58;
  FOptimusDataTypeRef local_48;
  
  if (param_2 == (FProperty *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3307391251921241238>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusNode.cpp"
                       ,0x496,"InProperty");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UOptimusNodePin *)(*pcVar1)();
      return pUVar3;
    }
    pUVar3 = (UOptimusNodePin *)0x0;
  }
  else {
    this_00 = FOptimusDataTypeRegistry::Get();
    FOptimusDataTypeRegistry::FindType(this_00,&local_a8,param_2);
    if (local_a8.Object == (FOptimusDataType *)0x0) {
      if (1 < (byte)LogOptimusCore._0_1_) {
        bVar2 = IsThisNotNull(param_2,"FField::GetName");
        if (bVar2) {
          ::FName::ToString((FName *)&param_2->_padding_,&local_b8);
        }
        else {
          ::FString::FString(&local_b8,L"None");
        }
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOptimusCore);
        if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.Data.AllocatorInstance.Data);
        }
      }
      pUVar3 = (UOptimusNodePin *)0x0;
    }
    else {
      local_58.Object = local_a8.Object;
      local_58.SharedReferenceCount.ReferenceController =
           local_a8.SharedReferenceCount.ReferenceController;
      if (local_a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar4 = FOptimusDataTypeRef::FOptimusDataTypeRef(&local_48,&local_58);
      local_98.Type = Dimensional;
      local_98._4_4_ = 0;
      local_98.DimensionNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_98.DimensionNames.ArrayNum = 0;
      local_98.DimensionNames.ArrayMax = 0;
      local_98.Multiplier = 0;
      local_98._28_4_ = 0;
      local_98.Expression.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_98.Expression.Data.ArrayNum = 0;
      local_98.Expression.Data.ArrayMax = 0;
      local_98.LevelNames_DEPRECATED.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_98.LevelNames_DEPRECATED.ArrayNum = 0;
      local_98.LevelNames_DEPRECATED.ArrayMax = 0;
      FOptimusDataDomain::FOptimusDataDomain(&local_98);
      bVar2 = IsThisNotNull(param_2,"FField::GetFName");
      FVar5.ComparisonIndex.Value = 0;
      FVar5.Number = 0;
      if (bVar2) {
        FVar5 = (FName)param_2->_padding_;
      }
      pUVar3 = AddPinDirect(this,FVar5,param_1,&local_98,pFVar4,(UOptimusNodePin *)0x0,param_3);
      if (local_98.LevelNames_DEPRECATED.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.LevelNames_DEPRECATED.AllocatorInstance.Data);
      }
      if (local_98.Expression.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Expression.Data.AllocatorInstance.Data);
      }
      if (local_98.DimensionNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.DimensionNames.AllocatorInstance.Data);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a8.SharedReferenceCount.ReferenceController);
  }
  return pUVar3;
}

// CreatePinsFromStructLayout @ 14e19fc60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UOptimusNode::CreatePinsFromStructLayout
          (UOptimusNode *this,UStruct *param_1,UOptimusNodePin *param_2)

{
  EOptimusNodePinDirection EVar1;
  code *pcVar2;
  FProperty *pFVar3;
  bool bVar4;
  FOptimusDataTypeRegistry *this_00;
  FOptimusDataTypeRef *pFVar5;
  FSharedReferencer<1> FVar6;
  FName local_res10;
  TFieldIterator<FProperty> local_f8;
  FString local_e0;
  TFieldIterator<FProperty> local_d0;
  TSharedPtr<FOptimusDataType_const_,1> local_b8;
  FOptimusDataDomain local_a8;
  TSharedPtr<FOptimusDataType_const_,1> local_68;
  FOptimusDataTypeRef local_58;
  
  local_f8.Field = (FField *)0x0;
  if (param_1 != (UStruct *)0x0) {
    local_f8.Field = param_1->ChildProperties;
  }
  local_f8.InterfaceIndex = -1;
  local_f8.bIncludeSuper = true;
  local_f8.bIncludeDeprecated = true;
  local_f8.bIncludeInterface = false;
  local_f8.Struct = param_1;
  TFieldIterator<FProperty>::IterateToNext(&local_f8);
  local_d0.bIncludeSuper = local_f8.bIncludeSuper;
  local_d0.bIncludeDeprecated = local_f8.bIncludeDeprecated;
  local_d0.InterfaceIndex = local_f8.InterfaceIndex;
  local_d0.bIncludeInterface = local_f8.bIncludeInterface;
  local_d0._23_1_ = local_f8._23_1_;
  local_d0.Struct = local_f8.Struct;
  pFVar3 = (FProperty *)local_f8.Field;
  do {
    if (pFVar3 == (FProperty *)0x0) {
      return;
    }
    if (param_2 != (UOptimusNodePin *)0x0) {
      EVar1 = param_2->Direction;
      local_d0.Field = (FField *)pFVar3;
      if (pFVar3 == (FProperty *)0x0) {
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<3307391251921241238>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusNode.cpp"
                           ,0x496,"InProperty");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      else {
        this_00 = FOptimusDataTypeRegistry::Get();
        FOptimusDataTypeRegistry::FindType(this_00,&local_b8,pFVar3);
        FVar6.ReferenceController = local_b8.SharedReferenceCount.ReferenceController;
        if (local_b8.Object == (FOptimusDataType *)0x0) {
          if (1 < (byte)LogOptimusCore._0_1_) {
            bVar4 = IsThisNotNull(pFVar3,"FField::GetName");
            if (bVar4) {
              ::FName::ToString((FName *)&pFVar3->_padding_,&local_e0);
            }
            else {
              ::FString::FString(&local_e0,L"None");
            }
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOptimusCore);
            FVar6.ReferenceController = local_b8.SharedReferenceCount.ReferenceController;
            if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_e0.Data.AllocatorInstance.Data);
              FVar6.ReferenceController = local_b8.SharedReferenceCount.ReferenceController;
            }
          }
        }
        else {
          local_68.Object = local_b8.Object;
          local_68.SharedReferenceCount.ReferenceController =
               local_b8.SharedReferenceCount.ReferenceController;
          if (local_b8.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          pFVar5 = FOptimusDataTypeRef::FOptimusDataTypeRef(&local_58,&local_68);
          local_a8.Type = Dimensional;
          local_a8._4_4_ = 0;
          local_a8.DimensionNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_a8.DimensionNames.ArrayNum = 0;
          local_a8.DimensionNames.ArrayMax = 0;
          local_a8.Multiplier = 0;
          local_a8._28_4_ = 0;
          local_a8.Expression.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_a8.Expression.Data.ArrayNum = 0;
          local_a8.Expression.Data.ArrayMax = 0;
          local_a8.LevelNames_DEPRECATED.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_a8.LevelNames_DEPRECATED.ArrayNum = 0;
          local_a8.LevelNames_DEPRECATED.ArrayMax = 0;
          FOptimusDataDomain::FOptimusDataDomain(&local_a8);
          bVar4 = IsThisNotNull(pFVar3,"FField::GetFName");
          if (bVar4) {
            local_res10 = (FName)pFVar3->_padding_;
          }
          else {
            local_res10.ComparisonIndex.Value = 0;
            local_res10.Number = 0;
          }
          AddPinDirect(this,local_res10,EVar1,&local_a8,pFVar5,(UOptimusNodePin *)0x0,param_2);
          if (local_a8.LevelNames_DEPRECATED.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a8.LevelNames_DEPRECATED.AllocatorInstance.Data);
          }
          if (local_a8.Expression.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a8.Expression.Data.AllocatorInstance.Data);
          }
          if (local_a8.DimensionNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a8.DimensionNames.AllocatorInstance.Data);
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar6.ReferenceController);
      }
    }
    local_d0.Field = (FField *)pFVar3->_padding_;
    TFieldIterator<FProperty>::IterateToNext(&local_d0);
    pFVar3 = (FProperty *)local_d0.Field;
  } while( true );
}

// EnableDynamicPins @ 14e1a8650

void __thiscall UOptimusNode::EnableDynamicPins(UOptimusNode *this)

{
  this->bDynamicPins = true;
  return;
}

// ExportState @ 14e1af1c0

void __thiscall UOptimusNode::ExportState(UOptimusNode *this,FArchive *param_1)

{
  FObjectAndNameAsStringProxyArchive local_a8;
  
  FObjectAndNameAsStringProxyArchive::FObjectAndNameAsStringProxyArchive(&local_a8,param_1,false);
  UObject::SerializeScriptProperties((UObject *)this,(FArchive *)&local_a8);
  FObjectAndNameAsStringProxyArchive::~FObjectAndNameAsStringProxyArchive(&local_a8);
  return;
}

// FindPin @ 14e1b1930

UOptimusNodePin * __thiscall UOptimusNode::FindPin(UOptimusNode *this,TStringView<wchar_t> *param_1)

{
  UOptimusNodePin *pUVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> local_28;
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  UOptimusNodePin::GetPinNamePathFromString(&local_28,&local_18);
  if (local_28.ArrayNum == 0) {
    pUVar1 = (UOptimusNodePin *)0x0;
  }
  else {
    pUVar1 = FindPinFromPath(this,&local_28);
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return pUVar1;
}

// FindPinFromPath @ 14e1b1990

UOptimusNodePin * __thiscall
UOptimusNode::FindPinFromPath(UOptimusNode *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  TMap<TArray<FName,TSizedDefaultAllocator<32>_>,UOptimusNodePin_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TArray<FName,TSizedDefaultAllocator<32>_>,UOptimusNodePin_*,0>_>
  *this_00;
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined8 *puVar9;
  UOptimusNodePin *pUVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res8 [8];
  TPairInitializer<TArray<FName,TSizedDefaultAllocator<32>_>_const_&,UOptimusNodePin_*_const_&>
  local_res18;
  TArray<FName,TSizedDefaultAllocator<32>_> *local_48;
  UOptimusNodePin ***local_40;
  
  this_00 = &this->CachedPinLookup;
  uVar6 = GetTypeHash<FName,TSizedDefaultAllocator<32>_>(param_1);
  iVar7 = TSet<TTuple<TArray<FName,TSizedDefaultAllocator<32>_>,UOptimusNodePin_*>,TDefaultMapHashableKeyFuncs<TArray<FName,TSizedDefaultAllocator<32>_>,UOptimusNodePin_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TArray<FName,TSizedDefaultAllocator<32>_>_>
                    ((TSet<TTuple<TArray<FName,TSizedDefaultAllocator<32>_>,UOptimusNodePin_*>,TDefaultMapHashableKeyFuncs<TArray<FName,TSizedDefaultAllocator<32>_>,UOptimusNodePin_*,0>,FDefaultSetAllocator>
                      *)this_00,uVar6,param_1);
  if (iVar7 != -1) {
    lVar8 = (longlong)iVar7 * 0x20 + *(longlong *)&this_00->field_0x0;
    puVar9 = (undefined8 *)(lVar8 + 0x10);
    if (lVar8 == 0) {
      puVar9 = (undefined8 *)0x0;
    }
    if (puVar9 != (undefined8 *)0x0) {
      return (UOptimusNodePin *)*puVar9;
    }
  }
  pFVar11 = (this->Pins).AllocatorInstance.Data;
  iVar7 = (this->Pins).ArrayNum;
  if ((iVar7 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pUVar10 = (UOptimusNodePin *)(*pcVar4)();
    return pUVar10;
  }
  pFVar12 = (param_1->AllocatorInstance).Data;
  iVar3 = param_1->ArrayNum;
  local_res18.Value = (UOptimusNodePin **)0x0;
  pFVar1 = pFVar12 + (longlong)iVar3 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar12 == pFVar1) break;
    if (iVar7 == 0) {
LAB_14e1b1a86:
      local_res18.Value = (UOptimusNodePin **)0x0;
      break;
    }
    pFVar2 = pFVar11 + (longlong)iVar7 * 8;
    while( true ) {
      if (pFVar11 == pFVar2) goto LAB_14e1b1a86;
      local_res18.Value = *(UOptimusNodePin ***)pFVar11;
      if (((UOptimusNodePin *)local_res18.Value)->_padding_ == *(longlong *)pFVar12) break;
      pFVar11 = pFVar11 + 8;
    }
    iVar7 = (((UOptimusNodePin *)local_res18.Value)->SubPins).ArrayNum;
    pFVar11 = (((UOptimusNodePin *)local_res18.Value)->SubPins).AllocatorInstance.Data;
    if ((iVar7 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pUVar10 = (UOptimusNodePin *)(*pcVar4)();
      return pUVar10;
    }
    pFVar12 = pFVar12 + 8;
  }
  local_40 = &local_res18.Value;
  local_48 = param_1;
  TSet<TTuple<TArray<FName,TSizedDefaultAllocator<32>_>,UOptimusNodePin_*>,TDefaultMapHashableKeyFuncs<TArray<FName,TSizedDefaultAllocator<32>_>,UOptimusNodePin_*,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<TArray<FName,TSizedDefaultAllocator<32>_>_const_&,UOptimusNodePin_*_const_&>_>
            ((TSet<TTuple<TArray<FName,TSizedDefaultAllocator<32>_>,UOptimusNodePin_*>,TDefaultMapHashableKeyFuncs<TArray<FName,TSizedDefaultAllocator<32>_>,UOptimusNodePin_*,0>,FDefaultSetAllocator>
              *)this_00,&local_res18,(bool *)&local_48);
  return (UOptimusNodePin *)local_res18.Value;
}

// FindPinFromProperty @ 14e1b1b40

UOptimusNodePin * __thiscall
UOptimusNode::FindPinFromProperty(UOptimusNode *this,FProperty *param_1,FProperty *param_2)

{
  UStruct *pUVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  UOptimusNodePin *pUVar5;
  UStruct *pUVar6;
  FFieldClass *pFVar7;
  FScriptContainerElement *pFVar8;
  FName local_48;
  FName local_40;
  FName local_38;
  TArray<FName,TSizedDefaultAllocator<32>_> local_30;
  
  pUVar5 = (UOptimusNodePin *)0x0;
  local_30.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_30.ArrayNum = 0;
  local_30.ArrayMax = 0;
  if ((param_1 == param_2) || (param_2 == (FProperty *)0x0)) {
    bVar4 = IsThisNotNull(param_1,"FField::GetFName");
    if (bVar4) {
      local_38 = (FName)param_1->_padding_;
    }
    else {
      local_38.ComparisonIndex.Value = 0;
      local_38.Number = 0;
    }
    if (((local_30.AllocatorInstance.Data <= &local_38) &&
        (&local_38 < (FName *)(local_30.AllocatorInstance.Data + (longlong)local_30.ArrayMax * 8)))
       && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar4)) {
      pcVar3 = (code *)swi(3);
      pUVar5 = (UOptimusNodePin *)(*pcVar3)();
      return pUVar5;
    }
    if (local_30.ArrayNum == local_30.ArrayMax) {
      local_30.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x408,&local_30.AllocatorInstance,&local_30.ArrayMax);
    }
    *(FName *)(local_30.AllocatorInstance.Data + (longlong)local_30.ArrayNum * 8) = local_38;
    local_30.ArrayNum = local_30.ArrayNum + 1;
  }
  else if ((param_1 != (FProperty *)0x0) &&
          ((*(uint *)(param_1->_padding_ + 0x18) >> 0x14 & 1) != 0)) {
    pUVar1 = (UStruct *)param_1[1]._padding_;
    do {
      bVar4 = IsThisNotNull(param_2,"FField::GetFName");
      if (bVar4) {
        local_48 = *(FName *)&param_2->_padding_;
      }
      else {
        local_48.ComparisonIndex.Value = 0;
        local_48.Number = 0;
      }
      if (((local_30.AllocatorInstance.Data <= &local_48) &&
          (&local_48 < (FName *)(local_30.AllocatorInstance.Data + (longlong)local_30.ArrayMax * 8))
          ) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pUVar5 = (UOptimusNodePin *)(*pcVar3)();
        return pUVar5;
      }
      if (local_30.ArrayNum == local_30.ArrayMax) {
        local_30.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,&local_30.AllocatorInstance,&local_30.ArrayMax);
      }
      *(FName *)(local_30.AllocatorInstance.Data + (longlong)local_30.ArrayNum * 8) = local_48;
      local_30.ArrayNum = local_30.ArrayNum + 1;
      pUVar6 = FField::GetOwnerStruct((FField *)param_2);
      if (pUVar6 != (UStruct *)0x0) {
        if (pUVar6 != pUVar1) {
          bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<3307391251921240417>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusNode.cpp"
                             ,0x161,"OwnerStruct == Struct");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            pUVar5 = (UOptimusNodePin *)(*pcVar3)();
            return pUVar5;
          }
          goto LAB_14e1b1edc;
        }
        bVar4 = IsThisNotNull(param_1,"FField::GetFName");
        if (bVar4) {
          local_40 = (FName)param_1->_padding_;
        }
        else {
          local_40.ComparisonIndex.Value = 0;
          local_40.Number = 0;
        }
        if (((local_30.AllocatorInstance.Data <= &local_40) &&
            (&local_40 <
             (FName *)(local_30.AllocatorInstance.Data + (longlong)local_30.ArrayMax * 8))) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          pUVar5 = (UOptimusNodePin *)(*pcVar3)();
          return pUVar5;
        }
        if (local_30.ArrayNum == local_30.ArrayMax) {
          local_30.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x408,&local_30.AllocatorInstance,&local_30.ArrayMax);
        }
        *(FName *)(local_30.AllocatorInstance.Data + (longlong)local_30.ArrayNum * 8) = local_40;
        local_30.ArrayNum = local_30.ArrayNum + 1;
        goto LAB_14e1b1dca;
      }
      pFVar7 = FProperty::StaticClass();
      bVar4 = FFieldVariant::IsA((FFieldVariant *)&param_2->_padding_,pFVar7);
    } while ((bVar4) &&
            (param_2 = (FProperty *)(((FFieldVariant *)&param_2->_padding_)->Container).Field,
            param_2 != (FProperty *)0x0));
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3307391251921240411>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusNode.cpp"
                       ,0x15b,"InSubProperty");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pUVar5 = (UOptimusNodePin *)(*pcVar3)();
      return pUVar5;
    }
LAB_14e1b1dca:
    if (0 < local_30.ArrayNum / 2) {
      pFVar8 = local_30.AllocatorInstance.Data + (longlong)(local_30.ArrayNum + -1) * 8;
      do {
        uVar2 = *(undefined8 *)(local_30.AllocatorInstance.Data + (longlong)pUVar5 * 8);
        *(undefined8 *)(local_30.AllocatorInstance.Data + (longlong)pUVar5 * 8) =
             *(undefined8 *)pFVar8;
        pUVar5 = (UOptimusNodePin *)((longlong)&pUVar5->_padding_ + 1);
        *(undefined8 *)pFVar8 = uVar2;
        pFVar8 = pFVar8 + -8;
      } while ((longlong)pUVar5 < (longlong)(local_30.ArrayNum / 2));
    }
  }
  pUVar5 = FindPinFromPath(this,&local_30);
LAB_14e1b1edc:
  if ((FName *)local_30.AllocatorInstance.Data != (FName *)0x0) {
    FMemory::Free(local_30.AllocatorInstance.Data);
  }
  return pUVar5;
}

// GetActionStack @ 14e1b78c0

UOptimusActionStack * __thiscall UOptimusNode::GetActionStack(UOptimusNode *this)

{
  int iVar1;
  longlong lVar2;
  UClass *pUVar3;
  longlong *plVar4;
  UOptimusDeformer *this_00;
  UOptimusActionStack *pUVar5;
  
  lVar2 = this->_padding_;
  if (lVar2 != 0) {
    pUVar3 = UOptimusNodeGraph::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      plVar4 = (longlong *)(**(code **)(*(longlong *)(lVar2 + 0x28) + 0x18))(lVar2 + 0x28);
      if (plVar4 != (longlong *)0x0) {
        this_00 = (UOptimusDeformer *)(**(code **)(*plVar4 + 8))(plVar4);
        if (this_00 != (UOptimusDeformer *)0x0) {
          pUVar3 = UOptimusDeformer::StaticClass();
          iVar1 = (int)pUVar3->_padding_;
          if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
              &pUVar3->_padding_)) {
            pUVar5 = UOptimusDeformer::GetActionStack(this_00);
            return pUVar5;
          }
        }
      }
    }
  }
  return (UOptimusActionStack *)0x0;
}

// GetAllNodeClasses @ 14e1b8d30

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TArray<UClass_*,TSizedDefaultAllocator<32>_> * __cdecl
UOptimusNode::GetAllNodeClasses
          (TArray<UClass_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  EInternalObjectFlags EVar4;
  uint uVar5;
  int iVar6;
  UClass *pUVar7;
  TArray<UClass_*,TSizedDefaultAllocator<32>_> *pTVar8;
  UPackage *pUVar9;
  UPackage *pUVar10;
  longlong lVar11;
  FUObjectCppClassStaticFunctions local_res8;
  UObjectBaseUtility *local_48;
  TObjectIterator<UClass> local_40;
  
  local_40.Index = 0xffffffff;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_40.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_40.ObjectArray.ArrayNum = 0;
  local_40.ObjectArray.ArrayMax = 0;
  EVar4 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar7 = Z_Construct_UClass_UClass_NoRegister();
  GetObjectsOfClass(pUVar7,&local_40.ObjectArray,true,RF_ClassDefaultObject,
                    EVar4 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  TObjectIterator<UClass>::Advance(&local_40);
  do {
    lVar11 = (longlong)local_40.Index;
    if ((local_40.Index < 0) || (local_40.ObjectArray.ArrayNum <= local_40.Index)) {
      if (local_40.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.ObjectArray.AllocatorInstance.Data);
      }
      return __return_storage_ptr__;
    }
    uVar5 = 0;
    if (local_40.Index < local_40.ObjectArray.ArrayNum) {
      uVar5 = (uint)~local_40.Index >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar8 = (TArray<UClass_*,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar8;
    }
    local_48 = *(UObjectBaseUtility **)(local_40.ObjectArray.AllocatorInstance.Data + lVar11 * 8);
    if ((*(uint *)&local_48[5].field_0xc & 0x3000001) == 0) {
      if (Z_Registration_Info_UClass_UOptimusNode.InnerSingleton == (UClass *)0x0) {
        local_res8.AddReferencedObjects = UObject::AddReferencedObjects;
        GetPrivateStaticClassBody
                  (L"/Script/OptimusCore",L"OptimusNode",
                   &Z_Registration_Info_UClass_UOptimusNode.InnerSingleton,
                   StaticRegisterNativesUOptimusNode,0x108,8,CLASS_Intrinsic|CLASS_Abstract,
                   CASTCLASS_None,L"Engine",InternalConstructor<UOptimusNode>,
                   InternalVTableHelperCtorCaller<UOptimusNode>,&local_res8,UObject::StaticClass,
                   UObject::StaticClass);
        if (Z_Registration_Info_UClass_UOptimusNode.InnerSingleton == (UClass *)0x0)
        goto LAB_14e1b8fb5;
      }
      iVar6 = (int)(Z_Registration_Info_UClass_UOptimusNode.InnerSingleton)->_padding_;
      if ((*(int *)&local_48[1].field_0x10 < iVar6) ||
         ((longlong *)*(undefined1 **)(*(longlong *)&local_48[1].field_0x8 + (longlong)iVar6 * 8) !=
          &(Z_Registration_Info_UClass_UOptimusNode.InnerSingleton)->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        pUVar9 = UObjectBaseUtility::GetPackage(local_48);
        pUVar10 = GetTransientPackage();
        if (pUVar9 != pUVar10) {
          pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
          if (((pFVar1 <= (FScriptContainerElement *)&local_48) &&
              ((FScriptContainerElement *)&local_48 <
               pFVar1 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar3)) {
            pcVar2 = (code *)swi(3);
            pTVar8 = (TArray<UClass_*,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
            return pTVar8;
          }
          iVar6 = __return_storage_ptr__->ArrayNum;
          if (iVar6 == __return_storage_ptr__->ArrayMax) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&__return_storage_ptr__->AllocatorInstance,
                               &__return_storage_ptr__->ArrayMax);
          }
          __return_storage_ptr__->ArrayNum = iVar6 + 1;
          *(UObjectBaseUtility **)
           ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_48;
        }
      }
    }
LAB_14e1b8fb5:
    TObjectIterator<UClass>::Advance(&local_40);
  } while( true );
}

// GetAvailablePinNameStable @ 14e1bb6c0

FName __cdecl UOptimusNode::GetAvailablePinNameStable(UObject *param_1,FName param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  void *_Src;
  TObjectPtr<UOptimusNodePin> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UClass *pUVar7;
  FName FVar8;
  int iVar9;
  ForAnyElementType FVar10;
  TArray<FName,TSizedDefaultAllocator<32>_> *in_R8;
  undefined1 local_res8 [8];
  undefined8 local_58;
  ForAnyElementType local_50;
  undefined8 local_48;
  ForAnyElementType local_40;
  int local_38 [4];
  
  iVar9 = 0;
  local_40.Data = (FScriptContainerElement *)0x0;
  local_38[0] = 0;
  local_38[1] = 0;
  if (param_2 != (FName)0x0) {
    pUVar7 = StaticClass();
    iVar2 = (int)pUVar7->_padding_;
    if ((iVar2 <= *(int *)(*(longlong *)((longlong)param_2 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)((longlong)param_2 + 0x10) + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar7->_padding_)) {
      _Src = *(void **)((longlong)param_2 + 0x50);
      iVar2 = *(int *)((longlong)param_2 + 0x58);
      if (iVar2 < 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          FVar8 = (FName)(*pcVar4)();
          return FVar8;
        }
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(InCount >= 0) && ((sizeof(InCount) < sizeof(SizeType)) || (InCount <= static_cast<decltype(InCount)>(TNumericLimits<SizeType>::Max())))"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x9a9,L"Invalid range size: %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          FVar8 = (FName)(*pcVar4)();
          return FVar8;
        }
      }
      else if (iVar2 == 0) goto LAB_14e1bb8a2;
      iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,iVar2,&local_40,local_38,local_38 + 1);
      memcpy(local_40.Data + (longlong)iVar6 * 8,_Src,(longlong)iVar2 << 3);
      goto LAB_14e1bb8a2;
    }
  }
  if (param_2 != (FName)0x0) {
    pUVar7 = UOptimusNodePin::StaticClass();
    iVar2 = (int)pUVar7->_padding_;
    if ((iVar2 <= *(int *)(*(longlong *)((longlong)param_2 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)((longlong)param_2 + 0x10) + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar7->_padding_)) {
      pTVar3 = *(TObjectPtr<UOptimusNodePin> **)((longlong)param_2 + 0xa0);
      iVar2 = *(int *)((longlong)param_2 + 0xa8);
      if (iVar2 < 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          FVar8 = (FName)(*pcVar4)();
          return FVar8;
        }
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(InCount >= 0) && ((sizeof(InCount) < sizeof(SizeType)) || (InCount <= static_cast<decltype(InCount)>(TNumericLimits<SizeType>::Max())))"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x9a9,L"Invalid range size: %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          FVar8 = (FName)(*pcVar4)();
          return FVar8;
        }
      }
      else if (iVar2 == 0) goto LAB_14e1bb8a2;
      iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,iVar2,&local_40,local_38,local_38 + 1);
      ConstructItems<UOptimusNodePin_const_*,TObjectPtr<UOptimusNodePin>,int>
                (local_40.Data + (longlong)iVar6 * 8,pTVar3,iVar2);
    }
  }
LAB_14e1bb8a2:
  iVar2 = local_38[0];
  local_50.Data = (FScriptContainerElement *)0x0;
  local_48 = 0;
  pFVar1 = local_40.Data + (longlong)local_38[0] * 8;
  FVar10.Data = local_40.Data;
  while( true ) {
    if (local_38[0] != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UOptimusNodePin_const_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
      iVar9 = (int)local_48;
    }
    if (FVar10.Data == pFVar1) break;
    local_58 = *(undefined8 *)(*(longlong *)FVar10.Data + 0x18);
    iVar6 = iVar9;
    if ((local_50.Data <= (FScriptContainerElement *)&local_58) &&
       ((FScriptContainerElement *)&local_58 < local_50.Data + (longlong)local_48._4_4_ * 8)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        FVar8 = (FName)(*pcVar4)();
        return FVar8;
      }
      iVar6 = (int)local_48;
    }
    if (iVar6 == local_48._4_4_) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&local_50,(int *)((longlong)&local_48 + 4));
    }
    iVar9 = iVar6 + 1;
    local_48 = CONCAT44(local_48._4_4_,iVar9);
    FVar10.Data = FVar10.Data + 8;
    *(undefined8 *)(local_50.Data + (longlong)iVar6 * 8) = local_58;
  }
  Optimus::GenerateUniqueNameFromExistingNames((FName)param_1,in_R8);
  if (local_50.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data);
  }
  if (local_40.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data);
  }
  return (FName)param_1;
}

// GetDisplayName @ 14e1c41e0

FText * __thiscall UOptimusNode::GetDisplayName(UOptimusNode *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  bool bVar2;
  FString *pFVar3;
  int iVar4;
  FName local_res8;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  bVar2 = FText::IsEmpty(&this->DisplayName);
  if (bVar2) {
    local_res8 = *(FName *)(this->_padding_ + 0x18);
    ::FName::ToString(&local_res8,&local_28);
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    ::FString::FString(&local_18,"_");
    bVar2 = ::FString::Split(&local_28,&local_18,&local_38,&local_48);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (!bVar2) {
      iVar4 = local_28.Data.ArrayNum + -1;
      if (local_28.Data.ArrayNum == 0) {
        iVar4 = 0;
      }
      ::FString::AssignRange(&local_48,(wchar_t *)local_28.Data.AllocatorInstance.Data,iVar4);
    }
    pFVar3 = ::FName::NameToDisplayString(&local_18,&local_48,false);
    FText::FromString(__return_storage_ptr__,pFVar3);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
    pIVar1 = (this->DisplayName).TextData.Reference;
    (__return_storage_ptr__->TextData).Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,&local_res8);
    }
    __return_storage_ptr__->Flags = (this->DisplayName).Flags;
  }
  return __return_storage_ptr__;
}

// GetNodeCategory @ 14e1cac60

FName __thiscall UOptimusNode::GetNodeCategory(UOptimusNode *this)

{
  FName in_RDX;
  
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Public\\OptimusNode.h"
             ,0x38,L"Pure virtual not implemented (%s)");
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetNodeName @ 14e1cafe0

FName __thiscall UOptimusNode::GetNodeName(UOptimusNode *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = *(undefined8 *)(this->_padding_ + 0x18);
  return in_RDX;
}

// GetNodePath @ 14e1cb0f0

FString * __thiscall UOptimusNode::GetNodePath(UOptimusNode *this,FString *__return_storage_ptr__)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  ForAnyElementType _Src;
  bool bVar4;
  UClass *pUVar5;
  FString *pFVar6;
  FName local_res8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  void *local_28 [2];
  
  lVar2 = this->_padding_;
  if (lVar2 == 0) {
LAB_14e1cb1a6:
    ::FString::FString(&local_98,L"<Unknown>");
  }
  else {
    pUVar5 = UOptimusNodeGraph::StaticClass();
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar5->_padding_)) goto LAB_14e1cb1a6;
    ::FString::FString(&local_98,L"<Unknown>");
    pFVar6 = (FString *)(**(code **)(*(longlong *)(lVar2 + 0x28) + 0x20))(lVar2 + 0x28,local_28);
    if (&local_98 != pFVar6) {
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      local_98.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
      (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_98.Data.ArrayNum = (pFVar6->Data).ArrayNum;
      local_98.Data.ArrayMax = (pFVar6->Data).ArrayMax;
      (pFVar6->Data).ArrayNum = 0;
      (pFVar6->Data).ArrayMax = 0;
    }
    if (local_28[0] != (void *)0x0) {
      FMemory::Free(local_28[0]);
    }
  }
  local_res8 = (FName)this->_padding_;
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  ::FName::ToString(&local_res8,&local_58);
  _Src.Data = local_58.Data.AllocatorInstance.Data;
  if (local_58.Data.ArrayNum < 2) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7701470802381635792>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusNodeGraph.cpp"
                       ,0xd0,"!NodeName.IsEmpty()");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar3)();
      return pFVar6;
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
    goto LAB_14e1cb342;
  }
  local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.Data.ArrayNum = local_58.Data.ArrayNum;
  if (local_58.Data.ArrayNum == 0) {
    local_a8.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_58.Data.ArrayNum,0,(ForAnyElementType *)&local_a8,local_58.Data.ArrayNum,
               &local_a8.Data.ArrayMax);
    memcpy(local_a8.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_58.Data.ArrayNum * 2);
  }
  if (1 < local_98.Data.ArrayNum) {
    ::FString::ConcatFC(&local_48,&local_98,L"/");
    ::FString::ConcatFF(&local_88,&local_48,&local_a8);
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    local_a8.Data.AllocatorInstance.Data = local_88.Data.AllocatorInstance.Data;
    local_a8.Data.ArrayNum = local_88.Data.ArrayNum;
    local_a8.Data.ArrayMax = local_88.Data.ArrayMax;
    local_88.Data.ArrayNum = 0;
    local_88.Data.ArrayMax = 0;
    local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  if (local_68.Data.ArrayNum < 2) {
LAB_14e1cb32c:
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  else {
    ::FString::ConcatFC(&local_38,&local_a8,L".");
    ::FString::ConcatFF(&local_78,&local_38,&local_68);
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    local_a8.Data.AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data;
    local_a8.Data.ArrayNum = local_78.Data.ArrayNum;
    local_a8.Data.ArrayMax = local_78.Data.ArrayMax;
    local_78.Data.ArrayNum = 0;
    local_78.Data.ArrayMax = 0;
    local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_38.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) goto LAB_14e1cb32c;
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = local_a8.Data.AllocatorInstance.Data;
  (__return_storage_ptr__->Data).ArrayNum = local_a8.Data.ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = local_a8.Data.ArrayMax;
LAB_14e1cb342:
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetOwningGraph @ 14e1cc060

UOptimusNodeGraph * __thiscall UOptimusNode::GetOwningGraph(UOptimusNode *this)

{
  int iVar1;
  UOptimusNodeGraph *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (UOptimusNodeGraph *)this->_padding_;
  if (pUVar2 != (UOptimusNodeGraph *)0x0) {
    pUVar3 = UOptimusNodeGraph::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UOptimusNodeGraph *)0x0;
}

// GetPinByName @ 14e1cc800

UOptimusNodePin * __thiscall UOptimusNode::GetPinByName(UOptimusNode *this,FName *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UOptimusNodePin *pUVar3;
  ForAnyElementType _Src;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  FName local_res8;
  ForAnyElementType local_68;
  int local_60;
  int local_5c;
  FString local_58;
  FScriptContainerElement *local_48;
  int iStack_40;
  undefined4 uStack_3c;
  TStringView<wchar_t> local_38;
  
  pFVar5 = (this->Pins).AllocatorInstance.Data;
  iVar2 = (this->Pins).ArrayNum;
  pFVar1 = pFVar5 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Pins).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UOptimusNodePin>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_res8);
    }
    if (pFVar5 == pFVar1) {
      return (UOptimusNodePin *)0x0;
    }
    pUVar3 = *(UOptimusNodePin **)pFVar5;
    local_res8 = (FName)pUVar3->_padding_;
    ::FName::ToString(&local_res8,&local_58);
    _Src.Data = local_58.Data.AllocatorInstance.Data;
    local_68.Data = (FScriptContainerElement *)0x0;
    iVar6 = local_58.Data.ArrayNum;
    local_60 = iVar6;
    if (iVar6 == 0) {
      local_5c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar6,0,&local_68,iVar6,&local_5c);
      memcpy(local_68.Data,_Src.Data,(longlong)iVar6 * 2);
    }
    iStack_40 = local_60 + -1;
    if (local_60 == 0) {
      iStack_40 = 0;
    }
    local_38._12_4_ = uStack_3c;
    local_38.Size = iStack_40;
    local_48 = local_68.Data;
    local_38.DataPtr = (wchar_t *)local_68.Data;
    bVar4 = ::FName::Equals(*param_1,&local_38);
    if (local_68.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (bVar4) break;
    pFVar5 = pFVar5 + 8;
  }
  return pUVar3;
}

// GetPinExpanded @ 14e1d3410

bool __thiscall UOptimusNode::GetPinExpanded(UOptimusNode *this,UOptimusNodePin *param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  FName FVar5;
  ForElementType<FSetElementId> FVar6;
  
  FVar5 = UOptimusNodePin::GetUniqueName(param_1);
  lVar1 = *(longlong *)FVar5;
  uVar3 = ::GetTypeHash((FNameEntryId)(uint)lVar1);
  if (*(int *)&(this->ExpandedPins).Elements.field_0x8 !=
      *(int *)&(this->ExpandedPins).Elements.field_0x34) {
    FVar6 = (this->ExpandedPins).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->ExpandedPins).Hash;
    }
    iVar4 = *(int *)((longlong)FVar6 +
                    (ulonglong)
                    ((this->ExpandedPins).HashSize - 1U & (int)((ulonglong)lVar1 >> 0x20) + uVar3) *
                    4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)&(this->ExpandedPins).Elements;
      do {
        if (*(longlong *)(lVar2 + (longlong)iVar4 * 0x10) == lVar1) goto LAB_14e1d349a;
        iVar4 = *(int *)(lVar2 + 8 + (longlong)iVar4 * 0x10);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_14e1d349a:
  return iVar4 != -1;
}

// GetPins @ 14e1d3e80

TArrayView<UOptimusNodePin_*_const,int> * __thiscall
UOptimusNode::GetPins
          (UOptimusNode *this,TArrayView<UOptimusNodePin_*_const,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<UOptimusNodePin_*_const,int> *pTVar4;
  
  iVar1 = (this->Pins).ArrayNum;
  __return_storage_ptr__->DataPtr = (UOptimusNodePin **)(this->Pins).AllocatorInstance.Data;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<UOptimusNodePin_*_const,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetPinsByDirection @ 14e1d3ef0

TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> * __thiscall
UOptimusNode::GetPinsByDirection
          (UOptimusNode *this,
          TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          EOptimusNodePinDirection param_1,bool param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> *pTVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  FScriptContainerElement *local_res10;
  EOptimusNodePinDirection local_res18;
  char local_res20;
  UOptimusNodePin *local_68;
  TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> local_60 [2];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &__return_storage_ptr__->ArrayNum;
  *piVar1 = 0;
  piVar2 = &__return_storage_ptr__->ArrayMax;
  *piVar2 = 0;
  pFVar11 = (this->Pins).AllocatorInstance.Data;
  iVar3 = (this->Pins).ArrayNum;
  pFVar10 = pFVar11 + (longlong)iVar3 * 8;
  local_res10 = pFVar10;
  local_res18 = param_1;
  local_res20 = param_2;
  do {
    while( true ) {
      if ((this->Pins).ArrayNum != iVar3) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TObjectPtr<UOptimusNodePin>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
        param_1 = local_res18;
      }
      if (pFVar11 == pFVar10) {
        return __return_storage_ptr__;
      }
      local_68 = *(UOptimusNodePin **)pFVar11;
      if (local_68->Direction == param_1) break;
LAB_14e1d4030:
      pFVar11 = pFVar11 + 8;
    }
    if (local_res20 != '\0') {
      pTVar9 = UOptimusNodePin::GetSubPinsRecursively(local_68,local_60,true);
      if ((__return_storage_ptr__ == pTVar9) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x986,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        pTVar9 = (TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar9;
      }
      iVar8 = pTVar9->ArrayNum;
      if (iVar8 != 0) {
        iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (8,8,iVar8,&__return_storage_ptr__->AllocatorInstance,piVar1,piVar2);
        memmove((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 8,
                (pTVar9->AllocatorInstance).Data,(longlong)iVar8 << 3);
        pTVar9->ArrayNum = 0;
      }
      pFVar10 = local_res10;
      param_1 = local_res18;
      if (local_60[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60[0].AllocatorInstance.Data);
        pFVar10 = local_res10;
        param_1 = local_res18;
      }
      goto LAB_14e1d4030;
    }
    pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
    if (((pFVar4 <= (FScriptContainerElement *)&local_68) &&
        ((FScriptContainerElement *)&local_68 < pFVar4 + (longlong)*piVar2 * 8)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar9;
    }
    iVar8 = *piVar1;
    if (iVar8 == *piVar2) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&__return_storage_ptr__->AllocatorInstance,piVar2);
    }
    pFVar11 = pFVar11 + 8;
    *piVar1 = iVar8 + 1;
    *(UOptimusNodePin **)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 8) =
         local_68;
    param_1 = local_res18;
  } while( true );
}

// GetPrivateStaticClass @ 14e1d68b0

UClass * __cdecl UOptimusNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusNode",
               &Z_Registration_Info_UClass_UOptimusNode.InnerSingleton,
               StaticRegisterNativesUOptimusNode,0x108,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusNode>,
               InternalVTableHelperCtorCaller<UOptimusNode>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusNode.InnerSingleton;
}

// GetTooltipText @ 14e1e6f90

FText * __thiscall UOptimusNode::GetTooltipText(UOptimusNode *this,FText *__return_storage_ptr__)

{
  FText::FText(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ImportState @ 14e1ea1a0

void __thiscall UOptimusNode::ImportState(UOptimusNode *this,FArchive *param_1)

{
  FObjectAndNameAsStringProxyArchive local_a8;
  
  FObjectAndNameAsStringProxyArchive::FObjectAndNameAsStringProxyArchive(&local_a8,param_1,false);
  UObject::SerializeScriptProperties((UObject *)this,(FArchive *)&local_a8);
  FObjectAndNameAsStringProxyArchive::~FObjectAndNameAsStringProxyArchive(&local_a8);
  return;
}

// InitializePinsDisplayName @ 14e1ed2b0

void __thiscall UOptimusNode::InitializePinsDisplayName(UOptimusNode *this)

{
  return;
}

// InitializeTransientData @ 14e1ed8e0

void __thiscall UOptimusNode::InitializeTransientData(UOptimusNode *this)

{
  return;
}

// InsertPinIntoHierarchy @ 14e1ee2d0

void __thiscall
UOptimusNode::InsertPinIntoHierarchy
          (UOptimusNode *this,UOptimusNodePin *param_1,UOptimusNodePin *param_2,
          UOptimusNodePin *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  UOptimusNode *pUVar4;
  UClass *pUVar5;
  TArray<TObjectPtr<UOptimusNodePin>,TSizedDefaultAllocator<32>_> *this_00;
  TObjectPtr<UOptimusNodePin>_u_0 *pTVar6;
  int iVar7;
  UOptimusNodeGraph *this_01;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  TObjectPtr<UOptimusNodePin>_u_0 local_res8;
  TObjectPtr<UOptimusNodePin>_u_0 local_res18 [2];
  
  if (param_2 == (UOptimusNodePin *)0x0) {
    iVar7 = (this->Pins).ArrayNum;
    if (param_3 != (UOptimusNodePin *)0x0) {
      pFVar1 = (this->Pins).AllocatorInstance.Data;
      for (pFVar9 = pFVar1; pFVar9 != pFVar1 + (longlong)(this->Pins).ArrayNum * 8;
          pFVar9 = pFVar9 + 8) {
        if ((*(UOptimusNodePin **)pFVar9 != (UOptimusNodePin *)0x0) &&
           (*(UOptimusNodePin **)pFVar9 == param_3)) {
          pFVar8 = pFVar1;
          if ((int)((longlong)pFVar9 - (longlong)pFVar1 >> 3) != -1) goto LAB_14e1ee4e0;
          break;
        }
      }
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3307391251921240770>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusNode.cpp"
                         ,0x2c2,"Pins.IndexOfByKey(InInsertBeforePin) != INDEX_NONE");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    goto LAB_14e1ee433;
  }
  iVar7 = (param_2->SubPins).ArrayNum;
  if (param_3 != (UOptimusNodePin *)0x0) {
    pFVar1 = (param_2->SubPins).AllocatorInstance.Data;
    for (pFVar9 = pFVar1; pFVar9 != pFVar1 + (longlong)(param_2->SubPins).ArrayNum * 8;
        pFVar9 = pFVar9 + 8) {
      if ((*(UOptimusNodePin **)pFVar9 != (UOptimusNodePin *)0x0) &&
         (*(UOptimusNodePin **)pFVar9 == param_3)) {
        pFVar8 = pFVar1;
        if ((int)((longlong)pFVar9 - (longlong)pFVar1 >> 3) != -1) goto LAB_14e1ee3a0;
        break;
      }
    }
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7986583113880829393>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusNodePin.cpp"
                       ,0x22f,"SubPins.IndexOfByKey(InBeforePin) != INDEX_NONE");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  goto LAB_14e1ee35d;
  while (pFVar8 = pFVar8 + 8, pFVar8 != pFVar1 + (longlong)(this->Pins).ArrayNum * 8) {
LAB_14e1ee4e0:
    if ((*(UOptimusNodePin **)pFVar8 != (UOptimusNodePin *)0x0) &&
       (*(UOptimusNodePin **)pFVar8 == param_3)) {
      iVar7 = (int)((longlong)pFVar8 - (longlong)pFVar1 >> 3);
      goto LAB_14e1ee433;
    }
  }
  iVar7 = -1;
LAB_14e1ee433:
  local_res18[0].DebugPtr = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UOptimusNodePin *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pTVar6 = local_res18;
  this_00 = &this->Pins;
  goto LAB_14e1ee457;
  while (pFVar8 = pFVar8 + 8, pFVar8 != pFVar1 + (longlong)(param_2->SubPins).ArrayNum * 8) {
LAB_14e1ee3a0:
    if ((*(UOptimusNodePin **)pFVar8 != (UOptimusNodePin *)0x0) &&
       (*(UOptimusNodePin **)pFVar8 == param_3)) {
      iVar7 = (int)((longlong)pFVar8 - (longlong)pFVar1 >> 3);
      goto LAB_14e1ee35d;
    }
  }
  iVar7 = -1;
LAB_14e1ee35d:
  local_res8.DebugPtr = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UOptimusNodePin *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pTVar6 = &local_res8;
  this_00 = &param_2->SubPins;
LAB_14e1ee457:
  TArray<TObjectPtr<UOptimusNodePin>,TSizedDefaultAllocator<32>_>::Insert
            (this_00,(TObjectPtr<UOptimusNodePin> *)&pTVar6->ObjectPtr,iVar7);
  if ((this->bConstructingNode != false) || (this->bSendNotifications == false)) {
    return;
  }
  pUVar4 = UOptimusNodePin::GetOwningNode(param_1);
  this_01 = (UOptimusNodeGraph *)pUVar4->_padding_;
  if (this_01 != (UOptimusNodeGraph *)0x0) {
    pUVar5 = UOptimusNodeGraph::StaticClass();
    iVar7 = (int)pUVar5->_padding_;
    if ((iVar7 <= *(int *)(this_01->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar7 * 8)
        == &pUVar5->_padding_)) goto LAB_14e1ee4a9;
  }
  this_01 = (UOptimusNodeGraph *)0x0;
LAB_14e1ee4a9:
  UOptimusNodeGraph::Notify(this_01,PinAdded,(UObject *)param_1);
  return;
}

// MovePin @ 14e1f2120

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UOptimusNode::MovePin(UOptimusNode *this,UOptimusNodePin *param_1,UOptimusNodePin *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  UOptimusNodePin *pUVar7;
  UOptimusNodePin **ppUVar8;
  UOptimusActionStack *this_00;
  TReferenceControllerBase<1> *pTVar9;
  UOptimusNodePin *pUVar10;
  TReferenceControllerBase<1> *pTVar11;
  TSharedPtr<FOptimusAction,1> local_48;
  TArrayView<UOptimusNodePin_*_const,int> local_38;
  FString local_28;
  
  if ((param_1 != (UOptimusNodePin *)0x0) && (param_1 != param_2)) {
    pTVar11 = (TReferenceControllerBase<1> *)0x0;
    pUVar7 = UOptimusNodePin::GetParentPin(param_1);
    if (param_2 != (UOptimusNodePin *)0x0) {
      pUVar10 = UOptimusNodePin::GetParentPin(param_2);
      if (pUVar10 != pUVar7) {
        if ((byte)LogOptimusCore._0_1_ < 3) {
          return false;
        }
        UOptimusNodePin::GetPinPath(param_1,&local_28);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOptimusCore);
        if (local_28.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return false;
        }
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
        return false;
      }
      goto LAB_14e1f21c2;
    }
    if (pUVar7 == (UOptimusNodePin *)0x0) {
      local_38.DataPtr = (UOptimusNodePin **)(this->Pins).AllocatorInstance.Data;
      iVar1 = (this->Pins).ArrayNum;
      if ((iVar1 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      local_38.ArrayNum = iVar1;
      ppUVar8 = TArrayView<UOptimusNodePin_*_const,int>::Last(&local_38,0);
      pUVar7 = *ppUVar8;
    }
    else {
      pUVar7 = UOptimusNodePin::GetParentPin(param_1);
      if (pUVar7 == (UOptimusNodePin *)0x0) goto LAB_14e1f21c2;
      pUVar7 = UOptimusNodePin::GetParentPin(param_1);
      iVar1 = (pUVar7->SubPins).ArrayNum;
      pFVar2 = (pUVar7->SubPins).AllocatorInstance.Data;
      if ((iVar1 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      uVar6 = 0;
      if ((int)(iVar1 - 1U) < iVar1) {
        uVar6 = ~(iVar1 - 1U) >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      pUVar7 = *(UOptimusNodePin **)(pFVar2 + (longlong)iVar1 * 8 + -8);
      if (pUVar7 == (UOptimusNodePin *)0x0) goto LAB_14e1f21c2;
    }
    if (pUVar7 != param_1) {
LAB_14e1f21c2:
      this_00 = GetActionStack(this);
      pTVar9 = ::operator_new(0x58);
      if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
        local_48.Object = ___xmm_00000000000000000000000000000010;
        local_48.SharedReferenceCount.ReferenceController = _UNK_150651568;
      }
      else {
        pTVar9->SharedReferenceCount = (atomic<int>)0x1;
        pTVar9->WeakReferenceCount = (atomic<int>)0x1;
        pTVar9->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_UFOptimusNodeAction_MovePin___00_SharedPointerInternals__6B_
        ;
        FOptimusNodeAction_MovePin::FOptimusNodeAction_MovePin
                  ((FOptimusNodeAction_MovePin *)(pTVar9 + 1),param_1,param_2);
        local_48.Object = (FOptimusAction *)(pTVar9 + 1);
        if ((local_48.Object == (FOptimusAction *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("InObject != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x246,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        LOCK();
        pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
        UNLOCK();
        pTVar11 = pTVar9;
        local_48.SharedReferenceCount.ReferenceController = pTVar9;
      }
      bVar4 = UOptimusActionStack::RunAction(this_00,&local_48);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
      return bVar4;
    }
  }
  return false;
}

// MovePinDirect @ 14e1f23c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UOptimusNode::MovePinDirect(UOptimusNode *this,UOptimusNodePin *param_1,UOptimusNodePin *param_2)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined1 uVar4;
  int iVar5;
  UClass *pUVar6;
  UOptimusNode *pUVar7;
  FScriptContainerElement *pFVar8;
  UOptimusNodeGraph *this_00;
  TArray<TObjectPtr<UOptimusNodePin>,TSizedDefaultAllocator<32>_> *this_01;
  bool bVar9;
  TObjectPtr<UOptimusNodePin>_u_0 local_res10;
  UOptimusNodePin *local_18 [2];
  
  lVar1 = param_1->_padding_;
  if (lVar1 == 0) {
LAB_14e1f2412:
    this_01 = &this->Pins;
  }
  else {
    pUVar6 = UOptimusNodePin::StaticClass();
    iVar5 = (int)pUVar6->_padding_;
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x38) < iVar5) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)iVar5 * 8) !=
        &pUVar6->_padding_)) goto LAB_14e1f2412;
    this_01 = (TArray<TObjectPtr<UOptimusNodePin>,TSizedDefaultAllocator<32>_> *)(lVar1 + 0xa0);
  }
  pFVar2 = (this_01->AllocatorInstance).Data;
  for (pFVar8 = pFVar2; pFVar8 != pFVar2 + (longlong)this_01->ArrayNum * 8; pFVar8 = pFVar8 + 8) {
    if (*(UOptimusNodePin **)pFVar8 == (UOptimusNodePin *)0x0) {
      bVar9 = param_1 == (UOptimusNodePin *)0x0;
    }
    else {
      bVar9 = *(UOptimusNodePin **)pFVar8 == param_1;
    }
    if (bVar9) {
      iVar5 = (int)((longlong)pFVar8 - (longlong)pFVar2 >> 3);
      goto LAB_14e1f2455;
    }
  }
  iVar5 = -1;
LAB_14e1f2455:
  TArray<TObjectPtr<UOptimusNodePin>,TSizedDefaultAllocator<32>_>::RemoveAt(this_01,iVar5,Default);
  if (param_2 == (UOptimusNodePin *)0x0) {
    local_18[0] = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    pFVar2 = (this_01->AllocatorInstance).Data;
    if (((pFVar2 <= (FScriptContainerElement *)local_18) &&
        ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)this_01->ArrayMax * 8)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar3 = (code *)swi(3);
      uVar4 = (*pcVar3)();
      return (bool)uVar4;
    }
    iVar5 = this_01->ArrayNum;
    if (iVar5 == this_01->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&this_01->AllocatorInstance,&this_01->ArrayMax);
    }
    this_01->ArrayNum = iVar5 + 1;
    *(UOptimusNodePin **)((this_01->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_18[0];
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_18[0] != (UOptimusNodePin *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_18[0]);
    }
  }
  else {
    pFVar2 = (this_01->AllocatorInstance).Data;
    for (pFVar8 = pFVar2; pFVar8 != pFVar2 + (longlong)this_01->ArrayNum * 8; pFVar8 = pFVar8 + 8) {
      if ((*(UOptimusNodePin **)pFVar8 != (UOptimusNodePin *)0x0) &&
         (*(UOptimusNodePin **)pFVar8 == param_2)) {
        iVar5 = (int)((longlong)pFVar8 - (longlong)pFVar2 >> 3);
        goto LAB_14e1f2498;
      }
    }
    iVar5 = -1;
LAB_14e1f2498:
    local_res10.DebugPtr = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    TArray<TObjectPtr<UOptimusNodePin>,TSizedDefaultAllocator<32>_>::Insert
              (this_01,(TObjectPtr<UOptimusNodePin> *)&local_res10.ObjectPtr,iVar5);
  }
  pUVar7 = UOptimusNodePin::GetOwningNode(param_1);
  this_00 = (UOptimusNodeGraph *)pUVar7->_padding_;
  if (this_00 != (UOptimusNodeGraph *)0x0) {
    pUVar6 = UOptimusNodeGraph::StaticClass();
    iVar5 = (int)pUVar6->_padding_;
    if ((iVar5 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar5 * 8)
        == &pUVar6->_padding_)) goto LAB_14e1f25d2;
  }
  this_00 = (UOptimusNodeGraph *)0x0;
LAB_14e1f25d2:
  UOptimusNodeGraph::Notify(this_00,PinMoved,(UObject *)param_1);
  return true;
}

// MovePinToGroupPinDirect @ 14e1f33a0

bool __thiscall
UOptimusNode::MovePinToGroupPinDirect
          (UOptimusNode *this,UOptimusNodePin *param_1,UOptimusNodePin *param_2)

{
  longlong lVar1;
  UClass *pUVar2;
  UOptimusNode *pUVar3;
  TArray<TObjectPtr<UOptimusNodePin>,TSizedDefaultAllocator<32>_> *this_00;
  TArray<TObjectPtr<UOptimusNodePin>,TSizedDefaultAllocator<32>_> *this_01;
  UOptimusNodeGraph *this_02;
  int iVar4;
  TObjectPtr<UOptimusNodePin>_u_0 local_res8;
  
  lVar1 = param_1->_padding_;
  if (lVar1 == 0) {
LAB_14e1f33f8:
    this_01 = &this->Pins;
  }
  else {
    pUVar2 = UOptimusNodePin::StaticClass();
    iVar4 = (int)pUVar2->_padding_;
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x38) < iVar4) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)iVar4 * 8) !=
        &pUVar2->_padding_)) goto LAB_14e1f33f8;
    this_01 = (TArray<TObjectPtr<UOptimusNodePin>,TSizedDefaultAllocator<32>_> *)(lVar1 + 0xa0);
  }
  this_00 = &this->Pins;
  local_res8.DebugPtr = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  TArray<TObjectPtr<UOptimusNodePin>,TSizedDefaultAllocator<32>_>::Remove
            (this_01,(TObjectPtr<UOptimusNodePin> *)&local_res8.ObjectPtr);
  (**(code **)(param_1->_padding_ + 0x170))(param_1,0,param_2,0x34);
  if (param_2 == (UOptimusNodePin *)0x0) {
    iVar4 = (this->Pins).ArrayNum;
    local_res8.DebugPtr = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
  }
  else {
    iVar4 = (param_2->SubPins).ArrayNum;
    local_res8.DebugPtr = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    this_00 = &param_2->SubPins;
  }
  TArray<TObjectPtr<UOptimusNodePin>,TSizedDefaultAllocator<32>_>::Insert
            (this_00,(TObjectPtr<UOptimusNodePin> *)&local_res8.ObjectPtr,iVar4);
  if (this->bConstructingNode != false) {
    return true;
  }
  if (this->bSendNotifications == false) {
    return true;
  }
  pUVar3 = UOptimusNodePin::GetOwningNode(param_1);
  this_02 = (UOptimusNodeGraph *)pUVar3->_padding_;
  if (this_02 != (UOptimusNodeGraph *)0x0) {
    pUVar2 = UOptimusNodeGraph::StaticClass();
    iVar4 = (int)pUVar2->_padding_;
    if ((iVar4 <= *(int *)(this_02->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_02->_padding_ + 0x30) + (longlong)iVar4 * 8)
        == &pUVar2->_padding_)) goto LAB_14e1f34de;
  }
  this_02 = (UOptimusNodeGraph *)0x0;
LAB_14e1f34de:
  UOptimusNodeGraph::Notify(this_02,PinAdded,(UObject *)param_1);
  return true;
}

// Notify @ 14e1f3990

void __thiscall UOptimusNode::Notify(UOptimusNode *this,EOptimusGraphNotifyType param_1)

{
  int iVar1;
  UOptimusNodeGraph *this_00;
  UClass *pUVar2;
  
  if (((this->bConstructingNode == false) && (this->bSendNotifications != false)) &&
     (this_00 = (UOptimusNodeGraph *)this->_padding_, this_00 != (UOptimusNodeGraph *)0x0)) {
    pUVar2 = UOptimusNodeGraph::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      UOptimusNodeGraph::Notify(this_00,param_1,(UObject *)this);
    }
  }
  return;
}

// OnDataTypeChanged @ 14e1f4bc0

void __thiscall UOptimusNode::OnDataTypeChanged(UOptimusNode *this,FName param_1)

{
  return;
}

// PostCreateNode @ 14e1f9aa0

void __thiscall UOptimusNode::PostCreateNode(UOptimusNode *this)

{
  undefined1 *puVar1;
  int *piVar2;
  TMap<TArray<FName,TSizedDefaultAllocator<32>_>,UOptimusNodePin_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TArray<FName,TSizedDefaultAllocator<32>_>,UOptimusNodePin_*,0>_>
  *this_00;
  bool bVar3;
  int iVar4;
  bool bVar5;
  
  bVar3 = this->bConstructingNode;
  this->bConstructingNode = true;
  (**(code **)(this->_padding_ + 0x2f8))();
  this_00 = &this->CachedPinLookup;
  bVar5 = 1 < *(int *)&(this->CachedPinLookup).field_0x48;
  if (!bVar5) {
    TSet<TTuple<TArray<FName,TSizedDefaultAllocator<32>_>,UOptimusNodePin_*>,TDefaultMapHashableKeyFuncs<TArray<FName,TSizedDefaultAllocator<32>_>,UOptimusNodePin_*,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<TArray<FName,TSizedDefaultAllocator<32>_>,UOptimusNodePin_*>,TDefaultMapHashableKeyFuncs<TArray<FName,TSizedDefaultAllocator<32>_>,UOptimusNodePin_*,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  TSparseArray<TSparseSetElement<TTuple<TArray<FName,TSizedDefaultAllocator<32>_>,UOptimusNodePin_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<TArray<FName,TSizedDefaultAllocator<32>_>,UOptimusNodePin_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,0,*(int *)&(this->CachedPinLookup).field_0x8);
  puVar1 = &(this->CachedPinLookup).field_0xc;
  *(undefined4 *)&(this->CachedPinLookup).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->CachedPinLookup).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CachedPinLookup).field_0x34 = 0;
  iVar4 = *(int *)&(this->CachedPinLookup).field_0x2c;
  *(undefined4 *)&(this->CachedPinLookup).field_0x28 = 0;
  if ((iVar4 < 0) || (0x80 < iVar4)) {
    *(undefined4 *)&(this->CachedPinLookup).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->CachedPinLookup).field_0x10,0);
  }
  if (bVar5) {
    *(undefined4 *)&(this->CachedPinLookup).field_0x48 = 1;
    TSet<TTuple<TArray<FName,TSizedDefaultAllocator<32>_>,UOptimusNodePin_*>,TDefaultMapHashableKeyFuncs<TArray<FName,TSizedDefaultAllocator<32>_>,UOptimusNodePin_*,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<TArray<FName,TSizedDefaultAllocator<32>_>,UOptimusNodePin_*>,TDefaultMapHashableKeyFuncs<TArray<FName,TSizedDefaultAllocator<32>_>,UOptimusNodePin_*,0>,FDefaultSetAllocator>
              *)this_00);
  }
  piVar2 = &(this->Pins).ArrayMax;
  (this->Pins).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->Pins).AllocatorInstance,0,piVar2);
  }
  (**(code **)(this->_padding_ + 0x2f0))(this);
  (**(code **)(this->_padding_ + 0x300))(this);
  this->bConstructingNode = bVar3;
  return;
}

// PostDeserializeNode @ 14e1f9be0

void __thiscall UOptimusNode::PostDeserializeNode(UOptimusNode *this)

{
  bool bVar1;
  
  bVar1 = this->bConstructingNode;
  this->bConstructingNode = true;
  (**(code **)(this->_padding_ + 0x2f8))();
  (**(code **)(this->_padding_ + 0x300))(this);
  this->bConstructingNode = bVar1;
  return;
}

// PostLoad @ 14e1fbc10

void __thiscall UOptimusNode::PostLoad(UOptimusNode *this)

{
  bool bVar1;
  
  UObject::PostLoad((UObject *)this);
  (**(code **)(this->_padding_ + 0x2e8))(this);
  bVar1 = this->bConstructingNode;
  this->bConstructingNode = true;
  (**(code **)(this->_padding_ + 0x2f8))(this);
  (**(code **)(this->_padding_ + 0x300))(this);
  this->bConstructingNode = bVar1;
  return;
}

// PostLoadNodeSpecificData @ 14e1fe880

void __thiscall UOptimusNode::PostLoadNodeSpecificData(UOptimusNode *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  UObjectBase::AtomicallySetFlags((UObjectBase *)this,RF_Transactional);
  pFVar3 = (this->Pins).AllocatorInstance.Data;
  iVar2 = (this->Pins).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Pins).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UOptimusNodePin>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    UObject::ConditionalPostLoad(*(UObject **)pFVar3);
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// PreDuplicateRequirementActions @ 14e2007c0

void __thiscall
UOptimusNode::PreDuplicateRequirementActions
          (UOptimusNode *this,UOptimusNodeGraph *param_1,FOptimusCompoundAction *param_2)

{
  return;
}

// RecreatePinsFromPinDefinitions @ 14e204c60

void __thiscall UOptimusNode::RecreatePinsFromPinDefinitions(UOptimusNode *this)

{
  return;
}

// RemovePin @ 14e2151f0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UOptimusNode::RemovePin(UOptimusNode *this,UOptimusNodePin *param_1)

{
  uint uVar1;
  int *piVar2;
  atomic<int> *paVar3;
  atomic<int> aVar4;
  longlong lVar5;
  UOptimusNodeLink *pUVar6;
  UOptimusNodePin *pUVar7;
  code *pcVar8;
  FOptimusCompoundAction *pFVar9;
  bool bVar10;
  undefined1 uVar11;
  int iVar12;
  int iVar13;
  UClass *pUVar14;
  TReferenceControllerBase<1> *pTVar15;
  UOptimusActionStack *this_00;
  ulonglong uVar16;
  ulonglong uVar17;
  FScriptContainerElement *pFVar18;
  FScriptContainerElement *pFVar19;
  UOptimusNodeGraph *pUVar20;
  TArray<TSharedPtr<FOptimusAction,1>,TSizedDefaultAllocator<32>_> *pTVar21;
  ForAnyElementType FVar22;
  FScriptContainerElement *pFVar23;
  FOptimusCompoundAction *pFVar24;
  UOptimusNodePin *local_res10;
  uint local_res18 [2];
  undefined1 local_res20 [8];
  TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> local_f8;
  FOptimusCompoundAction *local_e8;
  TReferenceControllerBase<1> *local_e0;
  TReferenceControllerBase<1> *local_d8;
  TReferenceControllerBase<1> *local_d0;
  TReferenceControllerBase<1> *local_c8;
  uint local_c0;
  FScriptContainerElement *local_b8;
  UOptimusNodeGraph *local_b0;
  TArray<UOptimusNodeLink_const_*,TSizedDefaultAllocator<32>_> local_a8;
  FScriptContainerElement *local_98;
  TSharedPtr<FOptimusAction,1> local_90;
  FString local_80;
  FString local_70;
  TWeakPtr<FOptimusNodeAction_RemovePin,1> local_60 [2];
  
  local_res18[0] = 0;
  local_res10 = param_1;
  if (this->bDynamicPins == false) {
    if ((byte)LogOptimusCore._0_1_ < 2) {
      return false;
    }
    GetNodePath(this,&local_80);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOptimusCore);
    goto LAB_14e215319;
  }
  lVar5 = param_1->_padding_;
  if (lVar5 != 0) {
    pUVar14 = UOptimusNodePin::StaticClass();
    lVar5 = *(longlong *)(lVar5 + 0x10);
    iVar13 = (int)pUVar14->_padding_;
    if ((iVar13 <= *(int *)(lVar5 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar13 * 8) ==
        &pUVar14->_padding_)) {
      pUVar20 = (UOptimusNodeGraph *)local_res10->_padding_;
      if (pUVar20 == (UOptimusNodeGraph *)0x0) {
LAB_14e2152ce:
        pUVar20 = (UOptimusNodeGraph *)0x0;
      }
      else {
        pUVar14 = UOptimusNodePin::StaticClass();
        iVar13 = (int)pUVar14->_padding_;
        if ((*(int *)(pUVar20->_padding_ + 0x38) < iVar13) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar20->_padding_ + 0x30) + (longlong)iVar13 * 8) !=
            &pUVar14->_padding_)) goto LAB_14e2152ce;
      }
      if ((char)pUVar20->_padding_ == '\0') {
        if ((byte)LogOptimusCore._0_1_ < 2) {
          return false;
        }
        UOptimusNodePin::GetPinPath(local_res10,&local_70);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOptimusCore);
        local_80.Data.AllocatorInstance.Data = local_70.Data.AllocatorInstance.Data;
LAB_14e215319:
        if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_80.Data.AllocatorInstance.Data);
        }
        return false;
      }
    }
  }
  local_e8 = ::operator_new(0x28);
  if (local_e8 == (FOptimusCompoundAction *)0x0) {
    local_e8 = (FOptimusCompoundAction *)0x0;
  }
  else {
    local_e8->_padding_ = 0;
    local_e8->_padding_ = 0;
    local_e8->_padding_ = (longlong)&___7FOptimusCompoundAction__6B_;
    (local_e8->SubActions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (local_e8->SubActions).ArrayNum = 0;
    (local_e8->SubActions).ArrayMax = 0;
  }
  pFVar9 = local_e8;
  FOptimusAction::SetTitlef<>
            ((FOptimusAction *)local_e8,(TCheckedFormatStringPrivate<wchar_t>)0x152e237e0);
  UOptimusNodePin::GetSubPinsRecursively(local_res10,&local_f8,false);
  if (((local_f8.AllocatorInstance.Data <= (FScriptContainerElement *)&local_res10) &&
      ((FScriptContainerElement *)&local_res10 <
       local_f8.AllocatorInstance.Data + (longlong)local_f8.ArrayMax * 8)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar10)) {
    pcVar8 = (code *)swi(3);
    uVar11 = (*pcVar8)();
    return (bool)uVar11;
  }
  if (local_f8.ArrayNum == local_f8.ArrayMax) {
    local_f8.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x808,&local_f8.AllocatorInstance,&local_f8.ArrayMax);
  }
  uVar1 = local_f8.ArrayNum + 1;
  *(UOptimusNodePin **)(local_f8.AllocatorInstance.Data + (longlong)local_f8.ArrayNum * 8) =
       local_res10;
  pUVar20 = (UOptimusNodeGraph *)this->_padding_;
  local_f8.ArrayNum = uVar1;
  if (pUVar20 != (UOptimusNodeGraph *)0x0) {
    local_b0 = pUVar20;
    pUVar14 = UOptimusNodeGraph::StaticClass();
    iVar13 = (int)pUVar14->_padding_;
    if ((iVar13 <= *(int *)(pUVar20->_padding_ + 0x38)) &&
       (pFVar24 = pFVar9,
       (longlong *)*(undefined1 **)(*(longlong *)(pUVar20->_padding_ + 0x30) + (longlong)iVar13 * 8)
       == &pUVar14->_padding_)) goto LAB_14e215492;
  }
  local_b0 = (UOptimusNodeGraph *)0x0;
  pUVar20 = (UOptimusNodeGraph *)0x0;
  pFVar24 = local_e8;
LAB_14e215492:
  local_e8 = pFVar24;
  uVar16 = (ulonglong)local_f8.ArrayNum;
  local_c0 = local_f8.ArrayNum;
  local_98 = local_f8.AllocatorInstance.Data + uVar16 * 8;
  uVar17 = uVar16;
  FVar22.Data = local_f8.AllocatorInstance.Data;
  do {
    pFVar23 = local_98;
    local_b8 = FVar22.Data;
    if ((int)uVar16 != (int)uVar17) {
      local_res18[0] = local_res18[0] & 0xffffff00;
      `TCheckedPointerIterator<UOptimusNodePin_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (FVar22.Data == pFVar23) {
      pFVar24 = pFVar9;
      if (local_res10->bIsGroupingPin != false) {
        iVar13 = (local_res10->SubPins).ArrayNum;
        pFVar23 = (local_res10->SubPins).AllocatorInstance.Data;
        if ((iVar13 < 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar10)) {
          pcVar8 = (code *)swi(3);
          uVar11 = (*pcVar8)();
          return (bool)uVar11;
        }
        pFVar18 = pFVar23 + (longlong)iVar13 * 8;
        if (pFVar23 != pFVar18) {
          pTVar21 = &pFVar9->SubActions;
          do {
            pUVar7 = *(UOptimusNodePin **)pFVar23;
            pTVar15 = ::operator_new(200);
            if (pTVar15 == (TReferenceControllerBase<1> *)0x0) {
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)0x0);
              local_d0 = (TReferenceControllerBase<1> *)&DAT_00000010;
              local_c8 = (TReferenceControllerBase<1> *)0x0;
            }
            else {
              pTVar15->SharedReferenceCount = (atomic<int>)0x1;
              pTVar15->WeakReferenceCount = (atomic<int>)0x1;
              pTVar15->_padding_ =
                   (longlong)
                   &
                   ___7__TIntrusiveReferenceController_UFOptimusNodeAction_RemovePin___00_SharedPointerInternals__6B_
              ;
              FOptimusNodeAction_AddRemovePin::FOptimusNodeAction_AddRemovePin
                        ((FOptimusNodeAction_AddRemovePin *)(pTVar15 + 1),pUVar7);
              pTVar15[1]._padding_ = (longlong)&___7FOptimusNodeAction_RemovePin__6B_;
              if ((pTVar15 + 1 == (TReferenceControllerBase<1> *)0x0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("InObject != nullptr",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x246,L""), bVar10)) {
                pcVar8 = (code *)swi(3);
                uVar11 = (*pcVar8)();
                return (bool)uVar11;
              }
              LOCK();
              pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
              UNLOCK();
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar15);
              LOCK();
              pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
              UNLOCK();
              local_d0 = pTVar15 + 1;
              local_c8 = pTVar15;
            }
            pTVar15 = local_c8;
            pFVar19 = (pTVar21->AllocatorInstance).Data;
            if (((pFVar19 <= (FScriptContainerElement *)&local_d0) &&
                ((FScriptContainerElement *)&local_d0 <
                 pFVar19 + (longlong)(pFVar9->SubActions).ArrayMax * 0x10)) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar10)) {
              pcVar8 = (code *)swi(3);
              uVar11 = (*pcVar8)();
              return (bool)uVar11;
            }
            iVar13 = (pFVar9->SubActions).ArrayNum;
            if (iVar13 == (pFVar9->SubActions).ArrayMax) {
              iVar13 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&pTVar21->AllocatorInstance,&(pFVar9->SubActions).ArrayMax);
              (pFVar9->SubActions).ArrayNum = iVar13;
            }
            (pFVar9->SubActions).ArrayNum = iVar13 + 1;
            pFVar19 = (pTVar21->AllocatorInstance).Data + (longlong)iVar13 * 0x10;
            *(TReferenceControllerBase<1> **)pFVar19 = local_d0;
            *(TReferenceControllerBase<1> **)(pFVar19 + 8) = local_c8;
            local_c8 = (TReferenceControllerBase<1> *)0x0;
            local_d0 = (TReferenceControllerBase<1> *)0x0;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)0x0);
            if (pTVar15 == (TReferenceControllerBase<1> *)0x0) {
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)0x0);
            }
            else {
              LOCK();
              pTVar15->WeakReferenceCount = (atomic<int>)((int)pTVar15->WeakReferenceCount + 1);
              UNLOCK();
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar15);
              LOCK();
              paVar3 = &pTVar15->WeakReferenceCount;
              aVar4 = *paVar3;
              *paVar3 = (atomic<int>)((int)*paVar3 + -1);
              UNLOCK();
              if (aVar4 == (atomic<int>)0x1) {
                (**(code **)(pTVar15->_padding_ + 8))(pTVar15,1);
              }
            }
            pFVar23 = pFVar23 + 8;
            pFVar24 = local_e8;
          } while (pFVar23 != pFVar18);
        }
      }
      FOptimusCompoundAction::AddSubAction<FOptimusNodeAction_RemovePin,UOptimusNodePin_*_&>
                (pFVar24,local_60,&local_res10);
      if (local_60[0].WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        paVar3 = &(local_60[0].WeakReferenceCount.ReferenceController)->WeakReferenceCount;
        aVar4 = *paVar3;
        *paVar3 = (atomic<int>)((int)*paVar3 + -1);
        UNLOCK();
        if (aVar4 == (atomic<int>)0x1) {
          (**(code **)((local_60[0].WeakReferenceCount.ReferenceController)->_padding_ + 8))
                    (local_60[0].WeakReferenceCount.ReferenceController,1);
        }
      }
      this_00 = GetActionStack(this);
      local_90.Object = (FOptimusAction *)pFVar24;
      local_90.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
      if (local_90.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        (local_90.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1
        ;
        (local_90.SharedReferenceCount.ReferenceController)->_padding_ =
             (longlong)
             &
             ___7__TReferenceControllerWithDeleter_UFOptimusAction__U__DefaultDeleter_UFOptimusAction___SharedPointerInternals___00_SharedPointerInternals__6B_
        ;
        (local_90.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
        local_90.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)pFVar24;
      }
      bVar10 = UOptimusActionStack::RunAction(this_00,&local_90);
      if (local_f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.AllocatorInstance.Data);
      }
      return bVar10;
    }
    UOptimusNodeGraph::GetPinLinks(pUVar20,&local_a8,*(UOptimusNodePin **)FVar22.Data);
    iVar13 = local_a8.ArrayNum;
    uVar17 = (ulonglong)local_a8.ArrayNum;
    pFVar23 = local_a8.AllocatorInstance.Data + uVar17 * 8;
    FVar22.Data = local_a8.AllocatorInstance.Data;
    while( true ) {
      if ((uint)uVar17 != iVar13) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<UOptimusNodeLink_const_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res20);
      }
      if (FVar22.Data == pFVar23) break;
      pUVar6 = *(UOptimusNodeLink **)FVar22.Data;
      pTVar15 = ::operator_new(0x50);
      if (pTVar15 == (TReferenceControllerBase<1> *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        local_e0 = (TReferenceControllerBase<1> *)&DAT_00000010;
        local_d8 = (TReferenceControllerBase<1> *)0x0;
      }
      else {
        pTVar15->SharedReferenceCount = (atomic<int>)0x1;
        pTVar15->WeakReferenceCount = (atomic<int>)0x1;
        pTVar15->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_UFOptimusNodeGraphAction_RemoveLink___00_SharedPointerInternals__6B_
        ;
        FOptimusNodeGraphAction_RemoveLink::FOptimusNodeGraphAction_RemoveLink
                  ((FOptimusNodeGraphAction_RemoveLink *)(pTVar15 + 1),pUVar6);
        if ((pTVar15 + 1 == (TReferenceControllerBase<1> *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("InObject != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x246,L""), bVar10)) {
          pcVar8 = (code *)swi(3);
          uVar11 = (*pcVar8)();
          return (bool)uVar11;
        }
        LOCK();
        pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
        UNLOCK();
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15)
        ;
        LOCK();
        pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
        UNLOCK();
        local_e0 = pTVar15 + 1;
        local_d8 = pTVar15;
      }
      pTVar15 = local_d8;
      pTVar21 = &pFVar9->SubActions;
      pFVar18 = (pTVar21->AllocatorInstance).Data;
      if (((pFVar18 <= (FScriptContainerElement *)&local_e0) &&
          ((FScriptContainerElement *)&local_e0 <
           pFVar18 + (longlong)(pFVar9->SubActions).ArrayMax * 0x10)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar8 = (code *)swi(3);
        uVar11 = (*pcVar8)();
        return (bool)uVar11;
      }
      iVar12 = (pFVar9->SubActions).ArrayNum;
      piVar2 = &(pFVar9->SubActions).ArrayMax;
      if (iVar12 == *piVar2) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&pTVar21->AllocatorInstance,piVar2);
        (pFVar9->SubActions).ArrayNum = iVar12;
      }
      (pFVar9->SubActions).ArrayNum = iVar12 + 1;
      pFVar18 = (pTVar21->AllocatorInstance).Data + (longlong)iVar12 * 0x10;
      *(TReferenceControllerBase<1> **)pFVar18 = local_e0;
      *(TReferenceControllerBase<1> **)(pFVar18 + 8) = local_d8;
      local_d8 = (TReferenceControllerBase<1> *)0x0;
      local_e0 = (TReferenceControllerBase<1> *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      if (pTVar15 == (TReferenceControllerBase<1> *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
LAB_14e2156b6:
        uVar17 = (ulonglong)(uint)local_a8.ArrayNum;
        FVar22.Data = FVar22.Data + 8;
      }
      else {
        LOCK();
        pTVar15->WeakReferenceCount = (atomic<int>)((int)pTVar15->WeakReferenceCount + 1);
        UNLOCK();
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15)
        ;
        LOCK();
        paVar3 = &pTVar15->WeakReferenceCount;
        aVar4 = *paVar3;
        *paVar3 = (atomic<int>)((int)*paVar3 + -1);
        UNLOCK();
        if (aVar4 != (atomic<int>)0x1) goto LAB_14e2156b6;
        (**(code **)(pTVar15->_padding_ + 8))(pTVar15,1);
        uVar17 = (ulonglong)(uint)local_a8.ArrayNum;
        FVar22.Data = FVar22.Data + 8;
      }
    }
    if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.AllocatorInstance.Data);
    }
    uVar16 = (ulonglong)(uint)local_f8.ArrayNum;
    FVar22.Data = local_b8 + 8;
    uVar17 = (ulonglong)local_c0;
    pUVar20 = local_b0;
  } while( true );
}

// RemovePinDirect @ 14e2159e0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UOptimusNode::RemovePinDirect(UOptimusNode *this,UOptimusNodePin *param_1)

{
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *this_00;
  TObjectPtr<UOptimusNodePin>_u_0 *pTVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  UOptimusNodePin *this_01;
  ForElementType<FSetElementId> FVar5;
  undefined1 *puVar6;
  code *pcVar7;
  TObjectPtr<UOptimusNodePin>_u_0 TVar8;
  bool bVar9;
  undefined1 uVar10;
  uint uVar11;
  uint uVar12;
  UClass *pUVar13;
  TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> *pTVar14;
  UOptimusNode *pUVar15;
  FName FVar16;
  ulonglong uVar17;
  FScriptContainerElement *pFVar18;
  ForElementType<FSetElementId> FVar19;
  ulonglong uVar20;
  ForAnyElementType FVar21;
  UOptimusNodeGraph *pUVar22;
  undefined1 *puVar23;
  longlong lVar24;
  uint *puVar25;
  longlong lVar26;
  ForElementType<FSetElementId> FVar27;
  TObjectPtr<UOptimusNodePin>_u_0 local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> local_a8;
  uint local_98;
  TObjectPtr<UOptimusNodePin>_u_0 local_90;
  TObjectPtr<UOptimusNodePin>_u_0 local_88;
  UOptimusNodePin *local_80;
  TObjectPtr<UOptimusNodePin>_u_0 *local_78;
  TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> local_68;
  FString local_58;
  
  local_res10.DebugPtr = param_1;
  UOptimusNodePin::GetSubPinsRecursively(param_1,&local_a8,false);
  if (((local_a8.AllocatorInstance.Data <= &local_res10) &&
      (&local_res10 <
       (TObjectPtr<UOptimusNodePin>_u_0 *)
       (local_a8.AllocatorInstance.Data + (longlong)local_a8.ArrayMax * 8))) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar9)) {
    pcVar7 = (code *)swi(3);
    uVar10 = (*pcVar7)();
    return (bool)uVar10;
  }
  if (local_a8.ArrayNum == local_a8.ArrayMax) {
    local_a8.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x808,&local_a8.AllocatorInstance,&local_a8.ArrayMax);
  }
  uVar11 = local_a8.ArrayNum + 1;
  lVar26 = 0;
  ((TObjectPtr<UOptimusNodePin>_u_0 *)
  (local_a8.AllocatorInstance.Data + (longlong)local_a8.ArrayNum * 8))->DebugPtr =
       (UOptimusNodePin *)local_res10;
  if (0 < (int)uVar11 / 2) {
    pFVar18 = local_a8.AllocatorInstance.Data + (longlong)local_a8.ArrayNum * 8;
    do {
      uVar4 = *(undefined8 *)(local_a8.AllocatorInstance.Data + lVar26 * 8);
      *(undefined8 *)(local_a8.AllocatorInstance.Data + lVar26 * 8) = *(undefined8 *)pFVar18;
      lVar26 = lVar26 + 1;
      *(undefined8 *)pFVar18 = uVar4;
      pFVar18 = pFVar18 + -8;
    } while (lVar26 < (int)uVar11 / 2);
  }
  pUVar22 = (UOptimusNodeGraph *)this->_padding_;
  local_a8.ArrayNum = uVar11;
  if (pUVar22 != (UOptimusNodeGraph *)0x0) {
    pUVar13 = UOptimusNodeGraph::StaticClass();
    iVar2 = (int)pUVar13->_padding_;
    if ((iVar2 <= *(int *)(pUVar22->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar22->_padding_ + 0x30) + (longlong)iVar2 * 8)
        == &pUVar13->_padding_)) goto LAB_14e215b2a;
  }
  pUVar22 = (UOptimusNodeGraph *)0x0;
LAB_14e215b2a:
  iVar2 = local_a8.ArrayNum;
  pTVar1 = (TObjectPtr<UOptimusNodePin>_u_0 *)
           (local_a8.AllocatorInstance.Data + (longlong)local_a8.ArrayNum * 8);
  FVar21.Data = local_a8.AllocatorInstance.Data;
  do {
    if (local_a8.ArrayNum != iVar2) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<UOptimusNodePin_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if ((TObjectPtr<UOptimusNodePin>_u_0 *)FVar21.Data == pTVar1) {
      lVar26 = (local_res10.DebugPtr)->_padding_;
      if (lVar26 == 0) {
LAB_14e215c7d:
        local_88.DebugPtr = local_res10.DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_res10.DebugPtr != (UOptimusNodePin *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_res10.DebugPtr);
        }
        TArray<TObjectPtr<UOptimusNodePin>,TSizedDefaultAllocator<32>_>::Remove
                  (&this->Pins,(TObjectPtr<UOptimusNodePin> *)&local_88.ObjectPtr);
      }
      else {
        pUVar13 = UOptimusNodePin::StaticClass();
        lVar26 = *(longlong *)(lVar26 + 0x10);
        iVar2 = (int)pUVar13->_padding_;
        if ((*(int *)(lVar26 + 0x38) < iVar2) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar26 + 0x30) + (longlong)iVar2 * 8) !=
            &pUVar13->_padding_)) goto LAB_14e215c7d;
        lVar26 = (local_res10.DebugPtr)->_padding_;
        if (lVar26 == 0) {
LAB_14e215c4a:
          lVar26 = 0;
        }
        else {
          pUVar13 = UOptimusNodePin::StaticClass();
          iVar2 = (int)pUVar13->_padding_;
          if ((*(int *)(*(longlong *)(lVar26 + 0x10) + 0x38) < iVar2) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)(lVar26 + 0x10) + 0x30) + (longlong)iVar2 * 8) !=
              &pUVar13->_padding_)) goto LAB_14e215c4a;
        }
        local_90 = local_res10;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_res10.DebugPtr != (UOptimusNodePin *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_res10.DebugPtr);
        }
        TArray<TObjectPtr<UOptimusNodePin>,TSizedDefaultAllocator<32>_>::Remove
                  ((TArray<TObjectPtr<UOptimusNodePin>,TSizedDefaultAllocator<32>_> *)
                   (lVar26 + 0xa0),(TObjectPtr<UOptimusNodePin> *)&local_90.ObjectPtr);
      }
      TVar8 = local_res10;
      pUVar15 = UOptimusNodePin::GetOwningNode(local_res10.DebugPtr);
      pUVar22 = (UOptimusNodeGraph *)pUVar15->_padding_;
      if (pUVar22 == (UOptimusNodeGraph *)0x0) {
LAB_14e215cdd:
        pUVar22 = (UOptimusNodeGraph *)0x0;
      }
      else {
        pUVar13 = UOptimusNodeGraph::StaticClass();
        iVar2 = (int)pUVar13->_padding_;
        if ((*(int *)(pUVar22->_padding_ + 0x38) < iVar2) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar22->_padding_ + 0x30) + (longlong)iVar2 * 8) !=
            &pUVar13->_padding_)) goto LAB_14e215cdd;
      }
      UOptimusNodeGraph::Notify(pUVar22,PinRemoved,(UObject *)TVar8.DebugPtr);
      uVar17 = (ulonglong)local_a8.ArrayNum;
      local_98 = local_a8.ArrayNum;
      local_78 = (TObjectPtr<UOptimusNodePin>_u_0 *)(local_a8.AllocatorInstance.Data + uVar17 * 8);
      uVar20 = uVar17;
      FVar21.Data = local_a8.AllocatorInstance.Data;
      while( true ) {
        pTVar1 = local_78;
        if ((int)uVar17 != (int)uVar20) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<UOptimusNodePin_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res20);
        }
        if ((TObjectPtr<UOptimusNodePin>_u_0 *)FVar21.Data == pTVar1) break;
        local_80 = *(UOptimusNodePin **)FVar21.Data;
        this_00 = &this->ExpandedPins;
        FVar16 = UOptimusNodePin::GetUniqueName(local_80);
        lVar26 = *(longlong *)FVar16;
        if (*(int *)&(this->ExpandedPins).Elements.field_0x8 !=
            *(int *)&(this->ExpandedPins).Elements.field_0x34) {
          uVar11 = ::GetTypeHash((FNameEntryId)(uint)lVar26);
          FVar5 = (this->ExpandedPins).Hash.SecondaryData;
          FVar27 = (ForElementType<FSetElementId>)&(this->ExpandedPins).Hash;
          FVar19 = FVar27;
          if (FVar5 != (ForElementType<FSetElementId>)0x0) {
            FVar19 = FVar5;
          }
          uVar11 = *(uint *)((longlong)FVar19 +
                            ((longlong)(this->ExpandedPins).HashSize - 1U &
                            (longlong)(int)(uVar11 + (int)((ulonglong)lVar26 >> 0x20))) * 4);
          if (uVar11 != 0xffffffff) {
LAB_14e215d90:
            lVar24 = (longlong)(int)uVar11 * 0x10;
            if (*(longlong *)(*(longlong *)&this_00->Elements + lVar24) != lVar26)
            goto code_r0x00014e215da1;
            if (((int)uVar11 < 0) ||
               (*(int *)&(this->ExpandedPins).Elements.field_0x28 <= (int)uVar11)) {
LAB_14e215e0a:
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Elements.IsValidIndex(ElementIndex)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                                 ,0x2ab,
                                 L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
              if (bVar9) {
                pcVar7 = (code *)swi(3);
                uVar10 = (*pcVar7)();
                return (bool)uVar10;
              }
            }
            else {
              if ((*(int *)&(this->ExpandedPins).Elements.field_0x28 <= (int)uVar11) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Index>=0 && Index<NumBits",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                     ,0x5c6,L""), bVar9)) {
                pcVar7 = (code *)swi(3);
                uVar10 = (*pcVar7)();
                return (bool)uVar10;
              }
              puVar6 = *(undefined1 **)&(this->ExpandedPins).Elements.field_0x20;
              puVar23 = &(this->ExpandedPins).Elements.field_0x10;
              if (puVar6 != (undefined1 *)0x0) {
                puVar23 = puVar6;
              }
              uVar12 = uVar11;
              if ((int)uVar11 < 0) {
                uVar12 = uVar11 + 0x1f;
              }
              if ((*(uint *)(puVar23 + (longlong)((int)uVar12 >> 5) * 4) >> (uVar11 & 0x1f) & 1) ==
                  0) goto LAB_14e215e0a;
            }
            FVar5 = (this->ExpandedPins).Hash.SecondaryData;
            lVar24 = *(longlong *)&this_00->Elements + lVar24;
            if (FVar5 != (ForElementType<FSetElementId>)0x0) {
              FVar27 = FVar5;
            }
            puVar25 = (uint *)((longlong)FVar27 + (longlong)*(int *)(lVar24 + 0xc) * 4);
            while( true ) {
              uVar12 = *puVar25;
              if ((uVar12 == 0xffffffff) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("NextElementIndex != INDEX_NONE",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                                     ,0x2b5,L"Corrupt hash"), bVar9)) {
                pcVar7 = (code *)swi(3);
                uVar10 = (*pcVar7)();
                return (bool)uVar10;
              }
              if (uVar12 == uVar11) break;
              puVar25 = (uint *)(*(longlong *)&this_00->Elements + 8 + (longlong)(int)uVar12 * 0x10)
              ;
            }
            *puVar25 = *(uint *)(lVar24 + 8);
            TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this_00,uVar11,1);
          }
        }
LAB_14e215eb6:
        Optimus::RemoveObject((UObject *)local_80);
        uVar17 = (ulonglong)(uint)local_a8.ArrayNum;
        FVar21.Data = FVar21.Data + 8;
        uVar20 = (ulonglong)local_98;
      }
      TSet<TTuple<TArray<FName,TSizedDefaultAllocator<32>_>,UOptimusNodePin_*>,TDefaultMapHashableKeyFuncs<TArray<FName,TSizedDefaultAllocator<32>_>,UOptimusNodePin_*,0>,FDefaultSetAllocator>
      ::Reset((TSet<TTuple<TArray<FName,TSizedDefaultAllocator<32>_>,UOptimusNodePin_*>,TDefaultMapHashableKeyFuncs<TArray<FName,TSizedDefaultAllocator<32>_>,UOptimusNodePin_*,0>,FDefaultSetAllocator>
               *)&this->CachedPinLookup);
      bVar9 = true;
      goto LAB_14e215ee8;
    }
    this_01 = *(UOptimusNodePin **)FVar21.Data;
    pTVar14 = UOptimusNodeGraph::GetConnectedPins(pUVar22,&local_68,this_01);
    iVar3 = pTVar14->ArrayNum;
    if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.AllocatorInstance.Data);
    }
    if (iVar3 != 0) {
      if (2 < (byte)LogOptimusCore._0_1_) {
        UOptimusNodePin::GetPinPath(this_01,&local_58);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOptimusCore);
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
      }
      bVar9 = false;
LAB_14e215ee8:
      if ((TObjectPtr<UOptimusNodePin>_u_0 *)local_a8.AllocatorInstance.Data !=
          (TObjectPtr<UOptimusNodePin>_u_0 *)0x0) {
        FMemory::Free(local_a8.AllocatorInstance.Data);
      }
      return bVar9;
    }
    FVar21.Data = FVar21.Data + 8;
  } while( true );
code_r0x00014e215da1:
  uVar11 = *(uint *)(*(longlong *)&this_00->Elements + lVar24 + 8);
  if (uVar11 == 0xffffffff) goto LAB_14e215eb6;
  goto LAB_14e215d90;
}

// RenamePinFromPinDefinition @ 14e2180d0

void __thiscall
UOptimusNode::RenamePinFromPinDefinition(UOptimusNode *this,FName param_1,FName param_2)

{
  return;
}

// Serialize @ 14e21b880

void __thiscall UOptimusNode::Serialize(UOptimusNode *this,FArchive *param_1)

{
  UObject::Serialize((UObject *)this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e21b8a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FOptimusObjectVersion::GUID);
  return;
}

// Serialize @ 14e21b8b0

void __thiscall UOptimusNode::Serialize(UOptimusNode *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UObject::Serialize((UObject *)this,pFVar1);
  (**(code **)(*(longlong *)pFVar1 + 0x230))(pFVar1,&FOptimusObjectVersion::GUID);
  return;
}

// SetDiagnosticLevel @ 14e21dec0

void __thiscall UOptimusNode::SetDiagnosticLevel(UOptimusNode *this,EOptimusDiagnosticLevel param_1)

{
  if (this->DiagnosticLevel != param_1) {
    this->DiagnosticLevel = param_1;
    Notify(this,NodeDiagnosticLevelChanged);
    return;
  }
  return;
}

// SetDisplayName @ 14e21dee0

bool __thiscall UOptimusNode::SetDisplayName(UOptimusNode *this,FText *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  bool bVar3;
  undefined1 local_res8 [8];
  
  bVar3 = FText::EqualTo(&this->DisplayName,param_1,Default);
  pIVar1 = (param_1->TextData).Reference;
  if (bVar3) {
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))();
    }
    return false;
  }
  pIVar2 = (this->DisplayName).TextData.Reference;
  if (pIVar2 != pIVar1) {
    (this->DisplayName).TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (this->DisplayName).Flags = param_1->Flags;
  Notify(this,NodeDisplayNameChanged);
  pIVar1 = (param_1->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  return true;
}

// SetGraphPosition @ 14e21e160

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall UOptimusNode::SetGraphPosition(UOptimusNode *this,TVector2<double> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UOptimusActionStack *this_00;
  TReferenceControllerBase<1> *pTVar4;
  TSharedPtr<FOptimusAction,1> local_18;
  
  this_00 = GetActionStack(this);
  pTVar4 = ::operator_new(0x48);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    pTVar4 = (TReferenceControllerBase<1> *)0x0;
    local_18.Object = ___xmm_00000000000000000000000000000010;
    local_18.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFOptimusNodeAction_MoveNode___00_SharedPointerInternals__6B_
    ;
    FOptimusNodeAction_MoveNode::FOptimusNodeAction_MoveNode
              ((FOptimusNodeAction_MoveNode *)(pTVar4 + 1),this,param_1);
    local_18.Object = (FOptimusAction *)(pTVar4 + 1);
    if (local_18.Object == (FOptimusAction *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    local_18.SharedReferenceCount.ReferenceController = pTVar4;
  }
  bVar2 = UOptimusActionStack::RunAction(this_00,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return bVar2;
}

// SetGraphPositionDirect @ 14e21e250

bool __thiscall UOptimusNode::SetGraphPositionDirect(UOptimusNode *this,TVector2<double> *param_1)

{
  double dVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar2 = _finite((param_1->field0_0x0)._s_0.X);
  if (iVar2 != 0) {
    iVar2 = _finite((param_1->field0_0x0)._s_0.Y);
    if (iVar2 != 0) {
      dVar1 = (param_1->field0_0x0)._s_0.X - (this->GraphPosition).field0_0x0._s_0.X;
      uVar3 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar4 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      if ((__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar4,uVar3) &&
           (double)CONCAT44(uVar4,uVar3) != __real_3f1a36e2e0000000) ||
         (dVar1 = (param_1->field0_0x0)._s_0.Y - (this->GraphPosition).field0_0x0._s_0.Y,
         uVar3 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
         uVar4 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
         __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar4,uVar3) &&
         (double)CONCAT44(uVar4,uVar3) != __real_3f1a36e2e0000000)) {
        dVar1 = (param_1->field0_0x0)._s_0.Y;
        (this->GraphPosition).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
        (this->GraphPosition).field0_0x0._s_0.Y = dVar1;
        Notify(this,NodePositionChanged);
        return true;
      }
    }
  }
  return false;
}

// SetPinDataDomain @ 14e21f290

bool __thiscall
UOptimusNode::SetPinDataDomain
          (UOptimusNode *this,UOptimusNodePin *param_1,FOptimusDataDomain *param_2)

{
  int *piVar1;
  atomic<int> aVar2;
  EOptimusDataDomainType EVar3;
  EOptimusDataDomainType EVar4;
  UOptimusNodePin *this_00;
  UOptimusNodePin *pUVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  FOptimusCompoundAction *pFVar10;
  TReferenceControllerBase<1> *pTVar11;
  UOptimusActionStack *this_01;
  TReferenceControllerBase<1> *pTVar12;
  ulonglong uVar13;
  FScriptContainerElement *pFVar14;
  atomic<int> *paVar15;
  FOptimusCompoundAction *this_02;
  ForAnyElementType FVar16;
  UOptimusNodePin *local_res10;
  undefined1 local_res20 [8];
  undefined1 local_e8 [8];
  FScriptContainerElement *local_e0;
  TReferenceControllerBase<1> *local_d8;
  TReferenceControllerBase<1> *local_d0;
  TReferenceControllerBase<1> *local_c8;
  TReferenceControllerBase<1> *local_c0;
  FString local_b8;
  FString local_a8;
  uint local_98;
  uint local_94;
  FScriptContainerElement *local_90;
  TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> local_88;
  TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> local_78;
  FScriptContainerElement *local_68;
  TSharedPtr<FOptimusAction,1> local_60;
  TWeakPtr<FOptimusNodeAction_SetPinDataDomain,1> local_50;
  
  this_02 = (FOptimusCompoundAction *)0x0;
  if ((param_1 == (UOptimusNodePin *)0x0) ||
     (local_res10 = param_1, bVar7 = FOptimusDataDomain::operator==(&param_1->DataDomain,param_2),
     bVar7)) {
    return false;
  }
  pFVar10 = ::operator_new(0x28);
  if (pFVar10 != (FOptimusCompoundAction *)0x0) {
    pFVar10->_padding_ = 0;
    pFVar10->_padding_ = 0;
    pFVar10->_padding_ = (longlong)&___7FOptimusCompoundAction__6B_;
    (pFVar10->SubActions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar10->SubActions).ArrayNum = 0;
    (pFVar10->SubActions).ArrayMax = 0;
    this_02 = pFVar10;
  }
  FOptimusAction::SetTitlef<>
            ((FOptimusAction *)this_02,(TCheckedFormatStringPrivate<wchar_t>)0x152e23958);
  if (((param_1->Direction == Input) || (param_2->Type != Dimensional)) ||
     ((param_2->DimensionNames).ArrayNum != 0)) {
    UOptimusNodePin::GetSubPinsRecursively(param_1,&local_78,true);
    local_94 = local_78.ArrayNum;
    uVar13 = (ulonglong)(int)local_94;
    local_68 = local_78.AllocatorInstance.Data + uVar13 * 8;
    FVar16.Data = local_78.AllocatorInstance.Data;
    while( true ) {
      pFVar14 = local_68;
      local_90 = FVar16.Data;
      if (local_78.ArrayNum != (int)uVar13) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<UOptimusNodePin_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
      }
      if (FVar16.Data == pFVar14) break;
      this_00 = *(UOptimusNodePin **)FVar16.Data;
      UOptimusNodePin::GetConnectedPins(this_00,&local_88);
      uVar13 = (ulonglong)local_88.ArrayNum;
      local_98 = local_88.ArrayNum;
      local_e0 = local_88.AllocatorInstance.Data + uVar13 * 8;
      pFVar14 = local_e0;
      FVar16.Data = local_88.AllocatorInstance.Data;
      while( true ) {
        if (local_88.ArrayNum != (uint)uVar13) {
          local_e8[0] = 0;
          `TCheckedPointerIterator<UOptimusNodePin_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_e8);
        }
        if (FVar16.Data == pFVar14) break;
        pUVar5 = *(UOptimusNodePin **)FVar16.Data;
        if (this_00->Direction == Input) {
          EVar3 = (pUVar5->DataDomain).Type;
          if ((((EVar3 == Expression) && ((pUVar5->DataDomain).Expression.Data.ArrayNum < 2)) ||
              ((EVar4 = param_2->Type, EVar4 == Expression &&
               ((param_2->Expression).Data.ArrayNum < 2)))) ||
             (((EVar3 != Dimensional || ((pUVar5->DataDomain).DimensionNames.ArrayNum != 0)) &&
              (((EVar4 == Dimensional && ((param_2->DimensionNames).ArrayNum == 0)) ||
               ((((EVar3 != Dimensional || ((pUVar5->DataDomain).DimensionNames.ArrayNum != 0)) &&
                 ((EVar4 != Dimensional || ((param_2->DimensionNames).ArrayNum != 0)))) &&
                (bVar7 = FOptimusDataDomain::operator==(&pUVar5->DataDomain,param_2), !bVar7))))))))
          {
            pTVar11 = ::operator_new(0x50);
            if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)0x0);
              local_d8 = (TReferenceControllerBase<1> *)&DAT_00000010;
              local_d0 = (TReferenceControllerBase<1> *)0x0;
            }
            else {
              pTVar11->SharedReferenceCount = (atomic<int>)0x1;
              pTVar11->WeakReferenceCount = (atomic<int>)0x1;
              pTVar11->_padding_ =
                   (longlong)
                   &
                   ___7__TIntrusiveReferenceController_UFOptimusNodeGraphAction_RemoveLink___00_SharedPointerInternals__6B_
              ;
              FOptimusNodeGraphAction_AddRemoveLink::FOptimusNodeGraphAction_AddRemoveLink
                        ((FOptimusNodeGraphAction_AddRemoveLink *)(pTVar11 + 1),pUVar5,this_00,false
                        );
              ((FOptimusNodeGraphAction_AddRemoveLink *)(pTVar11 + 1))->_padding_ =
                   (longlong)&___7FOptimusNodeGraphAction_RemoveLink__6B_;
              ::FString::PrintfImpl(&local_b8,L"Remove Link");
              paVar15 = &pTVar11[1].SharedReferenceCount;
              if (paVar15 != (atomic<int> *)&local_b8) {
                if (*(void **)paVar15 != (void *)0x0) {
                  FMemory::Free(*(void **)paVar15);
                }
                *(FScriptContainerElement **)paVar15 = local_b8.Data.AllocatorInstance.Data;
                *(int *)&pTVar11[2]._padding_ = local_b8.Data.ArrayNum;
                *(int *)((longlong)&pTVar11[2]._padding_ + 4) = local_b8.Data.ArrayMax;
                local_b8.Data.ArrayNum = 0;
                local_b8.Data.ArrayMax = 0;
                local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              }
              if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_b8.Data.AllocatorInstance.Data);
              }
              if ((pTVar11 + 1 == (TReferenceControllerBase<1> *)0x0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("InObject != nullptr",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x246,L""), bVar7)) {
                pcVar6 = (code *)swi(3);
                uVar8 = (*pcVar6)();
                return (bool)uVar8;
              }
              LOCK();
              pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
              UNLOCK();
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar11);
              LOCK();
              pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
              UNLOCK();
              local_d8 = pTVar11 + 1;
              local_d0 = pTVar11;
            }
            pTVar11 = local_d0;
            pFVar14 = (this_02->SubActions).AllocatorInstance.Data;
            if (((pFVar14 <= (FScriptContainerElement *)&local_d8) &&
                ((FScriptContainerElement *)&local_d8 <
                 pFVar14 + (longlong)(this_02->SubActions).ArrayMax * 0x10)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar7)) {
              pcVar6 = (code *)swi(3);
              uVar8 = (*pcVar6)();
              return (bool)uVar8;
            }
            iVar9 = (this_02->SubActions).ArrayNum;
            piVar1 = &(this_02->SubActions).ArrayMax;
            if (iVar9 == *piVar1) {
              iVar9 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x810,&(this_02->SubActions).AllocatorInstance,piVar1);
              (this_02->SubActions).ArrayNum = iVar9;
            }
            (this_02->SubActions).ArrayNum = iVar9 + 1;
            pFVar14 = (this_02->SubActions).AllocatorInstance.Data + (longlong)iVar9 * 0x10;
            *(TReferenceControllerBase<1> **)pFVar14 = local_d8;
            *(TReferenceControllerBase<1> **)(pFVar14 + 8) = local_d0;
            local_d0 = (TReferenceControllerBase<1> *)0x0;
            local_d8 = (TReferenceControllerBase<1> *)0x0;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)0x0);
            if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
LAB_14e21f657:
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)0x0);
              pFVar14 = local_e0;
            }
            else {
              LOCK();
              pTVar11->WeakReferenceCount = (atomic<int>)((int)pTVar11->WeakReferenceCount + 1);
              UNLOCK();
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar11);
              LOCK();
              paVar15 = &pTVar11->WeakReferenceCount;
              aVar2 = *paVar15;
              *paVar15 = (atomic<int>)((int)*paVar15 + -1);
              UNLOCK();
              pFVar14 = local_e0;
              if (aVar2 == (atomic<int>)0x1) {
                (**(code **)(pTVar11->_padding_ + 8))(pTVar11,1);
                pFVar14 = local_e0;
              }
            }
          }
LAB_14e21f64b:
          uVar13 = (ulonglong)local_98;
          FVar16.Data = FVar16.Data + 8;
        }
        else {
          EVar3 = param_2->Type;
          if ((((EVar3 != Expression) || (1 < (param_2->Expression).Data.ArrayNum)) &&
              ((EVar4 = (pUVar5->DataDomain).Type, EVar4 != Expression ||
               (1 < (pUVar5->DataDomain).Expression.Data.ArrayNum)))) &&
             (((EVar3 == Dimensional && ((param_2->DimensionNames).ArrayNum == 0)) ||
              (((EVar4 != Dimensional || ((pUVar5->DataDomain).DimensionNames.ArrayNum != 0)) &&
               ((((EVar3 == Dimensional && ((param_2->DimensionNames).ArrayNum == 0)) ||
                 ((EVar4 == Dimensional && ((pUVar5->DataDomain).DimensionNames.ArrayNum == 0)))) ||
                (bVar7 = FOptimusDataDomain::operator==(param_2,&pUVar5->DataDomain), bVar7))))))))
          goto LAB_14e21f64b;
          pTVar11 = ::operator_new(0x50);
          if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)0x0);
            local_c8 = (TReferenceControllerBase<1> *)&DAT_00000010;
            local_c0 = (TReferenceControllerBase<1> *)0x0;
          }
          else {
            pTVar11->SharedReferenceCount = (atomic<int>)0x1;
            pTVar11->WeakReferenceCount = (atomic<int>)0x1;
            pTVar11->_padding_ =
                 (longlong)
                 &
                 ___7__TIntrusiveReferenceController_UFOptimusNodeGraphAction_RemoveLink___00_SharedPointerInternals__6B_
            ;
            FOptimusNodeGraphAction_AddRemoveLink::FOptimusNodeGraphAction_AddRemoveLink
                      ((FOptimusNodeGraphAction_AddRemoveLink *)(pTVar11 + 1),this_00,pUVar5,false);
            ((FOptimusNodeGraphAction_AddRemoveLink *)(pTVar11 + 1))->_padding_ =
                 (longlong)&___7FOptimusNodeGraphAction_RemoveLink__6B_;
            ::FString::PrintfImpl(&local_a8,L"Remove Link");
            paVar15 = &pTVar11[1].SharedReferenceCount;
            if (paVar15 != (atomic<int> *)&local_a8) {
              if (*(void **)paVar15 != (void *)0x0) {
                FMemory::Free(*(void **)paVar15);
              }
              *(FScriptContainerElement **)paVar15 = local_a8.Data.AllocatorInstance.Data;
              *(int *)&pTVar11[2]._padding_ = local_a8.Data.ArrayNum;
              *(int *)((longlong)&pTVar11[2]._padding_ + 4) = local_a8.Data.ArrayMax;
              local_a8.Data.ArrayNum = 0;
              local_a8.Data.ArrayMax = 0;
              local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            }
            if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_a8.Data.AllocatorInstance.Data);
            }
            if ((pTVar11 + 1 == (TReferenceControllerBase<1> *)0x0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InObject != nullptr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x246,L""), bVar7)) {
              pcVar6 = (code *)swi(3);
              uVar8 = (*pcVar6)();
              return (bool)uVar8;
            }
            LOCK();
            pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
            UNLOCK();
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar11);
            LOCK();
            pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
            UNLOCK();
            local_c8 = pTVar11 + 1;
            local_c0 = pTVar11;
          }
          pTVar11 = local_c0;
          pFVar14 = (this_02->SubActions).AllocatorInstance.Data;
          if (((pFVar14 <= (FScriptContainerElement *)&local_c8) &&
              ((FScriptContainerElement *)&local_c8 <
               pFVar14 + (longlong)(this_02->SubActions).ArrayMax * 0x10)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar6 = (code *)swi(3);
            uVar8 = (*pcVar6)();
            return (bool)uVar8;
          }
          iVar9 = (this_02->SubActions).ArrayNum;
          piVar1 = &(this_02->SubActions).ArrayMax;
          if (iVar9 == *piVar1) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&(this_02->SubActions).AllocatorInstance,piVar1);
            (this_02->SubActions).ArrayNum = iVar9;
          }
          (this_02->SubActions).ArrayNum = iVar9 + 1;
          pFVar14 = (this_02->SubActions).AllocatorInstance.Data + (longlong)iVar9 * 0x10;
          *(TReferenceControllerBase<1> **)pFVar14 = local_c8;
          *(TReferenceControllerBase<1> **)(pFVar14 + 8) = local_c0;
          local_c0 = (TReferenceControllerBase<1> *)0x0;
          local_c8 = (TReferenceControllerBase<1> *)0x0;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          if (pTVar11 == (TReferenceControllerBase<1> *)0x0) goto LAB_14e21f657;
          LOCK();
          pTVar11->WeakReferenceCount = (atomic<int>)((int)pTVar11->WeakReferenceCount + 1);
          UNLOCK();
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar11);
          LOCK();
          paVar15 = &pTVar11->WeakReferenceCount;
          aVar2 = *paVar15;
          *paVar15 = (atomic<int>)((int)*paVar15 + -1);
          UNLOCK();
          pFVar14 = local_e0;
          if (aVar2 != (atomic<int>)0x1) goto LAB_14e21f64b;
          (**(code **)(pTVar11->_padding_ + 8))(pTVar11,1);
          uVar13 = (ulonglong)local_98;
          FVar16.Data = FVar16.Data + 8;
          pFVar14 = local_e0;
        }
      }
      if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.AllocatorInstance.Data);
      }
      FVar16.Data = local_90 + 8;
      uVar13 = (ulonglong)local_94;
    }
    if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.AllocatorInstance.Data);
    }
  }
  pTVar11 = (TReferenceControllerBase<1> *)0x0;
  FOptimusCompoundAction::
  AddSubAction<FOptimusNodeAction_SetPinDataDomain,UOptimusNodePin_*_&,FOptimusDataDomain_const_&>
            (this_02,&local_50,&local_res10,param_2);
  if (local_50.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar15 = &(local_50.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar15;
    *paVar15 = (atomic<int>)((int)*paVar15 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_50.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_50.WeakReferenceCount.ReferenceController,1);
    }
  }
  this_01 = GetActionStack(this);
  local_60.Object = (FOptimusAction *)this_02;
  pTVar12 = ::operator_new(0x18);
  if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
    pTVar12->SharedReferenceCount = (atomic<int>)0x1;
    pTVar12->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFOptimusAction__U__DefaultDeleter_UFOptimusAction___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar12->WeakReferenceCount = (atomic<int>)0x1;
    pTVar12[1]._padding_ = (longlong)this_02;
    pTVar11 = pTVar12;
  }
  local_60.SharedReferenceCount.ReferenceController = pTVar11;
  bVar7 = UOptimusActionStack::RunAction(this_01,&local_60);
  return bVar7;
}

// SetPinDataDomainDirect @ 14e21f9d0

bool __thiscall
UOptimusNode::SetPinDataDomainDirect
          (UOptimusNode *this,UOptimusNodePin *param_1,FOptimusDataDomain *param_2)

{
  bool bVar1;
  int iVar2;
  FOptimusDataType *pFVar3;
  TSharedPtr<FOptimusDataType_const_,1> *pTVar4;
  UStruct *pUVar5;
  UClass *pUVar6;
  UOptimusNode *pUVar7;
  UOptimusNodeGraph *this_00;
  char cVar8;
  char cVar9;
  TSharedPtr<FOptimusDataType_const_,1> local_18;
  
  if (((param_1->DataDomain).Type == Dimensional) &&
     ((param_1->DataDomain).DimensionNames.ArrayNum == 0)) {
    cVar9 = '\x01';
  }
  else {
    cVar9 = '\0';
  }
  if ((param_2->Type == Dimensional) && ((param_2->DimensionNames).ArrayNum == 0)) {
    cVar8 = '\x01';
  }
  else {
    cVar8 = '\0';
  }
  (param_1->DataDomain).Type = param_2->Type;
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            (&(param_1->DataDomain).DimensionNames,&param_2->DimensionNames);
  (param_1->DataDomain).Multiplier = param_2->Multiplier;
  ::FString::operator=(&(param_1->DataDomain).Expression,&param_2->Expression);
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            (&(param_1->DataDomain).LevelNames_DEPRECATED,&param_2->LevelNames_DEPRECATED);
  if (cVar9 != cVar8) {
    bVar1 = this->bSendNotifications;
    this->bSendNotifications = false;
    UOptimusNodePin::ClearSubPins(param_1);
    if (cVar8 != '\0') {
      pTVar4 = FOptimusDataTypeRef::Resolve(&param_1->DataType,&local_18);
      pFVar3 = pTVar4->Object;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      if ((pFVar3->TypeFlags & ShowElements) != None) {
        pTVar4 = FOptimusDataTypeRef::Resolve(&param_1->DataType,&local_18);
        pFVar3 = pTVar4->Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_18.SharedReferenceCount.ReferenceController);
        pUVar5 = (UStruct *)FWeakObjectPtr::Get(&(pFVar3->TypeObject).WeakPtr);
        if (pUVar5 != (UStruct *)0x0) {
          pUVar6 = Z_Construct_UClass_UScriptStruct_NoRegister();
          iVar2 = (int)pUVar6->_padding_;
          if ((iVar2 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
              &pUVar6->_padding_)) {
            CreatePinsFromStructLayout(this,pUVar5,param_1);
          }
        }
      }
    }
    this->bSendNotifications = bVar1;
  }
  if (this->bConstructingNode != false) {
    return true;
  }
  if (this->bSendNotifications == false) {
    return true;
  }
  pUVar7 = UOptimusNodePin::GetOwningNode(param_1);
  this_00 = (UOptimusNodeGraph *)pUVar7->_padding_;
  if (this_00 != (UOptimusNodeGraph *)0x0) {
    pUVar6 = UOptimusNodeGraph::StaticClass();
    iVar2 = (int)pUVar6->_padding_;
    if ((iVar2 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar2 * 8)
        == &pUVar6->_padding_)) goto LAB_14e21fb32;
  }
  this_00 = (UOptimusNodeGraph *)0x0;
LAB_14e21fb32:
  UOptimusNodeGraph::Notify(this_00,PinDataDomainChanged,(UObject *)param_1);
  return true;
}

// SetPinDataType @ 14e21fb70

bool __thiscall
UOptimusNode::SetPinDataType
          (UOptimusNode *this,UOptimusNodePin *param_1,FOptimusDataTypeRef *param_2)

{
  int *piVar1;
  atomic<int> aVar2;
  void *pvVar3;
  UOptimusNodePin *pUVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  FOptimusDataTypeRef *pFVar8;
  bool bVar9;
  undefined1 uVar10;
  int iVar11;
  TSharedPtr<FOptimusDataType_const_,1> *pTVar12;
  FOptimusCompoundAction *this_00;
  TReferenceControllerBase<1> *pTVar13;
  UOptimusActionStack *this_01;
  ulonglong uVar14;
  FScriptContainerElement *pFVar15;
  atomic<int> *paVar16;
  ForAnyElementType FVar17;
  UOptimusNodePin *local_res10;
  FOptimusDataTypeRef *local_res18;
  uint local_res20 [2];
  TReferenceControllerBase<1> *local_e8;
  TReferenceControllerBase<1> *local_e0;
  TReferenceControllerBase<1> *local_d8;
  TReferenceControllerBase<1> *local_d0;
  FString local_c8;
  FString local_b8;
  uint local_a8;
  TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_> local_a0;
  FScriptContainerElement *local_90;
  TSharedPtr<FOptimusDataType_const_,1> local_88;
  TSharedPtr<FOptimusAction,1> local_78;
  TSharedPtr<FOptimusDataType_const_,1> local_68;
  TWeakPtr<FOptimusNodeAction_SetPinType,1> local_58;
  
  bVar6 = false;
  bVar9 = false;
  local_res20[0] = 0;
  local_res10 = param_1;
  local_res18 = param_2;
  if (param_1 != (UOptimusNodePin *)0x0) {
    pTVar12 = FOptimusDataTypeRef::Resolve(param_2,&local_68);
    FOptimusDataTypeRef::Resolve(&param_1->DataType,&local_88);
    bVar6 = true;
    bVar9 = true;
    if (local_88.Object != pTVar12->Object) {
      bVar7 = false;
      goto LAB_14e21fbd1;
    }
  }
  bVar7 = true;
LAB_14e21fbd1:
  if (bVar9) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_88.SharedReferenceCount.ReferenceController);
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
  }
  if (bVar7) {
    pvVar3 = *(void **)&(param_2->TypeObject).SoftObjectPtr.field_0x18;
    if (pvVar3 != (void *)0x0) {
      FMemory::Free(pvVar3);
    }
    return false;
  }
  this_00 = ::operator_new(0x28);
  if (this_00 == (FOptimusCompoundAction *)0x0) {
    this_00 = (FOptimusCompoundAction *)0x0;
  }
  else {
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    this_00->_padding_ = (longlong)&___7FOptimusCompoundAction__6B_;
    (this_00->SubActions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_00->SubActions).ArrayNum = 0;
    (this_00->SubActions).ArrayMax = 0;
  }
  FOptimusAction::SetTitlef<>
            ((FOptimusAction *)this_00,(TCheckedFormatStringPrivate<wchar_t>)0x152e23910);
  UOptimusNodePin::GetConnectedPins(param_1,&local_a0);
  local_a8 = local_a0.ArrayNum;
  uVar14 = (ulonglong)(int)local_a8;
  local_90 = local_a0.AllocatorInstance.Data + uVar14 * 8;
  FVar17.Data = local_a0.AllocatorInstance.Data;
  do {
    pFVar15 = local_90;
    if (local_a0.ArrayNum != (int)uVar14) {
      local_res20[0] = local_res20[0] & 0xffffff00;
      `TCheckedPointerIterator<UOptimusNodePin_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res20);
    }
    if (FVar17.Data == pFVar15) {
      if (local_a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.AllocatorInstance.Data);
      }
      pFVar8 = local_res18;
      FOptimusCompoundAction::
      AddSubAction<FOptimusNodeAction_SetPinType,UOptimusNodePin_*_&,FOptimusDataTypeRef_&>
                (this_00,&local_58,&local_res10,local_res18);
      if (local_58.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar16 = &(local_58.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
        aVar2 = *paVar16;
        *paVar16 = (atomic<int>)((int)*paVar16 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)((local_58.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                    (local_58.WeakReferenceCount.ReferenceController,1);
        }
      }
      this_01 = GetActionStack(this);
      local_78.Object = (FOptimusAction *)this_00;
      local_78.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
      if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1
        ;
        (local_78.SharedReferenceCount.ReferenceController)->_padding_ =
             (longlong)
             &
             ___7__TReferenceControllerWithDeleter_UFOptimusAction__U__DefaultDeleter_UFOptimusAction___SharedPointerInternals___00_SharedPointerInternals__6B_
        ;
        (local_78.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
        local_78.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)this_00;
      }
      bVar9 = UOptimusActionStack::RunAction(this_01,&local_78);
      pvVar3 = *(void **)&(pFVar8->TypeObject).SoftObjectPtr.field_0x18;
      if (pvVar3 != (void *)0x0) {
        FMemory::Free(pvVar3);
      }
      return bVar9;
    }
    pUVar4 = *(UOptimusNodePin **)FVar17.Data;
    if (param_1->Direction == Input) {
      pTVar13 = ::operator_new(0x50);
      if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        local_e8 = (TReferenceControllerBase<1> *)&DAT_00000010;
        local_e0 = (TReferenceControllerBase<1> *)0x0;
      }
      else {
        pTVar13->SharedReferenceCount = (atomic<int>)0x1;
        pTVar13->WeakReferenceCount = (atomic<int>)0x1;
        pTVar13->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_UFOptimusNodeGraphAction_RemoveLink___00_SharedPointerInternals__6B_
        ;
        FOptimusNodeGraphAction_AddRemoveLink::FOptimusNodeGraphAction_AddRemoveLink
                  ((FOptimusNodeGraphAction_AddRemoveLink *)(pTVar13 + 1),pUVar4,param_1,false);
        ((FOptimusNodeGraphAction_AddRemoveLink *)(pTVar13 + 1))->_padding_ =
             (longlong)&___7FOptimusNodeGraphAction_RemoveLink__6B_;
        ::FString::PrintfImpl(&local_c8,L"Remove Link");
        paVar16 = &pTVar13[1].SharedReferenceCount;
        if (paVar16 != (atomic<int> *)&local_c8) {
          if (*(void **)paVar16 != (void *)0x0) {
            FMemory::Free(*(void **)paVar16);
          }
          *(FScriptContainerElement **)paVar16 = local_c8.Data.AllocatorInstance.Data;
          *(int *)&pTVar13[2]._padding_ = local_c8.Data.ArrayNum;
          *(int *)((longlong)&pTVar13[2]._padding_ + 4) = local_c8.Data.ArrayMax;
          local_c8.Data.ArrayNum = 0;
          local_c8.Data.ArrayMax = 0;
          local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        }
        if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.Data.AllocatorInstance.Data);
        }
        if ((pTVar13 + 1 == (TReferenceControllerBase<1> *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("InObject != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x246,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          uVar10 = (*pcVar5)();
          return (bool)uVar10;
        }
        LOCK();
        pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
        UNLOCK();
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13)
        ;
        LOCK();
        pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
        UNLOCK();
        local_e8 = pTVar13 + 1;
        local_e0 = pTVar13;
      }
      pTVar13 = local_e0;
      pFVar15 = (this_00->SubActions).AllocatorInstance.Data;
      if (((pFVar15 <= (FScriptContainerElement *)&local_e8) &&
          ((FScriptContainerElement *)&local_e8 <
           pFVar15 + (longlong)(this_00->SubActions).ArrayMax * 0x10)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar5 = (code *)swi(3);
        uVar10 = (*pcVar5)();
        return (bool)uVar10;
      }
      iVar11 = (this_00->SubActions).ArrayNum;
      piVar1 = &(this_00->SubActions).ArrayMax;
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&(this_00->SubActions).AllocatorInstance,piVar1);
        (this_00->SubActions).ArrayNum = iVar11;
      }
      (this_00->SubActions).ArrayNum = iVar11 + 1;
      pFVar15 = (this_00->SubActions).AllocatorInstance.Data + (longlong)iVar11 * 0x10;
      *(TReferenceControllerBase<1> **)pFVar15 = local_e8;
      *(TReferenceControllerBase<1> **)(pFVar15 + 8) = local_e0;
      local_e0 = (TReferenceControllerBase<1> *)0x0;
      local_e8 = (TReferenceControllerBase<1> *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
LAB_14e2200df:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
      }
      else {
        LOCK();
        pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
        UNLOCK();
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13)
        ;
        LOCK();
        paVar16 = &pTVar13->WeakReferenceCount;
        aVar2 = *paVar16;
        *paVar16 = (atomic<int>)((int)*paVar16 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar13->_padding_ + 8))(pTVar13,1);
        }
      }
    }
    else {
      pTVar13 = ::operator_new(0x50);
      if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        local_d8 = (TReferenceControllerBase<1> *)&DAT_00000010;
        local_d0 = (TReferenceControllerBase<1> *)0x0;
      }
      else {
        pTVar13->SharedReferenceCount = (atomic<int>)0x1;
        pTVar13->WeakReferenceCount = (atomic<int>)0x1;
        pTVar13->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_UFOptimusNodeGraphAction_RemoveLink___00_SharedPointerInternals__6B_
        ;
        FOptimusNodeGraphAction_AddRemoveLink::FOptimusNodeGraphAction_AddRemoveLink
                  ((FOptimusNodeGraphAction_AddRemoveLink *)(pTVar13 + 1),param_1,pUVar4,false);
        ((FOptimusNodeGraphAction_AddRemoveLink *)(pTVar13 + 1))->_padding_ =
             (longlong)&___7FOptimusNodeGraphAction_RemoveLink__6B_;
        ::FString::PrintfImpl(&local_b8,L"Remove Link");
        paVar16 = &pTVar13[1].SharedReferenceCount;
        if (paVar16 != (atomic<int> *)&local_b8) {
          if (*(void **)paVar16 != (void *)0x0) {
            FMemory::Free(*(void **)paVar16);
          }
          *(FScriptContainerElement **)paVar16 = local_b8.Data.AllocatorInstance.Data;
          *(int *)&pTVar13[2]._padding_ = local_b8.Data.ArrayNum;
          *(int *)((longlong)&pTVar13[2]._padding_ + 4) = local_b8.Data.ArrayMax;
          local_b8.Data.ArrayNum = 0;
          local_b8.Data.ArrayMax = 0;
          local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        }
        if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.Data.AllocatorInstance.Data);
        }
        if ((pTVar13 + 1 == (TReferenceControllerBase<1> *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("InObject != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x246,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          uVar10 = (*pcVar5)();
          return (bool)uVar10;
        }
        LOCK();
        pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
        UNLOCK();
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13)
        ;
        LOCK();
        pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
        UNLOCK();
        local_d8 = pTVar13 + 1;
        local_d0 = pTVar13;
      }
      pTVar13 = local_d0;
      pFVar15 = (this_00->SubActions).AllocatorInstance.Data;
      if (((pFVar15 <= (FScriptContainerElement *)&local_d8) &&
          ((FScriptContainerElement *)&local_d8 <
           pFVar15 + (longlong)(this_00->SubActions).ArrayMax * 0x10)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar5 = (code *)swi(3);
        uVar10 = (*pcVar5)();
        return (bool)uVar10;
      }
      iVar11 = (this_00->SubActions).ArrayNum;
      piVar1 = &(this_00->SubActions).ArrayMax;
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&(this_00->SubActions).AllocatorInstance,piVar1);
        (this_00->SubActions).ArrayNum = iVar11;
      }
      (this_00->SubActions).ArrayNum = iVar11 + 1;
      pFVar15 = (this_00->SubActions).AllocatorInstance.Data + (longlong)iVar11 * 0x10;
      *(TReferenceControllerBase<1> **)pFVar15 = local_d8;
      *(TReferenceControllerBase<1> **)(pFVar15 + 8) = local_d0;
      local_d0 = (TReferenceControllerBase<1> *)0x0;
      local_d8 = (TReferenceControllerBase<1> *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      if (pTVar13 == (TReferenceControllerBase<1> *)0x0) goto LAB_14e2200df;
      LOCK();
      pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
      LOCK();
      paVar16 = &pTVar13->WeakReferenceCount;
      aVar2 = *paVar16;
      *paVar16 = (atomic<int>)((int)*paVar16 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar13->_padding_ + 8))(pTVar13,1);
      }
    }
    FVar17.Data = FVar17.Data + 8;
    uVar14 = (ulonglong)local_a8;
  } while( true );
}

// SetPinDataTypeDirect @ 14e2201d0

bool __thiscall
UOptimusNode::SetPinDataTypeDirect
          (UOptimusNode *this,UOptimusNodePin *param_1,FOptimusDataTypeRef *param_2)

{
  int iVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  TSharedPtr<FOptimusDataType_const_,1> *pTVar6;
  FProperty *pFVar7;
  FOptimusDataType *pFVar8;
  UStruct *pUVar9;
  UClass *pUVar10;
  TSharedPtr<FOptimusDataType_const_,1> local_78;
  TSharedPtr<FOptimusDataType_const_,1> local_68;
  TSharedPtr<FOptimusDataType_const_,1> local_58;
  TSharedPtr<FOptimusDataType_const_,1> local_48;
  undefined1 local_38 [8];
  TPersistentObjectPtr<FSoftObjectPath> local_30;
  
  if (param_1 == (UOptimusNodePin *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3307391251921240999>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusNode.cpp"
                       ,0x3a7,"InPin");
    if (bVar4) {
code_r0x00014e2202b9:
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  else {
    pTVar6 = FOptimusDataTypeRef::Resolve(param_2,&local_58);
    pFVar8 = pTVar6->Object;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
    if (pFVar8 == (FOptimusDataType *)0x0) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3307391251921240999>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusNode.cpp"
                         ,0x3a7,"InDataType.IsValid()");
      if (bVar4) goto code_r0x00014e2202b9;
    }
    else {
      pFVar7 = UOptimusNodePin::GetPropertyFromPin(param_1);
      if (pFVar7 == (FProperty *)0x0) {
        local_38 = *(undefined1 (*) [8])&param_2->TypeName;
        local_30.WeakPtr.ObjectIndex = *(int *)&(param_2->TypeObject).SoftObjectPtr.field_0x0;
        local_30.WeakPtr.ObjectSerialNumber = *(int *)&(param_2->TypeObject).SoftObjectPtr.field_0x4
        ;
        FSoftObjectPath::FSoftObjectPath
                  (&local_30.ObjectID,
                   (FSoftObjectPath *)&(param_2->TypeObject).SoftObjectPtr.field_0x8);
        FOptimusDataTypeRef::Resolve((FOptimusDataTypeRef *)local_38,&local_78);
        if (local_78.Object != (FOptimusDataType *)0x0) {
          FOptimusDataTypeRef::Resolve(&param_1->DataType,&local_68);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_68.SharedReferenceCount.ReferenceController);
          if ((local_78.Object != local_68.Object) &&
             ((((param_1->DataDomain).Type == Dimensional &&
               ((param_1->DataDomain).DimensionNames.ArrayNum == 0)) ||
              (((local_78.Object)->UsageFlags & Resource) != None)))) {
            (param_1->DataType).TypeName.ComparisonIndex = (FNameEntryId)local_38._0_4_;
            (param_1->DataType).TypeName.Number = local_38._4_4_;
            TPersistentObjectPtr<FSoftObjectPath>::operator=
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&(param_1->DataType).TypeObject,
                       &local_30);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_78.SharedReferenceCount.ReferenceController);
            if (local_30.ObjectID.SubPathString.Data.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0) {
              FMemory::Free(local_30.ObjectID.SubPathString.Data.AllocatorInstance.Data);
            }
            if (((param_1->DataDomain).Type == Dimensional) &&
               ((param_1->DataDomain).DimensionNames.ArrayNum == 0)) {
              bVar4 = this->bSendNotifications;
              this->bSendNotifications = false;
              UOptimusNodePin::ClearSubPins(param_1);
              pTVar6 = FOptimusDataTypeRef::Resolve(param_2,&local_48);
              pFVar8 = pTVar6->Object;
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_48.SharedReferenceCount.ReferenceController);
              if ((pFVar8->TypeFlags & ShowElements) != None) {
                pFVar8 = FOptimusDataTypeRef::operator->(param_2);
                pUVar9 = (UStruct *)FWeakObjectPtr::Get(&(pFVar8->TypeObject).WeakPtr);
                if (pUVar9 != (UStruct *)0x0) {
                  pUVar10 = Z_Construct_UClass_UScriptStruct_NoRegister();
                  iVar1 = (int)pUVar10->_padding_;
                  if ((iVar1 <= *(int *)(pUVar9->_padding_ + 0x38)) &&
                     ((longlong *)
                      *(undefined1 **)
                       (*(longlong *)(pUVar9->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
                      &pUVar10->_padding_)) {
                    CreatePinsFromStructLayout(this,pUVar9,param_1);
                  }
                }
              }
              this->bSendNotifications = bVar4;
            }
            if ((this->bConstructingNode == false) && (this->bSendNotifications != false)) {
              UOptimusNodePin::Notify(param_1,PinTypeChanged);
            }
            pvVar2 = *(void **)&(param_2->TypeObject).SoftObjectPtr.field_0x18;
            if (pvVar2 != (void *)0x0) {
              FMemory::Free(pvVar2);
            }
            return true;
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_78.SharedReferenceCount.ReferenceController);
        if (local_30.ObjectID.SubPathString.Data.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_30.ObjectID.SubPathString.Data.AllocatorInstance.Data);
        }
      }
      else {
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<3307391251921241000>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusNode.cpp"
                           ,0x3a8,"InPin->GetPropertyFromPin() == nullptr");
        if (bVar4) goto code_r0x00014e2202b9;
      }
    }
  }
  pvVar2 = *(void **)&(param_2->TypeObject).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  return false;
}

// SetPinExpanded @ 14e220470

void __thiscall
UOptimusNode::SetPinExpanded(UOptimusNode *this,UOptimusNodePin *param_1,bool param_2)

{
  longlong lVar1;
  FName FVar2;
  uint uVar3;
  int iVar4;
  ForElementType<FSetElementId> FVar5;
  uint uVar6;
  FName local_res18;
  FName local_res20;
  
  UOptimusNodePin::GetUniqueName(param_1);
  FVar2 = local_res20;
  uVar6 = local_res20.Number;
  if (param_2) {
    uVar3 = ::GetTypeHash(local_res20.ComparisonIndex.Value);
    if (*(int *)&(this->ExpandedPins).Elements.field_0x8 !=
        *(int *)&(this->ExpandedPins).Elements.field_0x34) {
      FVar5 = (this->ExpandedPins).Hash.SecondaryData;
      if (FVar5 == (ForElementType<FSetElementId>)0x0) {
        FVar5 = (ForElementType<FSetElementId>)&(this->ExpandedPins).Hash;
      }
      iVar4 = *(int *)((longlong)FVar5 +
                      (ulonglong)((this->ExpandedPins).HashSize - 1U & uVar6 + uVar3) * 4);
      if (iVar4 != -1) {
        lVar1 = *(longlong *)&(this->ExpandedPins).Elements;
        do {
          if (*(FName *)(lVar1 + (longlong)iVar4 * 0x10) == local_res20) {
            return;
          }
          iVar4 = *(int *)(lVar1 + 8 + (longlong)iVar4 * 0x10);
        } while (iVar4 != -1);
      }
    }
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
              (&this->ExpandedPins,&local_res18,(bool *)&local_res20);
  }
  else {
    uVar3 = ::GetTypeHash(local_res20.ComparisonIndex.Value);
    if (*(int *)&(this->ExpandedPins).Elements.field_0x8 ==
        *(int *)&(this->ExpandedPins).Elements.field_0x34) {
      return;
    }
    FVar5 = (this->ExpandedPins).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->ExpandedPins).Hash;
    }
    iVar4 = *(int *)((longlong)FVar5 +
                    (ulonglong)((this->ExpandedPins).HashSize - 1U & uVar6 + uVar3) * 4);
    if (iVar4 == -1) {
      return;
    }
    lVar1 = *(longlong *)&(this->ExpandedPins).Elements;
    while (*(FName *)(lVar1 + (longlong)iVar4 * 0x10) != FVar2) {
      iVar4 = *(int *)(lVar1 + 8 + (longlong)iVar4 * 0x10);
      if (iVar4 == -1) {
        return;
      }
    }
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Remove
              (&this->ExpandedPins,local_res20);
  }
  UOptimusNodePin::Notify(param_1,PinExpansionChanged);
  return;
}

// SetPinName @ 14e220690

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall UOptimusNode::SetPinName(UOptimusNode *this,UOptimusNodePin *param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UOptimusActionStack *this_00;
  TReferenceControllerBase<1> *pTVar4;
  TSharedPtr<FOptimusAction,1> local_18;
  
  if ((param_1 != (UOptimusNodePin *)0x0) && ((FName)param_1->_padding_ != param_2)) {
    this_00 = GetActionStack(this);
    pTVar4 = ::operator_new(0x48);
    if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
      pTVar4 = (TReferenceControllerBase<1> *)0x0;
      local_18.Object = ___xmm_00000000000000000000000000000010;
      local_18.SharedReferenceCount.ReferenceController = _UNK_150651568;
    }
    else {
      pTVar4->SharedReferenceCount = (atomic<int>)0x1;
      pTVar4->WeakReferenceCount = (atomic<int>)0x1;
      pTVar4->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_UFOptimusNodeAction_SetPinName___00_SharedPointerInternals__6B_
      ;
      FOptimusNodeAction_SetPinName::FOptimusNodeAction_SetPinName
                ((FOptimusNodeAction_SetPinName *)(pTVar4 + 1),param_1,param_2);
      local_18.Object = (FOptimusAction *)(pTVar4 + 1);
      if (local_18.Object == (FOptimusAction *)0x0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
      local_18.SharedReferenceCount.ReferenceController = pTVar4;
    }
    bVar2 = UOptimusActionStack::RunAction(this_00,&local_18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    return bVar2;
  }
  return false;
}

// SetPinNameDirect @ 14e2207a0

bool __thiscall
UOptimusNode::SetPinNameDirect(UOptimusNode *this,UOptimusNodePin *param_1,FName param_2)

{
  int iVar1;
  FName FVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  FString *pFVar8;
  UOptimusNode *pUVar9;
  UClass *pUVar10;
  ForElementType<FSetElementId> FVar11;
  wchar_t *pwVar12;
  UOptimusNodeGraph *this_00;
  int iVar13;
  FName local_res10;
  FName local_res18;
  undefined8 local_res20;
  FName local_48;
  FString local_40;
  
  local_res18 = param_2;
  if (param_1 == (UOptimusNodePin *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3307391251921241060>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusNode.cpp"
                       ,0x3e4,"InPin");
    if (!bVar5) {
      return false;
    }
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  local_res20 = 0;
  if (param_2 == (FName)0x0) {
    return false;
  }
  FVar2 = (FName)param_1->_padding_;
  uVar7 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
  if (*(int *)&(this->ExpandedPins).Elements.field_0x8 !=
      *(int *)&(this->ExpandedPins).Elements.field_0x34) {
    FVar11 = (this->ExpandedPins).Hash.SecondaryData;
    if (FVar11 == (ForElementType<FSetElementId>)0x0) {
      FVar11 = (ForElementType<FSetElementId>)&(this->ExpandedPins).Hash;
    }
    iVar13 = *(int *)((longlong)FVar11 +
                     (ulonglong)((this->ExpandedPins).HashSize - 1U & FVar2.Number + uVar7) * 4);
    if (iVar13 != -1) {
      lVar3 = *(longlong *)&(this->ExpandedPins).Elements;
      do {
        if (*(FName *)(lVar3 + (longlong)iVar13 * 0x10) == FVar2) goto LAB_14e22088a;
        iVar13 = *(int *)(lVar3 + 8 + (longlong)iVar13 * 0x10);
      } while (iVar13 != -1);
    }
  }
  iVar13 = -1;
LAB_14e22088a:
  if ((FName)param_1->_padding_ == param_2) {
    return false;
  }
  pcVar4 = *(code **)(param_1->_padding_ + 0x170);
  local_48 = param_2;
  pFVar8 = ::FName::ToString(&local_48,&local_40);
  if ((pFVar8->Data).ArrayNum == 0) {
    pwVar12 = L"";
  }
  else {
    pwVar12 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
  }
  (*pcVar4)(param_1,pwVar12,0,0);
  if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data.AllocatorInstance.Data);
  }
  pUVar9 = UOptimusNodePin::GetOwningNode(param_1);
  this_00 = (UOptimusNodeGraph *)pUVar9->_padding_;
  if (this_00 != (UOptimusNodeGraph *)0x0) {
    pUVar10 = UOptimusNodeGraph::StaticClass();
    iVar1 = (int)pUVar10->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar10->_padding_)) goto LAB_14e220914;
  }
  this_00 = (UOptimusNodeGraph *)0x0;
LAB_14e220914:
  UOptimusNodeGraph::Notify(this_00,PinRenamed,(UObject *)param_1);
  TSet<TTuple<TArray<FName,TSizedDefaultAllocator<32>_>,UOptimusNodePin_*>,TDefaultMapHashableKeyFuncs<TArray<FName,TSizedDefaultAllocator<32>_>,UOptimusNodePin_*,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<TArray<FName,TSizedDefaultAllocator<32>_>,UOptimusNodePin_*>,TDefaultMapHashableKeyFuncs<TArray<FName,TSizedDefaultAllocator<32>_>,UOptimusNodePin_*,0>,FDefaultSetAllocator>
           *)&this->CachedPinLookup);
  if (iVar13 != -1) {
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Remove(&this->ExpandedPins,FVar2);
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
              (&this->ExpandedPins,&local_res10,(bool *)&local_res18);
  }
  return true;
}

// StaticRegisterNativesUOptimusNode @ 14e225af0

void __cdecl UOptimusNode::StaticRegisterNativesUOptimusNode(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 5;
  local_18.DataPtr = Z_Construct_UClass_UOptimusNode_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UpdateDisplayNameFromDataInterface @ 14e22c280

void __thiscall UOptimusNode::UpdateDisplayNameFromDataInterface(UOptimusNode *this)

{
  return;
}

// ValidateConnection @ 14e22efe0

bool __thiscall
UOptimusNode::ValidateConnection
          (UOptimusNode *this,UOptimusNodePin *param_1,UOptimusNodePin *param_2,FString *param_3)

{
  return true;
}

// ValidateForCompile @ 14e22f4c0

TOptional<FText> * __thiscall
UOptimusNode::ValidateForCompile
          (UOptimusNode *this,TOptional<FText> *__return_storage_ptr__,
          FOptimusPinTraversalContext *param_1)

{
  (__return_storage_ptr__->field0_0x0).TypedValue.TextData.Reference = (ITextData *)0x0;
  (__return_storage_ptr__->field0_0x0).TypedValue.Flags = 0;
  return __return_storage_ptr__;
}

// execGetDisplayName @ 14e23b450

void __cdecl UOptimusNode::execGetDisplayName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FText *pFVar1;
  longlong *local_18 [2];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = (FText *)(**(code **)(*(longlong *)param_1 + 0x2d8))(param_1,local_18);
  FText::operator=(param_3,pFVar1);
  if (local_18[0] != (longlong *)0x0) {
    (**(code **)(*local_18[0] + 0x10))();
  }
  return;
}

// execGetGraphPosition @ 14e23b540

void __cdecl UOptimusNode::execGetGraphPosition(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = *(undefined8 *)&param_1[1].field_0x20;
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[1].field_0x18;
  *(undefined8 *)((longlong)param_3 + 8) = uVar1;
  return;
}

// execGetNodeCategory @ 14e23b650

void __cdecl UOptimusNode::execGetNodeCategory(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_res8);
  *(undefined8 *)param_3 = *puVar1;
  return;
}

// execGetNodeName @ 14e23b690

void __cdecl UOptimusNode::execGetNodeName(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)(*(longlong *)&param_1->field_0x10 + 0x18);
  return;
}

// execSetGraphPosition @ 14e23cab0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl UOptimusNode::execSetGraphPosition(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  UOptimusActionStack *this;
  TReferenceControllerBase<1> *pTVar4;
  TVector2<double> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSharedPtr<FOptimusAction,1> local_38;
  TVector2<double> local_28;
  
  pTVar6 = (TReferenceControllerBase<1> *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pTVar5 = &local_28;
  if ((TVector2<double> *)param_2->MostRecentPropertyAddress != (TVector2<double> *)0x0) {
    pTVar5 = (TVector2<double> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = GetActionStack((UOptimusNode *)param_1);
  pTVar4 = ::operator_new(0x48);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    local_38.Object = ___xmm_00000000000000000000000000000010;
    local_38.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFOptimusNodeAction_MoveNode___00_SharedPointerInternals__6B_
    ;
    FOptimusNodeAction_MoveNode::FOptimusNodeAction_MoveNode
              ((FOptimusNodeAction_MoveNode *)(pTVar4 + 1),(UOptimusNode *)param_1,pTVar5);
    local_38.Object = (FOptimusAction *)(pTVar4 + 1);
    if (local_38.Object == (FOptimusAction *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    pTVar6 = pTVar4;
    local_38.SharedReferenceCount.ReferenceController = pTVar4;
  }
  bVar3 = UOptimusActionStack::RunAction(this,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  *(bool *)param_3 = bVar3;
  return;
}

