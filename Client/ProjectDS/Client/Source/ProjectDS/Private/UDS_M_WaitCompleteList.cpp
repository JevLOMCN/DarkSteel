// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 17

// StaticClass @ 14b51ca00

UClass * __cdecl UDS_M_WaitCompleteList::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_WaitCompleteList.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_WaitCompleteList",
               &Z_Registration_Info_UClass_UDS_M_WaitCompleteList.InnerSingleton,
               StaticRegisterNativesUDS_M_WaitCompleteList,0x1c8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_M_WaitCompleteList>,
               InternalVTableHelperCtorCaller<UDS_M_WaitCompleteList>,local_res8,
               UDS_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_WaitCompleteList.InnerSingleton;
}

// UDS_M_WaitCompleteList @ 14b522690

UDS_M_WaitCompleteList * __thiscall
UDS_M_WaitCompleteList::UDS_M_WaitCompleteList(UDS_M_WaitCompleteList *this,FVTableHelper *param_1)

{
  undefined8 local_res8 [4];
  
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_M_WaitCompleteList__6B_;
  (this->SlotModelList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SlotModelList).ArrayNum = 0;
  (this->SlotModelList).ArrayMax = 0;
  (this->AllCompleteButtonModel).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->AllCompleteButtonModel).WeakPtr,(FObjectPtr)local_res8);
  return this;
}

// UDS_M_WaitCompleteList @ 14b5226e0

UDS_M_WaitCompleteList * __thiscall
UDS_M_WaitCompleteList::UDS_M_WaitCompleteList
          (UDS_M_WaitCompleteList *this,FObjectInitializer *param_1)

{
  undefined8 local_res8 [4];
  
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_M_WaitCompleteList__6B_;
  (this->SlotModelList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SlotModelList).ArrayNum = 0;
  (this->SlotModelList).ArrayMax = 0;
  (this->AllCompleteButtonModel).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->AllCompleteButtonModel).WeakPtr,(FObjectPtr)local_res8);
  return this;
}

// ~UDS_M_WaitCompleteList @ 14b5236d0

void __thiscall UDS_M_WaitCompleteList::~UDS_M_WaitCompleteList(UDS_M_WaitCompleteList *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UDS_M_WaitCompleteList__6B_;
  pFVar1 = (this->SlotModelList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ModelBase::~UDS_ModelBase((UDS_ModelBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b5268e0

UClass * __cdecl UDS_M_WaitCompleteList::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_WaitCompleteList.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_WaitCompleteList",
               &Z_Registration_Info_UClass_UDS_M_WaitCompleteList.InnerSingleton,
               StaticRegisterNativesUDS_M_WaitCompleteList,0x1c8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_M_WaitCompleteList>,
               InternalVTableHelperCtorCaller<UDS_M_WaitCompleteList>,local_res8,
               UDS_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_WaitCompleteList.InnerSingleton;
}

// StaticRegisterNativesUDS_M_WaitCompleteList @ 14b5275d0

void __cdecl UDS_M_WaitCompleteList::StaticRegisterNativesUDS_M_WaitCompleteList(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_M_WaitCompleteList_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnChangeWaitCompleteDataSet @ 14b529a10

void __cdecl
UDS_M_WaitCompleteList::execOnChangeWaitCompleteDataSet
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDS_DataSetBase *local_res10;
  
  local_res10 = (UDS_DataSetBase *)0x0;
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
  OnChangeWaitCompleteDataSet((UDS_M_WaitCompleteList *)param_1,local_res10);
  return;
}

// GetSlotModelList @ 14bd618d0

TArray<TWeakObjectPtr<UDS_M_WaitCompleteListSlot,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *
__thiscall
UDS_M_WaitCompleteList::GetSlotModelList
          (UDS_M_WaitCompleteList *this,
          TArray<TWeakObjectPtr<UDS_M_WaitCompleteListSlot,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  undefined8 uVar1;
  code *pcVar2;
  FWeakObjectPtr FVar3;
  bool bVar4;
  uint uVar5;
  UDS_M_WaitCompleteListSlot *this_00;
  TArray<TWeakObjectPtr<UDS_M_WaitCompleteListSlot,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
  *pTVar6;
  UDS_WaitCompleteDataSet *this_01;
  FName FVar7;
  FString *pFVar8;
  ulonglong uVar9;
  int *piVar10;
  int iVar11;
  atomic<unsigned_char> *paVar12;
  wchar_t *_Str;
  FWeakObjectPtr *pFVar13;
  FWeakObjectPtr *pFVar14;
  FScriptContainerElement *_Src;
  ForAnyElementType FVar15;
  uint uVar16;
  undefined1 local_res8 [8];
  TArray<TWeakObjectPtr<UDS_M_WaitCompleteListSlot,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
  *local_res10;
  EDS_WaitCompleteType local_res18 [8];
  undefined1 local_res20 [8];
  FWeakObjectPtr local_98;
  FWeakObjectPtr local_90;
  FWeakObjectPtr local_88;
  FWeakObjectPtr local_80;
  TArray<TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_78;
  undefined8 local_68;
  UDS_M_WaitCompleteListSlot *local_60;
  FWeakObjectPtr *local_58;
  undefined1 local_50 [16];
  
  pFVar14 = (FWeakObjectPtr *)(this->SlotModelList).AllocatorInstance.Data;
  iVar11 = (this->SlotModelList).ArrayNum;
  uVar16 = 0;
  pFVar13 = pFVar14 + iVar11;
  local_res10 = __return_storage_ptr__;
  while( true ) {
    if ((this->SlotModelList).ArrayNum != iVar11) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TWeakObjectPtr<UDS_M_WaitCompleteListSlot,FWeakObjectPtr>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar14 == pFVar13) break;
    local_90 = *pFVar14;
    bVar4 = FWeakObjectPtr::IsValid(&local_90);
    if (!bVar4) {
      iVar11 = 0xb7;
      paVar12 = &bGEnsureHasExecuted<_3512716548668129097>;
LAB_14bd61985:
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (paVar12,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_WaitCompleteList.cpp"
                         ,iVar11,"false");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TArray<TWeakObjectPtr<UDS_M_WaitCompleteListSlot,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
                  *)(*pcVar2)();
        return pTVar6;
      }
      (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      piVar10 = &__return_storage_ptr__->ArrayMax;
      iVar11 = (this->SlotModelList).ArrayNum;
      _Src = (this->SlotModelList).AllocatorInstance.Data;
      __return_storage_ptr__->ArrayNum = iVar11;
      if (iVar11 == 0) {
        *piVar10 = 0;
      }
      else {
LAB_14bd61b9a:
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,iVar11,0,&__return_storage_ptr__->AllocatorInstance,iVar11,piVar10);
        memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src,(longlong)iVar11 << 3);
      }
      return __return_storage_ptr__;
    }
    this_00 = (UDS_M_WaitCompleteListSlot *)FWeakObjectPtr::Get(&local_90);
    local_98.ObjectIndex = 0;
    local_98.ObjectSerialNumber = 0;
    local_68 = 0;
    FWeakObjectPtr::operator=(&local_98,(FObjectPtr)&local_68);
    UDS_M_WaitCompleteListSlot::InitModel
              (this_00,0,(TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr>)local_98);
    pFVar14 = pFVar14 + 1;
  }
  TDS_DataSetGetter<UDS_WaitCompleteDataSet>::Get((ulong64)&local_88);
  bVar4 = FWeakObjectPtr::IsValid(&local_88);
  if (bVar4) {
    this_01 = (UDS_WaitCompleteDataSet *)FWeakObjectPtr::Get(&local_88);
    local_res18[0] =
         FDS_DataContainer::GetData<enum_EDS_WaitCompleteType,enum_EDS_WaitCompleteListData>
                   ((FDS_DataContainer *)&this->_padding_,WaitCompleteType);
    UDS_WaitCompleteDataSet::GetAllData(this_01,&local_78,local_res18);
    iVar11 = local_78.ArrayNum;
    pFVar13 = (FWeakObjectPtr *)(local_78.AllocatorInstance.Data + (longlong)iVar11 * 8);
    FVar15.Data = local_78.AllocatorInstance.Data;
    local_58 = pFVar13;
    while( true ) {
      if (local_78.ArrayNum != iVar11) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr>,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res20);
      }
      __return_storage_ptr__ = local_res10;
      if ((FWeakObjectPtr *)FVar15.Data == pFVar13) break;
      local_80 = *(FWeakObjectPtr *)FVar15.Data;
      bVar4 = FWeakObjectPtr::IsValid(&local_80);
      if (bVar4) {
        if ((-1 < (int)uVar16) && ((int)uVar16 < (this->SlotModelList).ArrayNum)) {
          uVar5 = 0;
          if ((int)uVar16 < (this->SlotModelList).ArrayNum) {
            uVar5 = ~uVar16 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            pTVar6 = (TArray<TWeakObjectPtr<UDS_M_WaitCompleteListSlot,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
                      *)(*pcVar2)();
            return pTVar6;
          }
          local_60 = (UDS_M_WaitCompleteListSlot *)
                     FWeakObjectPtr::Get((FWeakObjectPtr *)
                                         ((this->SlotModelList).AllocatorInstance.Data +
                                         (longlong)(int)uVar16 * 8));
          FVar3 = local_80;
          FVar7 = FDS_DataContainer::TransformIndexToName<enum_EDS_WaitCompleteListData>
                            ((FDS_DataContainer *)&this->_padding_,
                             (EDS_WaitCompleteListData)local_50);
          uVar1 = *(undefined8 *)FVar7;
          uVar5 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
          pFVar8 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                   ::FindOrAddImpl<FName>
                             ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                               *)&this->_padding_,uVar5 + (int)((ulonglong)uVar1 >> 0x20),
                              (FName *)FVar7);
          if ((pFVar8->Data).ArrayNum == 0) {
            _Str = L"";
          }
          else {
            _Str = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
          }
          uVar9 = _wcstoui64(_Str,(wchar_t **)0x0,0);
          UDS_M_WaitCompleteListSlot::InitModel
                    (local_60,uVar9,(TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr>)FVar3);
          pFVar13 = local_58;
        }
        uVar16 = uVar16 + 1;
      }
      FVar15.Data = FVar15.Data + 8;
    }
    if ((FWeakObjectPtr *)local_78.AllocatorInstance.Data != (FWeakObjectPtr *)0x0) {
      FMemory::Free(local_78.AllocatorInstance.Data);
    }
    piVar10 = &__return_storage_ptr__->ArrayMax;
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    iVar11 = (this->SlotModelList).ArrayNum;
    _Src = (this->SlotModelList).AllocatorInstance.Data;
    __return_storage_ptr__->ArrayNum = iVar11;
    if (iVar11 == 0) {
      *piVar10 = 0;
      return __return_storage_ptr__;
    }
    goto LAB_14bd61b9a;
  }
  iVar11 = 0xbd;
  paVar12 = &bGEnsureHasExecuted<_3512716548668129091>;
  goto LAB_14bd61985;
}

// GetWaitCompleteCountText @ 14bd64c30

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __thiscall
UDS_M_WaitCompleteList::GetWaitCompleteCountText
          (UDS_M_WaitCompleteList *this,FText *__return_storage_ptr__)

{
  longlong *this_00;
  undefined8 uVar1;
  EDS_WaitCompleteType EVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  FName FVar6;
  FString *pFVar7;
  FText *pFVar8;
  FTextFormat *pFVar9;
  wchar_t *_Str;
  undefined1 local_res8 [8];
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_98;
  FTextFormat local_88;
  FText local_78;
  FTextFormat local_68;
  FFormatArgumentValue local_58;
  undefined4 local_38;
  longlong local_30;
  longlong *local_28;
  undefined4 local_20;
  
  this_00 = &this->_padding_;
  FVar6 = FDS_DataContainer::TransformIndexToName<enum_EDS_WaitCompleteListData>
                    ((FDS_DataContainer *)this_00,(EDS_WaitCompleteListData)local_res8);
  uVar1 = *(undefined8 *)FVar6;
  uVar3 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar7 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)this_00,uVar3 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar6);
  if ((pFVar7->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
  }
  iVar4 = _wtoi(_Str);
  EVar2 = FDS_DataContainer::GetData<enum_EDS_WaitCompleteType,enum_EDS_WaitCompleteListData>
                    ((FDS_DataContainer *)this_00,WaitCompleteType);
  iVar5 = DS_WaitCompleteDataUtil::GetWaitCompleteDataCount(EVar2);
  pFVar8 = FText::FromString(&local_78,L"{0}/{1}");
  pFVar9 = FTextFormat::FTextFormat(&local_68,pFVar8,Default);
  local_58.Type = Int;
  local_58.TextValue.field0_0x0.TypedValue.TextData.Reference =
       (TRefCountPtr<ITextData>)(ITextData *)0x0;
  local_58.TextValue.field0_0x0.TypedValue.Flags = 0;
  local_38 = 0;
  local_28 = (longlong *)0x0;
  local_20 = 0;
  local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.ArrayNum = 2;
  local_58.field1_0x8 = (FFormatArgumentValue_u_8)(longlong)iVar5;
  local_30 = (longlong)iVar4;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,2,0,&local_98.AllocatorInstance,2,&local_98.ArrayMax);
  ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
            (local_98.AllocatorInstance.Data,&local_58,2);
  local_88.TextFormatData.Object = (pFVar9->TextFormatData).Object;
  local_88.TextFormatData.SharedReferenceCount.ReferenceController =
       (pFVar9->TextFormatData).SharedReferenceCount.ReferenceController;
  if (local_88.TextFormatData.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_88.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_88.TextFormatData.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  FText::Format(__return_storage_ptr__,&local_88,&local_98);
  DestructItems<FFormatArgumentValue,int>
            ((FFormatArgumentValue *)local_98.AllocatorInstance.Data,local_98.ArrayNum);
  if ((FFormatArgumentValue *)local_98.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
    FMemory::Free(local_98.AllocatorInstance.Data);
  }
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x10))();
  }
  if (local_58.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_58.TextValue.field0_0x0.TypedValue.TextData.Reference
                + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pFVar9->TextFormatData).SharedReferenceCount.ReferenceController);
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// InitModel @ 14bd68f40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UDS_M_WaitCompleteList::InitModel
          (UDS_M_WaitCompleteList *this,ulong64 param_1,EDS_WaitCompleteType param_2)

{
  int *piVar1;
  undefined8 uVar2;
  FScriptContainerElement *pFVar3;
  FWeakObjectPtr *pFVar4;
  code *pcVar5;
  UDS_M_WaitCompleteList *this_00;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  FName FVar10;
  FString *pFVar11;
  UEnum *this_01;
  UObject *pUVar12;
  UDS_ModelBase *this_02;
  FName *pFVar13;
  UClass *pUVar14;
  UDS_M_WaitCompleteList *this_03;
  longlong *plVar15;
  longlong *plVar16;
  TArray<TWeakObjectPtr<UDS_M_WaitCompleteListSlot,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
  *pTVar17;
  wchar_t *_Str;
  undefined1 auStackY_2c8 [32];
  FWeakObjectPtr local_278;
  int local_270;
  UDS_M_WaitCompleteList *local_268;
  FString local_260;
  FString local_250;
  UDS_M_CommonIconTextButton *local_240;
  FDS_Text local_238;
  undefined1 local_1e8 [8];
  undefined1 local_1e0 [8];
  FName local_1d8;
  undefined1 local_1d0 [8];
  undefined1 local_1c8 [128];
  undefined1 local_148 [128];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  plVar16 = &this->_padding_;
  local_268 = this;
  ::FString::PrintfImpl(&local_260,L"%llu");
  FVar10 = FDS_DataContainer::TransformIndexToName<enum_EDS_WaitCompleteListData>
                     ((FDS_DataContainer *)plVar16,(EDS_WaitCompleteListData)local_1e8);
  uVar2 = *(undefined8 *)FVar10;
  uVar7 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
  pFVar11 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
            ::FindOrAddImpl<FName>
                      ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                        *)plVar16,uVar7 + (int)((ulonglong)uVar2 >> 0x20),(FName *)FVar10);
  if (pFVar11 != &local_260) {
    pFVar3 = (pFVar11->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar11->Data).AllocatorInstance.Data = local_260.Data.AllocatorInstance.Data;
    local_260.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar11->Data).ArrayNum = local_260.Data.ArrayNum;
    (pFVar11->Data).ArrayMax = local_260.Data.ArrayMax;
    local_260.Data.ArrayNum = 0;
    local_260.Data.ArrayMax = 0;
  }
  if (local_260.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_260.Data.AllocatorInstance.Data);
  }
  this_01 = StaticEnum<enum_EDS_WaitCompleteType>();
  _Str = L"";
  if (this_01 == (UEnum *)0x0) {
    ::FString::FString(&local_250,L"");
  }
  else {
    UEnum::GetNameStringByValue(this_01,&local_250,(ulonglong)param_2);
  }
  FVar10 = FDS_DataContainer::TransformIndexToName<enum_EDS_WaitCompleteListData>
                     ((FDS_DataContainer *)plVar16,(EDS_WaitCompleteListData)local_1e0);
  uVar2 = *(undefined8 *)FVar10;
  uVar7 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
  pFVar11 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
            ::FindOrAddImpl<FName>
                      ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                        *)plVar16,uVar7 + (int)((ulonglong)uVar2 >> 0x20),(FName *)FVar10);
  iVar8 = local_250.Data.ArrayNum + -1;
  if (local_250.Data.ArrayNum == 0) {
    iVar8 = 0;
  }
  ::FString::AssignRange(pFVar11,(wchar_t *)local_250.Data.AllocatorInstance.Data,iVar8);
  if (local_250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_250.Data.AllocatorInstance.Data);
  }
  bVar6 = TWeakObjectPtr<UDS_M_CommonIconTextButton,FWeakObjectPtr>::UEOpEquals
                    (&this->AllCompleteButtonModel,(void *)0x0);
  if (bVar6) {
    local_240 = UDS_ModelBase::AddChildModel1<UDS_M_CommonIconTextButton>((UDS_ModelBase *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_240 != (UDS_M_CommonIconTextButton *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_240);
    }
    FWeakObjectPtr::operator=(&(this->AllCompleteButtonModel).WeakPtr,(FObjectPtr)&local_240);
    bVar6 = FWeakObjectPtr::IsValid(&(this->AllCompleteButtonModel).WeakPtr);
    if (bVar6) {
      pUVar12 = FWeakObjectPtr::Get(&(this->AllCompleteButtonModel).WeakPtr);
      local_238.StringTableType = StringUi;
      local_238.StringTableID = 0x1870f;
      local_238.StringEnumTableNameID.ComparisonIndex.Value = 0;
      local_238.StringEnumTableNameID.Number = 0;
      local_238.TimeExpressionType = None;
      local_238.DateTime.Ticks = 0;
      local_238.TimeSpan.Ticks = 0;
      local_238.IsExpression = false;
      local_238.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_238.UniqueString.Data.ArrayNum = 0;
      local_238.UniqueString.Data.ArrayMax = 0;
      local_238.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_238.FormatArgs.ArrayNum = 0;
      local_238.FormatArgs.ArrayMax = 0;
      FDS_DataContainer::SetData<FDS_Text,enum_EDS_CommonIconTextButtonData>
                ((FDS_DataContainer *)&pUVar12[1].field_0x18,ButtonText,&local_238);
      this_02 = (UDS_ModelBase *)FWeakObjectPtr::Get(&(this->AllCompleteButtonModel).WeakPtr);
      pFVar13 = ::FName::FName(&local_1d8,L"DS_VM_CommonIconTextButtonCompleteAll");
      UDS_ModelBase::SetViewModelName(this_02,*pFVar13);
    }
  }
  UpdateAllCompleteButton(this);
  UpdateMaxSlotCount(this);
  pTVar17 = &this->SlotModelList;
  (this->SlotModelList).ArrayNum = 0;
  piVar1 = &(this->SlotModelList).ArrayMax;
  if ((this->SlotModelList).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&pTVar17->AllocatorInstance,0,piVar1);
  }
  local_270 = 0;
  FVar10 = FDS_DataContainer::TransformIndexToName<enum_EDS_WaitCompleteListData>
                     ((FDS_DataContainer *)plVar16,(EDS_WaitCompleteListData)local_1d0);
  uVar2 = *(undefined8 *)FVar10;
  uVar7 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
  pFVar11 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
            ::FindOrAddImpl<FName>
                      ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                        *)plVar16,uVar7 + (int)((ulonglong)uVar2 >> 0x20),(FName *)FVar10);
  if ((pFVar11->Data).ArrayNum != 0) {
    _Str = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
  }
  iVar8 = _wtoi(_Str);
  this_00 = local_268;
  if (0 < iVar8) {
    do {
      if (param_2 == ItemCraft) {
        pUVar12 = GetTransientPackageAsObject();
        FObjectInitializer::AssertIfInConstructor
                  (pUVar12,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
        pUVar14 = Z_Construct_UClass_UDS_M_WaitCompleteItemCraftSlot_NoRegister();
        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                  ((FStaticConstructObjectParameters *)local_c8,pUVar14);
        local_c8._8_8_ = pUVar12;
        this_03 = (UDS_M_WaitCompleteList *)
                  StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
        if (local_c8._64_8_ != 0) {
          plVar16 = (longlong *)(local_c8 + 0x50);
          plVar15 = (longlong *)local_c8._104_8_;
          goto LAB_14bd69325;
        }
      }
      else if (param_2 == ItemRestore) {
        pUVar12 = GetTransientPackageAsObject();
        FObjectInitializer::AssertIfInConstructor
                  (pUVar12,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
        pUVar14 = Z_Construct_UClass_UDS_M_WaitCompleteItemRestoreSlot_NoRegister();
        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                  ((FStaticConstructObjectParameters *)local_148,pUVar14);
        local_148._8_8_ = pUVar12;
        this_03 = (UDS_M_WaitCompleteList *)
                  StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_148);
        if (local_148._64_8_ != 0) {
          plVar16 = (longlong *)(local_148 + 0x50);
          plVar15 = (longlong *)local_148._104_8_;
          goto LAB_14bd69325;
        }
      }
      else {
        pUVar12 = GetTransientPackageAsObject();
        FObjectInitializer::AssertIfInConstructor
                  (pUVar12,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
        pUVar14 = Z_Construct_UClass_UDS_M_WaitCompleteListSlot_NoRegister();
        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                  ((FStaticConstructObjectParameters *)local_1c8,pUVar14);
        local_1c8._8_8_ = pUVar12;
        this_03 = (UDS_M_WaitCompleteList *)
                  StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1c8);
        if (local_1c8._64_8_ != 0) {
          plVar16 = (longlong *)(local_1c8 + 0x50);
          plVar15 = (longlong *)local_1c8._104_8_;
LAB_14bd69325:
          if (plVar15 != (longlong *)0x0) {
            plVar16 = plVar15;
          }
          (**(code **)(*plVar16 + 0x10))();
        }
      }
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (this_03 == (UDS_M_WaitCompleteList *)0x0) goto LAB_14bd69491;
        UE::GC::MarkAsReachable((UObject *)this_03);
      }
      if (this_03 == (UDS_M_WaitCompleteList *)0x0) {
LAB_14bd69491:
        bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_3512716548668129208>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_WaitCompleteList.cpp"
                           ,0x48,"false");
        if (!bVar6) {
          return;
        }
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      UDS_ModelBase::SetViewModelTemplateKey((UDS_ModelBase *)this_03,WaitComplete_List_Slot);
      UDS_ModelBase::AddChildModelInternal((UDS_ModelBase *)this_00,(UDS_ModelBase *)this_03);
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this_03);
      }
      local_278.ObjectIndex = 0;
      local_278.ObjectSerialNumber = 0;
      local_268 = this_03;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this_03);
      }
      FWeakObjectPtr::operator=(&local_278,(FObjectPtr)&local_268);
      pFVar4 = (FWeakObjectPtr *)(pTVar17->AllocatorInstance).Data;
      if (((pFVar4 <= &local_278) && (&local_278 < pFVar4 + *piVar1)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar9 = (this->SlotModelList).ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&pTVar17->AllocatorInstance,piVar1);
      }
      (this->SlotModelList).ArrayNum = iVar9 + 1;
      *(FWeakObjectPtr *)((pTVar17->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_278;
      local_270 = local_270 + 1;
    } while (local_270 < iVar8);
  }
  UDS_ModelBase::SetViewModelTemplateKey((UDS_ModelBase *)this_00,WaitComplete_List);
  return;
}

// OnChangeStatusMaxValue @ 14bd6f1d0

void __thiscall
UDS_M_WaitCompleteList::OnChangeStatusMaxValue(UDS_M_WaitCompleteList *this,float param_1)

{
  code *pcVar1;
  FWeakObjectPtr local_res8;
  undefined8 local_res18 [2];
  
  UpdateMaxSlotCount(this);
  pcVar1 = *(code **)(this->_padding_ + 0x2e0);
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res18[0] = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
  (*pcVar1)(this,local_res8,1);
  return;
}

// OnChangeWaitCompleteDataSet @ 14bd6f230

void __thiscall
UDS_M_WaitCompleteList::OnChangeWaitCompleteDataSet
          (UDS_M_WaitCompleteList *this,UDS_DataSetBase *param_1)

{
  code *pcVar1;
  FWeakObjectPtr local_res8;
  undefined8 local_res18 [2];
  
  UpdateAllCompleteButton(this);
  pcVar1 = *(code **)(this->_padding_ + 0x2e0);
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res18[0] = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
  (*pcVar1)(this,local_res8,1);
  return;
}

// OnDeInit @ 14bd76af0

void __thiscall UDS_M_WaitCompleteList::OnDeInit(UDS_M_WaitCompleteList *this)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res8 [4];
  
  if (this->StatusInfo != (FDS_StatusInfo *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->StatusInfo->ChangeMaxValueDelegate,this);
  }
  TDS_DataSetGetter<UDS_WaitCompleteDataSet>::Get((ulong64)local_res8);
  bVar1 = FWeakObjectPtr::IsValid(local_res8);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(local_res8);
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar2 + 1),(UObject *)this)
    ;
  }
  return;
}

// OnInit @ 14bd79520

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UDS_M_WaitCompleteList::OnInit(UDS_M_WaitCompleteList *this)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  char *pcVar4;
  UObject *this_00;
  UFunction *pUVar5;
  char *pcVar6;
  <lambda_1> local_res8 [8];
  FWeakObjectPtr local_res10;
  FName local_res18;
  FName local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_c8;
  FWeakObjectPtr local_c0;
  FName local_b8;
  UDS_M_WaitCompleteList *local_b0;
  FName *local_a8;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_a0;
  FDestructionSentinel local_90;
  undefined1 local_78 [32];
  FReadAccessScope local_58;
  
  if (this->StatusInfo != (FDS_StatusInfo *)0x0) {
    TMulticastDelegateRegistration<void___cdecl(float),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_M_WaitCompleteList>
              ((TMulticastDelegateRegistration<void___cdecl(float),FDefaultDelegateUserPolicy> *)
               &this->StatusInfo->ChangeMaxValueDelegate,(UDS_M_WaitCompleteList *)local_78,
               (pmf_f65d6382)this);
  }
  TDS_DataSetGetter<UDS_WaitCompleteDataSet>::Get((ulong64)&local_res10);
  bVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (!bVar2) {
    return;
  }
  pUVar3 = FWeakObjectPtr::Get(&local_res10);
  pcVar4 = strstr("&UDS_M_WaitCompleteList::OnChangeWaitCompleteDataSet","::");
  if (pcVar4 == (char *)0x0) {
LAB_14bd795ec:
    pcVar6 = &DAT_00000002;
LAB_14bd795f1:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    do {
      pcVar6 = pcVar4;
      pcVar4 = strstr(pcVar6 + 1,"::");
    } while (pcVar4 != (char *)0x0);
    if (pcVar6 == (char *)0x0) goto LAB_14bd795ec;
    pcVar6 = pcVar6 + 2;
    if (*pcVar6 == '0') goto LAB_14bd795f1;
  }
  ::FName::FName(&local_res20,pcVar6);
  local_c8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_c0.ObjectIndex = 0;
  local_c0.ObjectSerialNumber = 0;
  local_b8.ComparisonIndex.Value = 0;
  local_b8.Number = 0;
  local_res18 = local_res20;
  local_b0 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this != (UDS_M_WaitCompleteList *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_c0,(FObjectPtr)&local_b0);
  local_b8 = local_res18;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_c8,(FReadAccessScope *)(local_78 + 8));
  if ((local_b8 == (FName)0x0) ||
     (this_00 = FWeakObjectPtr::Get(&local_c0), this_00 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_78 + 8));
  }
  else {
    pUVar5 = UObject::FindFunction(this_00,local_b8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_78 + 8));
    if (pUVar5 != (UFunction *)0x0) goto LAB_14bd796e2;
  }
  local_a8 = &local_res18;
  `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,UDS_DataSetBase_*>::
  __Internal_BindDynamic<UDS_M_WaitCompleteList>'::__l2::<lambda_1>::operator()(&local_a8);
LAB_14bd796e2:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_c8,&local_58);
  local_a0.Object = local_c0;
  local_a0.FunctionName = local_b8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_58);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(pUVar3 + 1),
             (FWriteAccessScope *)&local_90);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&pUVar3[1].field_0x8,local_res8,Default);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar3 + 1),&local_a0);
  if (local_90.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_90.Accessor,&local_90);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_c8.AccessDetector);
  return;
}

// OnUpdateModel @ 14bd82da0

void __thiscall
UDS_M_WaitCompleteList::OnUpdateModel
          (UDS_M_WaitCompleteList *this,TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr> param_1)

{
  int iVar1;
  bool bVar2;
  EDS_WaitCompleteType EVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  ulong64 uVar6;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  UObject *local_38;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_30;
  
  local_res10 = param_1.WeakPtr;
  UDS_PlayerData::GetMainPlayerData();
  bVar2 = FWeakObjectPtr::IsValid(&local_res20);
  if (!bVar2) {
    return;
  }
  pUVar4 = FWeakObjectPtr::Get(&local_res10);
  pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar4 + 1));
  if (pUVar4 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_UDS_M_CommonIconTextButton_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14bd82e16;
  }
  pUVar4 = (UObject *)0x0;
LAB_14bd82e16:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  local_38 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_38);
  bVar2 = FWeakObjectPtr::IsValid(&local_res18);
  if (bVar2) {
    pUVar4 = FWeakObjectPtr::Get(&local_res18);
    bVar2 = FDS_DataContainer::GetData<bool,enum_EDS_CommonIconTextButtonData>
                      ((FDS_DataContainer *)&pUVar4[1].field_0x18,IsDisabled);
    if (bVar2) {
      local_30._0_8_ = 0;
      local_30._8_8_ = 0;
      local_30._16_4_ = 0;
      UDS_UIMessageManager::OpenMsgByStringUi(0x188a2,Alert_System_01,&local_30);
    }
    else {
      EVar3 = FDS_DataContainer::GetData<enum_EDS_WaitCompleteType,enum_EDS_WaitCompleteListData>
                        ((FDS_DataContainer *)&this->_padding_,WaitCompleteType);
      if (EVar3 == ItemCraft) {
        pUVar4 = FWeakObjectPtr::Get(&local_res20);
        iVar1 = *(int *)&pUVar4[9].field_0x10;
        uVar6 = FDS_DataContainer::GetData<unsigned___int64,enum_EDS_WaitCompleteListData>
                          ((FDS_DataContainer *)&this->_padding_,NpcEntityID);
        FDS_ItemCraftService::SendItemCraftCompleteAll(uVar6,iVar1);
      }
      else if (EVar3 == ItemRestore) {
        pUVar4 = FWeakObjectPtr::Get(&local_res20);
        iVar1 = *(int *)&pUVar4[9].field_0x10;
        uVar6 = FDS_DataContainer::GetData<unsigned___int64,enum_EDS_WaitCompleteListData>
                          ((FDS_DataContainer *)&this->_padding_,NpcEntityID);
        FDS_ItemRepairService::SendItemRestoreCompleteAll(uVar6,iVar1);
      }
    }
  }
  UDS_ModelBase::OnUpdateModel
            ((UDS_ModelBase *)this,(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>)local_res10);
  return;
}

// UpdateAllCompleteButton @ 14bd8c960

void __thiscall UDS_M_WaitCompleteList::UpdateAllCompleteButton(UDS_M_WaitCompleteList *this)

{
  TWeakObjectPtr<UDS_M_CommonIconTextButton,FWeakObjectPtr> *this_00;
  FWeakObjectPtr *pFVar1;
  code *pcVar2;
  bool bVar3;
  UDS_ModelBase *this_01;
  UDS_WaitCompleteDataSet *this_02;
  UDS_WaitCompleteData *this_03;
  UObject *pUVar4;
  int iVar5;
  ForAnyElementType FVar6;
  EDS_WaitCompleteType local_res8 [8];
  undefined1 local_res10 [8];
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  TArray<TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_38;
  
  this_00 = &this->AllCompleteButtonModel;
  bVar3 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (bVar3) {
    TDS_DataSetGetter<UDS_WaitCompleteDataSet>::Get((ulong64)&local_res18);
    bVar3 = FWeakObjectPtr::IsValid(&local_res18);
    if (bVar3) {
      this_01 = (UDS_ModelBase *)FWeakObjectPtr::Get(&this_00->WeakPtr);
      UDS_ModelBase::SetDirty(this_01,true);
      this_02 = (UDS_WaitCompleteDataSet *)FWeakObjectPtr::Get(&local_res18);
      local_res8[0] =
           FDS_DataContainer::GetData<enum_EDS_WaitCompleteType,enum_EDS_WaitCompleteListData>
                     ((FDS_DataContainer *)&this->_padding_,WaitCompleteType);
      UDS_WaitCompleteDataSet::GetAllData(this_02,&local_38,local_res8);
      iVar5 = local_38.ArrayNum;
      pFVar1 = (FWeakObjectPtr *)(local_38.AllocatorInstance.Data + (longlong)iVar5 * 8);
      FVar6.Data = local_38.AllocatorInstance.Data;
      while( true ) {
        if (local_38.ArrayNum != iVar5) {
          `TCheckedPointerIterator<TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr>,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_res10);
        }
        if ((FWeakObjectPtr *)FVar6.Data == pFVar1) break;
        local_res20 = *(FWeakObjectPtr *)FVar6.Data;
        bVar3 = FWeakObjectPtr::IsValid(&local_res20);
        if (bVar3) {
          this_03 = (UDS_WaitCompleteData *)FWeakObjectPtr::Get(&local_res20);
          bVar3 = UDS_WaitCompleteData::IsComplete(this_03);
          if (bVar3) {
            pUVar4 = FWeakObjectPtr::Get(&this_00->WeakPtr);
            FDS_DataContainer::SetData<bool,enum_EDS_CommonIconTextButtonData>
                      ((FDS_DataContainer *)&pUVar4[1].field_0x18,IsDisabled,false);
            if (local_38.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
              return;
            }
            FMemory::Free(local_38.AllocatorInstance.Data);
            return;
          }
        }
        FVar6.Data = FVar6.Data + 8;
      }
      if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.AllocatorInstance.Data);
      }
      pUVar4 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      FDS_DataContainer::SetData<bool,enum_EDS_CommonIconTextButtonData>
                ((FDS_DataContainer *)&pUVar4[1].field_0x18,IsDisabled,true);
      return;
    }
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3512716548668129117>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_WaitCompleteList.cpp"
                       ,0xa3,"false");
    if (!bVar3) {
      return;
    }
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3512716548668129120>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_WaitCompleteList.cpp"
                       ,0xa0,"false");
    if (!bVar3) {
      return;
    }
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// UpdateMaxSlotCount @ 14bd92270

void __thiscall UDS_M_WaitCompleteList::UpdateMaxSlotCount(UDS_M_WaitCompleteList *this)

{
  longlong *this_00;
  undefined8 uVar1;
  FScriptContainerElement *pFVar2;
  EDS_WaitCompleteType EVar3;
  uint uVar4;
  FDS_StatusInfo *pFVar5;
  FName FVar6;
  FString *pFVar7;
  EDS_StatusType local_res8 [2];
  FString local_18;
  
  this_00 = &this->_padding_;
  EVar3 = FDS_DataContainer::GetData<enum_EDS_WaitCompleteType,enum_EDS_WaitCompleteListData>
                    ((FDS_DataContainer *)this_00,WaitCompleteType);
  if (EVar3 == ItemCraft) {
    local_res8[0] = WaitCompleteItemCraft;
    pFVar5 = UDS_CharStatusDataUtil::GetCurrentCharStatusInfo(local_res8);
    this->StatusInfo = pFVar5;
    local_res8[0] = WaitCompleteItemCraft;
    UDS_CharStatusDataUtil::GetCurrentCharStatusMaxValueAsInt32(local_res8);
  }
  DS_WaitCompleteDataUtil::GetWaitCompleteDataCount(EVar3);
  ::FString::PrintfImpl(&local_18,L"%d");
  FVar6 = FDS_DataContainer::TransformIndexToName<enum_EDS_WaitCompleteListData>
                    ((FDS_DataContainer *)this_00,(EDS_WaitCompleteListData)local_res8);
  uVar1 = *(undefined8 *)FVar6;
  uVar4 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar7 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)this_00,uVar4 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar6);
  if (pFVar7 != &local_18) {
    pFVar2 = (pFVar7->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar7->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar7->Data).ArrayNum = local_18.Data.ArrayNum;
    (pFVar7->Data).ArrayMax = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

