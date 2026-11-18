// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 20

// GetMutable<FTestConstSharedFragment_Int> @ 1470dfc80

FTestConstSharedFragment_Int * __thiscall
FInstancedStruct::GetMutable<FTestConstSharedFragment_Int>(FInstancedStruct *this)

{
  int iVar1;
  UScriptStruct *pUVar2;
  code *pcVar3;
  bool bVar4;
  FTestConstSharedFragment_Int *pFVar5;
  UPackage *pUVar6;
  
  pFVar5 = (FTestConstSharedFragment_Int *)this->StructMemory;
  pUVar2 = (this->ScriptStruct).field0_0x0.DebugPtr;
  if ((pFVar5 == (FTestConstSharedFragment_Int *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Memory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                         ,0xd1,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FTestConstSharedFragment_Int *)(*pcVar3)();
    return pFVar5;
  }
  if ((pUVar2 == (UScriptStruct *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Struct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                         ,0xd2,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FTestConstSharedFragment_Int *)(*pcVar3)();
    return pFVar5;
  }
  if (Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar6 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestConstSharedFragment_Int,(UObject *)pUVar6,
                         L"TestConstSharedFragment_Int");
    if (Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton ==
        (UScriptStruct *)0x0) goto LAB_1470dfd3e;
  }
  iVar1 = (int)(Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton)->
               _padding_;
  if (((int)pUVar2->_padding_ < iVar1) ||
     ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
      &(Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton)->_padding_))
  {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (bVar4) {
    return pFVar5;
  }
LAB_1470dfd3e:
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Struct->IsChildOf(TBaseStructure<T>::Get())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                     ,0xd3,L"");
  if (!bVar4) {
    return pFVar5;
  }
  pcVar3 = (code *)swi(3);
  pFVar5 = (FTestConstSharedFragment_Int *)(*pcVar3)();
  return pFVar5;
}

// GetMutable<FTestFragment_Float> @ 1470dfd80

FTestFragment_Float * __thiscall
FInstancedStruct::GetMutable<FTestFragment_Float>(FInstancedStruct *this)

{
  int iVar1;
  UScriptStruct *pUVar2;
  code *pcVar3;
  bool bVar4;
  FTestFragment_Float *pFVar5;
  UPackage *pUVar6;
  
  pFVar5 = (FTestFragment_Float *)this->StructMemory;
  pUVar2 = (this->ScriptStruct).field0_0x0.DebugPtr;
  if ((pFVar5 == (FTestFragment_Float *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Memory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                         ,0xd1,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FTestFragment_Float *)(*pcVar3)();
    return pFVar5;
  }
  if ((pUVar2 == (UScriptStruct *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Struct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                         ,0xd2,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FTestFragment_Float *)(*pcVar3)();
    return pFVar5;
  }
  if (Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar6 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Float,(UObject *)pUVar6,
                         L"TestFragment_Float");
    if (Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton == (UScriptStruct *)0x0
       ) goto LAB_1470dfe3e;
  }
  iVar1 = (int)(Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton)->_padding_;
  if (((int)pUVar2->_padding_ < iVar1) ||
     ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
      &(Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton)->_padding_)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (bVar4) {
    return pFVar5;
  }
LAB_1470dfe3e:
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Struct->IsChildOf(TBaseStructure<T>::Get())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                     ,0xd3,L"");
  if (!bVar4) {
    return pFVar5;
  }
  pcVar3 = (code *)swi(3);
  pFVar5 = (FTestFragment_Float *)(*pcVar3)();
  return pFVar5;
}

// GetMutable<FTestFragment_Int> @ 1470dfe80

FTestFragment_Int * __thiscall
FInstancedStruct::GetMutable<FTestFragment_Int>(FInstancedStruct *this)

{
  int iVar1;
  UScriptStruct *pUVar2;
  code *pcVar3;
  bool bVar4;
  FTestFragment_Int *pFVar5;
  UPackage *pUVar6;
  
  pFVar5 = (FTestFragment_Int *)this->StructMemory;
  pUVar2 = (this->ScriptStruct).field0_0x0.DebugPtr;
  if ((pFVar5 == (FTestFragment_Int *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Memory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                         ,0xd1,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FTestFragment_Int *)(*pcVar3)();
    return pFVar5;
  }
  if ((pUVar2 == (UScriptStruct *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Struct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                         ,0xd2,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FTestFragment_Int *)(*pcVar3)();
    return pFVar5;
  }
  if (Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar6 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Int,(UObject *)pUVar6,
                         L"TestFragment_Int");
    if (Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton == (UScriptStruct *)0x0)
    goto LAB_1470dff3e;
  }
  iVar1 = (int)(Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton)->_padding_;
  if (((int)pUVar2->_padding_ < iVar1) ||
     ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
      &(Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton)->_padding_)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (bVar4) {
    return pFVar5;
  }
LAB_1470dff3e:
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Struct->IsChildOf(TBaseStructure<T>::Get())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                     ,0xd3,L"");
  if (!bVar4) {
    return pFVar5;
  }
  pcVar3 = (code *)swi(3);
  pFVar5 = (FTestFragment_Int *)(*pcVar3)();
  return pFVar5;
}

// GetMutable<FTestSharedFragment_Float> @ 1470dff80

FTestSharedFragment_Float * __thiscall
FInstancedStruct::GetMutable<FTestSharedFragment_Float>(FInstancedStruct *this)

{
  int iVar1;
  UScriptStruct *pUVar2;
  code *pcVar3;
  bool bVar4;
  FTestSharedFragment_Float *pFVar5;
  UPackage *pUVar6;
  
  pFVar5 = (FTestSharedFragment_Float *)this->StructMemory;
  pUVar2 = (this->ScriptStruct).field0_0x0.DebugPtr;
  if ((pFVar5 == (FTestSharedFragment_Float *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Memory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                         ,0xd1,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FTestSharedFragment_Float *)(*pcVar3)();
    return pFVar5;
  }
  if ((pUVar2 == (UScriptStruct *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Struct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                         ,0xd2,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FTestSharedFragment_Float *)(*pcVar3)();
    return pFVar5;
  }
  if (Z_Registration_Info_UScriptStruct_FTestSharedFragment_Float.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar6 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestSharedFragment_Float.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestSharedFragment_Float,(UObject *)pUVar6,
                         L"TestSharedFragment_Float");
    if (Z_Registration_Info_UScriptStruct_FTestSharedFragment_Float.OuterSingleton ==
        (UScriptStruct *)0x0) goto LAB_1470e003e;
  }
  iVar1 = (int)(Z_Registration_Info_UScriptStruct_FTestSharedFragment_Float.OuterSingleton)->
               _padding_;
  if (((int)pUVar2->_padding_ < iVar1) ||
     ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
      &(Z_Registration_Info_UScriptStruct_FTestSharedFragment_Float.OuterSingleton)->_padding_)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (bVar4) {
    return pFVar5;
  }
LAB_1470e003e:
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Struct->IsChildOf(TBaseStructure<T>::Get())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                     ,0xd3,L"");
  if (!bVar4) {
    return pFVar5;
  }
  pcVar3 = (code *)swi(3);
  pFVar5 = (FTestSharedFragment_Float *)(*pcVar3)();
  return pFVar5;
}

// InitializeAs<FFragmentWithSharedPtr,TSharedPtr<int,1>_&> @ 1470e5f10

FFragmentWithSharedPtr * __thiscall
FInstancedStruct::InitializeAs<FFragmentWithSharedPtr,TSharedPtr<int,1>_&>
          (FInstancedStruct *this,TSharedPtr<int,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  UScriptStruct *pUVar3;
  bool bVar4;
  UPackage *pUVar5;
  FFragmentWithSharedPtr *pFVar6;
  uint uVar7;
  uint uVar8;
  
  if (Z_Registration_Info_UScriptStruct_FFragmentWithSharedPtr.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FFragmentWithSharedPtr.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFragmentWithSharedPtr,(UObject *)pUVar5,
                         L"FragmentWithSharedPtr");
  }
  pUVar3 = Z_Registration_Info_UScriptStruct_FFragmentWithSharedPtr.OuterSingleton;
  if (Z_Registration_Info_UScriptStruct_FFragmentWithSharedPtr.OuterSingleton ==
      (this->ScriptStruct).field0_0x0.DebugPtr) {
    pFVar6 = (FFragmentWithSharedPtr *)this->StructMemory;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pFVar6->Data).SharedReferenceCount.ReferenceController);
  }
  else {
    Reset(this);
    uVar8 = (uint)*(short *)((longlong)&pUVar3->_padding_ + 4);
    uVar7 = (int)pUVar3->_padding_ + -1 + uVar8 & -uVar8;
    if ((int)uVar7 < 1) {
      uVar7 = 1;
    }
    pFVar6 = FMemory::Malloc((longlong)(int)uVar7,uVar8);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->ScriptStruct).field0_0x0.DebugPtr = pUVar3;
    this->StructMemory = (uchar *)pFVar6;
  }
  if (pFVar6 == (FFragmentWithSharedPtr *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Memory",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                       ,0x74,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FFragmentWithSharedPtr *)(*pcVar2)();
      return pFVar6;
    }
  }
  (pFVar6->Data).Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (pFVar6->Data).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return pFVar6;
}

// InitializeAs<FTestConstSharedFragment_Int> @ 1470e6020

FTestConstSharedFragment_Int * __thiscall
FInstancedStruct::InitializeAs<FTestConstSharedFragment_Int>(FInstancedStruct *this)

{
  code *pcVar1;
  UScriptStruct *pUVar2;
  bool bVar3;
  UPackage *pUVar4;
  FTestConstSharedFragment_Int *pFVar5;
  uint uVar6;
  uint uVar7;
  
  if (Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar4 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestConstSharedFragment_Int,(UObject *)pUVar4,
                         L"TestConstSharedFragment_Int");
  }
  pUVar2 = Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton;
  if (Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton ==
      (this->ScriptStruct).field0_0x0.DebugPtr) {
    pFVar5 = (FTestConstSharedFragment_Int *)this->StructMemory;
  }
  else {
    Reset(this);
    uVar7 = (uint)*(short *)((longlong)&pUVar2->_padding_ + 4);
    uVar6 = (int)pUVar2->_padding_ + -1 + uVar7 & -uVar7;
    if ((int)uVar6 < 1) {
      uVar6 = 1;
    }
    pFVar5 = FMemory::Malloc((longlong)(int)uVar6,uVar7);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    (this->ScriptStruct).field0_0x0.DebugPtr = pUVar2;
    this->StructMemory = (uchar *)pFVar5;
  }
  if (pFVar5 == (FTestConstSharedFragment_Int *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Memory",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                       ,0x74,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FTestConstSharedFragment_Int *)(*pcVar1)();
      return pFVar5;
    }
  }
  pFVar5->Value = 0;
  return pFVar5;
}

// InitializeAs<FTestConstSharedFragment_Int,int_const_&> @ 1470e6100

FTestConstSharedFragment_Int * __thiscall
FInstancedStruct::InitializeAs<FTestConstSharedFragment_Int,int_const_&>
          (FInstancedStruct *this,int *param_1)

{
  code *pcVar1;
  UScriptStruct *pUVar2;
  bool bVar3;
  UPackage *pUVar4;
  FTestConstSharedFragment_Int *pFVar5;
  uint uVar6;
  uint uVar7;
  
  if (Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar4 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestConstSharedFragment_Int,(UObject *)pUVar4,
                         L"TestConstSharedFragment_Int");
  }
  pUVar2 = Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton;
  if (Z_Registration_Info_UScriptStruct_FTestConstSharedFragment_Int.OuterSingleton ==
      (this->ScriptStruct).field0_0x0.DebugPtr) {
    pFVar5 = (FTestConstSharedFragment_Int *)this->StructMemory;
  }
  else {
    Reset(this);
    uVar7 = (uint)*(short *)((longlong)&pUVar2->_padding_ + 4);
    uVar6 = (int)pUVar2->_padding_ + -1 + uVar7 & -uVar7;
    if ((int)uVar6 < 1) {
      uVar6 = 1;
    }
    pFVar5 = FMemory::Malloc((longlong)(int)uVar6,uVar7);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    (this->ScriptStruct).field0_0x0.DebugPtr = pUVar2;
    this->StructMemory = (uchar *)pFVar5;
  }
  if (pFVar5 == (FTestConstSharedFragment_Int *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Memory",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                       ,0x74,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FTestConstSharedFragment_Int *)(*pcVar1)();
      return pFVar5;
    }
  }
  pFVar5->Value = *param_1;
  return pFVar5;
}

// InitializeAs<FTestFragment_Float> @ 1470e61f0

FTestFragment_Float * __thiscall
FInstancedStruct::InitializeAs<FTestFragment_Float>(FInstancedStruct *this)

{
  code *pcVar1;
  UScriptStruct *pUVar2;
  bool bVar3;
  UPackage *pUVar4;
  FTestFragment_Float *pFVar5;
  uint uVar6;
  uint uVar7;
  
  if (Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar4 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Float,(UObject *)pUVar4,
                         L"TestFragment_Float");
  }
  pUVar2 = Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton;
  if (Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton ==
      (this->ScriptStruct).field0_0x0.DebugPtr) {
    pFVar5 = (FTestFragment_Float *)this->StructMemory;
  }
  else {
    Reset(this);
    uVar7 = (uint)*(short *)((longlong)&pUVar2->_padding_ + 4);
    uVar6 = (int)pUVar2->_padding_ + -1 + uVar7 & -uVar7;
    if ((int)uVar6 < 1) {
      uVar6 = 1;
    }
    pFVar5 = FMemory::Malloc((longlong)(int)uVar6,uVar7);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    (this->ScriptStruct).field0_0x0.DebugPtr = pUVar2;
    this->StructMemory = (uchar *)pFVar5;
  }
  if (pFVar5 == (FTestFragment_Float *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Memory",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                       ,0x74,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FTestFragment_Float *)(*pcVar1)();
      return pFVar5;
    }
  }
  pFVar5->Value = 0.0;
  return pFVar5;
}

// InitializeAs<FTestFragment_Float,float_const_&> @ 1470e62d0

FTestFragment_Float * __thiscall
FInstancedStruct::InitializeAs<FTestFragment_Float,float_const_&>
          (FInstancedStruct *this,float *param_1)

{
  code *pcVar1;
  UScriptStruct *pUVar2;
  bool bVar3;
  UPackage *pUVar4;
  FTestFragment_Float *pFVar5;
  uint uVar6;
  uint uVar7;
  
  if (Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar4 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Float,(UObject *)pUVar4,
                         L"TestFragment_Float");
  }
  pUVar2 = Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton;
  if (Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton ==
      (this->ScriptStruct).field0_0x0.DebugPtr) {
    pFVar5 = (FTestFragment_Float *)this->StructMemory;
  }
  else {
    Reset(this);
    uVar7 = (uint)*(short *)((longlong)&pUVar2->_padding_ + 4);
    uVar6 = (int)pUVar2->_padding_ + -1 + uVar7 & -uVar7;
    if ((int)uVar6 < 1) {
      uVar6 = 1;
    }
    pFVar5 = FMemory::Malloc((longlong)(int)uVar6,uVar7);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    (this->ScriptStruct).field0_0x0.DebugPtr = pUVar2;
    this->StructMemory = (uchar *)pFVar5;
  }
  if (pFVar5 == (FTestFragment_Float *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Memory",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                       ,0x74,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FTestFragment_Float *)(*pcVar1)();
      return pFVar5;
    }
  }
  pFVar5->Value = *param_1;
  return pFVar5;
}

// InitializeAs<FTestFragment_Int> @ 1470e63c0

FTestFragment_Int * __thiscall
FInstancedStruct::InitializeAs<FTestFragment_Int>(FInstancedStruct *this)

{
  code *pcVar1;
  UScriptStruct *pUVar2;
  bool bVar3;
  UPackage *pUVar4;
  FTestFragment_Int *pFVar5;
  uint uVar6;
  uint uVar7;
  
  if (Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar4 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Int,(UObject *)pUVar4,
                         L"TestFragment_Int");
  }
  pUVar2 = Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton;
  if (Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton ==
      (this->ScriptStruct).field0_0x0.DebugPtr) {
    pFVar5 = (FTestFragment_Int *)this->StructMemory;
  }
  else {
    Reset(this);
    uVar7 = (uint)*(short *)((longlong)&pUVar2->_padding_ + 4);
    uVar6 = (int)pUVar2->_padding_ + -1 + uVar7 & -uVar7;
    if ((int)uVar6 < 1) {
      uVar6 = 1;
    }
    pFVar5 = FMemory::Malloc((longlong)(int)uVar6,uVar7);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    (this->ScriptStruct).field0_0x0.DebugPtr = pUVar2;
    this->StructMemory = (uchar *)pFVar5;
  }
  if (pFVar5 == (FTestFragment_Int *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Memory",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                       ,0x74,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FTestFragment_Int *)(*pcVar1)();
      return pFVar5;
    }
  }
  pFVar5->Value = 0;
  return pFVar5;
}

// InitializeAs<FTestFragment_Int,int_const_&> @ 1470e64a0

FTestFragment_Int * __thiscall
FInstancedStruct::InitializeAs<FTestFragment_Int,int_const_&>(FInstancedStruct *this,int *param_1)

{
  code *pcVar1;
  UScriptStruct *pUVar2;
  bool bVar3;
  UPackage *pUVar4;
  FTestFragment_Int *pFVar5;
  uint uVar6;
  uint uVar7;
  
  if (Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar4 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Int,(UObject *)pUVar4,
                         L"TestFragment_Int");
  }
  pUVar2 = Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton;
  if (Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton ==
      (this->ScriptStruct).field0_0x0.DebugPtr) {
    pFVar5 = (FTestFragment_Int *)this->StructMemory;
  }
  else {
    Reset(this);
    uVar7 = (uint)*(short *)((longlong)&pUVar2->_padding_ + 4);
    uVar6 = (int)pUVar2->_padding_ + -1 + uVar7 & -uVar7;
    if ((int)uVar6 < 1) {
      uVar6 = 1;
    }
    pFVar5 = FMemory::Malloc((longlong)(int)uVar6,uVar7);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    (this->ScriptStruct).field0_0x0.DebugPtr = pUVar2;
    this->StructMemory = (uchar *)pFVar5;
  }
  if (pFVar5 == (FTestFragment_Int *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Memory",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                       ,0x74,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FTestFragment_Int *)(*pcVar1)();
      return pFVar5;
    }
  }
  pFVar5->Value = *param_1;
  return pFVar5;
}

// InitializeAs<FTestSharedFragment_Float> @ 1470e6590

FTestSharedFragment_Float * __thiscall
FInstancedStruct::InitializeAs<FTestSharedFragment_Float>(FInstancedStruct *this)

{
  code *pcVar1;
  UScriptStruct *pUVar2;
  bool bVar3;
  UPackage *pUVar4;
  FTestSharedFragment_Float *pFVar5;
  uint uVar6;
  uint uVar7;
  
  if (Z_Registration_Info_UScriptStruct_FTestSharedFragment_Float.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar4 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestSharedFragment_Float.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestSharedFragment_Float,(UObject *)pUVar4,
                         L"TestSharedFragment_Float");
  }
  pUVar2 = Z_Registration_Info_UScriptStruct_FTestSharedFragment_Float.OuterSingleton;
  if (Z_Registration_Info_UScriptStruct_FTestSharedFragment_Float.OuterSingleton ==
      (this->ScriptStruct).field0_0x0.DebugPtr) {
    pFVar5 = (FTestSharedFragment_Float *)this->StructMemory;
  }
  else {
    Reset(this);
    uVar7 = (uint)*(short *)((longlong)&pUVar2->_padding_ + 4);
    uVar6 = (int)pUVar2->_padding_ + -1 + uVar7 & -uVar7;
    if ((int)uVar6 < 1) {
      uVar6 = 1;
    }
    pFVar5 = FMemory::Malloc((longlong)(int)uVar6,uVar7);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    (this->ScriptStruct).field0_0x0.DebugPtr = pUVar2;
    this->StructMemory = (uchar *)pFVar5;
  }
  if (pFVar5 == (FTestSharedFragment_Float *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Memory",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                       ,0x74,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FTestSharedFragment_Float *)(*pcVar1)();
      return pFVar5;
    }
  }
  pFVar5->Value = 0.0;
  return pFVar5;
}

// InitializeAs<FTestSharedFragment_Float,float_const_&> @ 1470e6670

FTestSharedFragment_Float * __thiscall
FInstancedStruct::InitializeAs<FTestSharedFragment_Float,float_const_&>
          (FInstancedStruct *this,float *param_1)

{
  code *pcVar1;
  UScriptStruct *pUVar2;
  bool bVar3;
  UPackage *pUVar4;
  FTestSharedFragment_Float *pFVar5;
  uint uVar6;
  uint uVar7;
  
  if (Z_Registration_Info_UScriptStruct_FTestSharedFragment_Float.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar4 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestSharedFragment_Float.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestSharedFragment_Float,(UObject *)pUVar4,
                         L"TestSharedFragment_Float");
  }
  pUVar2 = Z_Registration_Info_UScriptStruct_FTestSharedFragment_Float.OuterSingleton;
  if (Z_Registration_Info_UScriptStruct_FTestSharedFragment_Float.OuterSingleton ==
      (this->ScriptStruct).field0_0x0.DebugPtr) {
    pFVar5 = (FTestSharedFragment_Float *)this->StructMemory;
  }
  else {
    Reset(this);
    uVar7 = (uint)*(short *)((longlong)&pUVar2->_padding_ + 4);
    uVar6 = (int)pUVar2->_padding_ + -1 + uVar7 & -uVar7;
    if ((int)uVar6 < 1) {
      uVar6 = 1;
    }
    pFVar5 = FMemory::Malloc((longlong)(int)uVar6,uVar7);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    (this->ScriptStruct).field0_0x0.DebugPtr = pUVar2;
    this->StructMemory = (uchar *)pFVar5;
  }
  if (pFVar5 == (FTestSharedFragment_Float *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Memory",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                       ,0x74,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FTestSharedFragment_Float *)(*pcVar1)();
      return pFVar5;
    }
  }
  pFVar5->Value = *param_1;
  return pFVar5;
}

// Make<FTestFragment_Float> @ 1470e9d30

FInstancedStruct * __cdecl
FInstancedStruct::Make<FTestFragment_Float>
          (FInstancedStruct *__return_storage_ptr__,FTestFragment_Float *param_1)

{
  UPackage *pUVar1;
  
  FInstancedStruct(__return_storage_ptr__);
  if (Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Float,(UObject *)pUVar1,
                         L"TestFragment_Float");
  }
  InitializeAs(__return_storage_ptr__,
               Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton,(uchar *)param_1
              );
  return __return_storage_ptr__;
}

// Make<FTestFragment_Float> @ 1470e9da0

FInstancedStruct * __cdecl
FInstancedStruct::Make<FTestFragment_Float>(FInstancedStruct *__return_storage_ptr__)

{
  UPackage *pUVar1;
  
  FInstancedStruct(__return_storage_ptr__);
  if (Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Float,(UObject *)pUVar1,
                         L"TestFragment_Float");
  }
  InitializeAs(__return_storage_ptr__,
               Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton,(uchar *)0x0);
  return __return_storage_ptr__;
}

// Make<FTestFragment_Int> @ 1470e9e00

FInstancedStruct * __cdecl
FInstancedStruct::Make<FTestFragment_Int>
          (FInstancedStruct *__return_storage_ptr__,FTestFragment_Int *param_1)

{
  UPackage *pUVar1;
  
  FInstancedStruct(__return_storage_ptr__);
  if (Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Int,(UObject *)pUVar1,
                         L"TestFragment_Int");
  }
  InitializeAs(__return_storage_ptr__,
               Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton,(uchar *)param_1);
  return __return_storage_ptr__;
}

// Make<FTestFragment_Int> @ 1470e9e70

FInstancedStruct * __cdecl
FInstancedStruct::Make<FTestFragment_Int>(FInstancedStruct *__return_storage_ptr__)

{
  UPackage *pUVar1;
  
  FInstancedStruct(__return_storage_ptr__);
  if (Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Int,(UObject *)pUVar1,
                         L"TestFragment_Int");
  }
  InitializeAs(__return_storage_ptr__,
               Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton,(uchar *)0x0);
  return __return_storage_ptr__;
}

// Make<FTestFragment_Int,int_&> @ 1470e9ed0

FInstancedStruct * __cdecl
FInstancedStruct::Make<FTestFragment_Int,int_&>
          (FInstancedStruct *__return_storage_ptr__,int *param_1)

{
  code *pcVar1;
  UScriptStruct *pUVar2;
  bool bVar3;
  UPackage *pUVar4;
  int *piVar5;
  FInstancedStruct *pFVar6;
  uint uVar7;
  uint uVar8;
  
  FInstancedStruct(__return_storage_ptr__);
  if (Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar4 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Int,(UObject *)pUVar4,
                         L"TestFragment_Int");
  }
  pUVar2 = Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton;
  if (Z_Registration_Info_UScriptStruct_FTestFragment_Int.OuterSingleton ==
      (__return_storage_ptr__->ScriptStruct).field0_0x0.DebugPtr) {
    piVar5 = (int *)__return_storage_ptr__->StructMemory;
  }
  else {
    Reset(__return_storage_ptr__);
    uVar8 = (uint)*(short *)((longlong)&pUVar2->_padding_ + 4);
    uVar7 = (int)pUVar2->_padding_ + -1 + uVar8 & -uVar8;
    if ((int)uVar7 < 1) {
      uVar7 = 1;
    }
    piVar5 = FMemory::Malloc((longlong)(int)uVar7,uVar8);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    (__return_storage_ptr__->ScriptStruct).field0_0x0.DebugPtr = pUVar2;
    __return_storage_ptr__->StructMemory = (uchar *)piVar5;
  }
  if (piVar5 == (int *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Memory",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                       ,0x74,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FInstancedStruct *)(*pcVar1)();
      return pFVar6;
    }
  }
  *piVar5 = *param_1;
  return __return_storage_ptr__;
}

// ~FInstancedStruct @ 1470f8240

void __thiscall FInstancedStruct::~FInstancedStruct(FInstancedStruct *this)

{
  uchar *puVar1;
  UScriptStruct *pUVar2;
  
  puVar1 = this->StructMemory;
  if (puVar1 != (uchar *)0x0) {
    pUVar2 = (this->ScriptStruct).field0_0x0.DebugPtr;
    if ((pUVar2 != (UScriptStruct *)0x0) && ((pUVar2->_padding_ & 0x40018000) == 0)) {
      pUVar2 = (this->ScriptStruct).field0_0x0.DebugPtr;
      (**(code **)(pUVar2->_padding_ + 0x300))(pUVar2,this->StructMemory,1);
    }
    FMemory::Free(puVar1);
    this->StructMemory = (uchar *)0x0;
    (this->ScriptStruct).field0_0x0.DebugPtr = (UScriptStruct *)0x0;
    return;
  }
  this->StructMemory = (uchar *)0x0;
  (this->ScriptStruct).field0_0x0.DebugPtr = (UScriptStruct *)0x0;
  return;
}

// operator= @ 1470f9440

FInstancedStruct * __thiscall
FInstancedStruct::operator=(FInstancedStruct *this,FInstancedStruct *param_1)

{
  uchar *puVar1;
  UScriptStruct *pUVar2;
  
  if (this != param_1) {
    Reset(this);
    puVar1 = param_1->StructMemory;
    pUVar2 = (param_1->ScriptStruct).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UScriptStruct *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    (this->ScriptStruct).field0_0x0.DebugPtr = pUVar2;
    this->StructMemory = puVar1;
    (param_1->ScriptStruct).field0_0x0.DebugPtr = (UScriptStruct *)0x0;
    param_1->StructMemory = (uchar *)0x0;
  }
  return this;
}

