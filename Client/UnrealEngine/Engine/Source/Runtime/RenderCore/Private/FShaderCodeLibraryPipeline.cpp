// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 2

// GetPipelineHash @ 145e59b70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FShaderCodeLibraryPipeline::GetPipelineHash(FShaderCodeLibraryPipeline *this,FSHAHash *param_1)

{
  longlong lVar1;
  undefined1 auStack_c8 [32];
  FSHA1 local_a8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  FSHA1::FSHA1(&local_a8);
  lVar1 = 5;
  do {
    FSHA1::Update(&local_a8,(uchar *)this,0x14);
    this = (FShaderCodeLibraryPipeline *)(this->Shaders + 1);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  FSHA1::Final(&local_a8);
  FSHA1::GetHash(&local_a8,param_1->Hash);
  FSHA1::~FSHA1(&local_a8);
  return;
}

// Initialize @ 145e5f080

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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FShaderCodeLibraryPipeline::Initialize(FShaderCodeLibraryPipeline *this,FShaderPipeline *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  bool bVar3;
  FSHAHash *pFVar4;
  FShader *this_00;
  TMemoryImagePtr<FShader>_u_0 TVar5;
  
  if (param_1 == (FShaderPipeline *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pipeline != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCodeLibrary.cpp"
                       ,0x3a6,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = param_1->Shaders[0].field0_0x0.UnfrozenPtr;
  if (this_00 != (FShader *)0x0) {
    if ((((ulonglong)this_00 & 1) != 0) &&
       (this_00 = (FShader *)
                  ((longlong)&param_1->Shaders[0].field0_0x0 + ((longlong)this_00 >> 0x18)),
       this_00 == (FShader *)0x0)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\MemoryImage.h"
                         ,0x197,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar4 = FShader::GetOutputHash(this_00);
    uVar2 = *(undefined8 *)(pFVar4->Hash + 8);
    *(undefined8 *)this->Shaders[0].Hash = *(undefined8 *)pFVar4->Hash;
    *(undefined8 *)(this->Shaders[0].Hash + 8) = uVar2;
    *(undefined4 *)(this->Shaders[0].Hash + 0x10) = *(undefined4 *)(pFVar4->Hash + 0x10);
  }
  TVar5 = (TMemoryImagePtr<FShader>_u_0)param_1->Shaders[1].field0_0x0.UnfrozenPtr;
  if (TVar5 != 0) {
    if ((((ulonglong)TVar5 & 1) != 0) &&
       (TVar5.UnfrozenPtr =
             (FShader *)((longlong)&param_1->Shaders[1].field0_0x0 + ((longlong)TVar5 >> 0x18)),
       TVar5.Packed == 0)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\MemoryImage.h"
                         ,0x197,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar4 = FShader::GetOutputHash(TVar5.UnfrozenPtr);
    uVar2 = *(undefined8 *)(pFVar4->Hash + 8);
    *(undefined8 *)this->Shaders[1].Hash = *(undefined8 *)pFVar4->Hash;
    *(undefined8 *)(this->Shaders[1].Hash + 8) = uVar2;
    *(undefined4 *)(this->Shaders[1].Hash + 0x10) = *(undefined4 *)(pFVar4->Hash + 0x10);
  }
  TVar5 = (TMemoryImagePtr<FShader>_u_0)param_1->Shaders[2].field0_0x0.UnfrozenPtr;
  if (TVar5 != 0) {
    if ((((ulonglong)TVar5 & 1) != 0) &&
       (TVar5.UnfrozenPtr =
             (FShader *)((longlong)&param_1->Shaders[2].field0_0x0 + ((longlong)TVar5 >> 0x18)),
       TVar5.Packed == 0)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\MemoryImage.h"
                         ,0x197,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar4 = FShader::GetOutputHash(TVar5.UnfrozenPtr);
    uVar2 = *(undefined8 *)(pFVar4->Hash + 8);
    *(undefined8 *)this->Shaders[2].Hash = *(undefined8 *)pFVar4->Hash;
    *(undefined8 *)(this->Shaders[2].Hash + 8) = uVar2;
    *(undefined4 *)(this->Shaders[2].Hash + 0x10) = *(undefined4 *)(pFVar4->Hash + 0x10);
  }
  TVar5 = (TMemoryImagePtr<FShader>_u_0)param_1->Shaders[3].field0_0x0.UnfrozenPtr;
  if (TVar5 != 0) {
    if ((((ulonglong)TVar5 & 1) != 0) &&
       (TVar5.UnfrozenPtr =
             (FShader *)((longlong)&param_1->Shaders[3].field0_0x0 + ((longlong)TVar5 >> 0x18)),
       TVar5.Packed == 0)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\MemoryImage.h"
                         ,0x197,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar4 = FShader::GetOutputHash(TVar5.UnfrozenPtr);
    uVar2 = *(undefined8 *)(pFVar4->Hash + 8);
    *(undefined8 *)this->Shaders[3].Hash = *(undefined8 *)pFVar4->Hash;
    *(undefined8 *)(this->Shaders[3].Hash + 8) = uVar2;
    *(undefined4 *)(this->Shaders[3].Hash + 0x10) = *(undefined4 *)(pFVar4->Hash + 0x10);
  }
  TVar5 = (TMemoryImagePtr<FShader>_u_0)param_1->Shaders[4].field0_0x0.UnfrozenPtr;
  if (TVar5 != 0) {
    if ((((ulonglong)TVar5 & 1) != 0) &&
       (TVar5.UnfrozenPtr =
             (FShader *)((longlong)&param_1->Shaders[4].field0_0x0 + ((longlong)TVar5 >> 0x18)),
       TVar5.Packed == 0)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\MemoryImage.h"
                         ,0x197,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar4 = FShader::GetOutputHash(TVar5.UnfrozenPtr);
    uVar2 = *(undefined8 *)(pFVar4->Hash + 8);
    *(undefined8 *)this->Shaders[4].Hash = *(undefined8 *)pFVar4->Hash;
    *(undefined8 *)(this->Shaders[4].Hash + 8) = uVar2;
    *(undefined4 *)(this->Shaders[4].Hash + 0x10) = *(undefined4 *)(pFVar4->Hash + 0x10);
  }
  return;
}

