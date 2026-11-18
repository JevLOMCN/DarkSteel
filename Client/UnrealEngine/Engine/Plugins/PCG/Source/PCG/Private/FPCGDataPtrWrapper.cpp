// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 15

// StaticStruct @ 149858060

UScriptStruct * __cdecl FPCGDataPtrWrapper::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGDataPtrWrapper.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGDataPtrWrapper.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGDataPtrWrapper,(UObject *)pUVar1,
                         L"PCGDataPtrWrapper");
  }
  return Z_Registration_Info_UScriptStruct_FPCGDataPtrWrapper.OuterSingleton;
}

// FPCGDataPtrWrapper @ 14988c280

FPCGDataPtrWrapper * __thiscall
FPCGDataPtrWrapper::FPCGDataPtrWrapper(FPCGDataPtrWrapper *this,FPCGDataPtrWrapper *param_1)

{
  UPCGData *pUVar1;
  FWeakObjectPtr local_res8;
  undefined8 local_res10;
  
  (this->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
  (this->WeakData).WeakPtr = (FWeakObjectPtr)0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (param_1->Data).field0_0x0.DebugPtr, pUVar1 != (UPCGData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->Data).field0_0x0 = (param_1->Data).field0_0x0;
  (this->WeakData).WeakPtr = (param_1->WeakData).WeakPtr;
  (param_1->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  (param_1->WeakData).WeakPtr = local_res8;
  return this;
}

// FPCGDataPtrWrapper @ 14988c300

FPCGDataPtrWrapper * __thiscall
FPCGDataPtrWrapper::FPCGDataPtrWrapper(FPCGDataPtrWrapper *this,FPCGDataPtrWrapper *param_1)

{
  UPCGData *pUVar1;
  FWeakObjectPtr local_res8;
  UPCGData *local_res10;
  
  (this->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
  (this->WeakData).WeakPtr = (FWeakObjectPtr)0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (param_1->Data).field0_0x0.DebugPtr, pUVar1 != (UPCGData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->Data).field0_0x0 = (param_1->Data).field0_0x0;
  pUVar1 = (param_1->Data).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar1 != (UPCGData *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UPCGData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UPCGData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  pUVar1 = (this->Data).field0_0x0.DebugPtr;
  (this->WeakData).WeakPtr = local_res8;
  if (pUVar1 != (UPCGData *)0x0) {
    UPCGData::IncCollectionRefCount(pUVar1);
  }
  return this;
}

// FPCGDataPtrWrapper @ 14988c3d0

FPCGDataPtrWrapper * __thiscall
FPCGDataPtrWrapper::FPCGDataPtrWrapper(FPCGDataPtrWrapper *this,UPCGData *param_1)

{
  UPCGData *this_00;
  UPCGData *local_res8;
  
  (this->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
  (this->WeakData).WeakPtr = (FWeakObjectPtr)0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UPCGData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->Data).field0_0x0.DebugPtr = param_1;
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UPCGData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->WeakData).WeakPtr,(FObjectPtr)&local_res8);
  this_00 = (this->Data).field0_0x0.DebugPtr;
  if (this_00 != (UPCGData *)0x0) {
    UPCGData::IncCollectionRefCount(this_00);
  }
  return this;
}

// ~FPCGDataPtrWrapper @ 149891180

void __thiscall FPCGDataPtrWrapper::~FPCGDataPtrWrapper(FPCGDataPtrWrapper *this)

{
  DecRefCount(&this->WeakData);
  return;
}

// operator= @ 149892470

FPCGDataPtrWrapper * __thiscall
FPCGDataPtrWrapper::operator=(FPCGDataPtrWrapper *this,FPCGDataPtrWrapper *param_1)

{
  UPCGData *pUVar1;
  FWeakObjectPtr local_res8;
  undefined8 local_res10;
  FWeakObjectPtr local_res18;
  
  local_res18 = (this->WeakData).WeakPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (pUVar1 = (param_1->Data).field0_0x0.DebugPtr, pUVar1 != (UPCGData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->Data).field0_0x0 = (param_1->Data).field0_0x0;
  (this->WeakData).WeakPtr = (param_1->WeakData).WeakPtr;
  (param_1->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  (param_1->WeakData).WeakPtr = local_res8;
  DecRefCount((TWeakObjectPtr<UPCGData_const_,FWeakObjectPtr> *)&local_res18);
  return this;
}

// operator= @ 149892500

FPCGDataPtrWrapper * __thiscall
FPCGDataPtrWrapper::operator=(FPCGDataPtrWrapper *this,FPCGDataPtrWrapper *param_1)

{
  UPCGData *pUVar1;
  FWeakObjectPtr local_res8;
  
  local_res8 = (this->WeakData).WeakPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (pUVar1 = (param_1->Data).field0_0x0.DebugPtr, pUVar1 != (UPCGData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  pUVar1 = (param_1->Data).field0_0x0.DebugPtr;
  (this->Data).field0_0x0.DebugPtr = pUVar1;
  (this->WeakData).WeakPtr = (param_1->WeakData).WeakPtr;
  if (pUVar1 != (UPCGData *)0x0) {
    UPCGData::IncCollectionRefCount(pUVar1);
  }
  DecRefCount((TWeakObjectPtr<UPCGData_const_,FWeakObjectPtr> *)&local_res8);
  return this;
}

// operator= @ 149892570

FPCGDataPtrWrapper * __thiscall
FPCGDataPtrWrapper::operator=(FPCGDataPtrWrapper *this,UPCGData *param_1)

{
  UPCGData *this_00;
  UPCGData *local_res8;
  FWeakObjectPtr local_res10;
  
  local_res10 = (this->WeakData).WeakPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UPCGData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->Data).field0_0x0.DebugPtr = param_1;
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UPCGData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->WeakData).WeakPtr,(FObjectPtr)&local_res8);
  this_00 = (this->Data).field0_0x0.DebugPtr;
  if (this_00 != (UPCGData *)0x0) {
    UPCGData::IncCollectionRefCount(this_00);
  }
  DecRefCount((TWeakObjectPtr<UPCGData_const_,FWeakObjectPtr> *)&local_res10);
  return this;
}

// DecRefCount @ 1498b1170

void __thiscall FPCGDataPtrWrapper::DecRefCount(FPCGDataPtrWrapper *this)

{
  DecRefCount(&this->WeakData);
  return;
}

// DecRefCount @ 1498b1180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FPCGDataPtrWrapper::DecRefCount(TWeakObjectPtr<UPCGData_const_,FWeakObjectPtr> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  UPCGData *this;
  FWeakObjectPtr FVar3;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar4;
  FTSTicker *this_00;
  undefined ***pppuVar5;
  undefined1 auStackY_98 [32];
  char local_68 [8];
  TWeakPtr<FTSTicker::FElement,1> local_60;
  code *local_48 [2];
  undefined **local_38;
  FWeakObjectPtr local_30;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_98;
  TVar4 = FWeakObjectPtr::TryPin(&param_1->WeakPtr,(bool *)&local_60,SUB81(local_68,0));
  this = *(UPCGData **)TVar4.Object;
  *(undefined8 *)TVar4.Object = 0;
  if (local_60.Object != (FElement *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject((UObject *)local_60.Object);
  }
  if (this == (UPCGData *)0x0) {
    if (local_68[0] == '\0') {
      FVar3 = param_1->WeakPtr;
      this_00 = FTSTicker::GetCoreTicker();
      local_20 = (undefined ***)0x0;
      local_38 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`ExecuteOnGameThread<`FPCGDataPtrWrapper::DecRefCount'::`9'::<lambda_1>_>'::`2'::<lambda_1>,1,0>
                  ::_vftable_;
      local_48[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`ExecuteOnGameThread<`FPCGDataPtrWrapper::DecRefCount'::__l9::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
                    ::Call;
      local_30 = FVar3;
      FTSTicker::AddTicker
                (this_00,&local_60,
                 L"C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGDataPtrWrapper.cpp(99)"
                 ,0.0,(TUniqueFunction<bool___cdecl(float)> *)local_48);
      if (local_60.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &(local_60.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)((local_60.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                    (local_60.WeakReferenceCount.ReferenceController,1);
        }
      }
      if (local_48[0] != (code *)0x0) {
        pppuVar5 = &local_38;
        if (local_20 != (undefined ***)0x0) {
          pppuVar5 = local_20;
        }
        (*(code *)(*pppuVar5)[2])();
      }
    }
  }
  else {
    UPCGData::DecCollectionRefCount(this);
    UEStrongObjectPtr_Private::ReleaseUObject((UObject *)this);
  }
  return;
}

// ImportTextItem @ 1498ca750

bool __thiscall
FPCGDataPtrWrapper::ImportTextItem
          (FPCGDataPtrWrapper *this,wchar_t **param_1,int param_2,UObject *param_3,
          FOutputDevice *param_4)

{
  UPCGData *pUVar1;
  UScriptStruct *this_00;
  UPackage *pUVar2;
  FName local_res8;
  UPCGData *local_res10;
  FWeakObjectPtr local_38;
  FString local_30;
  
  local_38 = (this->WeakData).WeakPtr;
  if (Z_Registration_Info_UScriptStruct_FPCGDataPtrWrapper.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGDataPtrWrapper.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGDataPtrWrapper,(UObject *)pUVar2,
                         L"PCGDataPtrWrapper");
  }
  this_00 = Z_Registration_Info_UScriptStruct_FPCGDataPtrWrapper.OuterSingleton;
  if (Z_Registration_Info_UScriptStruct_FPCGDataPtrWrapper.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGDataPtrWrapper.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGDataPtrWrapper,(UObject *)pUVar2,
                         L"PCGDataPtrWrapper");
  }
  local_res8 = (FName)(Z_Registration_Info_UScriptStruct_FPCGDataPtrWrapper.OuterSingleton)->
                      _padding_;
  ::FName::ToString(&local_res8,&local_30);
  UScriptStruct::ImportText(this_00,*param_1,this,param_3,param_2,param_4,&local_30,false);
  if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data.AllocatorInstance.Data);
  }
  pUVar1 = (this->Data).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar1 != (UPCGData *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UPCGData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_res10 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UPCGData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_res8,(FObjectPtr)&local_res10);
  pUVar1 = (this->Data).field0_0x0.DebugPtr;
  (this->WeakData).WeakPtr = (FWeakObjectPtr)local_res8;
  if (pUVar1 != (UPCGData *)0x0) {
    UPCGData::IncCollectionRefCount(pUVar1);
  }
  DecRefCount((TWeakObjectPtr<UPCGData_const_,FWeakObjectPtr> *)&local_38);
  return true;
}

// IncRefCount @ 1498caa50

void __thiscall FPCGDataPtrWrapper::IncRefCount(FPCGDataPtrWrapper *this)

{
  atomic<int> *paVar1;
  UPCGData *pUVar2;
  
  pUVar2 = (this->Data).field0_0x0.DebugPtr;
  if (pUVar2 == (UPCGData *)0x0) {
    return;
  }
  LOCK();
  paVar1 = &pUVar2->CollectionRefCount;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  return;
}

// IncRefCount @ 1498caa70

void __cdecl FPCGDataPtrWrapper::IncRefCount(UPCGData *param_1)

{
  if (param_1 == (UPCGData *)0x0) {
    return;
  }
  LOCK();
  param_1->CollectionRefCount = (atomic<int>)((int)param_1->CollectionRefCount + 1);
  UNLOCK();
  return;
}

// Serialize @ 1498de5a0

bool __thiscall FPCGDataPtrWrapper::Serialize(FPCGDataPtrWrapper *this,FArchive *param_1)

{
  UPCGData *pUVar1;
  FLLMScope local_res8 [2];
  FName local_res10;
  UPCGData *local_res18;
  FWeakObjectPtr local_res20;
  FMemScope local_28 [3];
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_PCG.UniqueName,false,None,Default,true);
  local_res10 = LLMTagDeclaration_PCG.UniqueName;
  FMemScope::FMemScope(local_28,&local_res10,true);
  local_res20 = (this->WeakData).WeakPtr;
  (**(code **)(*(longlong *)param_1 + 0x150))(param_1,this);
  if ((param_1->field_0x28 & 1) != 0) {
    pUVar1 = (this->Data).field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar1 != (UPCGData *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UPCGData *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
    }
    local_res10.ComparisonIndex.Value = 0;
    local_res10.Number = 0;
    local_res18 = pUVar1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UPCGData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_res10,(FObjectPtr)&local_res18);
    pUVar1 = (this->Data).field0_0x0.DebugPtr;
    (this->WeakData).WeakPtr = (FWeakObjectPtr)local_res10;
    if (pUVar1 != (UPCGData *)0x0) {
      UPCGData::IncCollectionRefCount(pUVar1);
    }
    DecRefCount((TWeakObjectPtr<UPCGData_const_,FWeakObjectPtr> *)&local_res20);
  }
  FMemScope::~FMemScope(local_28);
  FLLMScope::~FLLMScope(local_res8);
  return true;
}

// SerializeFromMismatchedTag @ 1498de870

bool __thiscall
FPCGDataPtrWrapper::SerializeFromMismatchedTag
          (FPCGDataPtrWrapper *this,FPropertyTag *param_1,FStructuredArchiveSlot param_2)

{
  ulonglong uVar1;
  UPCGData *this_00;
  TObjectPtr<UPCGData_const_>_u_0 TVar2;
  FNameEntryId FVar3;
  FName FVar4;
  undefined4 extraout_var;
  TObjectPtr<UPCGData_const_>_u_0 local_res10;
  FWeakObjectPtr local_res20;
  TObjectPtr<UPCGData_const_>_u_0 local_18;
  
  local_res10._0_4_ = (param_1->TypeName).Index;
  FVar4 = UE::FPropertyTypeName::GetName((FPropertyTypeName *)&local_res10.ObjectPtr);
  uVar1 = *(ulonglong *)FVar4;
  FVar3 = FNameEntryId::FromValidEName((EName)&local_res20);
  if (uVar1 == *(uint *)CONCAT44(extraout_var,FVar3.Value)) {
    local_res10.DebugPtr = (UPCGData *)0x0;
    (**(code **)(**(longlong **)(*(longlong *)param_2 + 8) + 0x150))
              (*(longlong **)(*(longlong *)param_2 + 8),&local_res10);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_res10.DebugPtr != (UPCGData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res10.DebugPtr);
    }
    TVar2 = local_res10;
    (this->Data).field0_0x0.DebugPtr = (UPCGData *)local_res10;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (local_res10.DebugPtr != (UPCGData *)0x0) {
        UE::GC::MarkAsReachable((UObject *)local_res10.DebugPtr);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar2.DebugPtr != (UPCGData *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
      }
    }
    local_res20.ObjectIndex = 0;
    local_res20.ObjectSerialNumber = 0;
    local_18 = TVar2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar2.DebugPtr != (UPCGData *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
    }
    FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_18);
    this_00 = (this->Data).field0_0x0.DebugPtr;
    (this->WeakData).WeakPtr = local_res20;
    if (this_00 != (UPCGData *)0x0) {
      UPCGData::IncCollectionRefCount(this_00);
    }
    return true;
  }
  return false;
}

