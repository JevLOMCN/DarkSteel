// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 9

// StaticStruct @ 14a4c29d0

UScriptStruct * __cdecl FRigDispatch_ComponentBase::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigDispatch_ComponentBase.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigDispatch_ComponentBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigDispatch_ComponentBase,(UObject *)pUVar1,
                         L"RigDispatch_ComponentBase");
  }
  return Z_Registration_Info_UScriptStruct_FRigDispatch_ComponentBase.OuterSingleton;
}

// RegisterDependencyTypes_NoLock @ 14a4c34c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
FRigDispatch_ComponentBase::RegisterDependencyTypes_NoLock
          (FRigDispatch_ComponentBase *this,FRigVMRegistryHandle *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  EInternalObjectFlags EVar4;
  uint uVar5;
  FRigVMRegistry_NoLock *pFVar6;
  UScriptStruct *pUVar7;
  FString *pFVar8;
  UClass *pUVar9;
  UScriptStruct *pUVar10;
  wchar_t *pwVar11;
  longlong lVar12;
  undefined1 local_78 [12];
  undefined1 local_6c [12];
  FName local_60;
  UScriptStruct *local_58;
  FName local_50;
  UScriptStruct *local_48;
  FString local_40;
  FString local_30;
  TObjectIterator<UScriptStruct> local_20;
  
  FRigDispatchFactory::RegisterDependencyTypes_NoLock((FRigDispatchFactory *)this,param_1);
  pFVar6 = FRigVMRegistryHandle::operator->(param_1);
  pcVar2 = *(code **)(pFVar6->_padding_ + 0xc0);
  pUVar7 = FRigComponentKey::StaticStruct();
  pFVar8 = RigVMTypeUtils::GetUniqueStructTypeName(&local_40,pUVar7);
  if ((pFVar8->Data).ArrayNum == 0) {
    pwVar11 = L"";
  }
  else {
    pwVar11 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
  }
  ::FName::FName(&local_60,pwVar11);
  if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data.AllocatorInstance.Data);
  }
  local_58 = pUVar7;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  (*pcVar2)(pFVar6,local_78,&local_60,1);
  local_20.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_20.ObjectArray.ArrayNum = 0;
  local_20.ObjectArray.ArrayMax = 0;
  local_20.Index = 0xffffffff;
  EVar4 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar9 = Z_Construct_UClass_UScriptStruct_NoRegister();
  GetObjectsOfClass(pUVar9,&local_20.ObjectArray,true,RF_ClassDefaultObject,
                    EVar4 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  while( true ) {
    TObjectIterator<UScriptStruct>::Advance(&local_20);
    lVar12 = (longlong)local_20.Index;
    if (local_20.Index < 0) break;
    if (local_20.ObjectArray.ArrayNum <= local_20.Index) break;
    uVar5 = 0;
    if (local_20.Index < local_20.ObjectArray.ArrayNum) {
      uVar5 = (uint)~local_20.Index >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pUVar7 = *(UScriptStruct **)(local_20.ObjectArray.AllocatorInstance.Data + lVar12 * 8);
    pUVar10 = FRigBaseComponent::StaticStruct();
    if (pUVar7 != pUVar10) {
      pUVar10 = FRigBaseComponent::StaticStruct();
      if (pUVar10 != (UScriptStruct *)0x0) {
        iVar1 = (int)pUVar10->_padding_;
        if (((int)pUVar7->_padding_ < iVar1) ||
           ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar1 * 8) !=
            &pUVar10->_padding_)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          pFVar6 = FRigVMRegistryHandle::operator->(param_1);
          pcVar2 = *(code **)(pFVar6->_padding_ + 0xc0);
          pFVar8 = RigVMTypeUtils::GetUniqueStructTypeName(&local_30,pUVar7);
          if ((pFVar8->Data).ArrayNum == 0) {
            pwVar11 = L"";
          }
          else {
            pwVar11 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
          }
          ::FName::FName(&local_50,pwVar11);
          if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_30.Data.AllocatorInstance.Data);
          }
          local_48 = pUVar7;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar7 != (UScriptStruct *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar7);
          }
          (*pcVar2)(pFVar6,local_6c,&local_50,1);
        }
      }
    }
  }
  if (local_20.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.ObjectArray.AllocatorInstance.Data);
  }
  return;
}

// GetExecuteContextStruct @ 14a4c3730

UScriptStruct * __thiscall
FRigDispatch_ComponentBase::GetExecuteContextStruct(FRigDispatch_ComponentBase *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FControlRigExecuteContext.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FControlRigExecuteContext.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FControlRigExecuteContext,(UObject *)pUVar1,
                         L"ControlRigExecuteContext");
  }
  return Z_Registration_Info_UScriptStruct_FControlRigExecuteContext.OuterSingleton;
}

// GetExecuteArguments_Impl @ 14a4c3840

TArray<FRigVMExecuteArgument,TSizedDefaultAllocator<32>_> * __thiscall
FRigDispatch_ComponentBase::GetExecuteArguments_Impl
          (FRigDispatch_ComponentBase *this,FRigVMDispatchContext *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  char cVar3;
  int iVar4;
  undefined8 local_res8;
  
  cVar3 = (**(code **)(this->_padding_ + 0x78))();
  if ((cVar3 != '\0') && ((this->ExecuteInfos).ArrayNum == 0)) {
    piVar1 = &(this->ExecuteInfos).ArrayMax;
    iVar4 = 0;
    if (*piVar1 == 0) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x418,&(this->ExecuteInfos).AllocatorInstance,piVar1);
      (this->ExecuteInfos).ArrayNum = iVar4;
    }
    (this->ExecuteInfos).ArrayNum = iVar4 + 1;
    pFVar2 = (this->ExecuteInfos).AllocatorInstance.Data + (longlong)iVar4 * 0x18;
    FLazyName::Resolve(&ExecuteArgName);
    *(undefined8 *)pFVar2 = local_res8;
    pFVar2[8] = (FScriptContainerElement)0x2;
    *(undefined8 *)(pFVar2 + 0xc) = 0;
    *(undefined4 *)(pFVar2 + 0x14) = 0xffffffff;
  }
  return &this->ExecuteInfos;
}

// IsMutable @ 14a4c3900

bool __thiscall FRigDispatch_ComponentBase::IsMutable(FRigDispatch_ComponentBase *this)

{
  return false;
}

// operator= @ 14a519ca0

FRigDispatch_ComponentBase * __thiscall
FRigDispatch_ComponentBase::operator=
          (FRigDispatch_ComponentBase *this,FRigDispatch_ComponentBase *param_1)

{
  int *piVar1;
  TArray<FRigVMExecuteArgument,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  
  FRigDispatchFactory::operator=((FRigDispatchFactory *)this,(FRigDispatchFactory *)param_1);
  pTVar2 = &this->ExecuteInfos;
  if (pTVar2 != &param_1->ExecuteInfos) {
    iVar3 = (this->ExecuteInfos).ArrayMax;
    piVar1 = &(this->ExecuteInfos).ArrayMax;
    _Src = (param_1->ExecuteInfos).AllocatorInstance.Data;
    iVar4 = (param_1->ExecuteInfos).ArrayNum;
    (this->ExecuteInfos).ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar3 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,4,iVar4,iVar3,&pTVar2->AllocatorInstance,iVar4,piVar1);
      if (iVar4 != 0) {
        memcpy((pTVar2->AllocatorInstance).Data,_Src,(longlong)iVar4 * 0x18);
      }
    }
  }
  this->NameArgIndex = param_1->NameArgIndex;
  this->ItemArgIndex = param_1->ItemArgIndex;
  this->KeyArgIndex = param_1->KeyArgIndex;
  this->ComponentArgIndex = param_1->ComponentArgIndex;
  this->SuccessArgIndex = param_1->SuccessArgIndex;
  return this;
}

// GetComponentKeyType @ 14a530520

TRigVMTypeIndex * __cdecl
FRigDispatch_ComponentBase::GetComponentKeyType(FRigVMRegistryHandle *param_1)

{
  code *pcVar1;
  FRigVMRegistry_NoLock *pFVar2;
  UScriptStruct *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  FName local_28;
  UScriptStruct *local_20;
  FString local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar2 = FRigVMRegistryHandle::operator->(param_1);
      pcVar1 = *(code **)(pFVar2->_padding_ + 0xc0);
      pUVar3 = FRigComponentKey::StaticStruct();
      pFVar4 = RigVMTypeUtils::GetUniqueStructTypeName(&local_18,pUVar3);
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
      ::FName::FName(&local_28,pwVar5);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      local_20 = pUVar3;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UScriptStruct *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      (*pcVar1)(pFVar2,&RigComponentKeyType,&local_28,0);
      _Init_thread_footer(&::_TSS0);
      return &RigComponentKeyType;
    }
  }
  return &RigComponentKeyType;
}

// GetElementKeyType @ 14a530640

TRigVMTypeIndex * __cdecl
FRigDispatch_ComponentBase::GetElementKeyType(FRigVMRegistryHandle *param_1)

{
  code *pcVar1;
  FRigVMRegistry_NoLock *pFVar2;
  UScriptStruct *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  FName local_28;
  UScriptStruct *local_20;
  FString local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar2 = FRigVMRegistryHandle::operator->(param_1);
      pcVar1 = *(code **)(pFVar2->_padding_ + 0xc0);
      pUVar3 = FRigElementKey::StaticStruct();
      pFVar4 = RigVMTypeUtils::GetUniqueStructTypeName(&local_18,pUVar3);
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
      ::FName::FName(&local_28,pwVar5);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      local_20 = pUVar3;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UScriptStruct *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      (*pcVar1)(pFVar2,&RigElementKeyType,&local_28,0);
      _Init_thread_footer(&::_TSS0);
      return &RigElementKeyType;
    }
  }
  return &RigElementKeyType;
}

// IsTypeSupported @ 14a5326b0

bool __cdecl
FRigDispatch_ComponentBase::IsTypeSupported(TRigVMTypeIndex *param_1,FRigVMRegistryHandle *param_2)

{
  FObjectPtr_u_0 *this;
  int iVar1;
  UScriptStruct *pUVar2;
  bool bVar3;
  FRigVMRegistry_NoLock *pFVar4;
  longlong lVar5;
  UClass *pUVar6;
  UScriptStruct *pUVar7;
  FName local_18;
  int local_10;
  
  pFVar4 = FRigVMRegistryHandle::operator->(param_2);
  local_10 = param_1->Index;
  local_18 = param_1->Name;
  lVar5 = (**(code **)(pFVar4->_padding_ + 0xe8))(pFVar4,&local_18);
  this = (FObjectPtr_u_0 *)(lVar5 + 8);
  if (((*(longlong *)(lVar5 + 8) != 0) &&
      ((*(uint *)(*(longlong *)(lVar5 + 8) + 8) >> 0x1e & 1) == 0)) &&
     (this->Handle != (UObject *)0x0)) {
    pUVar6 = Z_Construct_UClass_UScriptStruct_NoRegister();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)this,pUVar6);
    if ((bVar3) && (pUVar2 = (UScriptStruct *)this->Handle, pUVar2 != (UScriptStruct *)0x0)) {
      pUVar7 = FRigBaseComponent::StaticStruct();
      if (pUVar2 != pUVar7) {
        pUVar7 = FRigBaseComponent::StaticStruct();
        if (pUVar7 != (UScriptStruct *)0x0) {
          iVar1 = (int)pUVar7->_padding_;
          if (((int)pUVar2->_padding_ < iVar1) ||
             ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
              &pUVar7->_padding_)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            return true;
          }
        }
      }
    }
  }
  return false;
}

