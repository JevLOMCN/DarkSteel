// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PakFile
// Functions: 55

// CreateCopy @ 142a65ed0

void __thiscall
TBaseRawMethodDelegateInstance<0,FPakPlatformFile,int___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FPakPlatformFile,int___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AHAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFPakPlatformFile____A6AHAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_65f4abdb *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142a65f60

void __thiscall
TBaseRawMethodDelegateInstance<0,FPakPlatformFile,int___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FPakPlatformFile,int___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AHAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFPakPlatformFile____A6AHAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_65f4abdb *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 142a65fb0

void __thiscall
TBaseRawMethodDelegateInstance<0,FPakPlatformFile,int___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FPakPlatformFile,int___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AHAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFPakPlatformFile____A6AHAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_65f4abdb *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142a66060

void __thiscall
TBaseRawMethodDelegateInstance<0,FPakPlatformFile,IPakFile_*___cdecl(FString_const_&,int),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FPakPlatformFile,IPakFile_*___cdecl(FString_const_&,int),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6APEAVIPakFile__AEBVFString__H_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFPakPlatformFile____A6APEAVIPakFile__AEBVFString__H_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_4520c83f *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142a660f0

void __thiscall
TBaseRawMethodDelegateInstance<0,FPakPlatformFile,IPakFile_*___cdecl(FString_const_&,int),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FPakPlatformFile,IPakFile_*___cdecl(FString_const_&,int),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6APEAVIPakFile__AEBVFString__H_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFPakPlatformFile____A6APEAVIPakFile__AEBVFString__H_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_4520c83f *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 142a66140

void __thiscall
TBaseRawMethodDelegateInstance<0,FPakPlatformFile,IPakFile_*___cdecl(FString_const_&,int),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FPakPlatformFile,IPakFile_*___cdecl(FString_const_&,int),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6APEAVIPakFile__AEBVFString__H_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFPakPlatformFile____A6APEAVIPakFile__AEBVFString__H_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_4520c83f *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142a661f0

void __thiscall
TBaseRawMethodDelegateInstance<0,FPakPlatformFile,void___cdecl(FGuid_const_&,FAES::FAESKey_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FPakPlatformFile,void___cdecl(FGuid_const_&,FAES::FAESKey_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFGuid__AEBUFAESKey_FAES___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFPakPlatformFile____A6AXAEBUFGuid__AEBUFAESKey_FAES___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_5a5e8888 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142a66280

void __thiscall
TBaseRawMethodDelegateInstance<0,FPakPlatformFile,void___cdecl(FGuid_const_&,FAES::FAESKey_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FPakPlatformFile,void___cdecl(FGuid_const_&,FAES::FAESKey_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFGuid__AEBUFAESKey_FAES___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFPakPlatformFile____A6AXAEBUFGuid__AEBUFAESKey_FAES___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_5a5e8888 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 142a662d0

void __thiscall
TBaseRawMethodDelegateInstance<0,FPakPlatformFile,void___cdecl(FGuid_const_&,FAES::FAESKey_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FPakPlatformFile,void___cdecl(FGuid_const_&,FAES::FAESKey_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFGuid__AEBUFAESKey_FAES___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFPakPlatformFile____A6AXAEBUFGuid__AEBUFAESKey_FAES___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_5a5e8888 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142a66380

void __thiscall
TBaseRawMethodDelegateInstance<0,FPakPlatformFile,void___cdecl(void),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseRawMethodDelegateInstance<0,FPakPlatformFile,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFPakPlatformFile____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_a0f8367f *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142a66410

void __thiscall
TBaseRawMethodDelegateInstance<0,FPakPlatformFile,void___cdecl(void),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseRawMethodDelegateInstance<0,FPakPlatformFile,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFPakPlatformFile____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_a0f8367f *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 142a66460

void __thiscall
TBaseRawMethodDelegateInstance<0,FPakPlatformFile,void___cdecl(void),FDefaultDelegateUserPolicy>::
CreateCopy(TBaseRawMethodDelegateInstance<0,FPakPlatformFile,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFPakPlatformFile____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_a0f8367f *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// CreateCopy @ 142a66510

void __thiscall
TBaseRawMethodDelegateInstance<0,FPakPlatformFile,bool___cdecl(FString_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FPakPlatformFile,bool___cdecl(FString_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_NAEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFPakPlatformFile____A6A_NAEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_0e426bf8 *)(puVar1 + 4) = this->MethodPtr;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 142a665a0

void __thiscall
TBaseRawMethodDelegateInstance<0,FPakPlatformFile,bool___cdecl(FString_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FPakPlatformFile,bool___cdecl(FString_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_NAEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = this->_padding_;
    *puVar1 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFPakPlatformFile____A6A_NAEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = this->UserObject;
    *(pmf_0e426bf8 *)(puVar1 + 4) = this->MethodPtr;
  }
  return;
}

// CreateCopy @ 142a665f0

void __thiscall
TBaseRawMethodDelegateInstance<0,FPakPlatformFile,bool___cdecl(FString_const_&),FDefaultDelegateUserPolicy>
::CreateCopy(TBaseRawMethodDelegateInstance<0,FPakPlatformFile,bool___cdecl(FString_const_&),FDefaultDelegateUserPolicy>
             *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_NAEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = this->_padding_;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFPakPlatformFile____A6A_NAEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = this->UserObject;
    *(pmf_0e426bf8 *)(puVar3 + 4) = this->MethodPtr;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 142a6c3e0

int __thiscall
TBaseRawMethodDelegateInstance<0,FPakPlatformFile,int___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FPakPlatformFile,int___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
          *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FPakPlatformFile *pFVar2;
  FPakPlatformFile *local_res8;
  
  local_res8 = this->UserObject;
  pFVar2 = UE::Core::Private::DereferenceIfNecessary<FPakPlatformFile,FPakPlatformFile_*_&>
                     (&local_res8);
  iVar1 = (*(code *)this->MethodPtr)(pFVar2,param_1);
  return iVar1;
}

// Execute @ 142a6c430

IPakFile * __thiscall
TBaseRawMethodDelegateInstance<0,FPakPlatformFile,IPakFile_*___cdecl(FString_const_&,int),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FPakPlatformFile,IPakFile_*___cdecl(FString_const_&,int),FDefaultDelegateUserPolicy>
          *this,FString *param_1,int param_2)

{
  FPakPlatformFile *pFVar1;
  IPakFile *pIVar2;
  FPakPlatformFile *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FPakPlatformFile,FPakPlatformFile_*_&>
                     (&local_res8);
  pIVar2 = (IPakFile *)(*(code *)this->MethodPtr)(pFVar1,param_1,param_2);
  return pIVar2;
}

// Execute @ 142a6c490

void __thiscall
TBaseRawMethodDelegateInstance<0,FPakPlatformFile,void___cdecl(FGuid_const_&,FAES::FAESKey_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FPakPlatformFile,void___cdecl(FGuid_const_&,FAES::FAESKey_const_&),FDefaultDelegateUserPolicy>
          *this,FGuid *param_1,FAESKey *param_2)

{
  FPakPlatformFile *pFVar1;
  FPakPlatformFile *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FPakPlatformFile,FPakPlatformFile_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1,param_2);
  return;
}

// Execute @ 142a6c4f0

void __thiscall
TBaseRawMethodDelegateInstance<0,FPakPlatformFile,void___cdecl(void),FDefaultDelegateUserPolicy>::
Execute(TBaseRawMethodDelegateInstance<0,FPakPlatformFile,void___cdecl(void),FDefaultDelegateUserPolicy>
        *this)

{
  FPakPlatformFile *pFVar1;
  FPakPlatformFile *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FPakPlatformFile,FPakPlatformFile_*_&>
                     (local_res8);
  (*(code *)this->MethodPtr)(pFVar1);
  return;
}

// Execute @ 142a6c530

bool __thiscall
TBaseRawMethodDelegateInstance<0,FPakPlatformFile,bool___cdecl(FString_const_&),FDefaultDelegateUserPolicy>
::Execute(TBaseRawMethodDelegateInstance<0,FPakPlatformFile,bool___cdecl(FString_const_&),FDefaultDelegateUserPolicy>
          *this,FString *param_1)

{
  undefined1 uVar1;
  FPakPlatformFile *pFVar2;
  FPakPlatformFile *local_res8;
  
  local_res8 = this->UserObject;
  pFVar2 = UE::Core::Private::DereferenceIfNecessary<FPakPlatformFile,FPakPlatformFile_*_&>
                     (&local_res8);
  uVar1 = (*(code *)this->MethodPtr)(pFVar2,param_1);
  return (bool)uVar1;
}

// ExecuteIfSafe @ 142a6c6c0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FPakPlatformFile,int___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FPakPlatformFile,int___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
                *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  FPakPlatformFile *pFVar1;
  FPakPlatformFile *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FPakPlatformFile,FPakPlatformFile_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return true;
}

// ExecuteIfSafe @ 142a6c710

bool __thiscall
TBaseRawMethodDelegateInstance<0,FPakPlatformFile,IPakFile_*___cdecl(FString_const_&,int),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FPakPlatformFile,IPakFile_*___cdecl(FString_const_&,int),FDefaultDelegateUserPolicy>
                *this,FString *param_1,int param_2)

{
  FPakPlatformFile *pFVar1;
  FPakPlatformFile *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FPakPlatformFile,FPakPlatformFile_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1,param_2);
  return true;
}

// ExecuteIfSafe @ 142a6c770

bool __thiscall
TBaseRawMethodDelegateInstance<0,FPakPlatformFile,void___cdecl(FGuid_const_&,FAES::FAESKey_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FPakPlatformFile,void___cdecl(FGuid_const_&,FAES::FAESKey_const_&),FDefaultDelegateUserPolicy>
                *this,FGuid *param_1,FAESKey *param_2)

{
  FPakPlatformFile *pFVar1;
  FPakPlatformFile *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FPakPlatformFile,FPakPlatformFile_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1,param_2);
  return true;
}

// ExecuteIfSafe @ 142a6c7d0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FPakPlatformFile,void___cdecl(void),FDefaultDelegateUserPolicy>::
ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FPakPlatformFile,void___cdecl(void),FDefaultDelegateUserPolicy>
              *this)

{
  FPakPlatformFile *pFVar1;
  FPakPlatformFile *local_res8 [4];
  
  local_res8[0] = this->UserObject;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FPakPlatformFile,FPakPlatformFile_*_&>
                     (local_res8);
  (*(code *)this->MethodPtr)(pFVar1);
  return true;
}

// ExecuteIfSafe @ 142a6c810

bool __thiscall
TBaseRawMethodDelegateInstance<0,FPakPlatformFile,bool___cdecl(FString_const_&),FDefaultDelegateUserPolicy>
::ExecuteIfSafe(TBaseRawMethodDelegateInstance<0,FPakPlatformFile,bool___cdecl(FString_const_&),FDefaultDelegateUserPolicy>
                *this,FString *param_1)

{
  FPakPlatformFile *pFVar1;
  FPakPlatformFile *local_res8;
  
  local_res8 = this->UserObject;
  pFVar1 = UE::Core::Private::DereferenceIfNecessary<FPakPlatformFile,FPakPlatformFile_*_&>
                     (&local_res8);
  (*(code *)this->MethodPtr)(pFVar1,param_1);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 142a72630

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FPakPlatformFile,int___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FPakPlatformFile,int___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 142a72640

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FPakPlatformFile,IPakFile_*___cdecl(FString_const_&,int),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FPakPlatformFile,IPakFile_*___cdecl(FString_const_&,int),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 142a72650

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FPakPlatformFile,void___cdecl(FGuid_const_&,FAES::FAESKey_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FPakPlatformFile,void___cdecl(FGuid_const_&,FAES::FAESKey_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 142a72660

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FPakPlatformFile,void___cdecl(void),FDefaultDelegateUserPolicy>::
GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FPakPlatformFile,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetBoundProgramCounterForTimerManager @ 142a72670

ulong64 __thiscall
TBaseRawMethodDelegateInstance<0,FPakPlatformFile,bool___cdecl(FString_const_&),FDefaultDelegateUserPolicy>
::GetBoundProgramCounterForTimerManager
          (TBaseRawMethodDelegateInstance<0,FPakPlatformFile,bool___cdecl(FString_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return (ulong64)this->MethodPtr;
}

// GetObjectForTimerManager @ 142a760a0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FPakPlatformFile,int___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FPakPlatformFile,int___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 142a760b0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FPakPlatformFile,IPakFile_*___cdecl(FString_const_&,int),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FPakPlatformFile,IPakFile_*___cdecl(FString_const_&,int),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 142a760c0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FPakPlatformFile,void___cdecl(FGuid_const_&,FAES::FAESKey_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FPakPlatformFile,void___cdecl(FGuid_const_&,FAES::FAESKey_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 142a760d0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FPakPlatformFile,void___cdecl(void),FDefaultDelegateUserPolicy>::
GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FPakPlatformFile,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetObjectForTimerManager @ 142a760e0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FPakPlatformFile,bool___cdecl(FString_const_&),FDefaultDelegateUserPolicy>
::GetObjectForTimerManager
          (TBaseRawMethodDelegateInstance<0,FPakPlatformFile,bool___cdecl(FString_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  return this->UserObject;
}

// GetUObject @ 142a7a160

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FPakPlatformFile,int___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FPakPlatformFile,int___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142a7a170

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FPakPlatformFile,IPakFile_*___cdecl(FString_const_&,int),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FPakPlatformFile,IPakFile_*___cdecl(FString_const_&,int),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142a7a180

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FPakPlatformFile,void___cdecl(FGuid_const_&,FAES::FAESKey_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FPakPlatformFile,void___cdecl(FGuid_const_&,FAES::FAESKey_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142a7a190

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FPakPlatformFile,void___cdecl(void),FDefaultDelegateUserPolicy>::
GetUObject(TBaseRawMethodDelegateInstance<0,FPakPlatformFile,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  return (UObject *)0x0;
}

// GetUObject @ 142a7a1a0

UObject * __thiscall
TBaseRawMethodDelegateInstance<0,FPakPlatformFile,bool___cdecl(FString_const_&),FDefaultDelegateUserPolicy>
::GetUObject(TBaseRawMethodDelegateInstance<0,FPakPlatformFile,bool___cdecl(FString_const_&),FDefaultDelegateUserPolicy>
             *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 142a7bf90

bool __thiscall
TBaseRawMethodDelegateInstance<0,FPakPlatformFile,int___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FPakPlatformFile,int___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 142a7bfa0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FPakPlatformFile,IPakFile_*___cdecl(FString_const_&,int),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FPakPlatformFile,IPakFile_*___cdecl(FString_const_&,int),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 142a7bfb0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FPakPlatformFile,void___cdecl(FGuid_const_&,FAES::FAESKey_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FPakPlatformFile,void___cdecl(FGuid_const_&,FAES::FAESKey_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 142a7bfc0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FPakPlatformFile,void___cdecl(void),FDefaultDelegateUserPolicy>::
HasSameObject(TBaseRawMethodDelegateInstance<0,FPakPlatformFile,void___cdecl(void),FDefaultDelegateUserPolicy>
              *this,void *param_1)

{
  return this->UserObject == param_1;
}

// HasSameObject @ 142a7bfd0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FPakPlatformFile,bool___cdecl(FString_const_&),FDefaultDelegateUserPolicy>
::HasSameObject(TBaseRawMethodDelegateInstance<0,FPakPlatformFile,bool___cdecl(FString_const_&),FDefaultDelegateUserPolicy>
                *this,void *param_1)

{
  return this->UserObject == param_1;
}

// IsSafeToExecute @ 142a7f7f0

bool __thiscall
TBaseRawMethodDelegateInstance<0,FPakPlatformFile,int___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FPakPlatformFile,int___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 142a7f800

bool __thiscall
TBaseRawMethodDelegateInstance<0,FPakPlatformFile,IPakFile_*___cdecl(FString_const_&,int),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FPakPlatformFile,IPakFile_*___cdecl(FString_const_&,int),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 142a7f810

bool __thiscall
TBaseRawMethodDelegateInstance<0,FPakPlatformFile,void___cdecl(FGuid_const_&,FAES::FAESKey_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FPakPlatformFile,void___cdecl(FGuid_const_&,FAES::FAESKey_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// IsSafeToExecute @ 142a7f820

bool __thiscall
TBaseRawMethodDelegateInstance<0,FPakPlatformFile,void___cdecl(void),FDefaultDelegateUserPolicy>::
IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FPakPlatformFile,void___cdecl(void),FDefaultDelegateUserPolicy>
                *this)

{
  return true;
}

// IsSafeToExecute @ 142a7f830

bool __thiscall
TBaseRawMethodDelegateInstance<0,FPakPlatformFile,bool___cdecl(FString_const_&),FDefaultDelegateUserPolicy>
::IsSafeToExecute(TBaseRawMethodDelegateInstance<0,FPakPlatformFile,bool___cdecl(FString_const_&),FDefaultDelegateUserPolicy>
                  *this)

{
  return true;
}

// TryGetBoundFunctionName @ 142aa54a0

FName __thiscall
TBaseRawMethodDelegateInstance<0,FPakPlatformFile,int___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FPakPlatformFile,int___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142aa54b0

FName __thiscall
TBaseRawMethodDelegateInstance<0,FPakPlatformFile,IPakFile_*___cdecl(FString_const_&,int),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FPakPlatformFile,IPakFile_*___cdecl(FString_const_&,int),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142aa54c0

FName __thiscall
TBaseRawMethodDelegateInstance<0,FPakPlatformFile,void___cdecl(FGuid_const_&,FAES::FAESKey_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FPakPlatformFile,void___cdecl(FGuid_const_&,FAES::FAESKey_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142aa54d0

FName __thiscall
TBaseRawMethodDelegateInstance<0,FPakPlatformFile,void___cdecl(void),FDefaultDelegateUserPolicy>::
TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FPakPlatformFile,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// TryGetBoundFunctionName @ 142aa54e0

FName __thiscall
TBaseRawMethodDelegateInstance<0,FPakPlatformFile,bool___cdecl(FString_const_&),FDefaultDelegateUserPolicy>
::TryGetBoundFunctionName
          (TBaseRawMethodDelegateInstance<0,FPakPlatformFile,bool___cdecl(FString_const_&),FDefaultDelegateUserPolicy>
           *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

