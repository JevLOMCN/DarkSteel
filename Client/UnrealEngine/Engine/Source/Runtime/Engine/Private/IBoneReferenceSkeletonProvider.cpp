// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// _getUObject @ 14749e6d0

UObject * __thiscall
IBoneReferenceSkeletonProvider::_getUObject(IBoneReferenceSkeletonProvider *this)

{
  return (UObject *)0x0;
}

// GetSkeleton @ 14749e720

USkeleton * __thiscall
IBoneReferenceSkeletonProvider::GetSkeleton(IBoneReferenceSkeletonProvider *this,bool *param_1)

{
  USkeleton *pUVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014749e726. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pUVar1 = (USkeleton *)(**(code **)((longlong)*this + 0x10))(this,param_1,0);
  return pUVar1;
}

// ~IBoneReferenceSkeletonProvider @ 1474b5460

void __thiscall
IBoneReferenceSkeletonProvider::~IBoneReferenceSkeletonProvider
          (IBoneReferenceSkeletonProvider *this)

{
  *this = (IBoneReferenceSkeletonProvider)&___7IBoneReferenceSkeletonProvider__6B_;
  return;
}

// GetSkeleton @ 1474df4f0

USkeleton * __thiscall
IBoneReferenceSkeletonProvider::GetSkeleton
          (IBoneReferenceSkeletonProvider *this,bool *param_1,IPropertyHandle *param_2)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Interfaces\\Interface_BoneReferenceSkeletonProvider.h"
             ,0x23,L"Pure virtual not implemented (%s)");
  return (USkeleton *)0x0;
}

