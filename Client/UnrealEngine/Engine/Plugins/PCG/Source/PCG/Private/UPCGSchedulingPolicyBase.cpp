// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 12

// StaticClass @ 149721a40

UClass * __cdecl UPCGSchedulingPolicyBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSchedulingPolicyBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSchedulingPolicyBase",
               &Z_Registration_Info_UClass_UPCGSchedulingPolicyBase.InnerSingleton,
               StaticRegisterNativesUPCGSchedulingPolicyBase,0x40,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGSchedulingPolicyBase>,
               InternalVTableHelperCtorCaller<UPCGSchedulingPolicyBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSchedulingPolicyBase.InnerSingleton;
}

// UPCGSchedulingPolicyBase @ 149725990

UPCGSchedulingPolicyBase * __thiscall
UPCGSchedulingPolicyBase::UPCGSchedulingPolicyBase
          (UPCGSchedulingPolicyBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGSchedulingPolicyBase__6B_;
  this->GridStreamingDependencyMode = AllGridsExceptUnbounded;
  (this->GridsDependentOnWorldStreaming).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GridsDependentOnWorldStreaming).ArrayNum = 0;
  (this->GridsDependentOnWorldStreaming).ArrayMax = 0;
  return this;
}

// UPCGSchedulingPolicyBase @ 1497259d0

UPCGSchedulingPolicyBase * __thiscall
UPCGSchedulingPolicyBase::UPCGSchedulingPolicyBase
          (UPCGSchedulingPolicyBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGSchedulingPolicyBase__6B_;
  this->GridStreamingDependencyMode = AllGridsExceptUnbounded;
  (this->GridsDependentOnWorldStreaming).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GridsDependentOnWorldStreaming).ArrayNum = 0;
  (this->GridsDependentOnWorldStreaming).ArrayMax = 0;
  return this;
}

// ~UPCGSchedulingPolicyBase @ 149725f80

void __thiscall UPCGSchedulingPolicyBase::~UPCGSchedulingPolicyBase(UPCGSchedulingPolicyBase *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UPCGSchedulingPolicyBase__6B_;
  pFVar1 = (this->GridsDependentOnWorldStreaming).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// CalculatePriority @ 149726670

double __thiscall
UPCGSchedulingPolicyBase::CalculatePriority
          (UPCGSchedulingPolicyBase *this,IPCGGenSourceBase *param_1,TBox<double> *param_2,
          bool param_3)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\RuntimeGen\\SchedulingPolicies\\PCGSchedulingPolicyBase.h"
             ,0x26,L"Pure virtual not implemented (%s)");
  return 0.0;
}

// CullsBasedOnDirection @ 149726810

bool __thiscall UPCGSchedulingPolicyBase::CullsBasedOnDirection(UPCGSchedulingPolicyBase *this)

{
  return true;
}

// GetPrivateStaticClass @ 1497275c0

UClass * __cdecl UPCGSchedulingPolicyBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSchedulingPolicyBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSchedulingPolicyBase",
               &Z_Registration_Info_UClass_UPCGSchedulingPolicyBase.InnerSingleton,
               StaticRegisterNativesUPCGSchedulingPolicyBase,0x40,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGSchedulingPolicyBase>,
               InternalVTableHelperCtorCaller<UPCGSchedulingPolicyBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSchedulingPolicyBase.InnerSingleton;
}

// IsEquivalent @ 149727a30

bool __thiscall
UPCGSchedulingPolicyBase::IsEquivalent
          (UPCGSchedulingPolicyBase *this,UPCGSchedulingPolicyBase *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\RuntimeGen\\SchedulingPolicies\\PCGSchedulingPolicyBase.h"
             ,0x32,L"Pure virtual not implemented (%s)");
  return false;
}

// ShouldCull @ 149727ef0

bool __thiscall
UPCGSchedulingPolicyBase::ShouldCull
          (UPCGSchedulingPolicyBase *this,IPCGGenSourceBase *param_1,TBox<double> *param_2,
          bool param_3)

{
  return false;
}

// ShouldGenerate @ 149727f10

bool __thiscall
UPCGSchedulingPolicyBase::ShouldGenerate
          (UPCGSchedulingPolicyBase *this,IPCGGenSourceBase *param_1,TBox<double> *param_2,
          bool param_3)

{
  return true;
}

// StaticRegisterNativesUPCGSchedulingPolicyBase @ 149728030

void __cdecl UPCGSchedulingPolicyBase::StaticRegisterNativesUPCGSchedulingPolicyBase(void)

{
  return;
}

// DoesGridDependOnWorldStreaming @ 149f41e60

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

bool __thiscall
UPCGSchedulingPolicyBase::DoesGridDependOnWorldStreaming
          (UPCGSchedulingPolicyBase *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  EPCGGridStreamingDependencyMode EVar2;
  EPCGHiGenGrid EVar3;
  FScriptContainerElement *pFVar4;
  
  if ((this->GridStreamingDependencyMode != NoGrids) &&
     (EVar3 = PCGHiGenGrid::GridSizeToGrid(param_1), EVar3 != Uninitialized)) {
    EVar2 = this->GridStreamingDependencyMode;
    if (EVar2 == AllGrids) {
      return true;
    }
    if (EVar2 == AllGridsExceptUnbounded) {
      if (EVar3 != Unbounded) {
        return true;
      }
    }
    else if (EVar2 == SpecificGrids) {
      pFVar4 = (this->GridsDependentOnWorldStreaming).AllocatorInstance.Data;
      pFVar1 = pFVar4 + (longlong)(this->GridsDependentOnWorldStreaming).ArrayNum * 4;
      if (pFVar4 != pFVar1) {
        do {
          if (*(EPCGHiGenGrid *)pFVar4 == EVar3) {
            return true;
          }
          pFVar4 = pFVar4 + 4;
        } while (pFVar4 != pFVar1);
        return false;
      }
    }
  }
  return false;
}

