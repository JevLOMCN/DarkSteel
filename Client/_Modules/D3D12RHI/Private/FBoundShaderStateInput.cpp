// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 2

// AddRefResources @ 1459fef30

void __thiscall FBoundShaderStateInput::AddRefResources(FBoundShaderStateInput *this)

{
  code *pcVar1;
  bool bVar2;
  FRHIAmplificationShader *this_00;
  
  if (this->MeshShaderRHI == (FRHIMeshShader *)0x0) {
    if (this->WorkGraphMeshShaderRHI == (FRHIWorkGraphShader *)0x0) {
      if ((this->VertexDeclarationRHI == (FRHIVertexDeclaration *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("VertexDeclarationRHI",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                             ,0x1142,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      FRHIResource::AddRef((FRHIResource *)this->VertexDeclarationRHI);
      if ((this->VertexShaderRHI == (FRHIVertexShader *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("VertexShaderRHI",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                             ,0x1145,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      this_00 = (FRHIAmplificationShader *)this->VertexShaderRHI;
    }
    else {
      if ((this->VertexDeclarationRHI != (FRHIVertexDeclaration *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("VertexDeclarationRHI == nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                             ,0x113b,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((this->VertexShaderRHI != (FRHIVertexShader *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("VertexShaderRHI == nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                             ,0x113c,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((this->MeshShaderRHI != (FRHIMeshShader *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("GetMeshShader() == nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                             ,0x113d,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      this_00 = (FRHIAmplificationShader *)this->WorkGraphMeshShaderRHI;
    }
  }
  else {
    if ((this->VertexDeclarationRHI != (FRHIVertexDeclaration *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("VertexDeclarationRHI == nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                           ,0x112f,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((this->VertexShaderRHI != (FRHIVertexShader *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("VertexShaderRHI == nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                           ,0x1130,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((this->WorkGraphMeshShaderRHI != (FRHIWorkGraphShader *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("GetWorkGraphShader() == nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                           ,0x1131,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FRHIResource::AddRef((FRHIResource *)this->MeshShaderRHI);
    this_00 = this->AmplificationShaderRHI;
    if (this_00 == (FRHIAmplificationShader *)0x0) goto LAB_1459ff0e7;
  }
  FRHIResource::AddRef((FRHIResource *)this_00);
LAB_1459ff0e7:
  if (this->PixelShaderRHI != (FRHIPixelShader *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this->PixelShaderRHI);
  }
  if (this->GeometryShaderRHI == (FRHIGeometryShader *)0x0) {
    return;
  }
  FRHIResource::AddRef((FRHIResource *)this->GeometryShaderRHI);
  return;
}

// ReleaseResources @ 145a2b270

void __thiscall FBoundShaderStateInput::ReleaseResources(FBoundShaderStateInput *this)

{
  code *pcVar1;
  bool bVar2;
  FRHIAmplificationShader *this_00;
  
  if (this->MeshShaderRHI == (FRHIMeshShader *)0x0) {
    if (this->WorkGraphMeshShaderRHI == (FRHIWorkGraphShader *)0x0) {
      if ((this->VertexDeclarationRHI == (FRHIVertexDeclaration *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("VertexDeclarationRHI",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                             ,0x116b,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      FRHIResource::Release((FRHIResource *)this->VertexDeclarationRHI);
      if ((this->VertexShaderRHI == (FRHIVertexShader *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("VertexShaderRHI",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                             ,0x116e,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      this_00 = (FRHIAmplificationShader *)this->VertexShaderRHI;
    }
    else {
      if ((this->VertexDeclarationRHI != (FRHIVertexDeclaration *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("VertexDeclarationRHI == nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                             ,0x1164,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((this->VertexShaderRHI != (FRHIVertexShader *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("VertexShaderRHI == nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                             ,0x1165,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((this->MeshShaderRHI != (FRHIMeshShader *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("GetMeshShader() == nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                             ,0x1166,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      this_00 = (FRHIAmplificationShader *)this->WorkGraphMeshShaderRHI;
    }
  }
  else {
    if ((this->VertexDeclarationRHI != (FRHIVertexDeclaration *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("VertexDeclarationRHI == nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                           ,0x1158,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((this->VertexShaderRHI != (FRHIVertexShader *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("VertexShaderRHI == nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                           ,0x1159,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((this->WorkGraphMeshShaderRHI != (FRHIWorkGraphShader *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("GetWorkGraphShader() == nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                           ,0x115a,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FRHIResource::Release((FRHIResource *)this->MeshShaderRHI);
    this_00 = this->AmplificationShaderRHI;
    if (this_00 == (FRHIAmplificationShader *)0x0) goto LAB_145a2b427;
  }
  FRHIResource::Release((FRHIResource *)this_00);
LAB_145a2b427:
  if (this->PixelShaderRHI != (FRHIPixelShader *)0x0) {
    FRHIResource::Release((FRHIResource *)this->PixelShaderRHI);
  }
  if (this->GeometryShaderRHI == (FRHIGeometryShader *)0x0) {
    return;
  }
  FRHIResource::Release((FRHIResource *)this->GeometryShaderRHI);
  return;
}

