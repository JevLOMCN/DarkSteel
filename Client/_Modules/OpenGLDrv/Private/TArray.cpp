// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenGLDrv
// Functions: 11

// TArray<unsigned_int,TSizedDefaultAllocator<32>_> @ 145bdfda0

TArray<unsigned_int,TSizedDefaultAllocator<32>_> * __thiscall
TArray<unsigned_int,TSizedDefaultAllocator<32>_>::TArray<unsigned_int,TSizedDefaultAllocator<32>_>
          (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *this)

{
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this->ArrayNum = 0;
  this->ArrayMax = 0;
  return this;
}

// ~TArray<FPooledGLUniformBuffer,TSizedDefaultAllocator<32>_> @ 145be8500

void __thiscall
TArray<FPooledGLUniformBuffer,TSizedDefaultAllocator<32>_>::
~TArray<FPooledGLUniformBuffer,TSizedDefaultAllocator<32>_>
          (TArray<FPooledGLUniformBuffer,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// AddZeroed @ 145bf1530

int __thiscall
TArray<FOpenGLSamplerState_*,TSizedDefaultAllocator<32>_>::AddZeroed
          (TArray<FOpenGLSamplerState_*,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,param_1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  memset((this->AllocatorInstance).Data + (longlong)iVar1 * 8,0,(longlong)param_1 << 3);
  return iVar1;
}

// Empty @ 145bfb7a0

void __thiscall
TArray<FOpenGLShaderVarying,TSizedDefaultAllocator<32>_>::Empty
          (TArray<FOpenGLShaderVarying,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    DestructItems<FOpenGLShaderVarying,int>
              ((FOpenGLShaderVarying *)(this->AllocatorInstance).Data,this->ArrayNum);
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 145bfb810

void __thiscall
TArray<CrossCompiler::FPackedArrayInfo,TSizedDefaultAllocator<32>_>::Empty
          (TArray<CrossCompiler::FPackedArrayInfo,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,2,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 145bfb860

void __thiscall
TArray<TArray<CrossCompiler::FPackedArrayInfo,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
::Empty(TArray<TArray<CrossCompiler::FPackedArrayInfo,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
        *this,int param_1)

{
  if (-1 < param_1) {
    DestructItems<TArray<CrossCompiler::FPackedArrayInfo,TSizedDefaultAllocator<32>_>,int>
              ((TArray<CrossCompiler::FPackedArrayInfo,TSizedDefaultAllocator<32>_> *)
               (this->AllocatorInstance).Data,this->ArrayNum);
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Pop @ 145c163c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

uint __thiscall
TArray<unsigned_int,TSizedDefaultAllocator<32>_>::Pop
          (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *this,EAllowShrinking param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  if (this->ArrayNum < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  iVar4 = this->ArrayNum + -1;
  uVar3 = *(uint *)((this->AllocatorInstance).Data + (longlong)this->ArrayNum * 4 + -4);
  this->ArrayNum = iVar4;
  if (param_1 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return uVar3;
}

// RemoveAtImpl @ 145c298b0

void __thiscall
TArray<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
           *this,int param_1,int param_2)

{
  int iVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *_Dst;
  
  _Dst = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
         ((this->AllocatorInstance).Data + (longlong)param_1 * 0x10);
  DestructItems<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 4);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 145c29930

void __thiscall
TArray<TArray<FOpenGLLinkedProgram::FPackedUniformInfo,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
::RemoveAtImpl(TArray<TArray<FOpenGLLinkedProgram::FPackedUniformInfo,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
               *this,int param_1,int param_2)

{
  int iVar1;
  TArray<FOpenGLLinkedProgram::FPackedUniformInfo,TSizedDefaultAllocator<32>_> *_Dst;
  
  _Dst = (TArray<FOpenGLLinkedProgram::FPackedUniformInfo,TSizedDefaultAllocator<32>_> *)
         ((this->AllocatorInstance).Data + (longlong)param_1 * 0x10);
  DestructItems<TArray<FOpenGLLinkedProgram::FPackedUniformInfo,TSizedDefaultAllocator<32>_>,int>
            (_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 4);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtSwapImpl @ 145c299b0

void __thiscall
TArray<FOpenGLDynamicRHI::FTextureLockTracker::FLockParams,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
::RemoveAtSwapImpl(TArray<FOpenGLDynamicRHI::FTextureLockTracker::FLockParams,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
                   *this,int param_1)

{
  ForElementType<FOpenGLDynamicRHI::FTextureLockTracker::FLockParams> FVar1;
  int iVar2;
  ForElementType<FOpenGLDynamicRHI::FTextureLockTracker::FLockParams> FVar3;
  
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar3 = (ForElementType<FOpenGLDynamicRHI::FTextureLockTracker::FLockParams>)this;
  if (FVar1 != (ForElementType<FOpenGLDynamicRHI::FTextureLockTracker::FLockParams>)0x0) {
    FVar3 = FVar1;
  }
  iVar2 = ~param_1 + this->ArrayNum;
  if (1 < iVar2) {
    iVar2 = 1;
  }
  if (iVar2 != 0) {
    memmove((void *)((longlong)FVar3 + (longlong)param_1 * 0x28),
            (void *)((longlong)FVar3 + (longlong)(this->ArrayNum - iVar2) * 0x28),
            (longlong)iVar2 * 0x28);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// SetNum @ 145c2ddc0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<char,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<char,TSizedDefaultAllocator<32>_> *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *_Dst;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    memset((this->AllocatorInstance).Data + iVar4,0,(longlong)(param_1 - iVar5));
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar6 = iVar5 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar6 != 0) {
        _Dst = (this->AllocatorInstance).Data + param_1;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (int)uVar6,(longlong)iVar5);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

