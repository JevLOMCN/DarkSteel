// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 2

// Convert @ 14e5ec8b0

float __thiscall
FGLTFUVOverlapChecker::Convert
          (FGLTFUVOverlapChecker *this,FMeshDescription *param_1,FMeshAttributesArray<int> *param_2,
          int param_3)

{
  if (*(void **)param_2 != (void *)0x0) {
    FMemory::Free(*(void **)param_2);
  }
  return __real_bf800000;
}

// GetMaterial @ 14e5f7480

UMaterialInterface * __cdecl FGLTFUVOverlapChecker::GetMaterial(void)

{
  code *pcVar1;
  bool bVar2;
  UMaterialInterface *pUVar3;
  UClass *pUVar4;
  undefined4 uStack_2c;
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pUVar4 = Z_Construct_UClass_UMaterialInterface_NoRegister();
    local_18._12_4_ = uStack_2c;
    local_18.Size = 0x3d;
    local_28.DataPtr = (wchar_t *)0x0;
    local_28.Size = 0;
    local_28._12_4_ = 0;
    local_18.DataPtr = L"/GLTFExporter/Materials/M_UVOverlapChecker.M_UVOverlapChecker";
    Material = (UMaterialInterface *)
               StaticLoadObject(pUVar4,(UObject *)0x0,&local_18,&local_28,0,(UPackageMap *)0x0,true,
                                (FLinkerInstancingContext *)0x0);
    _Init_thread_footer(&::_TSS0);
  }
  if ((Material == (UMaterialInterface *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Material",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Enterprise\\GLTFExporter\\Source\\GLTFExporter\\Private\\Converters\\GLTFUVOverlapChecker.cpp"
                         ,0x5f,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pUVar3 = (UMaterialInterface *)(*pcVar1)();
    return pUVar3;
  }
  return Material;
}

