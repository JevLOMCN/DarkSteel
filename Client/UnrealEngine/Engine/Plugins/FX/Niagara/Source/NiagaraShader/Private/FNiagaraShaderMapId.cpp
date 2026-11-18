// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraShader
// Functions: 8

// FNiagaraShaderMapId @ 148df0dc0

FNiagaraShaderMapId * __thiscall
FNiagaraShaderMapId::FNiagaraShaderMapId(FNiagaraShaderMapId *this,FNiagaraShaderMapId *param_1)

{
  TArray<FMemoryImageString,TMemoryImageAllocator<0>_> *pTVar1;
  int *piVar2;
  TArray<FSHAHash,TMemoryImageAllocator<0>_> *pTVar3;
  TArray<FShaderTypeDependency,TMemoryImageAllocator<0>_> *pTVar4;
  int iVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ForAnyElementType FVar10;
  ForAnyElementType FVar11;
  
  uVar7 = (param_1->CompilerVersionID).B;
  uVar8 = (param_1->CompilerVersionID).C;
  uVar9 = (param_1->CompilerVersionID).D;
  pTVar1 = &this->AdditionalDefines;
  (this->CompilerVersionID).A = (param_1->CompilerVersionID).A;
  (this->CompilerVersionID).B = uVar7;
  (this->CompilerVersionID).C = uVar8;
  (this->CompilerVersionID).D = uVar9;
  this->FeatureLevel = param_1->FeatureLevel;
  pTVar1->AllocatorInstance = (ForAnyElementType)0x0;
  FVar11 = (param_1->AdditionalDefines).AllocatorInstance;
  iVar5 = (param_1->AdditionalDefines).ArrayNum;
  if (((ulonglong)FVar11 & 1) != 0) {
    FVar11 = (ForAnyElementType)
             ((longlong)&(param_1->AdditionalDefines).AllocatorInstance.field_0x0 +
             ((longlong)FVar11 >> 0x18));
  }
  (this->AdditionalDefines).ArrayNum = iVar5;
  piVar2 = &(this->AdditionalDefines).ArrayMax;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<1,TMemoryImageAllocator<0>::ForAnyElementType>
              (0x10,8,iVar5,0,&pTVar1->AllocatorInstance,iVar5,piVar2);
    FVar10 = pTVar1->AllocatorInstance;
    if (((ulonglong)FVar10 & 1) != 0) {
      FVar10 = (ForAnyElementType)
               ((longlong)&(pTVar1->AllocatorInstance).field_0x0 + ((longlong)FVar10 >> 0x18));
    }
    ConstructItems<FMemoryImageString,FMemoryImageString,int>
              ((void *)FVar10,(FMemoryImageString *)FVar11,iVar5);
  }
  (this->AdditionalVariables).AllocatorInstance = (ForAnyElementType)0x0;
  FVar11 = (param_1->AdditionalVariables).AllocatorInstance;
  pTVar1 = &this->AdditionalVariables;
  iVar5 = (param_1->AdditionalVariables).ArrayNum;
  if (((ulonglong)FVar11 & 1) != 0) {
    FVar11 = (ForAnyElementType)
             ((longlong)&(param_1->AdditionalVariables).AllocatorInstance.field_0x0 +
             ((longlong)FVar11 >> 0x18));
  }
  (this->AdditionalVariables).ArrayNum = iVar5;
  piVar2 = &(this->AdditionalVariables).ArrayMax;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<1,TMemoryImageAllocator<0>::ForAnyElementType>
              (0x10,8,iVar5,0,&pTVar1->AllocatorInstance,iVar5,piVar2);
    FVar10 = pTVar1->AllocatorInstance;
    if (((ulonglong)FVar10 & 1) != 0) {
      FVar10 = (ForAnyElementType)
               ((longlong)&(pTVar1->AllocatorInstance).field_0x0 + ((longlong)FVar10 >> 0x18));
    }
    ConstructItems<FMemoryImageString,FMemoryImageString,int>
              ((void *)FVar10,(FMemoryImageString *)FVar11,iVar5);
  }
  uVar6 = *(undefined8 *)((param_1->BaseCompileHash).Hash + 8);
  pTVar3 = &this->ReferencedCompileHashes;
  *(undefined8 *)(this->BaseCompileHash).Hash = *(undefined8 *)(param_1->BaseCompileHash).Hash;
  *(undefined8 *)((this->BaseCompileHash).Hash + 8) = uVar6;
  *(undefined4 *)((this->BaseCompileHash).Hash + 0x10) =
       *(undefined4 *)((param_1->BaseCompileHash).Hash + 0x10);
  pTVar3->AllocatorInstance = (ForAnyElementType)0x0;
  FVar11 = (param_1->ReferencedCompileHashes).AllocatorInstance;
  iVar5 = (param_1->ReferencedCompileHashes).ArrayNum;
  if (((ulonglong)FVar11 & 1) != 0) {
    FVar11 = (ForAnyElementType)
             ((longlong)&(param_1->ReferencedCompileHashes).AllocatorInstance.field_0x0 +
             ((longlong)FVar11 >> 0x18));
  }
  (this->ReferencedCompileHashes).ArrayNum = iVar5;
  piVar2 = &(this->ReferencedCompileHashes).ArrayMax;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<1,TMemoryImageAllocator<0>::ForAnyElementType>
              (0x14,4,iVar5,0,&pTVar3->AllocatorInstance,iVar5,piVar2);
    FVar10 = pTVar3->AllocatorInstance;
    if (((ulonglong)FVar10 & 1) != 0) {
      FVar10 = (ForAnyElementType)
               ((longlong)&(pTVar3->AllocatorInstance).field_0x0 + ((longlong)FVar10 >> 0x18));
    }
    memcpy((void *)FVar10,(void *)FVar11,(longlong)iVar5 * 0x14);
  }
  pTVar4 = &this->ShaderTypeDependencies;
  this->LayoutParams = param_1->LayoutParams;
  pTVar4->AllocatorInstance = (ForAnyElementType)0x0;
  FVar11 = (param_1->ShaderTypeDependencies).AllocatorInstance;
  iVar5 = (param_1->ShaderTypeDependencies).ArrayNum;
  if (((ulonglong)FVar11 & 1) != 0) {
    FVar11 = (ForAnyElementType)
             ((longlong)&(param_1->ShaderTypeDependencies).AllocatorInstance.field_0x0 +
             ((longlong)FVar11 >> 0x18));
  }
  (this->ShaderTypeDependencies).ArrayNum = iVar5;
  piVar2 = &(this->ShaderTypeDependencies).ArrayMax;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<1,TMemoryImageAllocator<0>::ForAnyElementType>
              (0x20,8,iVar5,0,&pTVar4->AllocatorInstance,iVar5,piVar2);
    FVar10 = pTVar4->AllocatorInstance;
    if (((ulonglong)FVar10 & 1) != 0) {
      FVar10 = (ForAnyElementType)
               ((longlong)&(pTVar4->AllocatorInstance).field_0x0 + ((longlong)FVar10 >> 0x18));
    }
    ConstructItems<FShaderTypeDependency,FShaderTypeDependency,int>
              ((void *)FVar10,(FShaderTypeDependency *)FVar11,iVar5);
  }
  this->bUsesRapidIterationParams = param_1->bUsesRapidIterationParams;
  return this;
}

// ~FNiagaraShaderMapId @ 148df1470

void __thiscall FNiagaraShaderMapId::~FNiagaraShaderMapId(FNiagaraShaderMapId *this)

{
  ForAnyElementType FVar1;
  
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->ShaderTypeDependencies);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->ReferencedCompileHashes);
  FVar1 = (this->AdditionalVariables).AllocatorInstance;
  if (((ulonglong)FVar1 & 1) != 0) {
    FVar1 = (ForAnyElementType)
            ((longlong)&(this->AdditionalVariables).AllocatorInstance.field_0x0 +
            ((longlong)FVar1 >> 0x18));
  }
  DestructItems<FMemoryImageString,int>
            ((FMemoryImageString *)FVar1,(this->AdditionalVariables).ArrayNum);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->AdditionalVariables);
  FVar1 = (this->AdditionalDefines).AllocatorInstance;
  if (((ulonglong)FVar1 & 1) != 0) {
    FVar1 = (ForAnyElementType)
            ((longlong)&(this->AdditionalDefines).AllocatorInstance.field_0x0 +
            ((longlong)FVar1 >> 0x18));
  }
  DestructItems<FMemoryImageString,int>
            ((FMemoryImageString *)FVar1,(this->AdditionalDefines).ArrayNum);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->AdditionalDefines);
  return;
}

// operator== @ 148df1b30

bool __thiscall
FNiagaraShaderMapId::operator==(FNiagaraShaderMapId *this,FNiagaraShaderMapId *param_1)

{
  ulonglong *puVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  ForAnyElementType FVar8;
  ForAnyElementType FVar9;
  ForAnyElementType FVar10;
  longlong lVar11;
  wchar_t *pwVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  FString local_38;
  FString local_28;
  
  if ((((((*(longlong *)(this->BaseCompileHash).Hash == *(longlong *)(param_1->BaseCompileHash).Hash
          ) && (*(longlong *)((this->BaseCompileHash).Hash + 8) ==
                *(longlong *)((param_1->BaseCompileHash).Hash + 8))) &&
        (*(int *)((this->BaseCompileHash).Hash + 0x10) ==
         *(int *)((param_1->BaseCompileHash).Hash + 0x10))) &&
       ((this->FeatureLevel == param_1->FeatureLevel &&
        ((((param_1->CompilerVersionID).D == (this->CompilerVersionID).D &&
          (param_1->CompilerVersionID).C == (this->CompilerVersionID).C) &&
         (param_1->CompilerVersionID).B == (this->CompilerVersionID).B) &&
         (param_1->CompilerVersionID).A == (this->CompilerVersionID).A)))) &&
      ((this->bUsesRapidIterationParams == param_1->bUsesRapidIterationParams &&
       (((this->LayoutParams).Flags == (param_1->LayoutParams).Flags &&
        ((this->LayoutParams).MaxFieldAlignment == (param_1->LayoutParams).MaxFieldAlignment))))))
     && ((iVar7 = (param_1->AdditionalDefines).ArrayNum, (this->AdditionalDefines).ArrayNum == iVar7
         && (((this->AdditionalVariables).ArrayNum == (param_1->AdditionalVariables).ArrayNum &&
             ((this->ReferencedCompileHashes).ArrayNum ==
              (param_1->ReferencedCompileHashes).ArrayNum)))))) {
    uVar14 = 0;
    uVar17 = 0;
    uVar15 = uVar14;
    uVar16 = uVar14;
    if (0 < iVar7) {
      do {
        uVar13 = (uint)uVar16;
        uVar6 = 0;
        if ((int)uVar13 < iVar7) {
          uVar6 = ~uVar13 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        FVar8 = (param_1->AdditionalDefines).AllocatorInstance;
        if (((ulonglong)FVar8 & 1) != 0) {
          FVar8 = (ForAnyElementType)
                  ((longlong)(param_1->BaseCompileHash).Hash + ((longlong)FVar8 >> 0x18) + -0x20);
        }
        iVar7 = *(int *)((longlong)FVar8 + 8U + uVar15);
        pwVar12 = *(wchar_t **)((longlong)FVar8 + uVar15);
        uVar6 = iVar7 - 1;
        if (iVar7 == 0) {
          uVar6 = uVar17;
        }
        if (((ulonglong)pwVar12 & 1) != 0) {
          pwVar12 = (wchar_t *)(((longlong)pwVar12 >> 0x18) + (longlong)FVar8 + uVar15);
        }
        ::FString::ConstructFromPtrSize(&local_38,pwVar12,uVar6);
        uVar6 = uVar17;
        if ((int)uVar13 < (this->AdditionalDefines).ArrayNum) {
          uVar6 = ~uVar13 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        FVar8 = (this->AdditionalDefines).AllocatorInstance;
        if (((ulonglong)FVar8 & 1) != 0) {
          FVar8 = (ForAnyElementType)
                  ((longlong)(this->BaseCompileHash).Hash + ((longlong)FVar8 >> 0x18) + -0x20);
        }
        puVar1 = (ulonglong *)((longlong)FVar8 + uVar15);
        FVar9.Data = (FScriptContainerElement *)L"";
        if (local_38.Data.ArrayNum != 0) {
          FVar9.Data = local_38.Data.AllocatorInstance.Data;
        }
        if ((int)puVar1[1] == 0) {
          pwVar12 = L"";
        }
        else {
          pwVar12 = (wchar_t *)*puVar1;
          if (((ulonglong)pwVar12 & 1) != 0) {
            pwVar12 = (wchar_t *)(((longlong)pwVar12 >> 0x18) + (longlong)puVar1);
          }
        }
        iVar7 = FGenericPlatformStricmp::Stricmp(pwVar12,(wchar_t *)FVar9.Data);
        if (iVar7 != 0) goto LAB_148df1fea;
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        iVar7 = (param_1->AdditionalDefines).ArrayNum;
        uVar15 = uVar15 + 0x10;
        uVar16 = (ulonglong)(uVar13 + 1);
      } while ((int)(uVar13 + 1) < iVar7);
    }
    iVar7 = (param_1->AdditionalVariables).ArrayNum;
    uVar15 = uVar14;
    uVar16 = uVar14;
    if (0 < iVar7) {
      do {
        uVar13 = (uint)uVar16;
        uVar6 = uVar17;
        if ((int)uVar13 < iVar7) {
          uVar6 = ~uVar13 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        FVar8 = (param_1->AdditionalVariables).AllocatorInstance;
        if (((ulonglong)FVar8 & 1) != 0) {
          FVar8 = (ForAnyElementType)
                  ((longlong)(param_1->BaseCompileHash).Hash + ((longlong)FVar8 >> 0x18) + -0x10);
        }
        iVar7 = *(int *)((longlong)FVar8 + 8U + uVar15);
        pwVar12 = *(wchar_t **)((longlong)FVar8 + uVar15);
        uVar6 = iVar7 - 1;
        if (iVar7 == 0) {
          uVar6 = uVar17;
        }
        if (((ulonglong)pwVar12 & 1) != 0) {
          pwVar12 = (wchar_t *)(((longlong)pwVar12 >> 0x18) + (longlong)FVar8 + uVar15);
        }
        ::FString::ConstructFromPtrSize(&local_28,pwVar12,uVar6);
        uVar6 = uVar17;
        if ((int)uVar13 < (this->AdditionalVariables).ArrayNum) {
          uVar6 = ~uVar13 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        FVar8 = (this->AdditionalVariables).AllocatorInstance;
        if (((ulonglong)FVar8 & 1) != 0) {
          FVar8 = (ForAnyElementType)
                  ((longlong)(this->BaseCompileHash).Hash + ((longlong)FVar8 >> 0x18) + -0x10);
        }
        puVar1 = (ulonglong *)((longlong)FVar8 + uVar15);
        FVar9.Data = (FScriptContainerElement *)L"";
        if (local_28.Data.ArrayNum != 0) {
          FVar9.Data = local_28.Data.AllocatorInstance.Data;
        }
        if ((int)puVar1[1] == 0) {
          pwVar12 = L"";
        }
        else {
          pwVar12 = (wchar_t *)*puVar1;
          if (((ulonglong)pwVar12 & 1) != 0) {
            pwVar12 = (wchar_t *)(((longlong)pwVar12 >> 0x18) + (longlong)puVar1);
          }
        }
        iVar7 = FGenericPlatformStricmp::Stricmp(pwVar12,(wchar_t *)FVar9.Data);
        local_38.Data.AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
        if (iVar7 != 0) {
LAB_148df1fea:
          if (local_38.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
            return false;
          }
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
          return false;
        }
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        iVar7 = (param_1->AdditionalVariables).ArrayNum;
        uVar15 = uVar15 + 0x10;
        uVar16 = (ulonglong)(uVar13 + 1);
      } while ((int)(uVar13 + 1) < iVar7);
    }
    if (0 < (this->ReferencedCompileHashes).ArrayNum) {
      do {
        uVar13 = (uint)uVar14;
        uVar6 = uVar17;
        if ((int)uVar13 < (param_1->ReferencedCompileHashes).ArrayNum) {
          uVar6 = ~uVar13 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        FVar8 = (param_1->ReferencedCompileHashes).AllocatorInstance;
        if (((ulonglong)FVar8 & 1) != 0) {
          FVar8 = (ForAnyElementType)
                  ((longlong)(&param_1->BaseCompileHash + 1) + ((longlong)FVar8 >> 0x18) + 4);
        }
        lVar11 = (longlong)(int)uVar13;
        uVar6 = uVar17;
        if ((int)uVar13 < (this->ReferencedCompileHashes).ArrayNum) {
          uVar6 = ~uVar13 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        FVar10 = (this->ReferencedCompileHashes).AllocatorInstance;
        if (((ulonglong)FVar10 & 1) != 0) {
          FVar10 = (ForAnyElementType)
                   ((longlong)(&this->BaseCompileHash + 1) + ((longlong)FVar10 >> 0x18) + 4);
        }
        lVar2 = (longlong)FVar10 + lVar11 * 0x14;
        if (*(longlong *)((longlong)FVar10 + lVar11 * 0x14) !=
            *(longlong *)((longlong)FVar8 + lVar11 * 0x14)) {
          return false;
        }
        if (*(longlong *)(lVar2 + 8) != *(longlong *)((longlong)FVar8 + 8U + lVar11 * 0x14)) {
          return false;
        }
        if (*(int *)(lVar2 + 0x10) != *(int *)((longlong)FVar8 + 0x10U + lVar11 * 0x14)) {
          return false;
        }
        uVar14 = (ulonglong)(uVar13 + 1);
      } while ((int)(uVar13 + 1) < (this->ReferencedCompileHashes).ArrayNum);
    }
    iVar7 = (this->ShaderTypeDependencies).ArrayNum;
    if (iVar7 == (param_1->ShaderTypeDependencies).ArrayNum) {
      FVar8 = (param_1->ShaderTypeDependencies).AllocatorInstance;
      if (((ulonglong)FVar8 & 1) != 0) {
        FVar8 = (ForAnyElementType)
                ((longlong)&(param_1->ShaderTypeDependencies).AllocatorInstance.field_0x0 +
                ((longlong)FVar8 >> 0x18));
      }
      FVar10 = (this->ShaderTypeDependencies).AllocatorInstance;
      if (((ulonglong)FVar10 & 1) != 0) {
        FVar10 = (ForAnyElementType)
                 ((longlong)&(this->ShaderTypeDependencies).AllocatorInstance.field_0x0 +
                 ((longlong)FVar10 >> 0x18));
      }
      bVar4 = CompareItems<FShaderTypeDependency,int>
                        ((FShaderTypeDependency *)FVar10,(FShaderTypeDependency *)FVar8,iVar7);
      if (bVar4) {
        return true;
      }
    }
  }
  return false;
}

// GetScriptHash @ 148dffcd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FNiagaraShaderMapId::GetScriptHash(FNiagaraShaderMapId *this,FSHAHash *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  wchar_t *pwVar8;
  uint uVar9;
  ulonglong uVar10;
  ForAnyElementType FVar11;
  ulonglong uVar12;
  ForAnyElementType FVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined1 auStack_118 [32];
  ulonglong local_f8;
  longlong local_f0;
  undefined1 local_e8 [16];
  FSHA1 local_d8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_118;
  FSHA1::FSHA1(&local_d8);
  FSHA1::Update(&local_d8,(uchar *)this,0x10);
  FSHA1::Update(&local_d8,(this->BaseCompileHash).Hash,0x14);
  FSHA1::Update(&local_d8,(uchar *)&this->FeatureLevel,4);
  iVar7 = (this->AdditionalDefines).ArrayNum;
  uVar10 = 0;
  uVar4 = 0;
  uVar12 = uVar10;
  uVar14 = uVar10;
  uVar15 = uVar10;
  if (0 < iVar7) {
    do {
      uVar9 = (uint)uVar14;
      uVar5 = uVar4;
      if ((int)uVar9 < iVar7) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if (uVar5 == 0) {
        local_f0 = (longlong)iVar7;
        local_f8 = (ulonglong)(int)uVar9;
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      FVar11 = (this->AdditionalDefines).AllocatorInstance;
      if (((ulonglong)FVar11 & 1) != 0) {
        FVar11 = (ForAnyElementType)
                 ((longlong)(this->BaseCompileHash).Hash + ((longlong)FVar11 >> 0x18) + -0x20);
      }
      iVar7 = *(int *)(uVar12 + 8 + (longlong)FVar11);
      iVar1 = (this->AdditionalDefines).ArrayNum;
      uVar5 = iVar7 - 1;
      if (iVar7 == 0) {
        uVar5 = uVar4;
      }
      uVar6 = uVar4;
      if ((int)uVar9 < iVar1) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (local_f8 = uVar15, local_f0 = (longlong)iVar1,
         bVar3 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FVar11 = (this->AdditionalDefines).AllocatorInstance;
      if (((ulonglong)FVar11 & 1) != 0) {
        FVar11 = (ForAnyElementType)
                 ((longlong)(this->BaseCompileHash).Hash + ((longlong)FVar11 >> 0x18) + -0x20);
      }
      if (*(int *)(uVar12 + 8 + (longlong)FVar11) == 0) {
        pwVar8 = L"";
      }
      else {
        pwVar8 = *(wchar_t **)(uVar12 + (longlong)FVar11);
        if (((ulonglong)pwVar8 & 1) != 0) {
          pwVar8 = (wchar_t *)(((longlong)pwVar8 >> 0x18) + uVar12 + (longlong)FVar11);
        }
      }
      FSHA1::UpdateWithString(&local_d8,pwVar8,uVar5);
      iVar7 = (this->AdditionalDefines).ArrayNum;
      uVar12 = uVar12 + 0x10;
      uVar14 = (ulonglong)(uVar9 + 1);
      uVar15 = uVar15 + 1;
    } while ((int)(uVar9 + 1) < iVar7);
  }
  iVar7 = (this->AdditionalVariables).ArrayNum;
  uVar12 = uVar10;
  uVar14 = uVar10;
  uVar15 = uVar10;
  if (0 < iVar7) {
    do {
      uVar9 = (uint)uVar14;
      uVar5 = uVar4;
      if ((int)uVar9 < iVar7) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if (uVar5 == 0) {
        local_f0 = (longlong)iVar7;
        local_f8 = (ulonglong)(int)uVar9;
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      FVar11 = (this->AdditionalVariables).AllocatorInstance;
      if (((ulonglong)FVar11 & 1) != 0) {
        FVar11 = (ForAnyElementType)
                 ((longlong)(this->BaseCompileHash).Hash + ((longlong)FVar11 >> 0x18) + -0x10);
      }
      iVar7 = *(int *)(uVar12 + 8 + (longlong)FVar11);
      iVar1 = (this->AdditionalVariables).ArrayNum;
      uVar5 = iVar7 - 1;
      if (iVar7 == 0) {
        uVar5 = uVar4;
      }
      uVar6 = uVar4;
      if ((int)uVar9 < iVar1) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (local_f8 = uVar15, local_f0 = (longlong)iVar1,
         bVar3 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FVar11 = (this->AdditionalVariables).AllocatorInstance;
      if (((ulonglong)FVar11 & 1) != 0) {
        FVar11 = (ForAnyElementType)
                 ((longlong)(this->BaseCompileHash).Hash + ((longlong)FVar11 >> 0x18) + -0x10);
      }
      if (*(int *)(uVar12 + 8 + (longlong)FVar11) == 0) {
        pwVar8 = L"";
      }
      else {
        pwVar8 = *(wchar_t **)(uVar12 + (longlong)FVar11);
        if (((ulonglong)pwVar8 & 1) != 0) {
          pwVar8 = (wchar_t *)(((longlong)pwVar8 >> 0x18) + uVar12 + (longlong)FVar11);
        }
      }
      FSHA1::UpdateWithString(&local_d8,pwVar8,uVar5);
      iVar7 = (this->AdditionalVariables).ArrayNum;
      uVar12 = uVar12 + 0x10;
      uVar14 = (ulonglong)(uVar9 + 1);
      uVar15 = uVar15 + 1;
    } while ((int)(uVar9 + 1) < iVar7);
  }
  iVar7 = (this->ReferencedCompileHashes).ArrayNum;
  if (0 < iVar7) {
    do {
      uVar9 = (uint)uVar10;
      uVar5 = uVar4;
      if ((int)uVar9 < iVar7) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if (uVar5 == 0) {
        local_f0 = (longlong)iVar7;
        local_f8 = (ulonglong)(int)uVar9;
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      FVar11 = (this->ReferencedCompileHashes).AllocatorInstance;
      if (((ulonglong)FVar11 & 1) != 0) {
        FVar11 = (ForAnyElementType)
                 ((longlong)(&this->BaseCompileHash + 1) + ((longlong)FVar11 >> 0x18) + 4);
      }
      FSHA1::Update(&local_d8,(uchar *)((longlong)FVar11 + (longlong)(int)uVar9 * 0x14),0x14);
      iVar7 = (this->ReferencedCompileHashes).ArrayNum;
      uVar10 = (ulonglong)(uVar9 + 1);
    } while ((int)(uVar9 + 1) < iVar7);
  }
  FVar11 = (this->ShaderTypeDependencies).AllocatorInstance;
  if (((ulonglong)FVar11 & 1) != 0) {
    FVar11 = (ForAnyElementType)
             ((longlong)
              &(((TArray<FShaderTypeDependency,TMemoryImageAllocator<0>_> *)
                ((FPlatformTypeLayoutParameters *)(&this->BaseCompileHash + 2) + 1))->
               AllocatorInstance).field_0x0 + ((longlong)FVar11 >> 0x18));
  }
  iVar7 = (this->ShaderTypeDependencies).ArrayNum;
  FVar13 = (ForAnyElementType)((longlong)iVar7 * 0x20 + (longlong)FVar11);
  while( true ) {
    if ((this->ShaderTypeDependencies).ArrayNum != iVar7) {
      `TCheckedPointerIterator<FShaderTypeDependency_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_e8);
    }
    if (FVar11 == FVar13) break;
    FSHA1::Update(&local_d8,(uchar *)((longlong)FVar11 + 0xc),0x14);
    FVar11 = (ForAnyElementType)((longlong)FVar11 + 0x20);
  }
  FSHA1::Final(&local_d8);
  FSHA1::GetHash(&local_d8,param_1->Hash);
  FSHA1::~FSHA1(&local_d8);
  return;
}

// GetTypeLayout @ 148e07f10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall FNiagaraShaderMapId::GetTypeLayout(FNiagaraShaderMapId *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 0x80;
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = u_FNiagaraShaderM;
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FNiagaraShaderMapId,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    InternalLinkType<5>::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    `public:_static_void___cdecl_FNiagaraShaderMapId::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "AdditionalVariables";
    DAT_15526683a = Freeze::FindFieldNameLength(L"AdditionalVariables");
    _DAT_155266818 =
         StaticGetTypeLayoutDesc<TArray<FMemoryImageString,TMemoryImageAllocator<0>_>_>();
    DAT_155266820 = ::TypeBuffer[0x10];
    DAT_155266820_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155266820_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155266820_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155266820_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155266820_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155266820_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155266820_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FNiagaraShaderMapId::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155266828 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155266830 = 0x28;
    _DAT_155266834 = 1;
    _DAT_155266838 = 0;
    `public:_static_void___cdecl_FNiagaraShaderMapId::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "AdditionalDefines";
    DAT_15526680a = Freeze::FindFieldNameLength(L"AdditionalDefines");
    _DAT_1552667e8 =
         StaticGetTypeLayoutDesc<TArray<FMemoryImageString,TMemoryImageAllocator<0>_>_>();
    DAT_1552667f0 = ::TypeBuffer[0x10];
    DAT_1552667f0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1552667f0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1552667f0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1552667f0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1552667f0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1552667f0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1552667f0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FNiagaraShaderMapId::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1552667f8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155266800 = 0x18;
    _DAT_155266804 = 1;
    _DAT_155266808 = 0;
    `public:_static_void___cdecl_FNiagaraShaderMapId::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "FeatureLevel";
    DAT_1552667da = Freeze::FindFieldNameLength(L"FeatureLevel");
    if ((DAT_15526637f & 2) == 0) {
      DAT_15526637f = DAT_15526637f | 3;
      _DAT_155266370 = 4;
      _DAT_155266320 = L"ERHIFeatureLevel::Type";
      _DAT_155266338 = TStaticGetTypeLayoutHelper<enum_ERHIFeatureLevel::Type>::CallWriteMemoryImage
      ;
      _DAT_155266340 = TStaticGetTypeLayoutHelper<enum_ERHIFeatureLevel::Type>::CallUnfrozenCopy;
      _DAT_155266348 = TStaticGetTypeLayoutHelper<enum_ERHIFeatureLevel::Type>::CallAppendHash;
      _DAT_155266350 =
           TStaticGetTypeLayoutHelper<enum_ERHIFeatureLevel::Type>::CallGetTargetAlignment;
      _DAT_155266358 = TStaticGetTypeLayoutHelper<enum_ERHIFeatureLevel::Type>::CallToString;
      _DAT_155266330 = TStaticGetTypeLayoutHelper<enum_ERHIFeatureLevel::Type>::CallDestroy;
      _DAT_155266378 = 4;
      DAT_15526637c = 0;
      _DAT_155266374 = 4;
    }
    _DAT_1552667c8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1552667b8 =
         &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<ERHIFeatureLevel::Type>::Do(void)'
          ::__l2::TypeBuffer;
    DAT_1552667c0 = ::TypeBuffer[0x10];
    DAT_1552667c0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1552667c0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1552667c0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1552667c0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1552667c0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1552667c0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1552667c0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FNiagaraShaderMapId::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1552667d0 = 0x10;
    _DAT_1552667d4 = 1;
    _DAT_1552667d8 = 0;
    `public:_static_void___cdecl_FNiagaraShaderMapId::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "CompilerVersionID";
    DAT_1552667aa = Freeze::FindFieldNameLength(L"CompilerVersionID");
    if ((DAT_155215aef & 2) == 0) {
      DAT_155215aef = DAT_155215aef | 3;
      _DAT_155215ae0 = 0x10;
      _DAT_155215a90 = L"FGuid";
      _DAT_155215aa8 = TStaticGetTypeLayoutHelper<FGuid>::CallWriteMemoryImage;
      _DAT_155215ab0 = TStaticGetTypeLayoutHelper<FGuid>::CallUnfrozenCopy;
      _DAT_155215ab8 = TStaticGetTypeLayoutHelper<FGuid>::CallAppendHash;
      _DAT_155215ac0 = TStaticGetTypeLayoutHelper<FGuid>::CallGetTargetAlignment;
      _DAT_155215ac8 = TStaticGetTypeLayoutHelper<FGuid>::CallToString;
      _DAT_155215aa0 = TStaticGetTypeLayoutHelper<FGuid>::CallDestroy;
      _DAT_155215ae8 = 4;
      DAT_155215aec = 0;
      _DAT_155215ae4 = 0x10;
    }
    _DAT_155266788 =
         &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<FGuid>::Do(void)'
          ::__l2::TypeBuffer;
    DAT_155266790 = ::TypeBuffer[0x10];
    DAT_155266790_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155266790_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155266790_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155266790_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155266790_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155266790_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155266790_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FNiagaraShaderMapId::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155266798 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1552667a0 = 0;
    _DAT_1552667a4 = 1;
    _DAT_1552667a8 = 0;
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// Initialize @ 148e08120

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FNiagaraShaderMapId::InternalLinkType<5>::Initialize(FTypeLayoutDesc *param_1)

{
  `public:_static_void___cdecl_FNiagaraShaderMapId::InternalLinkType<9>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "bUsesRapidIterationParams";
  DAT_15526692a = Freeze::FindFieldNameLength(L"bUsesRapidIterationParams");
  _DAT_155266908 = StaticGetTypeLayoutDesc<bool>();
  _DAT_155266920 = 0x78;
  _DAT_155266918 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155266924 = 1;
  _DAT_155266928 = 0;
  _DAT_155266910 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FNiagaraShaderMapId::InternalLinkType<9>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FNiagaraShaderMapId::InternalLinkType<8>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "ShaderTypeDependencies";
  DAT_1552668fa = Freeze::FindFieldNameLength(L"ShaderTypeDependencies");
  if ((DAT_15526b69f & 2) == 0) {
    DAT_15526b69f = DAT_15526b69f | 3;
    _DAT_15526b640 = L"(TArray<T, AllocatorType>)";
    _DAT_15526b658 =
         TStaticGetTypeLayoutHelper<TArray<FShaderTypeDependency,TMemoryImageAllocator<0>_>_>::
         CallWriteMemoryImage;
    _DAT_15526b660 =
         TStaticGetTypeLayoutHelper<TArray<FShaderTypeDependency,TMemoryImageAllocator<0>_>_>::
         CallUnfrozenCopy;
    _DAT_15526b668 =
         TStaticGetTypeLayoutHelper<TArray<FShaderTypeDependency,TMemoryImageAllocator<0>_>_>::
         CallAppendHash;
    _DAT_15526b670 =
         TStaticGetTypeLayoutHelper<TArray<FShaderTypeDependency,TMemoryImageAllocator<0>_>_>::
         CallGetTargetAlignment;
    _DAT_15526b678 =
         TStaticGetTypeLayoutHelper<TArray<FShaderTypeDependency,TMemoryImageAllocator<0>_>_>::
         CallToString;
    _DAT_15526b650 =
         TStaticGetTypeLayoutHelper<TArray<FShaderTypeDependency,TMemoryImageAllocator<0>_>_>::
         CallDestroy;
    _DAT_15526b690 = 0x10;
    _DAT_15526b698 = 8;
    DAT_15526b69c = 0;
    _DAT_15526b694 = 0x10;
  }
  _DAT_1552668e8 = Freeze::DefaultWriteMemoryImageField;
  _DAT_1552668d8 =
       &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<TArray<FShaderTypeDependency,TMemoryImageAllocator<0>_>_>::Do(void)'
        ::__l2::TypeBuffer;
  _DAT_1552668f0 = 0x68;
  _DAT_1552668f4 = 1;
  _DAT_1552668f8 = 0;
  _DAT_1552668e0 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FNiagaraShaderMapId::InternalLinkType<8>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FNiagaraShaderMapId::InternalLinkType<7>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "LayoutParams";
  DAT_1552668ca = Freeze::FindFieldNameLength(L"LayoutParams");
  _DAT_1552668a8 = FPlatformTypeLayoutParameters::StaticGetTypeLayout();
  _DAT_1552668b8 = Freeze::DefaultWriteMemoryImageField;
  _DAT_1552668c0 = 0x60;
  _DAT_1552668c4 = 1;
  _DAT_1552668c8 = 0;
  _DAT_1552668b0 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FNiagaraShaderMapId::InternalLinkType<7>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FNiagaraShaderMapId::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "ReferencedCompileHashes";
  DAT_15526689a = Freeze::FindFieldNameLength(L"ReferencedCompileHashes");
  if ((DAT_15526b707 & 2) == 0) {
    DAT_15526b707 = DAT_15526b707 | 3;
    _DAT_15526b6a8 = L"(TArray<T, AllocatorType>)";
    _DAT_15526b6c0 =
         TStaticGetTypeLayoutHelper<TArray<FSHAHash,TMemoryImageAllocator<0>_>_>::
         CallWriteMemoryImage;
    _DAT_15526b6c8 =
         TStaticGetTypeLayoutHelper<TArray<FSHAHash,TMemoryImageAllocator<0>_>_>::CallUnfrozenCopy;
    _DAT_15526b6d0 =
         TStaticGetTypeLayoutHelper<TArray<FSHAHash,TMemoryImageAllocator<0>_>_>::CallAppendHash;
    _DAT_15526b6d8 =
         TStaticGetTypeLayoutHelper<TArray<FSHAHash,TMemoryImageAllocator<0>_>_>::
         CallGetTargetAlignment;
    _DAT_15526b6e0 =
         TStaticGetTypeLayoutHelper<TArray<FSHAHash,TMemoryImageAllocator<0>_>_>::CallToString;
    _DAT_15526b6b8 =
         TStaticGetTypeLayoutHelper<TArray<FSHAHash,TMemoryImageAllocator<0>_>_>::CallDestroy;
    _DAT_15526b6f8 = 0x10;
    _DAT_15526b700 = 8;
    DAT_15526b704 = 0;
    _DAT_15526b6fc = 0x10;
  }
  _DAT_155266888 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155266878 =
       &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<TArray<FSHAHash,TMemoryImageAllocator<0>_>_>::Do(void)'
        ::__l2::TypeBuffer;
  _DAT_155266890 = 0x50;
  _DAT_155266894 = 1;
  _DAT_155266898 = 0;
  _DAT_155266880 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FNiagaraShaderMapId::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FNiagaraShaderMapId::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "BaseCompileHash";
  DAT_15526686a = Freeze::FindFieldNameLength(L"BaseCompileHash");
  _DAT_155266848 = StaticGetTypeLayoutDesc<FSHAHash>();
  _DAT_155266858 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155266860 = 0x38;
  _DAT_155266864 = 1;
  _DAT_155266868 = 0;
  _DAT_155266850 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FNiagaraShaderMapId::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  return;
}

// InternalDestroy @ 148e08cb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FNiagaraShaderMapId::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (!param_4) {
    ~FNiagaraShaderMapId(param_1);
  }
  uVar2 = _UNK_1506d61e8;
  uVar1 = ___xmm_fefefefefefefefefefefefefefefefe;
  *(undefined8 *)param_1 = ___xmm_fefefefefefefefefefefefefefefefe;
  *(undefined8 *)((longlong)param_1 + 8) = uVar2;
  *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x18) = uVar2;
  *(undefined8 *)((longlong)param_1 + 0x20) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x28) = uVar2;
  *(undefined8 *)((longlong)param_1 + 0x30) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x38) = uVar2;
  *(undefined8 *)((longlong)param_1 + 0x40) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x48) = uVar2;
  *(undefined8 *)((longlong)param_1 + 0x50) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x58) = uVar2;
  *(undefined8 *)((longlong)param_1 + 0x60) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x68) = uVar2;
  *(undefined8 *)((longlong)param_1 + 0x70) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x78) = uVar2;
  return;
}

// StaticGetTypeLayout @ 148e113d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl FNiagaraShaderMapId::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 0x80;
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = u_FNiagaraShaderM;
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FNiagaraShaderMapId,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    InternalLinkType<5>::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    `public:_static_void___cdecl_FNiagaraShaderMapId::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "AdditionalVariables";
    DAT_15526683a = Freeze::FindFieldNameLength(L"AdditionalVariables");
    _DAT_155266818 =
         StaticGetTypeLayoutDesc<TArray<FMemoryImageString,TMemoryImageAllocator<0>_>_>();
    DAT_155266820 = ::TypeBuffer[0x10];
    DAT_155266820_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155266820_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155266820_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155266820_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155266820_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155266820_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155266820_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FNiagaraShaderMapId::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155266828 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155266830 = 0x28;
    _DAT_155266834 = 1;
    _DAT_155266838 = 0;
    `public:_static_void___cdecl_FNiagaraShaderMapId::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "AdditionalDefines";
    DAT_15526680a = Freeze::FindFieldNameLength(L"AdditionalDefines");
    _DAT_1552667e8 =
         StaticGetTypeLayoutDesc<TArray<FMemoryImageString,TMemoryImageAllocator<0>_>_>();
    DAT_1552667f0 = ::TypeBuffer[0x10];
    DAT_1552667f0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1552667f0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1552667f0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1552667f0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1552667f0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1552667f0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1552667f0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FNiagaraShaderMapId::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1552667f8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155266800 = 0x18;
    _DAT_155266804 = 1;
    _DAT_155266808 = 0;
    `public:_static_void___cdecl_FNiagaraShaderMapId::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "FeatureLevel";
    DAT_1552667da = Freeze::FindFieldNameLength(L"FeatureLevel");
    if ((DAT_15526637f & 2) == 0) {
      DAT_15526637f = DAT_15526637f | 3;
      _DAT_155266370 = 4;
      _DAT_155266320 = L"ERHIFeatureLevel::Type";
      _DAT_155266338 = TStaticGetTypeLayoutHelper<enum_ERHIFeatureLevel::Type>::CallWriteMemoryImage
      ;
      _DAT_155266340 = TStaticGetTypeLayoutHelper<enum_ERHIFeatureLevel::Type>::CallUnfrozenCopy;
      _DAT_155266348 = TStaticGetTypeLayoutHelper<enum_ERHIFeatureLevel::Type>::CallAppendHash;
      _DAT_155266350 =
           TStaticGetTypeLayoutHelper<enum_ERHIFeatureLevel::Type>::CallGetTargetAlignment;
      _DAT_155266358 = TStaticGetTypeLayoutHelper<enum_ERHIFeatureLevel::Type>::CallToString;
      _DAT_155266330 = TStaticGetTypeLayoutHelper<enum_ERHIFeatureLevel::Type>::CallDestroy;
      _DAT_155266378 = 4;
      DAT_15526637c = 0;
      _DAT_155266374 = 4;
    }
    _DAT_1552667c8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1552667b8 =
         &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<ERHIFeatureLevel::Type>::Do(void)'
          ::__l2::TypeBuffer;
    DAT_1552667c0 = ::TypeBuffer[0x10];
    DAT_1552667c0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1552667c0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1552667c0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1552667c0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1552667c0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1552667c0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1552667c0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FNiagaraShaderMapId::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1552667d0 = 0x10;
    _DAT_1552667d4 = 1;
    _DAT_1552667d8 = 0;
    `public:_static_void___cdecl_FNiagaraShaderMapId::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "CompilerVersionID";
    DAT_1552667aa = Freeze::FindFieldNameLength(L"CompilerVersionID");
    if ((DAT_155215aef & 2) == 0) {
      DAT_155215aef = DAT_155215aef | 3;
      _DAT_155215ae0 = 0x10;
      _DAT_155215a90 = L"FGuid";
      _DAT_155215aa8 = TStaticGetTypeLayoutHelper<FGuid>::CallWriteMemoryImage;
      _DAT_155215ab0 = TStaticGetTypeLayoutHelper<FGuid>::CallUnfrozenCopy;
      _DAT_155215ab8 = TStaticGetTypeLayoutHelper<FGuid>::CallAppendHash;
      _DAT_155215ac0 = TStaticGetTypeLayoutHelper<FGuid>::CallGetTargetAlignment;
      _DAT_155215ac8 = TStaticGetTypeLayoutHelper<FGuid>::CallToString;
      _DAT_155215aa0 = TStaticGetTypeLayoutHelper<FGuid>::CallDestroy;
      _DAT_155215ae8 = 4;
      DAT_155215aec = 0;
      _DAT_155215ae4 = 0x10;
    }
    _DAT_155266788 =
         &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<FGuid>::Do(void)'
          ::__l2::TypeBuffer;
    DAT_155266790 = ::TypeBuffer[0x10];
    DAT_155266790_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155266790_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155266790_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155266790_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155266790_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155266790_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155266790_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FNiagaraShaderMapId::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155266798 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1552667a0 = 0;
    _DAT_1552667a4 = 1;
    _DAT_1552667a8 = 0;
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

