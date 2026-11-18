// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 3

// GetRefCount @ 145d2ba20

uint __thiscall TRefCountPtr<FRHITexture>::GetRefCount(TRefCountPtr<FRHITexture> *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if (this->Reference == (FRHITexture *)0x0) {
    return 0;
  }
  uVar3 = (uint)this->Reference->_padding_ & 0x3fffffff;
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\RefCounting.h"
                       ,0x262,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  return uVar3;
}

// TRefCountPtr<FShaderCommonCompileJob> @ 145e40610

TRefCountPtr<FShaderCommonCompileJob> * __thiscall
TRefCountPtr<FShaderCommonCompileJob>::TRefCountPtr<FShaderCommonCompileJob>
          (TRefCountPtr<FShaderCommonCompileJob> *this,
          TRefCountPtr<FShaderCommonCompileJob> *param_1)

{
  FShaderCommonCompileJob *pFVar1;
  
  this->Reference = (FShaderCommonCompileJob *)0x0;
  pFVar1 = param_1->Reference;
  this->Reference = pFVar1;
  if (pFVar1 != (FShaderCommonCompileJob *)0x0) {
    LOCK();
    (pFVar1->NumRefs).Counter = (pFVar1->NumRefs).Counter + 1;
    UNLOCK();
  }
  return this;
}

// ~TRefCountPtr<FShaderCommonCompileJob> @ 145e42fb0

void __thiscall
TRefCountPtr<FShaderCommonCompileJob>::~TRefCountPtr<FShaderCommonCompileJob>
          (TRefCountPtr<FShaderCommonCompileJob> *this)

{
  FThreadSafeCounter *pFVar1;
  int iVar2;
  FShaderCommonCompileJob *pFVar3;
  code *pcVar4;
  bool bVar5;
  
  pFVar3 = this->Reference;
  if (pFVar3 == (FShaderCommonCompileJob *)0x0) {
    return;
  }
  LOCK();
  pFVar1 = &pFVar3->NumRefs;
  iVar2 = pFVar1->Counter;
  pFVar1->Counter = pFVar1->Counter + -1;
  UNLOCK();
  if (iVar2 == 1) {
    if ((pFVar3->Type == Single) || (pFVar3->Type == Pipeline)) {
      (**(code **)(pFVar3->_padding_ + 0x30))(pFVar3,1);
    }
    else {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderCompilerJobTypes.h"
                         ,0x1d1,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  return;
}

