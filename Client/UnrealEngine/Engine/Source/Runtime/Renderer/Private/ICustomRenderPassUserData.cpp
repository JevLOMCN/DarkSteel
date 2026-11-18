// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// ~ICustomRenderPassUserData @ 145479a00

void __thiscall
ICustomRenderPassUserData::~ICustomRenderPassUserData(ICustomRenderPassUserData *this)

{
  *this = (ICustomRenderPassUserData)&___7ICustomRenderPassUserData__6B_;
  return;
}

// GetTypeName @ 1454aaac0

FName * __thiscall ICustomRenderPassUserData::GetTypeName(ICustomRenderPassUserData *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\CustomRenderPass.h"
             ,0x25,L"Pure virtual not implemented (%s)");
  return &`public:_virtual_class_FName_const&___ptr64___cdecl_ICustomRenderPassUserData::GetTypeName(void)const___ptr64'
          ::__l2::Name;
}

