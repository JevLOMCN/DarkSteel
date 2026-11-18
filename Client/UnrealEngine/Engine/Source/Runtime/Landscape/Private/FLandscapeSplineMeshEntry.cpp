// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 2

// StaticStruct @ 145ef2320

UScriptStruct * __cdecl FLandscapeSplineMeshEntry::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLandscapeSplineMeshEntry.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Landscape();
    Z_Registration_Info_UScriptStruct_FLandscapeSplineMeshEntry.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLandscapeSplineMeshEntry,(UObject *)pUVar1,
                         L"LandscapeSplineMeshEntry");
  }
  return Z_Registration_Info_UScriptStruct_FLandscapeSplineMeshEntry.OuterSingleton;
}

// IsValid @ 145fc5300

bool __thiscall FLandscapeSplineMeshEntry::IsValid(FLandscapeSplineMeshEntry *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  
  if (((this->Mesh).field0_0x0.DebugPtr != (UStaticMesh *)0x0) &&
     ((this->ForwardAxis).Value != (this->UpAxis).Value)) {
    uVar1 = *(undefined8 *)((longlong)&(this->Scale).field0_0x0 + 8);
    uVar2 = *(undefined8 *)&(this->Scale).field0_0x0;
    dVar4 = (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    uVar1 = *(undefined8 *)((longlong)&(this->Scale).field0_0x0 + 0x10);
    dVar3 = (double)CONCAT44((uint)((ulonglong)uVar2 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             (uint)uVar2 & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    if (dVar3 <= dVar4) {
      dVar4 = dVar3;
    }
    dVar3 = (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    if (dVar3 <= dVar4) {
      dVar4 = dVar3;
    }
    if (__real_3f1a36e2e0000000 < dVar4) {
      return true;
    }
  }
  return false;
}

