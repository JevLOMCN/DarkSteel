// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHICore
// Functions: 3

// FRHIOffsetHeapDescriptorAllocator @ 1446cf160

FRHIOffsetHeapDescriptorAllocator * __thiscall
FRHIOffsetHeapDescriptorAllocator::FRHIOffsetHeapDescriptorAllocator
          (FRHIOffsetHeapDescriptorAllocator *this,ERHIDescriptorTypeMask param_1,uint param_2,
          uint param_3,TArrayView<TStatId_const_,int> *param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->_padding_,4000);
  this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  *(uint *)&this->_padding_ = param_2;
  iVar4 = (int)this->_padding_;
  iVar3 = param_4->ArrayNum;
  if (iVar4 == *(int *)((longlong)&this->_padding_ + 4)) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,(ForAnyElementType *)this,(int *)((longlong)&this->_padding_ + 4));
  }
  *(int *)&this->_padding_ = iVar4 + 1;
  puVar2 = (undefined4 *)(this->_padding_ + (longlong)iVar4 * 8);
  *puVar2 = 0;
  puVar2[1] = param_2 - 1;
  iVar4 = *piVar1;
  *(int *)&this->_padding_ = iVar3;
  if ((iVar3 == 0) && (iVar4 == 0)) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar3,iVar4,(ForAnyElementType *)&this->_padding_,iVar3,piVar1);
    if (iVar3 != 0) {
      memcpy((void *)this->_padding_,param_4->DataPtr,(longlong)iVar3 << 3);
    }
  }
  this->HeapOffset = param_3;
  *(ERHIDescriptorTypeMask *)&this->_padding_ = param_1;
  return this;
}

// Allocate @ 1446d1830

FRHIDescriptorHandle __thiscall
FRHIOffsetHeapDescriptorAllocator::Allocate
          (FRHIOffsetHeapDescriptorAllocator *this,ERHIDescriptorType param_1)

{
  longlong *lpCriticalSection;
  undefined7 in_register_00000011;
  FRHIDescriptorHandle FVar1;
  char in_R8B;
  TOptional<FRHIDescriptorAllocation> local_18;
  
  FVar1._1_7_ = in_register_00000011;
  FVar1.Index._0_1_ = param_1;
  lpCriticalSection = &this->_padding_;
  if (lpCriticalSection != (longlong *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    FRHIDescriptorAllocator::AllocateInternal((FRHIDescriptorAllocator *)this,&local_18,1);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (((local_18.bIsSet == false) || (local_18.TypedValue.StartIndex == 0xffffffff)) ||
       (in_R8B == '\t')) {
      *(undefined8 *)FVar1 = 0;
      *(undefined4 *)FVar1 = 0xffffffff;
      *(undefined1 *)((longlong)FVar1 + 4) = 9;
    }
    else {
      *(uint *)FVar1 = local_18.TypedValue.StartIndex + this->HeapOffset;
      *(char *)((longlong)FVar1 + 4) = in_R8B;
    }
    return FVar1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// Free @ 1446dcef0

void __thiscall
FRHIOffsetHeapDescriptorAllocator::Free
          (FRHIOffsetHeapDescriptorAllocator *this,FRHIDescriptorHandle param_1)

{
  code *pcVar1;
  FRHIDescriptorAllocation FVar2;
  ERHIDescriptorType EVar3;
  bool bVar4;
  uint uVar5;
  
  if ((((param_1.Index != 0xffffffff) && (EVar3 = param_1.Type, EVar3 != Invalid)) &&
      (uVar5 = param_1.Index - this->HeapOffset, uVar5 != 0xffffffff)) && (EVar3 != Invalid)) {
    if ((((ushort)this->_padding_ >> (EVar3 & 0xf) & 1) == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("HandlesAllocation(InHandle.GetType())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHIDescriptorAllocator.cpp"
                           ,0x11d,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (uVar5 != 0xffffffff) {
      FVar2.Count = 1;
      FVar2.StartIndex = uVar5;
      FRHIDescriptorAllocator::Free((FRHIDescriptorAllocator *)this,FVar2);
    }
  }
  return;
}

