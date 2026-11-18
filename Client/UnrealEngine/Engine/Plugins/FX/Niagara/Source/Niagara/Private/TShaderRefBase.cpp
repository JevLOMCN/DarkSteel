// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 18

// GetRHIShaderBase @ 1491ca7a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FRHIShader * __thiscall
TShaderRefBase<FNiagaraCopySVTToDenseBufferCS,FShaderMapPointerTable>::GetRHIShaderBase
          (TShaderRefBase<FNiagaraCopySVTToDenseBufferCS,FShaderMapPointerTable> *this,
          EShaderFrequency param_1,bool param_2)

{
  undefined1 *puVar1;
  int iVar2;
  FShaderMapResource *this_00;
  FShaderMapBase *pFVar3;
  FNiagaraCopySVTToDenseBufferCS *pFVar4;
  code *pcVar5;
  bool bVar6;
  FRHIShader *pFVar7;
  atomic<FRHIShader_*> aVar8;
  uint uVar9;
  uint uVar10;
  
  aVar8 = (atomic<FRHIShader_*>)0x0;
  if (this->ShaderContent != (FNiagaraCopySVTToDenseBufferCS *)0x0) {
    this_00 = (this->ShaderMap->Resource).Reference;
    if ((this_00 == (FShaderMapResource *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x426,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FRHIShader *)(*pcVar5)();
      return pFVar7;
    }
    iVar2 = *(int *)&this->ShaderContent->field_0xd4;
    aVar8 = (this_00->RHIShaders).Ptr[iVar2];
    if ((aVar8 == (atomic<FRHIShader_*>)0x0) &&
       (aVar8 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this_00,iVar2,param_2)
       , aVar8 == (atomic<FRHIShader_*>)0x0)) {
      if (4 < (byte)LogShaders._0_1_) {
        pFVar3 = this->ShaderMap;
        pFVar4 = this->ShaderContent;
        if ((pFVar3->PointerTable == (FShaderMapPointerTable *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("PointerTable",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                               ,0x9b4,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          pFVar7 = (FRHIShader *)(*pcVar5)();
          return pFVar7;
        }
        puVar1 = &pFVar4->field_0xc0;
        if ((*puVar1 & 1) != 0) {
          uVar9 = (uint)(*(ulonglong *)puVar1 >> 1);
          uVar10 = 0;
          if ((int)uVar9 < *(int *)&(pFVar3->PointerTable->ShaderTypes).field_0x28) {
            uVar10 = ~uVar9 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            pFVar7 = (FRHIShader *)(*pcVar5)();
            return pFVar7;
          }
        }
        UE::Logging::Private::BasicLog<5>
                  (&`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FNiagaraCopySVTToDenseBufferCS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                    ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
      }
      aVar8 = (atomic<FRHIShader_*>)0x0;
    }
  }
  return (FRHIShader *)aVar8;
}

// GetRHIShaderBase @ 149237780

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FRHIShader * __thiscall
TShaderRefBase<FNiagaraDispatchIndirectArgsGenCS,FShaderMapPointerTable>::GetRHIShaderBase
          (TShaderRefBase<FNiagaraDispatchIndirectArgsGenCS,FShaderMapPointerTable> *this,
          EShaderFrequency param_1,bool param_2)

{
  undefined1 *puVar1;
  int iVar2;
  FShaderMapResource *this_00;
  FShaderMapBase *pFVar3;
  FNiagaraDispatchIndirectArgsGenCS *pFVar4;
  code *pcVar5;
  bool bVar6;
  FRHIShader *pFVar7;
  atomic<FRHIShader_*> aVar8;
  uint uVar9;
  uint uVar10;
  
  aVar8 = (atomic<FRHIShader_*>)0x0;
  if (this->ShaderContent != (FNiagaraDispatchIndirectArgsGenCS *)0x0) {
    this_00 = (this->ShaderMap->Resource).Reference;
    if ((this_00 == (FShaderMapResource *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x426,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FRHIShader *)(*pcVar5)();
      return pFVar7;
    }
    iVar2 = *(int *)&this->ShaderContent->field_0xd4;
    aVar8 = (this_00->RHIShaders).Ptr[iVar2];
    if ((aVar8 == (atomic<FRHIShader_*>)0x0) &&
       (aVar8 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this_00,iVar2,param_2)
       , aVar8 == (atomic<FRHIShader_*>)0x0)) {
      if (4 < (byte)LogShaders._0_1_) {
        pFVar3 = this->ShaderMap;
        pFVar4 = this->ShaderContent;
        if ((pFVar3->PointerTable == (FShaderMapPointerTable *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("PointerTable",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                               ,0x9b4,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          pFVar7 = (FRHIShader *)(*pcVar5)();
          return pFVar7;
        }
        puVar1 = &pFVar4->field_0xc0;
        if ((*puVar1 & 1) != 0) {
          uVar9 = (uint)(*(ulonglong *)puVar1 >> 1);
          uVar10 = 0;
          if ((int)uVar9 < *(int *)&(pFVar3->PointerTable->ShaderTypes).field_0x28) {
            uVar10 = ~uVar9 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            pFVar7 = (FRHIShader *)(*pcVar5)();
            return pFVar7;
          }
        }
        UE::Logging::Private::BasicLog<5>
                  (&`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FNiagaraDispatchIndirectArgsGenCS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                    ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
      }
      aVar8 = (atomic<FRHIShader_*>)0x0;
    }
  }
  return (FRHIShader *)aVar8;
}

// GetRHIShaderBase @ 1492a66c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FRHIShader * __thiscall
TShaderRefBase<FNiagaraShader,FNiagaraShaderMapPointerTable>::GetRHIShaderBase
          (TShaderRefBase<FNiagaraShader,FNiagaraShaderMapPointerTable> *this,
          EShaderFrequency param_1,bool param_2)

{
  longlong *plVar1;
  int iVar2;
  FShaderMapResource *this_00;
  FShaderMapBase *pFVar3;
  FNiagaraShader *pFVar4;
  code *pcVar5;
  bool bVar6;
  FRHIShader *pFVar7;
  atomic<FRHIShader_*> aVar8;
  uint uVar9;
  uint uVar10;
  
  aVar8 = (atomic<FRHIShader_*>)0x0;
  if (this->ShaderContent != (FNiagaraShader *)0x0) {
    this_00 = (this->ShaderMap->Resource).Reference;
    if ((this_00 == (FShaderMapResource *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x426,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FRHIShader *)(*pcVar5)();
      return pFVar7;
    }
    iVar2 = *(int *)((longlong)&this->ShaderContent->_padding_ + 4);
    aVar8 = (this_00->RHIShaders).Ptr[iVar2];
    if ((aVar8 == (atomic<FRHIShader_*>)0x0) &&
       (aVar8 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this_00,iVar2,param_2)
       , aVar8 == (atomic<FRHIShader_*>)0x0)) {
      if (4 < (byte)LogShaders._0_1_) {
        pFVar3 = this->ShaderMap;
        pFVar4 = this->ShaderContent;
        if ((pFVar3->PointerTable == (FShaderMapPointerTable *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("PointerTable",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                               ,0x9b4,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          pFVar7 = (FRHIShader *)(*pcVar5)();
          return pFVar7;
        }
        plVar1 = &pFVar4->_padding_;
        if ((*plVar1 & 1) != 0) {
          uVar9 = (uint)((ulonglong)*plVar1 >> 1);
          uVar10 = 0;
          if ((int)uVar9 < *(int *)&(pFVar3->PointerTable->ShaderTypes).field_0x28) {
            uVar10 = ~uVar9 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            pFVar7 = (FRHIShader *)(*pcVar5)();
            return pFVar7;
          }
        }
        UE::Logging::Private::BasicLog<5>
                  (&`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FNiagaraShader,FNiagaraShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                    ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
      }
      aVar8 = (atomic<FRHIShader_*>)0x0;
    }
  }
  return (FRHIShader *)aVar8;
}

// GetComputeShader @ 1492edce0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

FRHIComputeShader * __thiscall
TShaderRefBase<FNiagaraDrawIndirectArgsGenCS,FShaderMapPointerTable>::GetComputeShader
          (TShaderRefBase<FNiagaraDrawIndirectArgsGenCS,FShaderMapPointerTable> *this)

{
  int iVar1;
  FShaderMapResource *this_00;
  FShader *this_01;
  FShaderMapBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  FRHIComputeShader *pFVar5;
  atomic<FRHIShader_*> aVar6;
  
  aVar6 = (atomic<FRHIShader_*>)0x0;
  if (this->ShaderContent != (FNiagaraDrawIndirectArgsGenCS *)0x0) {
    this_00 = (this->ShaderMap->Resource).Reference;
    if (this_00 == (FShaderMapResource *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Resource",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                         ,0x426,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FRHIComputeShader *)(*pcVar3)();
        return pFVar5;
      }
    }
    iVar1 = *(int *)&this->ShaderContent->field_0xd4;
    aVar6 = (this_00->RHIShaders).Ptr[iVar1];
    if (aVar6 == (atomic<FRHIShader_*>)0x0) {
      aVar6 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this_00,iVar1,true);
      if (aVar6 == (atomic<FRHIShader_*>)0x0) {
        if (4 < (byte)LogShaders._0_1_) {
          this_01 = (FShader *)this->ShaderContent;
          pFVar2 = this->ShaderMap;
          if (pFVar2->PointerTable == (FShaderMapPointerTable *)0x0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("PointerTable",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                               ,0x9b4,L"");
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              pFVar5 = (FRHIComputeShader *)(*pcVar3)();
              return pFVar5;
            }
          }
          FShader::GetType(this_01,pFVar2->PointerTable);
          UE::Logging::Private::BasicLog<5>
                    ((FStaticBasicLogRecord *)
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FNiagaraDrawIndirectArgsGenCS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIComputeShader *)aVar6;
}

// GetComputeShader @ 1492edde0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

FRHIComputeShader * __thiscall
TShaderRefBase<FNiagaraDrawIndirectResetCountsCS,FShaderMapPointerTable>::GetComputeShader
          (TShaderRefBase<FNiagaraDrawIndirectResetCountsCS,FShaderMapPointerTable> *this)

{
  int iVar1;
  FShaderMapResource *this_00;
  FShader *this_01;
  FShaderMapBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  FRHIComputeShader *pFVar5;
  atomic<FRHIShader_*> aVar6;
  
  aVar6 = (atomic<FRHIShader_*>)0x0;
  if (this->ShaderContent != (FNiagaraDrawIndirectResetCountsCS *)0x0) {
    this_00 = (this->ShaderMap->Resource).Reference;
    if (this_00 == (FShaderMapResource *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Resource",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                         ,0x426,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FRHIComputeShader *)(*pcVar3)();
        return pFVar5;
      }
    }
    iVar1 = *(int *)&this->ShaderContent->field_0xd4;
    aVar6 = (this_00->RHIShaders).Ptr[iVar1];
    if (aVar6 == (atomic<FRHIShader_*>)0x0) {
      aVar6 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this_00,iVar1,true);
      if (aVar6 == (atomic<FRHIShader_*>)0x0) {
        if (4 < (byte)LogShaders._0_1_) {
          this_01 = (FShader *)this->ShaderContent;
          pFVar2 = this->ShaderMap;
          if (pFVar2->PointerTable == (FShaderMapPointerTable *)0x0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("PointerTable",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                               ,0x9b4,L"");
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              pFVar5 = (FRHIComputeShader *)(*pcVar3)();
              return pFVar5;
            }
          }
          FShader::GetType(this_01,pFVar2->PointerTable);
          UE::Logging::Private::BasicLog<5>
                    ((FStaticBasicLogRecord *)
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FNiagaraDrawIndirectResetCountsCS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIComputeShader *)aVar6;
}

// GetComputeShader @ 1492edee0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

FRHIComputeShader * __thiscall
TShaderRefBase<FNiagaraInstanceCountsInitCS,FShaderMapPointerTable>::GetComputeShader
          (TShaderRefBase<FNiagaraInstanceCountsInitCS,FShaderMapPointerTable> *this)

{
  int iVar1;
  FShaderMapResource *this_00;
  FShader *this_01;
  FShaderMapBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  FRHIComputeShader *pFVar5;
  atomic<FRHIShader_*> aVar6;
  
  aVar6 = (atomic<FRHIShader_*>)0x0;
  if (this->ShaderContent != (FNiagaraInstanceCountsInitCS *)0x0) {
    this_00 = (this->ShaderMap->Resource).Reference;
    if (this_00 == (FShaderMapResource *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Resource",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                         ,0x426,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FRHIComputeShader *)(*pcVar3)();
        return pFVar5;
      }
    }
    iVar1 = *(int *)&this->ShaderContent->field_0xd4;
    aVar6 = (this_00->RHIShaders).Ptr[iVar1];
    if (aVar6 == (atomic<FRHIShader_*>)0x0) {
      aVar6 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this_00,iVar1,true);
      if (aVar6 == (atomic<FRHIShader_*>)0x0) {
        if (4 < (byte)LogShaders._0_1_) {
          this_01 = (FShader *)this->ShaderContent;
          pFVar2 = this->ShaderMap;
          if (pFVar2->PointerTable == (FShaderMapPointerTable *)0x0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("PointerTable",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                               ,0x9b4,L"");
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              pFVar5 = (FRHIComputeShader *)(*pcVar3)();
              return pFVar5;
            }
          }
          FShader::GetType(this_01,pFVar2->PointerTable);
          UE::Logging::Private::BasicLog<5>
                    ((FStaticBasicLogRecord *)
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FNiagaraInstanceCountsInitCS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIComputeShader *)aVar6;
}

// GetComputeShader @ 1492edfe0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

FRHIComputeShader * __thiscall
TShaderRefBase<FNiagaraShader,FShaderMapPointerTable>::GetComputeShader
          (TShaderRefBase<FNiagaraShader,FShaderMapPointerTable> *this)

{
  int iVar1;
  FShaderMapResource *this_00;
  FNiagaraShader *this_01;
  FShaderMapBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  FRHIComputeShader *pFVar5;
  atomic<FRHIShader_*> aVar6;
  
  aVar6 = (atomic<FRHIShader_*>)0x0;
  if (this->ShaderContent != (FNiagaraShader *)0x0) {
    this_00 = (this->ShaderMap->Resource).Reference;
    if (this_00 == (FShaderMapResource *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Resource",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                         ,0x426,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FRHIComputeShader *)(*pcVar3)();
        return pFVar5;
      }
    }
    iVar1 = *(int *)((longlong)&this->ShaderContent->_padding_ + 4);
    aVar6 = (this_00->RHIShaders).Ptr[iVar1];
    if (aVar6 == (atomic<FRHIShader_*>)0x0) {
      aVar6 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this_00,iVar1,true);
      if (aVar6 == (atomic<FRHIShader_*>)0x0) {
        if (4 < (byte)LogShaders._0_1_) {
          this_01 = this->ShaderContent;
          pFVar2 = this->ShaderMap;
          if (pFVar2->PointerTable == (FShaderMapPointerTable *)0x0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("PointerTable",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                               ,0x9b4,L"");
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              pFVar5 = (FRHIComputeShader *)(*pcVar3)();
              return pFVar5;
            }
          }
          FShader::GetType((FShader *)this_01,pFVar2->PointerTable);
          UE::Logging::Private::BasicLog<5>
                    ((FStaticBasicLogRecord *)
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FNiagaraShader,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIComputeShader *)aVar6;
}

// GetComputeShader @ 1492ee0e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

FRHIComputeShader * __thiscall
TShaderRefBase<FNiagaraSortKeyGenCS,FShaderMapPointerTable>::GetComputeShader
          (TShaderRefBase<FNiagaraSortKeyGenCS,FShaderMapPointerTable> *this)

{
  int iVar1;
  FShaderMapResource *this_00;
  FShader *this_01;
  FShaderMapBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  FRHIComputeShader *pFVar5;
  atomic<FRHIShader_*> aVar6;
  
  aVar6 = (atomic<FRHIShader_*>)0x0;
  if (this->ShaderContent != (FNiagaraSortKeyGenCS *)0x0) {
    this_00 = (this->ShaderMap->Resource).Reference;
    if (this_00 == (FShaderMapResource *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Resource",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                         ,0x426,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FRHIComputeShader *)(*pcVar3)();
        return pFVar5;
      }
    }
    iVar1 = *(int *)&this->ShaderContent->field_0xd4;
    aVar6 = (this_00->RHIShaders).Ptr[iVar1];
    if (aVar6 == (atomic<FRHIShader_*>)0x0) {
      aVar6 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this_00,iVar1,true);
      if (aVar6 == (atomic<FRHIShader_*>)0x0) {
        if (4 < (byte)LogShaders._0_1_) {
          this_01 = (FShader *)this->ShaderContent;
          pFVar2 = this->ShaderMap;
          if (pFVar2->PointerTable == (FShaderMapPointerTable *)0x0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("PointerTable",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                               ,0x9b4,L"");
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              pFVar5 = (FRHIComputeShader *)(*pcVar3)();
              return pFVar5;
            }
          }
          FShader::GetType(this_01,pFVar2->PointerTable);
          UE::Logging::Private::BasicLog<5>
                    ((FStaticBasicLogRecord *)
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FNiagaraSortKeyGenCS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIComputeShader *)aVar6;
}

// GetComputeShader @ 14934efa0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

FRHIComputeShader * __thiscall
TShaderRefBase<FNiagaraRibbonAggregationApplyCS,FShaderMapPointerTable>::GetComputeShader
          (TShaderRefBase<FNiagaraRibbonAggregationApplyCS,FShaderMapPointerTable> *this)

{
  int iVar1;
  FShaderMapResource *this_00;
  FShader *this_01;
  FShaderMapBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  FRHIComputeShader *pFVar5;
  atomic<FRHIShader_*> aVar6;
  
  aVar6 = (atomic<FRHIShader_*>)0x0;
  if (this->ShaderContent != (FNiagaraRibbonAggregationApplyCS *)0x0) {
    this_00 = (this->ShaderMap->Resource).Reference;
    if (this_00 == (FShaderMapResource *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Resource",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                         ,0x426,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FRHIComputeShader *)(*pcVar3)();
        return pFVar5;
      }
    }
    iVar1 = *(int *)&this->ShaderContent->field_0xd4;
    aVar6 = (this_00->RHIShaders).Ptr[iVar1];
    if (aVar6 == (atomic<FRHIShader_*>)0x0) {
      aVar6 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this_00,iVar1,true);
      if (aVar6 == (atomic<FRHIShader_*>)0x0) {
        if (4 < (byte)LogShaders._0_1_) {
          this_01 = (FShader *)this->ShaderContent;
          pFVar2 = this->ShaderMap;
          if (pFVar2->PointerTable == (FShaderMapPointerTable *)0x0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("PointerTable",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                               ,0x9b4,L"");
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              pFVar5 = (FRHIComputeShader *)(*pcVar3)();
              return pFVar5;
            }
          }
          FShader::GetType(this_01,pFVar2->PointerTable);
          UE::Logging::Private::BasicLog<5>
                    ((FStaticBasicLogRecord *)
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FNiagaraRibbonAggregationApplyCS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIComputeShader *)aVar6;
}

// GetComputeShader @ 14934f0a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

FRHIComputeShader * __thiscall
TShaderRefBase<FNiagaraRibbonAggregationStepCS,FShaderMapPointerTable>::GetComputeShader
          (TShaderRefBase<FNiagaraRibbonAggregationStepCS,FShaderMapPointerTable> *this)

{
  int iVar1;
  FShaderMapResource *this_00;
  FShader *this_01;
  FShaderMapBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  FRHIComputeShader *pFVar5;
  atomic<FRHIShader_*> aVar6;
  
  aVar6 = (atomic<FRHIShader_*>)0x0;
  if (this->ShaderContent != (FNiagaraRibbonAggregationStepCS *)0x0) {
    this_00 = (this->ShaderMap->Resource).Reference;
    if (this_00 == (FShaderMapResource *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Resource",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                         ,0x426,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FRHIComputeShader *)(*pcVar3)();
        return pFVar5;
      }
    }
    iVar1 = *(int *)&this->ShaderContent->field_0xd4;
    aVar6 = (this_00->RHIShaders).Ptr[iVar1];
    if (aVar6 == (atomic<FRHIShader_*>)0x0) {
      aVar6 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this_00,iVar1,true);
      if (aVar6 == (atomic<FRHIShader_*>)0x0) {
        if (4 < (byte)LogShaders._0_1_) {
          this_01 = (FShader *)this->ShaderContent;
          pFVar2 = this->ShaderMap;
          if (pFVar2->PointerTable == (FShaderMapPointerTable *)0x0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("PointerTable",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                               ,0x9b4,L"");
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              pFVar5 = (FRHIComputeShader *)(*pcVar3)();
              return pFVar5;
            }
          }
          FShader::GetType(this_01,pFVar2->PointerTable);
          UE::Logging::Private::BasicLog<5>
                    ((FStaticBasicLogRecord *)
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FNiagaraRibbonAggregationStepCS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIComputeShader *)aVar6;
}

// GetComputeShader @ 14934f1a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

FRHIComputeShader * __thiscall
TShaderRefBase<FNiagaraRibbonCreateIndexBufferCS,FShaderMapPointerTable>::GetComputeShader
          (TShaderRefBase<FNiagaraRibbonCreateIndexBufferCS,FShaderMapPointerTable> *this)

{
  int iVar1;
  FShaderMapResource *this_00;
  FShader *this_01;
  FShaderMapBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  FRHIComputeShader *pFVar5;
  atomic<FRHIShader_*> aVar6;
  
  aVar6 = (atomic<FRHIShader_*>)0x0;
  if (this->ShaderContent != (FNiagaraRibbonCreateIndexBufferCS *)0x0) {
    this_00 = (this->ShaderMap->Resource).Reference;
    if (this_00 == (FShaderMapResource *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Resource",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                         ,0x426,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FRHIComputeShader *)(*pcVar3)();
        return pFVar5;
      }
    }
    iVar1 = *(int *)&this->ShaderContent->field_0xd4;
    aVar6 = (this_00->RHIShaders).Ptr[iVar1];
    if (aVar6 == (atomic<FRHIShader_*>)0x0) {
      aVar6 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this_00,iVar1,true);
      if (aVar6 == (atomic<FRHIShader_*>)0x0) {
        if (4 < (byte)LogShaders._0_1_) {
          this_01 = (FShader *)this->ShaderContent;
          pFVar2 = this->ShaderMap;
          if (pFVar2->PointerTable == (FShaderMapPointerTable *)0x0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("PointerTable",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                               ,0x9b4,L"");
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              pFVar5 = (FRHIComputeShader *)(*pcVar3)();
              return pFVar5;
            }
          }
          FShader::GetType(this_01,pFVar2->PointerTable);
          UE::Logging::Private::BasicLog<5>
                    ((FStaticBasicLogRecord *)
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FNiagaraRibbonCreateIndexBufferCS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIComputeShader *)aVar6;
}

// GetComputeShader @ 14934f2a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

FRHIComputeShader * __thiscall
TShaderRefBase<FNiagaraRibbonCreateIndexBufferParamsCS,FShaderMapPointerTable>::GetComputeShader
          (TShaderRefBase<FNiagaraRibbonCreateIndexBufferParamsCS,FShaderMapPointerTable> *this)

{
  int iVar1;
  FShaderMapResource *this_00;
  FShader *this_01;
  FShaderMapBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  FRHIComputeShader *pFVar5;
  atomic<FRHIShader_*> aVar6;
  
  aVar6 = (atomic<FRHIShader_*>)0x0;
  if (this->ShaderContent != (FNiagaraRibbonCreateIndexBufferParamsCS *)0x0) {
    this_00 = (this->ShaderMap->Resource).Reference;
    if (this_00 == (FShaderMapResource *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Resource",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                         ,0x426,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FRHIComputeShader *)(*pcVar3)();
        return pFVar5;
      }
    }
    iVar1 = *(int *)&this->ShaderContent->field_0xd4;
    aVar6 = (this_00->RHIShaders).Ptr[iVar1];
    if (aVar6 == (atomic<FRHIShader_*>)0x0) {
      aVar6 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this_00,iVar1,true);
      if (aVar6 == (atomic<FRHIShader_*>)0x0) {
        if (4 < (byte)LogShaders._0_1_) {
          this_01 = (FShader *)this->ShaderContent;
          pFVar2 = this->ShaderMap;
          if (pFVar2->PointerTable == (FShaderMapPointerTable *)0x0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("PointerTable",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                               ,0x9b4,L"");
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              pFVar5 = (FRHIComputeShader *)(*pcVar3)();
              return pFVar5;
            }
          }
          FShader::GetType(this_01,pFVar2->PointerTable);
          UE::Logging::Private::BasicLog<5>
                    ((FStaticBasicLogRecord *)
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FNiagaraRibbonCreateIndexBufferParamsCS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIComputeShader *)aVar6;
}

// GetComputeShader @ 14934f3a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

FRHIComputeShader * __thiscall
TShaderRefBase<FNiagaraRibbonSortPhase1CS,FShaderMapPointerTable>::GetComputeShader
          (TShaderRefBase<FNiagaraRibbonSortPhase1CS,FShaderMapPointerTable> *this)

{
  int iVar1;
  FShaderMapResource *this_00;
  FShader *this_01;
  FShaderMapBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  FRHIComputeShader *pFVar5;
  atomic<FRHIShader_*> aVar6;
  
  aVar6 = (atomic<FRHIShader_*>)0x0;
  if (this->ShaderContent != (FNiagaraRibbonSortPhase1CS *)0x0) {
    this_00 = (this->ShaderMap->Resource).Reference;
    if (this_00 == (FShaderMapResource *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Resource",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                         ,0x426,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FRHIComputeShader *)(*pcVar3)();
        return pFVar5;
      }
    }
    iVar1 = *(int *)&this->ShaderContent->field_0xd4;
    aVar6 = (this_00->RHIShaders).Ptr[iVar1];
    if (aVar6 == (atomic<FRHIShader_*>)0x0) {
      aVar6 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this_00,iVar1,true);
      if (aVar6 == (atomic<FRHIShader_*>)0x0) {
        if (4 < (byte)LogShaders._0_1_) {
          this_01 = (FShader *)this->ShaderContent;
          pFVar2 = this->ShaderMap;
          if (pFVar2->PointerTable == (FShaderMapPointerTable *)0x0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("PointerTable",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                               ,0x9b4,L"");
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              pFVar5 = (FRHIComputeShader *)(*pcVar3)();
              return pFVar5;
            }
          }
          FShader::GetType(this_01,pFVar2->PointerTable);
          UE::Logging::Private::BasicLog<5>
                    ((FStaticBasicLogRecord *)
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FNiagaraRibbonSortPhase1CS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIComputeShader *)aVar6;
}

// GetComputeShader @ 14934f4a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

FRHIComputeShader * __thiscall
TShaderRefBase<FNiagaraRibbonSortPhase2CS,FShaderMapPointerTable>::GetComputeShader
          (TShaderRefBase<FNiagaraRibbonSortPhase2CS,FShaderMapPointerTable> *this)

{
  int iVar1;
  FShaderMapResource *this_00;
  FShader *this_01;
  FShaderMapBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  FRHIComputeShader *pFVar5;
  atomic<FRHIShader_*> aVar6;
  
  aVar6 = (atomic<FRHIShader_*>)0x0;
  if (this->ShaderContent != (FNiagaraRibbonSortPhase2CS *)0x0) {
    this_00 = (this->ShaderMap->Resource).Reference;
    if (this_00 == (FShaderMapResource *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Resource",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                         ,0x426,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FRHIComputeShader *)(*pcVar3)();
        return pFVar5;
      }
    }
    iVar1 = *(int *)&this->ShaderContent->field_0xd4;
    aVar6 = (this_00->RHIShaders).Ptr[iVar1];
    if (aVar6 == (atomic<FRHIShader_*>)0x0) {
      aVar6 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this_00,iVar1,true);
      if (aVar6 == (atomic<FRHIShader_*>)0x0) {
        if (4 < (byte)LogShaders._0_1_) {
          this_01 = (FShader *)this->ShaderContent;
          pFVar2 = this->ShaderMap;
          if (pFVar2->PointerTable == (FShaderMapPointerTable *)0x0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("PointerTable",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                               ,0x9b4,L"");
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              pFVar5 = (FRHIComputeShader *)(*pcVar3)();
              return pFVar5;
            }
          }
          FShader::GetType(this_01,pFVar2->PointerTable);
          UE::Logging::Private::BasicLog<5>
                    ((FStaticBasicLogRecord *)
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FNiagaraRibbonSortPhase2CS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIComputeShader *)aVar6;
}

// GetComputeShader @ 14934f5a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

FRHIComputeShader * __thiscall
TShaderRefBase<FNiagaraRibbonUVParamCalculationCS,FShaderMapPointerTable>::GetComputeShader
          (TShaderRefBase<FNiagaraRibbonUVParamCalculationCS,FShaderMapPointerTable> *this)

{
  int iVar1;
  FShaderMapResource *this_00;
  FShader *this_01;
  FShaderMapBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  FRHIComputeShader *pFVar5;
  atomic<FRHIShader_*> aVar6;
  
  aVar6 = (atomic<FRHIShader_*>)0x0;
  if (this->ShaderContent != (FNiagaraRibbonUVParamCalculationCS *)0x0) {
    this_00 = (this->ShaderMap->Resource).Reference;
    if (this_00 == (FShaderMapResource *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Resource",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                         ,0x426,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FRHIComputeShader *)(*pcVar3)();
        return pFVar5;
      }
    }
    iVar1 = *(int *)&this->ShaderContent->field_0xd4;
    aVar6 = (this_00->RHIShaders).Ptr[iVar1];
    if (aVar6 == (atomic<FRHIShader_*>)0x0) {
      aVar6 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this_00,iVar1,true);
      if (aVar6 == (atomic<FRHIShader_*>)0x0) {
        if (4 < (byte)LogShaders._0_1_) {
          this_01 = (FShader *)this->ShaderContent;
          pFVar2 = this->ShaderMap;
          if (pFVar2->PointerTable == (FShaderMapPointerTable *)0x0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("PointerTable",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                               ,0x9b4,L"");
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              pFVar5 = (FRHIComputeShader *)(*pcVar3)();
              return pFVar5;
            }
          }
          FShader::GetType(this_01,pFVar2->PointerTable);
          UE::Logging::Private::BasicLog<5>
                    ((FStaticBasicLogRecord *)
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FNiagaraRibbonUVParamCalculationCS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIComputeShader *)aVar6;
}

// GetComputeShader @ 14934f6a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

FRHIComputeShader * __thiscall
TShaderRefBase<FNiagaraRibbonVertexReductionFinalizeCS,FShaderMapPointerTable>::GetComputeShader
          (TShaderRefBase<FNiagaraRibbonVertexReductionFinalizeCS,FShaderMapPointerTable> *this)

{
  int iVar1;
  FShaderMapResource *this_00;
  FShader *this_01;
  FShaderMapBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  FRHIComputeShader *pFVar5;
  atomic<FRHIShader_*> aVar6;
  
  aVar6 = (atomic<FRHIShader_*>)0x0;
  if (this->ShaderContent != (FNiagaraRibbonVertexReductionFinalizeCS *)0x0) {
    this_00 = (this->ShaderMap->Resource).Reference;
    if (this_00 == (FShaderMapResource *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Resource",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                         ,0x426,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FRHIComputeShader *)(*pcVar3)();
        return pFVar5;
      }
    }
    iVar1 = *(int *)&this->ShaderContent->field_0xd4;
    aVar6 = (this_00->RHIShaders).Ptr[iVar1];
    if (aVar6 == (atomic<FRHIShader_*>)0x0) {
      aVar6 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this_00,iVar1,true);
      if (aVar6 == (atomic<FRHIShader_*>)0x0) {
        if (4 < (byte)LogShaders._0_1_) {
          this_01 = (FShader *)this->ShaderContent;
          pFVar2 = this->ShaderMap;
          if (pFVar2->PointerTable == (FShaderMapPointerTable *)0x0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("PointerTable",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                               ,0x9b4,L"");
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              pFVar5 = (FRHIComputeShader *)(*pcVar3)();
              return pFVar5;
            }
          }
          FShader::GetType(this_01,pFVar2->PointerTable);
          UE::Logging::Private::BasicLog<5>
                    ((FStaticBasicLogRecord *)
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FNiagaraRibbonVertexReductionFinalizeCS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIComputeShader *)aVar6;
}

// GetComputeShader @ 14934f7a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

FRHIComputeShader * __thiscall
TShaderRefBase<FNiagaraRibbonVertexReductionInitializationCS,FShaderMapPointerTable>::
GetComputeShader(TShaderRefBase<FNiagaraRibbonVertexReductionInitializationCS,FShaderMapPointerTable>
                 *this)

{
  int iVar1;
  FShaderMapResource *this_00;
  FShader *this_01;
  FShaderMapBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  FRHIComputeShader *pFVar5;
  atomic<FRHIShader_*> aVar6;
  
  aVar6 = (atomic<FRHIShader_*>)0x0;
  if (this->ShaderContent != (FNiagaraRibbonVertexReductionInitializationCS *)0x0) {
    this_00 = (this->ShaderMap->Resource).Reference;
    if (this_00 == (FShaderMapResource *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Resource",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                         ,0x426,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FRHIComputeShader *)(*pcVar3)();
        return pFVar5;
      }
    }
    iVar1 = *(int *)&this->ShaderContent->field_0xd4;
    aVar6 = (this_00->RHIShaders).Ptr[iVar1];
    if (aVar6 == (atomic<FRHIShader_*>)0x0) {
      aVar6 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this_00,iVar1,true);
      if (aVar6 == (atomic<FRHIShader_*>)0x0) {
        if (4 < (byte)LogShaders._0_1_) {
          this_01 = (FShader *)this->ShaderContent;
          pFVar2 = this->ShaderMap;
          if (pFVar2->PointerTable == (FShaderMapPointerTable *)0x0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("PointerTable",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                               ,0x9b4,L"");
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              pFVar5 = (FRHIComputeShader *)(*pcVar3)();
              return pFVar5;
            }
          }
          FShader::GetType(this_01,pFVar2->PointerTable);
          UE::Logging::Private::BasicLog<5>
                    ((FStaticBasicLogRecord *)
                     &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FNiagaraRibbonVertexReductionInitializationCS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                      ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
        }
        aVar6 = (atomic<FRHIShader_*>)0x0;
      }
    }
  }
  return (FRHIComputeShader *)aVar6;
}

// GetRHIShaderBase @ 14944c980

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FRHIShader * __thiscall
TShaderRefBase<NiagaraStateless::FSimulationShader,FShaderMapPointerTable>::GetRHIShaderBase
          (TShaderRefBase<NiagaraStateless::FSimulationShader,FShaderMapPointerTable> *this,
          EShaderFrequency param_1,bool param_2)

{
  undefined1 *puVar1;
  int iVar2;
  FShaderMapResource *this_00;
  FShaderMapBase *pFVar3;
  FSimulationShader *pFVar4;
  code *pcVar5;
  bool bVar6;
  FRHIShader *pFVar7;
  atomic<FRHIShader_*> aVar8;
  uint uVar9;
  uint uVar10;
  
  aVar8 = (atomic<FRHIShader_*>)0x0;
  if (this->ShaderContent != (FSimulationShader *)0x0) {
    this_00 = (this->ShaderMap->Resource).Reference;
    if ((this_00 == (FShaderMapResource *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x426,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FRHIShader *)(*pcVar5)();
      return pFVar7;
    }
    iVar2 = *(int *)&this->ShaderContent->field_0xd4;
    aVar8 = (this_00->RHIShaders).Ptr[iVar2];
    if ((aVar8 == (atomic<FRHIShader_*>)0x0) &&
       (aVar8 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this_00,iVar2,param_2)
       , aVar8 == (atomic<FRHIShader_*>)0x0)) {
      if (4 < (byte)LogShaders._0_1_) {
        pFVar3 = this->ShaderMap;
        pFVar4 = this->ShaderContent;
        if ((pFVar3->PointerTable == (FShaderMapPointerTable *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("PointerTable",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                               ,0x9b4,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          pFVar7 = (FRHIShader *)(*pcVar5)();
          return pFVar7;
        }
        puVar1 = &pFVar4->field_0xc0;
        if ((*puVar1 & 1) != 0) {
          uVar9 = (uint)(*(ulonglong *)puVar1 >> 1);
          uVar10 = 0;
          if ((int)uVar9 < *(int *)&(pFVar3->PointerTable->ShaderTypes).field_0x28) {
            uVar10 = ~uVar9 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            pFVar7 = (FRHIShader *)(*pcVar5)();
            return pFVar7;
          }
        }
        UE::Logging::Private::BasicLog<5>
                  (&`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<NiagaraStateless::FSimulationShader,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                    ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
      }
      aVar8 = (atomic<FRHIShader_*>)0x0;
    }
  }
  return (FRHIShader *)aVar8;
}

