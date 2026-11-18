// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimationCore
// Functions: 2

// StaticStruct @ 142379510

UScriptStruct * __cdecl FFilterOptionPerAxis::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FFilterOptionPerAxis.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_AnimationCore();
    Z_Registration_Info_UScriptStruct_FFilterOptionPerAxis.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFilterOptionPerAxis,(UObject *)pUVar1,
                         L"FilterOptionPerAxis");
  }
  return Z_Registration_Info_UScriptStruct_FFilterOptionPerAxis.OuterSingleton;
}

// FilterQuat @ 142382a40

void __thiscall
FFilterOptionPerAxis::FilterQuat
          (FFilterOptionPerAxis *this,TQuat<double> *param_1,TQuat<double> *param_2)

{
  double dVar1;
  TRotator<double> *pTVar2;
  TQuat<double> *pTVar3;
  TRotator<double> local_48;
  TQuat<double> local_28;
  
  UE::Math::TQuat<double>::Rotator(param_1,&local_48);
  pTVar2 = UE::Math::TQuat<double>::Rotator(param_2,(TRotator<double> *)&local_28);
  if (this->bX == false) {
    local_48.Roll = pTVar2->Roll;
  }
  if (this->bY == false) {
    local_48.Pitch = pTVar2->Pitch;
  }
  if (this->bZ == false) {
    local_48.Yaw = pTVar2->Yaw;
  }
  pTVar3 = UE::Math::TRotator<double>::Quaternion(&local_48,&local_28);
  dVar1 = pTVar3->Y;
  param_1->X = pTVar3->X;
  param_1->Y = dVar1;
  dVar1 = pTVar3->W;
  param_1->Z = pTVar3->Z;
  param_1->W = dVar1;
  return;
}

