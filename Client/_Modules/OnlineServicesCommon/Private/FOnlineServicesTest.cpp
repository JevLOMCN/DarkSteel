// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommon
// Functions: 1

// RegisterComponents @ 14eefbbf0

void __thiscall FOnlineServicesTest::RegisterComponents(FOnlineServicesTest *this)

{
  undefined1 *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FOnlineComponentTest *pFVar4;
  undefined8 *local_18 [2];
  
  this_00 = &this->field_0x198;
  pFVar4 = UE::Online::FOnlineComponentRegistry::Get<FOnlineComponentTest>
                     ((FOnlineComponentRegistry *)this_00);
  if (pFVar4 == (FOnlineComponentTest *)0x0) {
    local_18[0] = ::operator_new(0x160);
    if (local_18[0] == (undefined8 *)0x0) {
      local_18[0] = (undefined8 *)0x0;
    }
    else {
      *local_18[0] = &
                     ___7__TComponentWrapper_VFOnlineComponentTest___FOnlineComponentRegistry_Online_UE__6B_
      ;
      FOnlineComponentTest::FOnlineComponentTest((FOnlineComponentTest *)(local_18[0] + 2),this);
    }
    if ((*(undefined8 ***)this_00 <= local_18) &&
       (local_18 < *(undefined8 ***)this_00 + *(int *)&this->field_0x1a4)) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    iVar3 = *(int *)&this->field_0x1a0;
    if (iVar3 == *(int *)&this->field_0x1a4) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)this_00,(int *)&this->field_0x1a4);
    }
    *(int *)&this->field_0x1a0 = iVar3 + 1;
    *(undefined8 **)(*(longlong *)this_00 + (longlong)iVar3 * 8) = local_18[0];
  }
  return;
}

