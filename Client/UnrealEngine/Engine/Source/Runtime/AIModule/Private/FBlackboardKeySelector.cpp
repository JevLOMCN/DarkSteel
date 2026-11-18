// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 16

// StaticStruct @ 146ea80c0

UScriptStruct * __cdecl FBlackboardKeySelector::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBlackboardKeySelector.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UScriptStruct_FBlackboardKeySelector.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBlackboardKeySelector,(UObject *)pUVar1,
                         L"BlackboardKeySelector");
  }
  return Z_Registration_Info_UScriptStruct_FBlackboardKeySelector.OuterSingleton;
}

// AddBoolFilter @ 146ed1a40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
FBlackboardKeySelector::AddBoolFilter(FBlackboardKeySelector *this,UObject *param_1,FName param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UClass *pUVar6;
  FName *pFVar7;
  FName FVar8;
  FName FVar9;
  UPackage *pUVar10;
  UObject *pUVar11;
  longlong *plVar12;
  longlong lVar13;
  ForAnyElementType FVar14;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  FScriptContainerElement *local_120;
  longlong local_118;
  longlong local_110;
  undefined8 local_108;
  UObject *local_f8;
  FName local_f0;
  FName local_e8;
  FString local_e0;
  FString local_d0;
  FName local_c0;
  undefined1 local_b8 [8];
  FString local_b0;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_148;
  local_e8 = param_2;
  pUVar6 = UBlackboardKeyType_Bool::StaticClass();
  local_f0 = (FName)pUVar6->_padding_;
  ::FName::ToString(&local_f0,&local_d0);
  ::FName::ToString(&local_e8,&local_b0);
  ::FString::PrintfImpl(&local_e0,L"%s_%s");
  FVar14.Data = (FScriptContainerElement *)L"";
  if (local_e0.Data.ArrayNum != 0) {
    FVar14.Data = local_e0.Data.AllocatorInstance.Data;
  }
  pFVar7 = ::FName::FName(&local_c0,(wchar_t *)FVar14.Data);
  FVar9 = *pFVar7;
  FVar8 = (FName)UBlackboardKeyType_Bool::StaticClass();
  pUVar6 = (UClass *)GetTransientPackage();
  local_128 = (UObject **)((ulonglong)local_128._4_4_ << 0x20);
  FVar9 = MakeUniqueObjectName((UObject *)local_b8,pUVar6,FVar8,FVar9.ComparisonIndex.Value.Value);
  FVar9 = *(FName *)FVar9;
  pUVar10 = GetTransientPackage();
  if (FVar9 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pUVar10,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar6 = UBlackboardKeyType_Bool::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar6);
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_98._24_4_ = RF_Public;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_98._8_8_ = pUVar10;
  local_98._16_8_ = FVar9;
  pUVar11 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar12 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar12 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  if (pUVar11 != (UObject *)0x0) {
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
    if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    }
    local_f8 = pUVar11;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar11);
    }
    pFVar2 = (this->AllowedTypes).AllocatorInstance.Data;
    if ((pFVar2 <= (FScriptContainerElement *)&local_f8) &&
       (lVar13 = (longlong)(this->AllowedTypes).ArrayMax,
       (FScriptContainerElement *)&local_f8 < pFVar2 + lVar13 * 8)) {
      local_110 = (longlong)(this->AllowedTypes).ArrayNum;
      local_108 = 8;
      local_128 = &local_f8;
      local_120 = pFVar2;
      local_118 = lVar13;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = (this->AllowedTypes).ArrayNum;
    piVar1 = &(this->AllowedTypes).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)this,piVar1);
    }
    (this->AllowedTypes).ArrayNum = iVar5 + 1;
    *(UObject **)((this->AllowedTypes).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_f8;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_f8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_f8);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// AddClassFilter @ 146ed1cc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
FBlackboardKeySelector::AddClassFilter
          (FBlackboardKeySelector *this,UObject *param_1,FName param_2,TSubclassOf<UObject> param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UClass *pUVar6;
  FName *pFVar7;
  FName FVar8;
  FName FVar9;
  UPackage *pUVar10;
  UObject *pUVar11;
  longlong *plVar12;
  longlong lVar13;
  ForAnyElementType FVar14;
  UObject *pUVar15;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  FScriptContainerElement *local_140;
  longlong local_138;
  longlong local_130;
  undefined8 local_128;
  UObject *local_118;
  FName local_110;
  FName local_108;
  FString local_100;
  FString local_f0;
  FName local_e0;
  undefined1 local_d8 [8];
  FString local_d0;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_168;
  local_108 = param_2;
  pUVar6 = UBlackboardKeyType_Class::StaticClass();
  local_110 = (FName)pUVar6->_padding_;
  ::FName::ToString(&local_110,&local_f0);
  ::FName::ToString(&local_108,&local_d0);
  ::FString::PrintfImpl(&local_100,L"%s_%s");
  FVar14.Data = (FScriptContainerElement *)L"";
  if (local_100.Data.ArrayNum != 0) {
    FVar14.Data = local_100.Data.AllocatorInstance.Data;
  }
  pFVar7 = ::FName::FName(&local_e0,(wchar_t *)FVar14.Data);
  FVar9 = *pFVar7;
  FVar8 = (FName)UBlackboardKeyType_Class::StaticClass();
  pUVar6 = (UClass *)GetTransientPackage();
  pUVar15 = (UObject *)0x0;
  local_148 = (UObject **)((ulonglong)local_148._4_4_ << 0x20);
  FVar9 = MakeUniqueObjectName((UObject *)local_d8,pUVar6,FVar8,FVar9.ComparisonIndex.Value.Value);
  FVar9 = *(FName *)FVar9;
  pUVar10 = GetTransientPackage();
  if (FVar9 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pUVar10,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar6 = UBlackboardKeyType_Class::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar6);
  local_b8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_b8._56_8_ = (UPackage *)0x0;
  local_b8._24_4_ = RF_Public;
  local_b8._40_8_ = (UObject *)0x0;
  local_b8[0x20] = false;
  local_b8._8_8_ = pUVar10;
  local_b8._16_8_ = FVar9;
  pUVar11 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar12 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar12 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  if (pUVar11 != (UObject *)0x0) {
    if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.Data.AllocatorInstance.Data);
    }
    if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    }
    if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.Data.AllocatorInstance.Data);
    }
    lVar13 = *(longlong *)param_3.Class.field0_0x0;
    if ((lVar13 != 0) && (pUVar6 = Z_Construct_UClass_UObject_NoRegister(), pUVar6 != (UClass *)0x0)
       ) {
      iVar5 = (int)pUVar6->_padding_;
      if ((*(int *)(lVar13 + 0x38) < iVar5) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar13 + 0x30) + (longlong)iVar5 * 8) !=
          &pUVar6->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        pUVar15 = *(UObject **)param_3.Class.field0_0x0;
      }
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar15 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar15);
    }
    *(UObject **)&pUVar11[1].field_0x8 = pUVar15;
    local_118 = pUVar11;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar11);
    }
    pFVar2 = (this->AllowedTypes).AllocatorInstance.Data;
    if ((pFVar2 <= (FScriptContainerElement *)&local_118) &&
       (lVar13 = (longlong)(this->AllowedTypes).ArrayMax,
       (FScriptContainerElement *)&local_118 < pFVar2 + lVar13 * 8)) {
      local_130 = (longlong)(this->AllowedTypes).ArrayNum;
      local_128 = 8;
      local_148 = &local_118;
      local_140 = pFVar2;
      local_138 = lVar13;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = (this->AllowedTypes).ArrayNum;
    piVar1 = &(this->AllowedTypes).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)this,piVar1);
    }
    (this->AllowedTypes).ArrayNum = iVar5 + 1;
    *(UObject **)((this->AllowedTypes).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_118;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_118 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_118);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// AddEnumFilter @ 146ed1f90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
FBlackboardKeySelector::AddEnumFilter
          (FBlackboardKeySelector *this,UObject *param_1,FName param_2,UEnum *param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UClass *pUVar6;
  FName *pFVar7;
  FName FVar8;
  FName FVar9;
  UPackage *pUVar10;
  UObject *pUVar11;
  longlong *plVar12;
  longlong lVar13;
  ForAnyElementType FVar14;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  FScriptContainerElement *local_130;
  longlong local_128;
  longlong local_120;
  undefined8 local_118;
  UObject *local_108;
  FName local_100;
  FName local_f8;
  FString local_f0;
  FString local_e0;
  FName local_d0;
  undefined1 local_c8 [8];
  FString local_c0;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_158;
  local_f8 = param_2;
  pUVar6 = UBlackboardKeyType_Enum::StaticClass();
  local_100 = (FName)pUVar6->_padding_;
  ::FName::ToString(&local_100,&local_e0);
  ::FName::ToString(&local_f8,&local_c0);
  ::FString::PrintfImpl(&local_f0,L"%s_%s");
  FVar14.Data = (FScriptContainerElement *)L"";
  if (local_f0.Data.ArrayNum != 0) {
    FVar14.Data = local_f0.Data.AllocatorInstance.Data;
  }
  pFVar7 = ::FName::FName(&local_d0,(wchar_t *)FVar14.Data);
  FVar9 = *pFVar7;
  FVar8 = (FName)UBlackboardKeyType_Enum::StaticClass();
  pUVar6 = (UClass *)GetTransientPackage();
  local_138 = (UObject **)((ulonglong)local_138._4_4_ << 0x20);
  FVar9 = MakeUniqueObjectName((UObject *)local_c8,pUVar6,FVar8,FVar9.ComparisonIndex.Value.Value);
  FVar9 = *(FName *)FVar9;
  pUVar10 = GetTransientPackage();
  if (FVar9 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pUVar10,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar6 = UBlackboardKeyType_Enum::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar6);
  local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_a8._56_8_ = (UPackage *)0x0;
  local_a8._24_4_ = RF_Public;
  local_a8._40_8_ = (UObject *)0x0;
  local_a8[0x20] = false;
  local_a8._8_8_ = pUVar10;
  local_a8._16_8_ = FVar9;
  pUVar11 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar12 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar12 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  if (pUVar11 != (UObject *)0x0) {
    if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.Data.AllocatorInstance.Data);
    }
    if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data.AllocatorInstance.Data);
    }
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_3 != (UEnum *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_3);
    }
    *(UEnum **)&pUVar11[1].field_0x8 = param_3;
    local_108 = pUVar11;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar11);
    }
    pFVar2 = (this->AllowedTypes).AllocatorInstance.Data;
    if ((pFVar2 <= (FScriptContainerElement *)&local_108) &&
       (lVar13 = (longlong)(this->AllowedTypes).ArrayMax,
       (FScriptContainerElement *)&local_108 < pFVar2 + lVar13 * 8)) {
      local_120 = (longlong)(this->AllowedTypes).ArrayNum;
      local_118 = 8;
      local_138 = &local_108;
      local_130 = pFVar2;
      local_128 = lVar13;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = (this->AllowedTypes).ArrayNum;
    piVar1 = &(this->AllowedTypes).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)this,piVar1);
    }
    (this->AllowedTypes).ArrayNum = iVar5 + 1;
    *(UObject **)((this->AllowedTypes).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_108;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_108 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_108);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// AddFloatFilter @ 146ed2230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
FBlackboardKeySelector::AddFloatFilter(FBlackboardKeySelector *this,UObject *param_1,FName param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UClass *pUVar6;
  FName *pFVar7;
  FName FVar8;
  FName FVar9;
  UPackage *pUVar10;
  UObject *pUVar11;
  longlong *plVar12;
  longlong lVar13;
  ForAnyElementType FVar14;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  FScriptContainerElement *local_120;
  longlong local_118;
  longlong local_110;
  undefined8 local_108;
  UObject *local_f8;
  FName local_f0;
  FName local_e8;
  FString local_e0;
  FString local_d0;
  FName local_c0;
  undefined1 local_b8 [8];
  FString local_b0;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_148;
  local_e8 = param_2;
  pUVar6 = UBlackboardKeyType_Float::StaticClass();
  local_f0 = (FName)pUVar6->_padding_;
  ::FName::ToString(&local_f0,&local_d0);
  ::FName::ToString(&local_e8,&local_b0);
  ::FString::PrintfImpl(&local_e0,L"%s_%s");
  FVar14.Data = (FScriptContainerElement *)L"";
  if (local_e0.Data.ArrayNum != 0) {
    FVar14.Data = local_e0.Data.AllocatorInstance.Data;
  }
  pFVar7 = ::FName::FName(&local_c0,(wchar_t *)FVar14.Data);
  FVar9 = *pFVar7;
  FVar8 = (FName)UBlackboardKeyType_Float::StaticClass();
  pUVar6 = (UClass *)GetTransientPackage();
  local_128 = (UObject **)((ulonglong)local_128._4_4_ << 0x20);
  FVar9 = MakeUniqueObjectName((UObject *)local_b8,pUVar6,FVar8,FVar9.ComparisonIndex.Value.Value);
  FVar9 = *(FName *)FVar9;
  pUVar10 = GetTransientPackage();
  if (FVar9 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pUVar10,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar6 = UBlackboardKeyType_Float::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar6);
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_98._24_4_ = RF_Public;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_98._8_8_ = pUVar10;
  local_98._16_8_ = FVar9;
  pUVar11 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar12 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar12 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  if (pUVar11 != (UObject *)0x0) {
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
    if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    }
    local_f8 = pUVar11;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar11);
    }
    pFVar2 = (this->AllowedTypes).AllocatorInstance.Data;
    if ((pFVar2 <= (FScriptContainerElement *)&local_f8) &&
       (lVar13 = (longlong)(this->AllowedTypes).ArrayMax,
       (FScriptContainerElement *)&local_f8 < pFVar2 + lVar13 * 8)) {
      local_110 = (longlong)(this->AllowedTypes).ArrayNum;
      local_108 = 8;
      local_128 = &local_f8;
      local_120 = pFVar2;
      local_118 = lVar13;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = (this->AllowedTypes).ArrayNum;
    piVar1 = &(this->AllowedTypes).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)this,piVar1);
    }
    (this->AllowedTypes).ArrayNum = iVar5 + 1;
    *(UObject **)((this->AllowedTypes).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_f8;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_f8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_f8);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// AddIntFilter @ 146ed24b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
FBlackboardKeySelector::AddIntFilter(FBlackboardKeySelector *this,UObject *param_1,FName param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UClass *pUVar6;
  FName *pFVar7;
  FName FVar8;
  FName FVar9;
  UPackage *pUVar10;
  UObject *pUVar11;
  longlong *plVar12;
  longlong lVar13;
  ForAnyElementType FVar14;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  FScriptContainerElement *local_120;
  longlong local_118;
  longlong local_110;
  undefined8 local_108;
  UObject *local_f8;
  FName local_f0;
  FName local_e8;
  FString local_e0;
  FString local_d0;
  FName local_c0;
  undefined1 local_b8 [8];
  FString local_b0;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_148;
  local_e8 = param_2;
  pUVar6 = UBlackboardKeyType_Int::StaticClass();
  local_f0 = (FName)pUVar6->_padding_;
  ::FName::ToString(&local_f0,&local_d0);
  ::FName::ToString(&local_e8,&local_b0);
  ::FString::PrintfImpl(&local_e0,L"%s_%s");
  FVar14.Data = (FScriptContainerElement *)L"";
  if (local_e0.Data.ArrayNum != 0) {
    FVar14.Data = local_e0.Data.AllocatorInstance.Data;
  }
  pFVar7 = ::FName::FName(&local_c0,(wchar_t *)FVar14.Data);
  FVar9 = *pFVar7;
  FVar8 = (FName)UBlackboardKeyType_Int::StaticClass();
  pUVar6 = (UClass *)GetTransientPackage();
  local_128 = (UObject **)((ulonglong)local_128._4_4_ << 0x20);
  FVar9 = MakeUniqueObjectName((UObject *)local_b8,pUVar6,FVar8,FVar9.ComparisonIndex.Value.Value);
  FVar9 = *(FName *)FVar9;
  pUVar10 = GetTransientPackage();
  if (FVar9 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pUVar10,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar6 = UBlackboardKeyType_Int::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar6);
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_98._24_4_ = RF_Public;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_98._8_8_ = pUVar10;
  local_98._16_8_ = FVar9;
  pUVar11 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar12 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar12 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  if (pUVar11 != (UObject *)0x0) {
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
    if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    }
    local_f8 = pUVar11;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar11);
    }
    pFVar2 = (this->AllowedTypes).AllocatorInstance.Data;
    if ((pFVar2 <= (FScriptContainerElement *)&local_f8) &&
       (lVar13 = (longlong)(this->AllowedTypes).ArrayMax,
       (FScriptContainerElement *)&local_f8 < pFVar2 + lVar13 * 8)) {
      local_110 = (longlong)(this->AllowedTypes).ArrayNum;
      local_108 = 8;
      local_128 = &local_f8;
      local_120 = pFVar2;
      local_118 = lVar13;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = (this->AllowedTypes).ArrayNum;
    piVar1 = &(this->AllowedTypes).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)this,piVar1);
    }
    (this->AllowedTypes).ArrayNum = iVar5 + 1;
    *(UObject **)((this->AllowedTypes).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_f8;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_f8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_f8);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// AddNameFilter @ 146ed2730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
FBlackboardKeySelector::AddNameFilter(FBlackboardKeySelector *this,UObject *param_1,FName param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UClass *pUVar6;
  FName *pFVar7;
  FName FVar8;
  FName FVar9;
  UPackage *pUVar10;
  UObject *pUVar11;
  longlong *plVar12;
  longlong lVar13;
  ForAnyElementType FVar14;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  FScriptContainerElement *local_120;
  longlong local_118;
  longlong local_110;
  undefined8 local_108;
  UObject *local_f8;
  FName local_f0;
  FName local_e8;
  FString local_e0;
  FString local_d0;
  FName local_c0;
  undefined1 local_b8 [8];
  FString local_b0;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_148;
  local_e8 = param_2;
  pUVar6 = UBlackboardKeyType_Name::StaticClass();
  local_f0 = (FName)pUVar6->_padding_;
  ::FName::ToString(&local_f0,&local_d0);
  ::FName::ToString(&local_e8,&local_b0);
  ::FString::PrintfImpl(&local_e0,L"%s_%s");
  FVar14.Data = (FScriptContainerElement *)L"";
  if (local_e0.Data.ArrayNum != 0) {
    FVar14.Data = local_e0.Data.AllocatorInstance.Data;
  }
  pFVar7 = ::FName::FName(&local_c0,(wchar_t *)FVar14.Data);
  FVar9 = *pFVar7;
  FVar8 = (FName)UBlackboardKeyType_Name::StaticClass();
  pUVar6 = (UClass *)GetTransientPackage();
  local_128 = (UObject **)((ulonglong)local_128._4_4_ << 0x20);
  FVar9 = MakeUniqueObjectName((UObject *)local_b8,pUVar6,FVar8,FVar9.ComparisonIndex.Value.Value);
  FVar9 = *(FName *)FVar9;
  pUVar10 = GetTransientPackage();
  if (FVar9 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pUVar10,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar6 = UBlackboardKeyType_Name::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar6);
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_98._24_4_ = RF_Public;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_98._8_8_ = pUVar10;
  local_98._16_8_ = FVar9;
  pUVar11 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar12 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar12 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  if (pUVar11 != (UObject *)0x0) {
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
    if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    }
    local_f8 = pUVar11;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar11);
    }
    pFVar2 = (this->AllowedTypes).AllocatorInstance.Data;
    if ((pFVar2 <= (FScriptContainerElement *)&local_f8) &&
       (lVar13 = (longlong)(this->AllowedTypes).ArrayMax,
       (FScriptContainerElement *)&local_f8 < pFVar2 + lVar13 * 8)) {
      local_110 = (longlong)(this->AllowedTypes).ArrayNum;
      local_108 = 8;
      local_128 = &local_f8;
      local_120 = pFVar2;
      local_118 = lVar13;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = (this->AllowedTypes).ArrayNum;
    piVar1 = &(this->AllowedTypes).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)this,piVar1);
    }
    (this->AllowedTypes).ArrayNum = iVar5 + 1;
    *(UObject **)((this->AllowedTypes).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_f8;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_f8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_f8);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// AddNativeEnumFilter @ 146ed29b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
FBlackboardKeySelector::AddNativeEnumFilter
          (FBlackboardKeySelector *this,UObject *param_1,FName param_2,FString *param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UClass *pUVar6;
  FName *pFVar7;
  FName FVar8;
  FName FVar9;
  UPackage *pUVar10;
  UObject *pUVar11;
  longlong *plVar12;
  longlong lVar13;
  ForAnyElementType FVar14;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  FScriptContainerElement *local_130;
  longlong local_128;
  longlong local_120;
  undefined8 local_118;
  UObject *local_108;
  FName local_100;
  FName local_f8;
  FString local_f0;
  FString local_e0;
  FName local_d0;
  undefined1 local_c8 [8];
  FString local_c0;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_158;
  local_f8 = param_2;
  pUVar6 = UBlackboardKeyType_NativeEnum::StaticClass();
  local_100 = (FName)pUVar6->_padding_;
  ::FName::ToString(&local_100,&local_e0);
  ::FName::ToString(&local_f8,&local_c0);
  ::FString::PrintfImpl(&local_f0,L"%s_%s");
  FVar14.Data = (FScriptContainerElement *)L"";
  if (local_f0.Data.ArrayNum != 0) {
    FVar14.Data = local_f0.Data.AllocatorInstance.Data;
  }
  pFVar7 = ::FName::FName(&local_d0,(wchar_t *)FVar14.Data);
  FVar9 = *pFVar7;
  FVar8 = (FName)UBlackboardKeyType_NativeEnum::StaticClass();
  pUVar6 = (UClass *)GetTransientPackage();
  local_138 = (UObject **)((ulonglong)local_138._4_4_ << 0x20);
  FVar9 = MakeUniqueObjectName((UObject *)local_c8,pUVar6,FVar8,FVar9.ComparisonIndex.Value.Value);
  FVar9 = *(FName *)FVar9;
  pUVar10 = GetTransientPackage();
  if (FVar9 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pUVar10,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar6 = UBlackboardKeyType_NativeEnum::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar6);
  local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_a8._56_8_ = (UPackage *)0x0;
  local_a8._24_4_ = RF_Public;
  local_a8._40_8_ = (UObject *)0x0;
  local_a8[0x20] = false;
  local_a8._8_8_ = pUVar10;
  local_a8._16_8_ = FVar9;
  pUVar11 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar12 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar12 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  if (pUVar11 != (UObject *)0x0) {
    if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.Data.AllocatorInstance.Data);
    }
    if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data.AllocatorInstance.Data);
    }
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
    ::FString::operator=((FString *)&pUVar11[1].field_0x8,param_3);
    local_108 = pUVar11;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar11);
    }
    pFVar2 = (this->AllowedTypes).AllocatorInstance.Data;
    if ((pFVar2 <= (FScriptContainerElement *)&local_108) &&
       (lVar13 = (longlong)(this->AllowedTypes).ArrayMax,
       (FScriptContainerElement *)&local_108 < pFVar2 + lVar13 * 8)) {
      local_120 = (longlong)(this->AllowedTypes).ArrayNum;
      local_118 = 8;
      local_138 = &local_108;
      local_130 = pFVar2;
      local_128 = lVar13;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = (this->AllowedTypes).ArrayNum;
    piVar1 = &(this->AllowedTypes).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)this,piVar1);
    }
    (this->AllowedTypes).ArrayNum = iVar5 + 1;
    *(UObject **)((this->AllowedTypes).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_108;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_108 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_108);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// AddObjectFilter @ 146ed2c40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
FBlackboardKeySelector::AddObjectFilter
          (FBlackboardKeySelector *this,UObject *param_1,FName param_2,TSubclassOf<UObject> param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UClass *pUVar6;
  FName *pFVar7;
  FName FVar8;
  FName FVar9;
  UPackage *pUVar10;
  UObject *pUVar11;
  longlong *plVar12;
  longlong lVar13;
  ForAnyElementType FVar14;
  UObject *pUVar15;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  FScriptContainerElement *local_140;
  longlong local_138;
  longlong local_130;
  undefined8 local_128;
  UObject *local_118;
  FName local_110;
  FName local_108;
  FString local_100;
  FString local_f0;
  FName local_e0;
  undefined1 local_d8 [8];
  FString local_d0;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_168;
  local_108 = param_2;
  pUVar6 = UBlackboardKeyType_Object::StaticClass();
  local_110 = (FName)pUVar6->_padding_;
  ::FName::ToString(&local_110,&local_f0);
  ::FName::ToString(&local_108,&local_d0);
  ::FString::PrintfImpl(&local_100,L"%s_%s");
  FVar14.Data = (FScriptContainerElement *)L"";
  if (local_100.Data.ArrayNum != 0) {
    FVar14.Data = local_100.Data.AllocatorInstance.Data;
  }
  pFVar7 = ::FName::FName(&local_e0,(wchar_t *)FVar14.Data);
  FVar9 = *pFVar7;
  FVar8 = (FName)UBlackboardKeyType_Object::StaticClass();
  pUVar6 = (UClass *)GetTransientPackage();
  pUVar15 = (UObject *)0x0;
  local_148 = (UObject **)((ulonglong)local_148._4_4_ << 0x20);
  FVar9 = MakeUniqueObjectName((UObject *)local_d8,pUVar6,FVar8,FVar9.ComparisonIndex.Value.Value);
  FVar9 = *(FName *)FVar9;
  pUVar10 = GetTransientPackage();
  if (FVar9 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pUVar10,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar6 = UBlackboardKeyType_Object::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar6);
  local_b8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_b8._56_8_ = (UPackage *)0x0;
  local_b8._24_4_ = RF_Public;
  local_b8._40_8_ = (UObject *)0x0;
  local_b8[0x20] = false;
  local_b8._8_8_ = pUVar10;
  local_b8._16_8_ = FVar9;
  pUVar11 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar12 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar12 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  if (pUVar11 != (UObject *)0x0) {
    if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.Data.AllocatorInstance.Data);
    }
    if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    }
    if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.Data.AllocatorInstance.Data);
    }
    lVar13 = *(longlong *)param_3.Class.field0_0x0;
    if ((lVar13 != 0) && (pUVar6 = Z_Construct_UClass_UObject_NoRegister(), pUVar6 != (UClass *)0x0)
       ) {
      iVar5 = (int)pUVar6->_padding_;
      if ((*(int *)(lVar13 + 0x38) < iVar5) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar13 + 0x30) + (longlong)iVar5 * 8) !=
          &pUVar6->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        pUVar15 = *(UObject **)param_3.Class.field0_0x0;
      }
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar15 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar15);
    }
    *(UObject **)&pUVar11[1].field_0x8 = pUVar15;
    local_118 = pUVar11;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar11);
    }
    pFVar2 = (this->AllowedTypes).AllocatorInstance.Data;
    if ((pFVar2 <= (FScriptContainerElement *)&local_118) &&
       (lVar13 = (longlong)(this->AllowedTypes).ArrayMax,
       (FScriptContainerElement *)&local_118 < pFVar2 + lVar13 * 8)) {
      local_130 = (longlong)(this->AllowedTypes).ArrayNum;
      local_128 = 8;
      local_148 = &local_118;
      local_140 = pFVar2;
      local_138 = lVar13;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = (this->AllowedTypes).ArrayNum;
    piVar1 = &(this->AllowedTypes).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)this,piVar1);
    }
    (this->AllowedTypes).ArrayNum = iVar5 + 1;
    *(UObject **)((this->AllowedTypes).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_118;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_118 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_118);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// AddRotatorFilter @ 146ed2f10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
FBlackboardKeySelector::AddRotatorFilter
          (FBlackboardKeySelector *this,UObject *param_1,FName param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UClass *pUVar6;
  FName *pFVar7;
  FName FVar8;
  FName FVar9;
  UPackage *pUVar10;
  UObject *pUVar11;
  longlong *plVar12;
  longlong lVar13;
  ForAnyElementType FVar14;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  FScriptContainerElement *local_120;
  longlong local_118;
  longlong local_110;
  undefined8 local_108;
  UObject *local_f8;
  FName local_f0;
  FName local_e8;
  FString local_e0;
  FString local_d0;
  FName local_c0;
  undefined1 local_b8 [8];
  FString local_b0;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_148;
  local_e8 = param_2;
  pUVar6 = UBlackboardKeyType_Rotator::StaticClass();
  local_f0 = (FName)pUVar6->_padding_;
  ::FName::ToString(&local_f0,&local_d0);
  ::FName::ToString(&local_e8,&local_b0);
  ::FString::PrintfImpl(&local_e0,L"%s_%s");
  FVar14.Data = (FScriptContainerElement *)L"";
  if (local_e0.Data.ArrayNum != 0) {
    FVar14.Data = local_e0.Data.AllocatorInstance.Data;
  }
  pFVar7 = ::FName::FName(&local_c0,(wchar_t *)FVar14.Data);
  FVar9 = *pFVar7;
  FVar8 = (FName)UBlackboardKeyType_Rotator::StaticClass();
  pUVar6 = (UClass *)GetTransientPackage();
  local_128 = (UObject **)((ulonglong)local_128._4_4_ << 0x20);
  FVar9 = MakeUniqueObjectName((UObject *)local_b8,pUVar6,FVar8,FVar9.ComparisonIndex.Value.Value);
  FVar9 = *(FName *)FVar9;
  pUVar10 = GetTransientPackage();
  if (FVar9 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pUVar10,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar6 = UBlackboardKeyType_Rotator::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar6);
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_98._24_4_ = RF_Public;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_98._8_8_ = pUVar10;
  local_98._16_8_ = FVar9;
  pUVar11 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar12 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar12 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  if (pUVar11 != (UObject *)0x0) {
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
    if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    }
    local_f8 = pUVar11;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar11);
    }
    pFVar2 = (this->AllowedTypes).AllocatorInstance.Data;
    if ((pFVar2 <= (FScriptContainerElement *)&local_f8) &&
       (lVar13 = (longlong)(this->AllowedTypes).ArrayMax,
       (FScriptContainerElement *)&local_f8 < pFVar2 + lVar13 * 8)) {
      local_110 = (longlong)(this->AllowedTypes).ArrayNum;
      local_108 = 8;
      local_128 = &local_f8;
      local_120 = pFVar2;
      local_118 = lVar13;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = (this->AllowedTypes).ArrayNum;
    piVar1 = &(this->AllowedTypes).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)this,piVar1);
    }
    (this->AllowedTypes).ArrayNum = iVar5 + 1;
    *(UObject **)((this->AllowedTypes).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_f8;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_f8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_f8);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// AddStringFilter @ 146ed3190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
FBlackboardKeySelector::AddStringFilter(FBlackboardKeySelector *this,UObject *param_1,FName param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UClass *pUVar6;
  FName *pFVar7;
  FName FVar8;
  FName FVar9;
  UPackage *pUVar10;
  UObject *pUVar11;
  longlong *plVar12;
  longlong lVar13;
  ForAnyElementType FVar14;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  FScriptContainerElement *local_120;
  longlong local_118;
  longlong local_110;
  undefined8 local_108;
  UObject *local_f8;
  FName local_f0;
  FName local_e8;
  FString local_e0;
  FString local_d0;
  FName local_c0;
  undefined1 local_b8 [8];
  FString local_b0;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_148;
  local_e8 = param_2;
  pUVar6 = UBlackboardKeyType_String::StaticClass();
  local_f0 = (FName)pUVar6->_padding_;
  ::FName::ToString(&local_f0,&local_d0);
  ::FName::ToString(&local_e8,&local_b0);
  ::FString::PrintfImpl(&local_e0,L"%s_%s");
  FVar14.Data = (FScriptContainerElement *)L"";
  if (local_e0.Data.ArrayNum != 0) {
    FVar14.Data = local_e0.Data.AllocatorInstance.Data;
  }
  pFVar7 = ::FName::FName(&local_c0,(wchar_t *)FVar14.Data);
  FVar9 = *pFVar7;
  FVar8 = (FName)UBlackboardKeyType_String::StaticClass();
  pUVar6 = (UClass *)GetTransientPackage();
  local_128 = (UObject **)((ulonglong)local_128._4_4_ << 0x20);
  FVar9 = MakeUniqueObjectName((UObject *)local_b8,pUVar6,FVar8,FVar9.ComparisonIndex.Value.Value);
  FVar9 = *(FName *)FVar9;
  pUVar10 = GetTransientPackage();
  if (FVar9 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pUVar10,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar6 = UBlackboardKeyType_String::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar6);
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_98._24_4_ = RF_Public;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_98._8_8_ = pUVar10;
  local_98._16_8_ = FVar9;
  pUVar11 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar12 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar12 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  if (pUVar11 != (UObject *)0x0) {
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
    if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    }
    local_f8 = pUVar11;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar11);
    }
    pFVar2 = (this->AllowedTypes).AllocatorInstance.Data;
    if ((pFVar2 <= (FScriptContainerElement *)&local_f8) &&
       (lVar13 = (longlong)(this->AllowedTypes).ArrayMax,
       (FScriptContainerElement *)&local_f8 < pFVar2 + lVar13 * 8)) {
      local_110 = (longlong)(this->AllowedTypes).ArrayNum;
      local_108 = 8;
      local_128 = &local_f8;
      local_120 = pFVar2;
      local_118 = lVar13;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = (this->AllowedTypes).ArrayNum;
    piVar1 = &(this->AllowedTypes).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)this,piVar1);
    }
    (this->AllowedTypes).ArrayNum = iVar5 + 1;
    *(UObject **)((this->AllowedTypes).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_f8;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_f8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_f8);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// AddStructFilter @ 146ed3410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
FBlackboardKeySelector::AddStructFilter
          (FBlackboardKeySelector *this,UObject *param_1,FName param_2,UScriptStruct *param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UClass *pUVar6;
  FName *pFVar7;
  FName FVar8;
  FName FVar9;
  UPackage *pUVar10;
  UObject *pUVar11;
  longlong *plVar12;
  longlong lVar13;
  ForAnyElementType FVar14;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  FScriptContainerElement *local_130;
  longlong local_128;
  longlong local_120;
  undefined8 local_118;
  UObject *local_108;
  FName local_100;
  FName local_f8;
  FString local_f0;
  FString local_e0;
  FName local_d0;
  undefined1 local_c8 [8];
  FString local_c0;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_158;
  local_f8 = param_2;
  pUVar6 = UBlackboardKeyType_Struct::StaticClass();
  local_100 = (FName)pUVar6->_padding_;
  ::FName::ToString(&local_100,&local_e0);
  ::FName::ToString(&local_f8,&local_c0);
  ::FString::PrintfImpl(&local_f0,L"%s_%s");
  FVar14.Data = (FScriptContainerElement *)L"";
  if (local_f0.Data.ArrayNum != 0) {
    FVar14.Data = local_f0.Data.AllocatorInstance.Data;
  }
  pFVar7 = ::FName::FName(&local_d0,(wchar_t *)FVar14.Data);
  FVar9 = *pFVar7;
  FVar8 = (FName)UBlackboardKeyType_Struct::StaticClass();
  pUVar6 = (UClass *)GetTransientPackage();
  local_138 = (UObject **)((ulonglong)local_138._4_4_ << 0x20);
  FVar9 = MakeUniqueObjectName((UObject *)local_c8,pUVar6,FVar8,FVar9.ComparisonIndex.Value.Value);
  FVar9 = *(FName *)FVar9;
  pUVar10 = GetTransientPackage();
  if (FVar9 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pUVar10,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar6 = UBlackboardKeyType_Struct::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar6);
  local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_a8._56_8_ = (UPackage *)0x0;
  local_a8._24_4_ = RF_Public;
  local_a8._40_8_ = (UObject *)0x0;
  local_a8[0x20] = false;
  local_a8._8_8_ = pUVar10;
  local_a8._16_8_ = FVar9;
  pUVar11 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar12 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar12 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  if (pUVar11 != (UObject *)0x0) {
    if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.Data.AllocatorInstance.Data);
    }
    if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data.AllocatorInstance.Data);
    }
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
    FInstancedStruct::InitializeAs((FInstancedStruct *)&pUVar11[1].field_0x8,param_3,(uchar *)0x0);
    local_108 = pUVar11;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar11);
    }
    pFVar2 = (this->AllowedTypes).AllocatorInstance.Data;
    if ((pFVar2 <= (FScriptContainerElement *)&local_108) &&
       (lVar13 = (longlong)(this->AllowedTypes).ArrayMax,
       (FScriptContainerElement *)&local_108 < pFVar2 + lVar13 * 8)) {
      local_120 = (longlong)(this->AllowedTypes).ArrayNum;
      local_118 = 8;
      local_138 = &local_108;
      local_130 = pFVar2;
      local_128 = lVar13;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = (this->AllowedTypes).ArrayNum;
    piVar1 = &(this->AllowedTypes).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)this,piVar1);
    }
    (this->AllowedTypes).ArrayNum = iVar5 + 1;
    *(UObject **)((this->AllowedTypes).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_108;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_108 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_108);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// AddVectorFilter @ 146ed3d30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
FBlackboardKeySelector::AddVectorFilter(FBlackboardKeySelector *this,UObject *param_1,FName param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UClass *pUVar6;
  FName *pFVar7;
  FName FVar8;
  FName FVar9;
  UPackage *pUVar10;
  UObject *pUVar11;
  longlong *plVar12;
  longlong lVar13;
  ForAnyElementType FVar14;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  FScriptContainerElement *local_120;
  longlong local_118;
  longlong local_110;
  undefined8 local_108;
  UObject *local_f8;
  FName local_f0;
  FName local_e8;
  FString local_e0;
  FString local_d0;
  FName local_c0;
  undefined1 local_b8 [8];
  FString local_b0;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_148;
  local_e8 = param_2;
  pUVar6 = UBlackboardKeyType_Vector::StaticClass();
  local_f0 = (FName)pUVar6->_padding_;
  ::FName::ToString(&local_f0,&local_d0);
  ::FName::ToString(&local_e8,&local_b0);
  ::FString::PrintfImpl(&local_e0,L"%s_%s");
  FVar14.Data = (FScriptContainerElement *)L"";
  if (local_e0.Data.ArrayNum != 0) {
    FVar14.Data = local_e0.Data.AllocatorInstance.Data;
  }
  pFVar7 = ::FName::FName(&local_c0,(wchar_t *)FVar14.Data);
  FVar9 = *pFVar7;
  FVar8 = (FName)UBlackboardKeyType_Vector::StaticClass();
  pUVar6 = (UClass *)GetTransientPackage();
  local_128 = (UObject **)((ulonglong)local_128._4_4_ << 0x20);
  FVar9 = MakeUniqueObjectName((UObject *)local_b8,pUVar6,FVar8,FVar9.ComparisonIndex.Value.Value);
  FVar9 = *(FName *)FVar9;
  pUVar10 = GetTransientPackage();
  if (FVar9 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pUVar10,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar6 = UBlackboardKeyType_Vector::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar6);
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_98._24_4_ = RF_Public;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_98._8_8_ = pUVar10;
  local_98._16_8_ = FVar9;
  pUVar11 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar12 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar12 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  if (pUVar11 != (UObject *)0x0) {
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
    if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    }
    local_f8 = pUVar11;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar11);
    }
    pFVar2 = (this->AllowedTypes).AllocatorInstance.Data;
    if ((pFVar2 <= (FScriptContainerElement *)&local_f8) &&
       (lVar13 = (longlong)(this->AllowedTypes).ArrayMax,
       (FScriptContainerElement *)&local_f8 < pFVar2 + lVar13 * 8)) {
      local_110 = (longlong)(this->AllowedTypes).ArrayNum;
      local_108 = 8;
      local_128 = &local_f8;
      local_120 = pFVar2;
      local_118 = lVar13;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = (this->AllowedTypes).ArrayNum;
    piVar1 = &(this->AllowedTypes).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)this,piVar1);
    }
    (this->AllowedTypes).ArrayNum = iVar5 + 1;
    *(UObject **)((this->AllowedTypes).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_f8;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_f8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_f8);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// InitSelection @ 146ef08f0

void __thiscall
FBlackboardKeySelector::InitSelection(FBlackboardKeySelector *this,UBlackboardData *param_1)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  FName *pFVar10;
  longlong local_res10;
  
  do {
    if (param_1 == (UBlackboardData *)0x0) {
      return;
    }
    uVar8 = 0;
    if (0 < (param_1->Keys).ArrayNum) {
      local_res10 = 0;
      do {
        uVar7 = 0;
        if ((int)uVar8 < (param_1->Keys).ArrayNum) {
          uVar7 = ~uVar8 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar10 = (FName *)((param_1->Keys).AllocatorInstance.Data + local_res10);
        if (pFVar10[1] != (FName)0x0) {
          iVar6 = (this->AllowedTypes).ArrayNum;
          if (iVar6 == 0) {
LAB_146ef0a41:
            this->SelectedKeyName = *pFVar10;
            break;
          }
          uVar7 = 0;
          if (0 < iVar6) {
            lVar9 = 0;
            do {
              FVar1 = pFVar10[1];
              pcVar2 = *(code **)(*(longlong *)FVar1 + 0x2b8);
              uVar5 = 0;
              if ((int)uVar7 < iVar6) {
                uVar5 = ~uVar7 >> 0x1f;
              }
              if ((uVar5 == 0) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar3)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              cVar4 = (*pcVar2)(FVar1,*(undefined8 *)
                                       ((this->AllowedTypes).AllocatorInstance.Data + lVar9));
              if (cVar4 != '\0') goto LAB_146ef0a41;
              iVar6 = (this->AllowedTypes).ArrayNum;
              uVar7 = uVar7 + 1;
              lVar9 = lVar9 + 8;
            } while ((int)uVar7 < iVar6);
          }
        }
        local_res10 = local_res10 + 0x18;
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < (param_1->Keys).ArrayNum);
    }
    param_1 = (param_1->Parent).field0_0x0.DebugPtr;
  } while( true );
}

// ResolveSelectedKey @ 146efdc20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FBlackboardKeySelector::ResolveSelectedKey(FBlackboardKeySelector *this,UBlackboardData *param_1)

{
  FName FVar1;
  UBlackboardKeyType *pUVar2;
  code *pcVar3;
  ForAnyElementType _Src;
  UBlackboardData *this_00;
  bool bVar4;
  char cVar5;
  uint uVar6;
  FBlackboardEntry *pFVar7;
  int iVar8;
  uint uVar9;
  UClass *pUVar10;
  UClass *pUVar11;
  longlong lVar12;
  UClass *pUVar13;
  FName *pFVar14;
  uint uVar15;
  FKey local_res8;
  UBlackboardData *local_res10;
  TObjectPtr<UBlackboardData>_u_0 local_res18;
  longlong local_res20;
  ForAnyElementType local_78;
  int local_70;
  int local_6c;
  FString local_68;
  FString local_58;
  
  pUVar11 = (UClass *)0x0;
  local_res10 = param_1;
  if (this->SelectedKeyName == (FName)0x0) {
    if (this->bNoneIsAllowedValue != 0) {
      return;
    }
    local_res18.DebugPtr = param_1;
    if (param_1 != (UBlackboardData *)0x0) {
      do {
        if (0 < (param_1->Keys).ArrayNum) {
          local_res20 = 0;
          pUVar10 = pUVar11;
          local_res18.DebugPtr = param_1;
          do {
            lVar12 = local_res20;
            uVar15 = (uint)pUVar10;
            uVar6 = 0;
            if ((int)uVar15 < (param_1->Keys).ArrayNum) {
              uVar6 = ~uVar15 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pFVar14 = (FName *)((param_1->Keys).AllocatorInstance.Data + lVar12);
            if (pFVar14[1] != (FName)0x0) {
              iVar8 = (this->AllowedTypes).ArrayNum;
              if (iVar8 == 0) {
LAB_146efddc7:
                this->SelectedKeyName = *pFVar14;
                break;
              }
              pUVar10 = pUVar11;
              pUVar13 = pUVar11;
              if (0 < iVar8) {
                do {
                  FVar1 = pFVar14[1];
                  uVar9 = (uint)pUVar10;
                  pcVar3 = *(code **)(*(longlong *)FVar1 + 0x2b8);
                  uVar6 = 0;
                  if ((int)uVar9 < iVar8) {
                    uVar6 = ~uVar9 >> 0x1f;
                  }
                  if ((uVar6 == 0) &&
                     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar4)) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  cVar5 = (*pcVar3)(FVar1,*(undefined8 *)
                                           ((longlong)&pUVar13->_padding_ +
                                           (longlong)(this->AllowedTypes).AllocatorInstance.Data));
                  param_1 = local_res18.DebugPtr;
                  if (cVar5 != '\0') goto LAB_146efddc7;
                  iVar8 = (this->AllowedTypes).ArrayNum;
                  pUVar10 = (UClass *)(ulonglong)(uVar9 + 1);
                  lVar12 = local_res20;
                  pUVar13 = (UClass *)&pUVar13->_padding_;
                } while ((int)(uVar9 + 1) < iVar8);
              }
            }
            local_res20 = lVar12 + 0x18;
            pUVar10 = (UClass *)(ulonglong)(uVar15 + 1);
          } while ((int)(uVar15 + 1) < (param_1->Keys).ArrayNum);
        }
        param_1 = ((TObjectPtr<UBlackboardData>_u_0 *)((longlong)param_1 + 0x30))->DebugPtr;
      } while (param_1 != (UBlackboardData *)0x0);
      local_res18 = (TObjectPtr<UBlackboardData>_u_0)0x0;
    }
  }
  this_00 = local_res10;
  UBlackboardData::InternalGetKeyID(local_res10,(FName *)&local_res8,(int)this + 0x10);
  this->SelectedKeyID = (uint)local_res8.Key;
  pFVar7 = UBlackboardData::GetKey(this_00,local_res8);
  if ((pFVar7 != (FBlackboardEntry *)0x0) &&
     (pUVar2 = (pFVar7->KeyType).field0_0x0.DebugPtr, pUVar2 != (UBlackboardKeyType *)0x0)) {
    pUVar11 = (UClass *)pUVar2->_padding_;
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar11 != (UClass *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar11);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar11);
    }
  }
  (this->SelectedKeyType).Class.field0_0x0.DebugPtr = pUVar11;
  if (2 < (byte)LogBehaviorTree._0_1_) {
    uVar6 = this->SelectedKeyID;
    if (((uVar6 != (uVar6 & 0xffff)) || ((int)uVar6 < 0)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IntFitsIn<OutType>(In)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar4))
    {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((short)uVar6 == -1) {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this_00,&local_58,(UObject *)0x0,None);
      ::FName::ToString(&this->SelectedKeyName,&local_68);
      _Src = UBehaviorTreeTypes::BTLoggingContext.Data.AllocatorInstance;
      lVar12 = (longlong)UBehaviorTreeTypes::BTLoggingContext.Data.ArrayNum;
      local_78.Data = (FScriptContainerElement *)0x0;
      local_70 = UBehaviorTreeTypes::BTLoggingContext.Data.ArrayNum;
      if (UBehaviorTreeTypes::BTLoggingContext.Data.ArrayNum == 0) {
        local_6c = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,UBehaviorTreeTypes::BTLoggingContext.Data.ArrayNum,0,&local_78,
                   UBehaviorTreeTypes::BTLoggingContext.Data.ArrayNum,&local_6c);
        memcpy(local_78.Data,_Src.Data,lVar12 * 2);
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogBehaviorTree);
      if (local_78.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data);
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// operator= @ 146f2f9d0

FBlackboardKeySelector * __thiscall
FBlackboardKeySelector::operator=(FBlackboardKeySelector *this,FBlackboardKeySelector *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  UClass *pUVar5;
  
  if (this != param_1) {
    iVar2 = (this->AllowedTypes).ArrayMax;
    piVar1 = &(this->AllowedTypes).ArrayMax;
    pFVar4 = (param_1->AllowedTypes).AllocatorInstance.Data;
    iVar3 = (param_1->AllowedTypes).ArrayNum;
    (this->AllowedTypes).ArrayNum = iVar3;
    if ((iVar3 == 0) && (iVar2 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar3,iVar2,(ForAnyElementType *)this,iVar3,piVar1);
      ConstructItems<TObjectPtr<UBlackboardKeyType>,TObjectPtr<UBlackboardKeyType>,int>
                ((this->AllowedTypes).AllocatorInstance.Data,
                 (TObjectPtr<UBlackboardKeyType> *)pFVar4,iVar3);
    }
  }
  this->SelectedKeyName = param_1->SelectedKeyName;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar5 = (param_1->SelectedKeyType).Class.field0_0x0.DebugPtr, pUVar5 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->SelectedKeyType).Class.field0_0x0 = (param_1->SelectedKeyType).Class.field0_0x0;
  this->SelectedKeyID = param_1->SelectedKeyID;
  *(uint *)&this->field_0x24 =
       *(uint *)&this->field_0x24 ^ (this->bNoneIsAllowedValue ^ param_1->bNoneIsAllowedValue) & 1;
  return this;
}

