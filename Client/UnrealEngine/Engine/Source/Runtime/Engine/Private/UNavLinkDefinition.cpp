// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// UNavLinkDefinition @ 1472f1f10

UNavLinkDefinition * __thiscall
UNavLinkDefinition::UNavLinkDefinition(UNavLinkDefinition *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UNavLinkDefinition__6B_;
  (this->Links).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Links).ArrayNum = 0;
  (this->Links).ArrayMax = 0;
  (this->SegmentLinks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SegmentLinks).ArrayNum = 0;
  (this->SegmentLinks).ArrayMax = 0;
  return this;
}

// ~UNavLinkDefinition @ 1472f2400

void __thiscall UNavLinkDefinition::~UNavLinkDefinition(UNavLinkDefinition *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNavLinkDefinition__6B_;
  pFVar1 = (this->SegmentLinks).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Links).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1472f3f30

UClass * __cdecl UNavLinkDefinition::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavLinkDefinition.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NavLinkDefinition",
               &Z_Registration_Info_UClass_UNavLinkDefinition.InnerSingleton,
               StaticRegisterNativesUNavLinkDefinition,0x50,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UNavLinkDefinition>,
               InternalVTableHelperCtorCaller<UNavLinkDefinition>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavLinkDefinition.InnerSingleton;
}

// StaticRegisterNativesUNavLinkDefinition @ 1472f44b0

void __cdecl UNavLinkDefinition::StaticRegisterNativesUNavLinkDefinition(void)

{
  return;
}

// UNavLinkDefinition @ 14737cb90

UNavLinkDefinition * __thiscall
UNavLinkDefinition::UNavLinkDefinition(UNavLinkDefinition *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UNavLinkDefinition__6B_;
  this->bHasInitializedAreaClasses = 0;
  this->bHasAdjustableLinks = 0;
  this->bHasDeterminedAdjustableLinks = 0;
  this->bHasMetaAreaClass = 0;
  this->bHasDeterminedMetaAreaClass = 0;
  (this->Links).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Links).ArrayNum = 0;
  (this->Links).ArrayMax = 0;
  (this->SegmentLinks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SegmentLinks).ArrayNum = 0;
  (this->SegmentLinks).ArrayMax = 0;
  return this;
}

// GetLinksDefinition @ 14739e1a0

TArray<FNavigationLink,TSizedDefaultAllocator<32>_> * __cdecl
UNavLinkDefinition::GetLinksDefinition(UClass *param_1)

{
  UNavLinkDefinition *this;
  
  if (param_1 != (UClass *)0x0) {
    this = UClass::GetDefaultObject<UNavLinkDefinition>(param_1);
    if (this != (UNavLinkDefinition *)0x0) {
      InitializeAreaClass(this);
      return &this->Links;
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UNavLinkDefinition::GetLinksDefinition'::__l2::
             _dynamic_atexit_destructor_for__DummyDefinition__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &DummyDefinition;
}

// GetSegmentLinksDefinition @ 1473a1140

TArray<FNavigationSegmentLink,TSizedDefaultAllocator<32>_> * __cdecl
UNavLinkDefinition::GetSegmentLinksDefinition(UClass *param_1)

{
  UNavLinkDefinition *this;
  
  if (param_1 != (UClass *)0x0) {
    this = UClass::GetDefaultObject<UNavLinkDefinition>(param_1);
    if (this != (UNavLinkDefinition *)0x0) {
      InitializeAreaClass(this);
      return &this->SegmentLinks;
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UNavLinkDefinition::GetSegmentLinksDefinition'::__l2::
             _dynamic_atexit_destructor_for__DummyDefinition__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &DummyDefinition;
}

// HasAdjustableLinks @ 1473a2320

bool __thiscall UNavLinkDefinition::HasAdjustableLinks(UNavLinkDefinition *this)

{
  undefined4 uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  
  uVar1 = *(undefined4 *)&this->field_0x48;
  if (this->bHasDeterminedAdjustableLinks != 0) {
    return ZPULL(uVar1,4,1);
  }
  uVar7 = 0;
  *(uint *)&this->field_0x48 = uVar1 | 8;
  if (0 < (this->Links).ArrayNum) {
    lVar6 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar7 < (this->Links).ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      if (0.0 < *(float *)((this->Links).AllocatorInstance.Data + lVar6 + 4)) goto LAB_1473a2449;
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 0x70;
    } while ((int)uVar7 < (this->Links).ArrayNum);
  }
  uVar7 = 0;
  if (0 < (this->SegmentLinks).ArrayNum) {
    lVar6 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar7 < (this->SegmentLinks).ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      if (0.0 < *(float *)((this->SegmentLinks).AllocatorInstance.Data + lVar6 + 4)) {
LAB_1473a2449:
        this->bHasAdjustableLinks = 1;
        return true;
      }
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 0xa0;
    } while ((int)uVar7 < (this->SegmentLinks).ArrayNum);
  }
  return false;
}

// HasMetaAreaClass @ 1473a2750

bool __thiscall UNavLinkDefinition::HasMetaAreaClass(UNavLinkDefinition *this)

{
  undefined4 uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar1 = *(undefined4 *)&this->field_0x48;
  if (this->bHasDeterminedMetaAreaClass != 0) {
    return ZPULL(uVar1,2,1);
  }
  uVar6 = 0;
  *(uint *)&this->field_0x48 = uVar1 | 2;
  if (0 < (this->Links).ArrayNum) {
    do {
      uVar5 = 0;
      if ((int)uVar6 < (this->Links).ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      if ((this->bHasMetaAreaClass == 0) &&
         (bVar3 = FNavigationLinkBase::HasMetaArea
                            ((FNavigationLinkBase *)
                             ((this->Links).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x70)),
         bVar3)) goto LAB_1473a287b;
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < (this->Links).ArrayNum);
  }
  uVar6 = 0;
  if (0 < (this->SegmentLinks).ArrayNum) {
    do {
      uVar5 = 0;
      if ((int)uVar6 < (this->SegmentLinks).ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      if ((this->bHasMetaAreaClass == 0) &&
         (bVar3 = FNavigationLinkBase::HasMetaArea
                            ((FNavigationLinkBase *)
                             ((this->SegmentLinks).AllocatorInstance.Data +
                             (longlong)(int)uVar6 * 0xa0)), bVar3)) {
LAB_1473a287b:
        this->bHasMetaAreaClass = 1;
        return true;
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < (this->SegmentLinks).ArrayNum);
  }
  return false;
}

// InitializeAreaClass @ 1473a4920

void __thiscall UNavLinkDefinition::InitializeAreaClass(UNavLinkDefinition *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  UClass *pUVar7;
  uint uVar8;
  longlong lVar9;
  UObject *local_res8;
  UObject *local_res10;
  
  if (ZPULL(*(undefined4 *)&this->field_0x48,0,1) == 0) {
    uVar8 = 0;
    *(uint *)&this->field_0x48 = *(undefined4 *)&this->field_0x48 | 1;
    if (0 < (this->Links).ArrayNum) {
      lVar9 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar8 < (this->Links).ArrayNum) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar2 = (this->Links).AllocatorInstance.Data;
        lVar3 = *(longlong *)(pFVar2 + lVar9 + 0x30);
        if ((lVar3 == 0) ||
           (pUVar7 = Z_Construct_UClass_UNavAreaBase_NoRegister(), pUVar7 == (UClass *)0x0)) {
LAB_1473a49ec:
          local_res8 = (UObject *)0x0;
        }
        else {
          iVar1 = (int)pUVar7->_padding_;
          if ((*(int *)(lVar3 + 0x38) < iVar1) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) !=
              &pUVar7->_padding_)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          if (!bVar5) goto LAB_1473a49ec;
          local_res8 = *(UObject **)(pFVar2 + lVar9 + 0x30);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0))
        {
          UE::GC::MarkAsReachable(local_res8);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(pFVar2 + lVar9 + 0x38),(FObjectPtr)&local_res8)
        ;
        uVar8 = uVar8 + 1;
        lVar9 = lVar9 + 0x70;
      } while ((int)uVar8 < (this->Links).ArrayNum);
    }
    uVar8 = 0;
    if (0 < (this->SegmentLinks).ArrayNum) {
      lVar9 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar8 < (this->SegmentLinks).ArrayNum) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar2 = (this->SegmentLinks).AllocatorInstance.Data;
        lVar3 = *(longlong *)(pFVar2 + lVar9 + 0x30);
        if ((lVar3 == 0) ||
           (pUVar7 = Z_Construct_UClass_UNavAreaBase_NoRegister(), pUVar7 == (UClass *)0x0)) {
LAB_1473a4acc:
          local_res10 = (UObject *)0x0;
        }
        else {
          iVar1 = (int)pUVar7->_padding_;
          if ((*(int *)(lVar3 + 0x38) < iVar1) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) !=
              &pUVar7->_padding_)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          if (!bVar5) goto LAB_1473a4acc;
          local_res10 = *(UObject **)(pFVar2 + lVar9 + 0x30);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UObject *)0x0))
        {
          UE::GC::MarkAsReachable(local_res10);
        }
        FWeakObjectPtr::operator=
                  ((FWeakObjectPtr *)(pFVar2 + lVar9 + 0x38),(FObjectPtr)&local_res10);
        uVar8 = uVar8 + 1;
        lVar9 = lVar9 + 0xa0;
      } while ((int)uVar8 < (this->SegmentLinks).ArrayNum);
    }
  }
  return;
}

