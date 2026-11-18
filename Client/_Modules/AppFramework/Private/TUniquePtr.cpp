// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 5

// TUniquePtr<FSlateDynamicImageBrush,TDefaultDelete<FSlateDynamicImageBrush>_><FSlateDynamicImageBrush> @ 142f19a60

TUniquePtr<FSlateDynamicImageBrush,TDefaultDelete<FSlateDynamicImageBrush>_> * __thiscall
TUniquePtr<FSlateDynamicImageBrush,TDefaultDelete<FSlateDynamicImageBrush>_>::
TUniquePtr<FSlateDynamicImageBrush,TDefaultDelete<FSlateDynamicImageBrush>_><FSlateDynamicImageBrush>
          (TUniquePtr<FSlateDynamicImageBrush,TDefaultDelete<FSlateDynamicImageBrush>_> *this,
          FSlateDynamicImageBrush *param_1)

{
  this->Ptr = param_1;
  return this;
}

// TUniquePtr<FSlateBrush,TDefaultDelete<FSlateBrush>_><FSlateDynamicImageBrush,TDefaultDelete<FSlateDynamicImageBrush>_> @ 142f19a70

TUniquePtr<FSlateBrush,TDefaultDelete<FSlateBrush>_> * __thiscall
TUniquePtr<FSlateBrush,TDefaultDelete<FSlateBrush>_>::
TUniquePtr<FSlateBrush,TDefaultDelete<FSlateBrush>_><FSlateDynamicImageBrush,TDefaultDelete<FSlateDynamicImageBrush>_>
          (TUniquePtr<FSlateBrush,TDefaultDelete<FSlateBrush>_> *this,
          TUniquePtr<FSlateDynamicImageBrush,TDefaultDelete<FSlateDynamicImageBrush>_> *param_1)

{
  this->Ptr = (FSlateBrush *)param_1->Ptr;
  param_1->Ptr = (FSlateDynamicImageBrush *)0x0;
  return this;
}

// TUniquePtr<FSlateVectorImageBrush,TDefaultDelete<FSlateVectorImageBrush>_><FSlateVectorImageBrush> @ 142f19ac0

TUniquePtr<FSlateVectorImageBrush,TDefaultDelete<FSlateVectorImageBrush>_> * __thiscall
TUniquePtr<FSlateVectorImageBrush,TDefaultDelete<FSlateVectorImageBrush>_>::
TUniquePtr<FSlateVectorImageBrush,TDefaultDelete<FSlateVectorImageBrush>_><FSlateVectorImageBrush>
          (TUniquePtr<FSlateVectorImageBrush,TDefaultDelete<FSlateVectorImageBrush>_> *this,
          FSlateVectorImageBrush *param_1)

{
  this->Ptr = param_1;
  return this;
}

// TUniquePtr<FSlateBrush,TDefaultDelete<FSlateBrush>_><FSlateVectorImageBrush,TDefaultDelete<FSlateVectorImageBrush>_> @ 142f19ad0

TUniquePtr<FSlateBrush,TDefaultDelete<FSlateBrush>_> * __thiscall
TUniquePtr<FSlateBrush,TDefaultDelete<FSlateBrush>_>::
TUniquePtr<FSlateBrush,TDefaultDelete<FSlateBrush>_><FSlateVectorImageBrush,TDefaultDelete<FSlateVectorImageBrush>_>
          (TUniquePtr<FSlateBrush,TDefaultDelete<FSlateBrush>_> *this,
          TUniquePtr<FSlateVectorImageBrush,TDefaultDelete<FSlateVectorImageBrush>_> *param_1)

{
  this->Ptr = (FSlateBrush *)param_1->Ptr;
  param_1->Ptr = (FSlateVectorImageBrush *)0x0;
  return this;
}

// TUniquePtr<FSlateBrush,TDefaultDelete<FSlateBrush>_> @ 142f325c0

TUniquePtr<FSlateBrush,TDefaultDelete<FSlateBrush>_> * __thiscall
TUniquePtr<FSlateBrush,TDefaultDelete<FSlateBrush>_>::
TUniquePtr<FSlateBrush,TDefaultDelete<FSlateBrush>_>
          (TUniquePtr<FSlateBrush,TDefaultDelete<FSlateBrush>_> *this,
          TUniquePtr<FSlateBrush,TDefaultDelete<FSlateBrush>_> *param_1)

{
  this->Ptr = param_1->Ptr;
  param_1->Ptr = (FSlateBrush *)0x0;
  return this;
}

