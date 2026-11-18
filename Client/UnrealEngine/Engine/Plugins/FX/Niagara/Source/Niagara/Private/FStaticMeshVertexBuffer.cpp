// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// GetVertexUV @ 14923c0c0

TVector2<float> __thiscall
FStaticMeshVertexBuffer::GetVertexUV(FStaticMeshVertexBuffer *this,uint param_1,uint param_2)

{
  uchar *puVar1;
  ushort *puVar2;
  uchar *puVar3;
  code *pcVar4;
  bool bVar5;
  longlong lVar6;
  TVector2<float> TVar7;
  undefined4 in_register_00000014;
  TVector2<float>_u_0 TVar8;
  uint in_R9D;
  float fVar9;
  float fVar10;
  
  TVar8._s_0.Y = (float)in_register_00000014;
  TVar8._s_0.X = (float)param_1;
  puVar3 = this->TexcoordDataPtr;
  lVar6 = (ulonglong)this->NumTexCoords * (ulonglong)param_2 + (ulonglong)in_R9D;
  if (this->bUseFullPrecisionUVs == false) {
    puVar2 = (ushort *)(puVar3 + lVar6 * 4);
    lVar6 = (**(code **)((longlong)*this->TexcoordData + 0x50))();
    if (puVar3 + lVar6 < puVar2 + 2) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                         ,0x17b,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        TVar7.field0_0x0 = (TVector2<float>_u_0)(*pcVar4)();
        return (TVector2<float>)TVar7.field0_0x0;
      }
    }
    if (puVar2 < this->TexcoordDataPtr) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                         ,0x17c,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        TVar7.field0_0x0 = (TVector2<float>_u_0)(*pcVar4)();
        return (TVector2<float>)TVar7.field0_0x0;
      }
    }
    fVar9 = FGenericPlatformMath::LoadHalf(puVar2 + 1);
    fVar10 = FGenericPlatformMath::LoadHalf(puVar2);
    *(float *)((longlong)TVar8 + 4) = fVar9;
    *(float *)TVar8 = fVar10;
  }
  else {
    puVar1 = puVar3 + lVar6 * 8;
    lVar6 = (**(code **)((longlong)*this->TexcoordData + 0x50))();
    if (puVar3 + lVar6 < puVar1 + 8) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                         ,0x17b,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        TVar7.field0_0x0 = (TVector2<float>_u_0)(*pcVar4)();
        return (TVector2<float>)TVar7.field0_0x0;
      }
    }
    if (puVar1 < this->TexcoordDataPtr) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                         ,0x17c,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        TVar7.field0_0x0 = (TVector2<float>_u_0)(*pcVar4)();
        return (TVector2<float>)TVar7.field0_0x0;
      }
    }
    *(undefined8 *)TVar8 = *(undefined8 *)puVar1;
  }
  return (TVector2<float>)TVar8;
}

