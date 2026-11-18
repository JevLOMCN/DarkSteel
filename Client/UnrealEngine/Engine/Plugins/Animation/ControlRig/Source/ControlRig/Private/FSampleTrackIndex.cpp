// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 8

// operator= @ 14a22a160

FSampleTrackIndex * __thiscall
FSampleTrackIndex::operator=(FSampleTrackIndex *this,FSampleTrackIndex *param_1)

{
  ForElementType<int> FVar1;
  
  if (this != param_1) {
    if ((param_1->Samples).AllocatorInstance.SecondaryData == (ForElementType<int>)0x0) {
      *(undefined4 *)(this->Samples).AllocatorInstance.InlineData =
           *(undefined4 *)(param_1->Samples).AllocatorInstance.InlineData;
    }
    FVar1 = (this->Samples).AllocatorInstance.SecondaryData;
    if (FVar1 != (ForElementType<int>)0x0) {
      FMemory::Free((void *)FVar1);
    }
    (this->Samples).AllocatorInstance.SecondaryData =
         (param_1->Samples).AllocatorInstance.SecondaryData;
    (param_1->Samples).AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
    (this->Samples).ArrayNum = (param_1->Samples).ArrayNum;
    (this->Samples).ArrayMax = (param_1->Samples).ArrayMax;
    (param_1->Samples).ArrayNum = 0;
    (param_1->Samples).ArrayMax = 1;
  }
  this->bIsSingleton = param_1->bIsSingleton;
  return this;
}

// FSampleTrackIndex @ 14a3b83f0

FSampleTrackIndex * __thiscall
FSampleTrackIndex::FSampleTrackIndex(FSampleTrackIndex *this,FSampleTrackContainer *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  ForElementType<int> FVar4;
  int iVar5;
  ForElementType<int> FVar6;
  
  piVar1 = &(this->Samples).ArrayNum;
  (this->Samples).AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  *piVar1 = 0;
  piVar2 = &(this->Samples).ArrayMax;
  *piVar2 = 1;
  this->bIsSingleton = false;
  iVar3 = (param_1->Tracks).ArrayNum;
  if (0 < iVar3) {
    iVar5 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                      (4,4,iVar3,(ForElementType<int> *)this,piVar1,piVar2);
    FVar4 = (this->Samples).AllocatorInstance.SecondaryData;
    FVar6 = (ForElementType<int>)this;
    if (FVar4 != (ForElementType<int>)0x0) {
      FVar6 = FVar4;
    }
    memset((void *)((longlong)FVar6 + (longlong)iVar5 * 4),0,(longlong)iVar3 << 2);
  }
  return this;
}

// FSampleTrackIndex @ 14a3b8480

FSampleTrackIndex * __thiscall
FSampleTrackIndex::FSampleTrackIndex(FSampleTrackIndex *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  ForElementType<int> FVar3;
  int iVar4;
  ForElementType<int> FVar5;
  
  piVar1 = &(this->Samples).ArrayNum;
  (this->Samples).AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  *piVar1 = 0;
  piVar2 = &(this->Samples).ArrayMax;
  *piVar2 = 1;
  this->bIsSingleton = false;
  if (0 < param_1) {
    iVar4 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                      (4,4,param_1,(ForElementType<int> *)this,piVar1,piVar2);
    FVar3 = (this->Samples).AllocatorInstance.SecondaryData;
    FVar5 = (ForElementType<int>)this;
    if (FVar3 != (ForElementType<int>)0x0) {
      FVar5 = FVar3;
    }
    memset((void *)((longlong)FVar5 + (longlong)iVar4 * 4),0,(longlong)param_1 << 2);
  }
  return this;
}

// FSampleTrackIndex @ 14a3b8500

FSampleTrackIndex * __thiscall FSampleTrackIndex::FSampleTrackIndex(FSampleTrackIndex *this)

{
  (this->Samples).AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  (this->Samples).ArrayNum = 0;
  (this->Samples).ArrayMax = 1;
  this->bIsSingleton = false;
  return this;
}

// Allocate @ 14a3e8cd0

void __thiscall FSampleTrackIndex::Allocate(FSampleTrackIndex *this,int param_1)

{
  ForElementType<int> FVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (this->Samples).ArrayNum;
  if (iVar3 < param_1) {
    iVar3 = param_1 - iVar3;
    iVar2 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                      (4,4,iVar3,(ForElementType<int> *)this,&(this->Samples).ArrayNum,
                       &(this->Samples).ArrayMax);
    FVar1 = (this->Samples).AllocatorInstance.SecondaryData;
    if (FVar1 != (ForElementType<int>)0x0) {
      this = (FSampleTrackIndex *)FVar1;
    }
    memset((void *)((longlong)this + (longlong)iVar2 * 4),0,(longlong)iVar3 << 2);
  }
  return;
}

// GetSample @ 14a417850

int * __thiscall FSampleTrackIndex::GetSample(FSampleTrackIndex *this,int param_1)

{
  ForElementType<int> FVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  int *piVar5;
  uint uVar6;
  
  if (this->bIsSingleton == false) {
    uVar3 = 0;
    if (0 < param_1) {
      uVar3 = param_1;
    }
    Allocate(this,uVar3 + 1);
    uVar6 = 0;
    if ((int)uVar3 < (this->Samples).ArrayNum) {
      uVar6 = ~uVar3 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        piVar5 = (int *)(*pcVar2)();
        return piVar5;
      }
    }
    FVar1 = (this->Samples).AllocatorInstance.SecondaryData;
    if (FVar1 != (ForElementType<int>)0x0) {
      this = (FSampleTrackIndex *)FVar1;
    }
    return (int *)((longlong)this + (longlong)(int)uVar3 * 4);
  }
  if ((this->Samples).ArrayNum != 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Samples.Num() == 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Tracks\\SampleTrackBase.cpp"
                       ,0x1f,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      piVar5 = (int *)(*pcVar2)();
      return piVar5;
    }
  }
  if ((this->Samples).ArrayNum < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      piVar5 = (int *)(*pcVar2)();
      return piVar5;
    }
  }
  FVar1 = (this->Samples).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<int>)0x0) {
    this = (FSampleTrackIndex *)FVar1;
  }
  return (int *)(ForElementType<int>)this;
}

// MakeSingleton @ 14a42b520

FSampleTrackIndex * __cdecl
FSampleTrackIndex::MakeSingleton(FSampleTrackIndex *__return_storage_ptr__)

{
  int *piVar1;
  int *piVar2;
  ForElementType<int> FVar3;
  int iVar4;
  ForElementType<int> FVar5;
  
  piVar1 = &(__return_storage_ptr__->Samples).ArrayNum;
  (__return_storage_ptr__->Samples).AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  *piVar1 = 0;
  piVar2 = &(__return_storage_ptr__->Samples).ArrayMax;
  *piVar2 = 1;
  __return_storage_ptr__->bIsSingleton = false;
  iVar4 = UE::Core::Private::
          ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                    (4,4,1,(ForElementType<int> *)__return_storage_ptr__,piVar1,piVar2);
  FVar3 = (__return_storage_ptr__->Samples).AllocatorInstance.SecondaryData;
  FVar5 = (ForElementType<int>)__return_storage_ptr__;
  if (FVar3 != (ForElementType<int>)0x0) {
    FVar5 = FVar3;
  }
  *(undefined4 *)((longlong)FVar5 + (longlong)iVar4 * 4) = 0;
  __return_storage_ptr__->bIsSingleton = true;
  return __return_storage_ptr__;
}

// Update @ 14a45e8e0

void __thiscall FSampleTrackIndex::Update(FSampleTrackIndex *this,FSampleTrackContainer *param_1)

{
  ForElementType<int> FVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (this->Samples).ArrayNum;
  iVar3 = (param_1->Tracks).ArrayNum;
  if (iVar2 < iVar3) {
    iVar3 = iVar3 - iVar2;
    iVar2 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                      (4,4,iVar3,(ForElementType<int> *)this,&(this->Samples).ArrayNum,
                       &(this->Samples).ArrayMax);
    FVar1 = (this->Samples).AllocatorInstance.SecondaryData;
    if (FVar1 != (ForElementType<int>)0x0) {
      this = (FSampleTrackIndex *)FVar1;
    }
    memset((void *)((longlong)this + (longlong)iVar2 * 4),0,(longlong)iVar3 << 2);
  }
  return;
}

