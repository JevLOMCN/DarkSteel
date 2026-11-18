// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// ~ICustomRenderPass @ 1454799e0

void __thiscall ICustomRenderPass::~ICustomRenderPass(ICustomRenderPass *this)

{
  *this = (ICustomRenderPass)&___7ICustomRenderPass__6B_;
  return;
}

// GetTypeName @ 1454aaa80

FName * __thiscall ICustomRenderPass::GetTypeName(ICustomRenderPass *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\CustomRenderPass.h"
             ,0x15,L"Pure virtual not implemented (%s)");
  return &`public:_virtual_class_FName_const&___ptr64___cdecl_ICustomRenderPass::GetTypeName(void)const___ptr64'
          ::__l2::Name;
}

